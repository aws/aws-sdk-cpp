/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/Stage.h>
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
   * <p>A list of Stage resources that are associated with the ApiKey
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Stages">AWS
   * API Reference</a></p>
   */
  class GetStagesResult
  {
  public:
    AWS_APIGATEWAY_API GetStagesResult();
    AWS_APIGATEWAY_API GetStagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetStagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline const Aws::Vector<Stage>& GetItem() const{ return m_item; }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline void SetItem(const Aws::Vector<Stage>& value) { m_item = value; }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline void SetItem(Aws::Vector<Stage>&& value) { m_item = std::move(value); }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetStagesResult& WithItem(const Aws::Vector<Stage>& value) { SetItem(value); return *this;}

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetStagesResult& WithItem(Aws::Vector<Stage>&& value) { SetItem(std::move(value)); return *this;}

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetStagesResult& AddItem(const Stage& value) { m_item.push_back(value); return *this; }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetStagesResult& AddItem(Stage&& value) { m_item.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetStagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetStagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetStagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Stage> m_item;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
