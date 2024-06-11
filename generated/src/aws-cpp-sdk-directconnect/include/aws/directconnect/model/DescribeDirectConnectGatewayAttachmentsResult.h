﻿/**
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
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAttachmentsResult();
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAttachmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAttachmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The attachments.</p>
     */
    inline const Aws::Vector<DirectConnectGatewayAttachment>& GetDirectConnectGatewayAttachments() const{ return m_directConnectGatewayAttachments; }
    inline void SetDirectConnectGatewayAttachments(const Aws::Vector<DirectConnectGatewayAttachment>& value) { m_directConnectGatewayAttachments = value; }
    inline void SetDirectConnectGatewayAttachments(Aws::Vector<DirectConnectGatewayAttachment>&& value) { m_directConnectGatewayAttachments = std::move(value); }
    inline DescribeDirectConnectGatewayAttachmentsResult& WithDirectConnectGatewayAttachments(const Aws::Vector<DirectConnectGatewayAttachment>& value) { SetDirectConnectGatewayAttachments(value); return *this;}
    inline DescribeDirectConnectGatewayAttachmentsResult& WithDirectConnectGatewayAttachments(Aws::Vector<DirectConnectGatewayAttachment>&& value) { SetDirectConnectGatewayAttachments(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewayAttachmentsResult& AddDirectConnectGatewayAttachments(const DirectConnectGatewayAttachment& value) { m_directConnectGatewayAttachments.push_back(value); return *this; }
    inline DescribeDirectConnectGatewayAttachmentsResult& AddDirectConnectGatewayAttachments(DirectConnectGatewayAttachment&& value) { m_directConnectGatewayAttachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeDirectConnectGatewayAttachmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeDirectConnectGatewayAttachmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewayAttachmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDirectConnectGatewayAttachmentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDirectConnectGatewayAttachmentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewayAttachmentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DirectConnectGatewayAttachment> m_directConnectGatewayAttachments;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
