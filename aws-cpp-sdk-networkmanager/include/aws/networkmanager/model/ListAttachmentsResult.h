/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/Attachment.h>
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
namespace NetworkManager
{
namespace Model
{
  class ListAttachmentsResult
  {
  public:
    AWS_NETWORKMANAGER_API ListAttachmentsResult();
    AWS_NETWORKMANAGER_API ListAttachmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API ListAttachmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the list of attachments.</p>
     */
    inline const Aws::Vector<Attachment>& GetAttachments() const{ return m_attachments; }

    /**
     * <p>Describes the list of attachments.</p>
     */
    inline void SetAttachments(const Aws::Vector<Attachment>& value) { m_attachments = value; }

    /**
     * <p>Describes the list of attachments.</p>
     */
    inline void SetAttachments(Aws::Vector<Attachment>&& value) { m_attachments = std::move(value); }

    /**
     * <p>Describes the list of attachments.</p>
     */
    inline ListAttachmentsResult& WithAttachments(const Aws::Vector<Attachment>& value) { SetAttachments(value); return *this;}

    /**
     * <p>Describes the list of attachments.</p>
     */
    inline ListAttachmentsResult& WithAttachments(Aws::Vector<Attachment>&& value) { SetAttachments(std::move(value)); return *this;}

    /**
     * <p>Describes the list of attachments.</p>
     */
    inline ListAttachmentsResult& AddAttachments(const Attachment& value) { m_attachments.push_back(value); return *this; }

    /**
     * <p>Describes the list of attachments.</p>
     */
    inline ListAttachmentsResult& AddAttachments(Attachment&& value) { m_attachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListAttachmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListAttachmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListAttachmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Attachment> m_attachments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
