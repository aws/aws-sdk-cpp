/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/Attachment.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class ListCrossAccountAttachmentsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCrossAccountAttachmentsResult();
    AWS_GLOBALACCELERATOR_API ListCrossAccountAttachmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListCrossAccountAttachmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the cross-account attachments.</p>
     */
    inline const Aws::Vector<Attachment>& GetCrossAccountAttachments() const{ return m_crossAccountAttachments; }

    /**
     * <p>Information about the cross-account attachments.</p>
     */
    inline void SetCrossAccountAttachments(const Aws::Vector<Attachment>& value) { m_crossAccountAttachments = value; }

    /**
     * <p>Information about the cross-account attachments.</p>
     */
    inline void SetCrossAccountAttachments(Aws::Vector<Attachment>&& value) { m_crossAccountAttachments = std::move(value); }

    /**
     * <p>Information about the cross-account attachments.</p>
     */
    inline ListCrossAccountAttachmentsResult& WithCrossAccountAttachments(const Aws::Vector<Attachment>& value) { SetCrossAccountAttachments(value); return *this;}

    /**
     * <p>Information about the cross-account attachments.</p>
     */
    inline ListCrossAccountAttachmentsResult& WithCrossAccountAttachments(Aws::Vector<Attachment>&& value) { SetCrossAccountAttachments(std::move(value)); return *this;}

    /**
     * <p>Information about the cross-account attachments.</p>
     */
    inline ListCrossAccountAttachmentsResult& AddCrossAccountAttachments(const Attachment& value) { m_crossAccountAttachments.push_back(value); return *this; }

    /**
     * <p>Information about the cross-account attachments.</p>
     */
    inline ListCrossAccountAttachmentsResult& AddCrossAccountAttachments(Attachment&& value) { m_crossAccountAttachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCrossAccountAttachmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCrossAccountAttachmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCrossAccountAttachmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCrossAccountAttachmentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCrossAccountAttachmentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCrossAccountAttachmentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Attachment> m_crossAccountAttachments;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
