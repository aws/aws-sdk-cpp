/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/GatewayResponse.h>
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
   * <p>The collection of the GatewayResponse instances of a RestApi as a
   * <code>responseType</code>-to-GatewayResponse object map of key-value pairs. As
   * such, pagination is not supported for querying this collection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GatewayResponses">AWS
   * API Reference</a></p>
   */
  class GetGatewayResponsesResult
  {
  public:
    AWS_APIGATEWAY_API GetGatewayResponsesResult();
    AWS_APIGATEWAY_API GetGatewayResponsesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetGatewayResponsesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetPosition() const{ return m_position; }
    inline void SetPosition(const Aws::String& value) { m_position = value; }
    inline void SetPosition(Aws::String&& value) { m_position = std::move(value); }
    inline void SetPosition(const char* value) { m_position.assign(value); }
    inline GetGatewayResponsesResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}
    inline GetGatewayResponsesResult& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}
    inline GetGatewayResponsesResult& WithPosition(const char* value) { SetPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the entire collection, because of no pagination support.</p>
     */
    inline const Aws::Vector<GatewayResponse>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<GatewayResponse>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<GatewayResponse>&& value) { m_items = std::move(value); }
    inline GetGatewayResponsesResult& WithItems(const Aws::Vector<GatewayResponse>& value) { SetItems(value); return *this;}
    inline GetGatewayResponsesResult& WithItems(Aws::Vector<GatewayResponse>&& value) { SetItems(std::move(value)); return *this;}
    inline GetGatewayResponsesResult& AddItems(const GatewayResponse& value) { m_items.push_back(value); return *this; }
    inline GetGatewayResponsesResult& AddItems(GatewayResponse&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetGatewayResponsesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetGatewayResponsesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetGatewayResponsesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_position;

    Aws::Vector<GatewayResponse> m_items;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
