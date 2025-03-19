/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{
  class CreateContactFlowResult
  {
  public:
    AWS_CONNECT_API CreateContactFlowResult() = default;
    AWS_CONNECT_API CreateContactFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateContactFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the flow.</p>
     */
    inline const Aws::String& GetContactFlowId() const { return m_contactFlowId; }
    template<typename ContactFlowIdT = Aws::String>
    void SetContactFlowId(ContactFlowIdT&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::forward<ContactFlowIdT>(value); }
    template<typename ContactFlowIdT = Aws::String>
    CreateContactFlowResult& WithContactFlowId(ContactFlowIdT&& value) { SetContactFlowId(std::forward<ContactFlowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline const Aws::String& GetContactFlowArn() const { return m_contactFlowArn; }
    template<typename ContactFlowArnT = Aws::String>
    void SetContactFlowArn(ContactFlowArnT&& value) { m_contactFlowArnHasBeenSet = true; m_contactFlowArn = std::forward<ContactFlowArnT>(value); }
    template<typename ContactFlowArnT = Aws::String>
    CreateContactFlowResult& WithContactFlowArn(ContactFlowArnT&& value) { SetContactFlowArn(std::forward<ContactFlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the checksum value of the latest published flow content.</p>
     */
    inline const Aws::String& GetFlowContentSha256() const { return m_flowContentSha256; }
    template<typename FlowContentSha256T = Aws::String>
    void SetFlowContentSha256(FlowContentSha256T&& value) { m_flowContentSha256HasBeenSet = true; m_flowContentSha256 = std::forward<FlowContentSha256T>(value); }
    template<typename FlowContentSha256T = Aws::String>
    CreateContactFlowResult& WithFlowContentSha256(FlowContentSha256T&& value) { SetFlowContentSha256(std::forward<FlowContentSha256T>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateContactFlowResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet = false;

    Aws::String m_contactFlowArn;
    bool m_contactFlowArnHasBeenSet = false;

    Aws::String m_flowContentSha256;
    bool m_flowContentSha256HasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
