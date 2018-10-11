/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAttachmentsResult
  {
  public:
    DescribeDirectConnectGatewayAttachmentsResult();
    DescribeDirectConnectGatewayAttachmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDirectConnectGatewayAttachmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attachments.</p>
     */
    inline const Aws::Vector<DirectConnectGatewayAttachment>& GetDirectConnectGatewayAttachments() const{ return m_directConnectGatewayAttachments; }

    /**
     * <p>The attachments.</p>
     */
    inline void SetDirectConnectGatewayAttachments(const Aws::Vector<DirectConnectGatewayAttachment>& value) { m_directConnectGatewayAttachments = value; }

    /**
     * <p>The attachments.</p>
     */
    inline void SetDirectConnectGatewayAttachments(Aws::Vector<DirectConnectGatewayAttachment>&& value) { m_directConnectGatewayAttachments = std::move(value); }

    /**
     * <p>The attachments.</p>
     */
    inline DescribeDirectConnectGatewayAttachmentsResult& WithDirectConnectGatewayAttachments(const Aws::Vector<DirectConnectGatewayAttachment>& value) { SetDirectConnectGatewayAttachments(value); return *this;}

    /**
     * <p>The attachments.</p>
     */
    inline DescribeDirectConnectGatewayAttachmentsResult& WithDirectConnectGatewayAttachments(Aws::Vector<DirectConnectGatewayAttachment>&& value) { SetDirectConnectGatewayAttachments(std::move(value)); return *this;}

    /**
     * <p>The attachments.</p>
     */
    inline DescribeDirectConnectGatewayAttachmentsResult& AddDirectConnectGatewayAttachments(const DirectConnectGatewayAttachment& value) { m_directConnectGatewayAttachments.push_back(value); return *this; }

    /**
     * <p>The attachments.</p>
     */
    inline DescribeDirectConnectGatewayAttachmentsResult& AddDirectConnectGatewayAttachments(DirectConnectGatewayAttachment&& value) { m_directConnectGatewayAttachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline DescribeDirectConnectGatewayAttachmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline DescribeDirectConnectGatewayAttachmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline DescribeDirectConnectGatewayAttachmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DirectConnectGatewayAttachment> m_directConnectGatewayAttachments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
