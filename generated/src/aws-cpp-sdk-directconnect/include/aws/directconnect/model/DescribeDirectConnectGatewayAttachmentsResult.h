/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/DirectConnectGatewayAttachment.h>
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
namespace DirectConnect
{
namespace Model
{
  class DescribeDirectConnectGatewayAttachmentsResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAttachmentsResult() = default;
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAttachmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAttachmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The attachments.</p>
     */
    inline const Aws::Vector<DirectConnectGatewayAttachment>& GetDirectConnectGatewayAttachments() const { return m_directConnectGatewayAttachments; }
    template<typename DirectConnectGatewayAttachmentsT = Aws::Vector<DirectConnectGatewayAttachment>>
    void SetDirectConnectGatewayAttachments(DirectConnectGatewayAttachmentsT&& value) { m_directConnectGatewayAttachmentsHasBeenSet = true; m_directConnectGatewayAttachments = std::forward<DirectConnectGatewayAttachmentsT>(value); }
    template<typename DirectConnectGatewayAttachmentsT = Aws::Vector<DirectConnectGatewayAttachment>>
    DescribeDirectConnectGatewayAttachmentsResult& WithDirectConnectGatewayAttachments(DirectConnectGatewayAttachmentsT&& value) { SetDirectConnectGatewayAttachments(std::forward<DirectConnectGatewayAttachmentsT>(value)); return *this;}
    template<typename DirectConnectGatewayAttachmentsT = DirectConnectGatewayAttachment>
    DescribeDirectConnectGatewayAttachmentsResult& AddDirectConnectGatewayAttachments(DirectConnectGatewayAttachmentsT&& value) { m_directConnectGatewayAttachmentsHasBeenSet = true; m_directConnectGatewayAttachments.emplace_back(std::forward<DirectConnectGatewayAttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDirectConnectGatewayAttachmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDirectConnectGatewayAttachmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DirectConnectGatewayAttachment> m_directConnectGatewayAttachments;
    bool m_directConnectGatewayAttachmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
