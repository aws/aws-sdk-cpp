/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactFlow.h>
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
  class DescribeContactFlowResult
  {
  public:
    AWS_CONNECT_API DescribeContactFlowResult() = default;
    AWS_CONNECT_API DescribeContactFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeContactFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the flow.</p>
     */
    inline const ContactFlow& GetContactFlow() const { return m_contactFlow; }
    template<typename ContactFlowT = ContactFlow>
    void SetContactFlow(ContactFlowT&& value) { m_contactFlowHasBeenSet = true; m_contactFlow = std::forward<ContactFlowT>(value); }
    template<typename ContactFlowT = ContactFlow>
    DescribeContactFlowResult& WithContactFlow(ContactFlowT&& value) { SetContactFlow(std::forward<ContactFlowT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeContactFlowResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContactFlow m_contactFlow;
    bool m_contactFlowHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
