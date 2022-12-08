/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/IndexAttachment.h>
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
namespace CloudDirectory
{
namespace Model
{
  class ListAttachedIndicesResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListAttachedIndicesResult();
    AWS_CLOUDDIRECTORY_API ListAttachedIndicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListAttachedIndicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline const Aws::Vector<IndexAttachment>& GetIndexAttachments() const{ return m_indexAttachments; }

    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline void SetIndexAttachments(const Aws::Vector<IndexAttachment>& value) { m_indexAttachments = value; }

    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline void SetIndexAttachments(Aws::Vector<IndexAttachment>&& value) { m_indexAttachments = std::move(value); }

    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline ListAttachedIndicesResult& WithIndexAttachments(const Aws::Vector<IndexAttachment>& value) { SetIndexAttachments(value); return *this;}

    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline ListAttachedIndicesResult& WithIndexAttachments(Aws::Vector<IndexAttachment>&& value) { SetIndexAttachments(std::move(value)); return *this;}

    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline ListAttachedIndicesResult& AddIndexAttachments(const IndexAttachment& value) { m_indexAttachments.push_back(value); return *this; }

    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline ListAttachedIndicesResult& AddIndexAttachments(IndexAttachment&& value) { m_indexAttachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListAttachedIndicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListAttachedIndicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListAttachedIndicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<IndexAttachment> m_indexAttachments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
