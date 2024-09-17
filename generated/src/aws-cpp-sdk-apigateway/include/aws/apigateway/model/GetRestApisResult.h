/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/RestApi.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Contains references to your APIs and links that guide you in how to interact
   * with your collection. A collection offers a paginated view of your
   * APIs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/RestApis">AWS
   * API Reference</a></p>
   */
  class GetRestApisResult
  {
  public:
    AWS_APIGATEWAY_API GetRestApisResult();
    AWS_APIGATEWAY_API GetRestApisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetRestApisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetPosition() const{ return m_position; }
    inline void SetPosition(const Aws::String& value) { m_position = value; }
    inline void SetPosition(Aws::String&& value) { m_position = std::move(value); }
    inline void SetPosition(const char* value) { m_position.assign(value); }
    inline GetRestApisResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}
    inline GetRestApisResult& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}
    inline GetRestApisResult& WithPosition(const char* value) { SetPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline const Aws::Vector<RestApi>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<RestApi>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<RestApi>&& value) { m_items = std::move(value); }
    inline GetRestApisResult& WithItems(const Aws::Vector<RestApi>& value) { SetItems(value); return *this;}
    inline GetRestApisResult& WithItems(Aws::Vector<RestApi>&& value) { SetItems(std::move(value)); return *this;}
    inline GetRestApisResult& AddItems(const RestApi& value) { m_items.push_back(value); return *this; }
    inline GetRestApisResult& AddItems(RestApi&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRestApisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRestApisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRestApisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_position;

    Aws::Vector<RestApi> m_items;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
