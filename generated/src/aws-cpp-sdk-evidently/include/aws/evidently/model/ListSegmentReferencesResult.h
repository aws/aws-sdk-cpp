/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/RefResource.h>
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
namespace CloudWatchEvidently
{
namespace Model
{
  class ListSegmentReferencesResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ListSegmentReferencesResult();
    AWS_CLOUDWATCHEVIDENTLY_API ListSegmentReferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API ListSegmentReferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use in a subsequent <code>ListSegmentReferences</code> operation
     * to return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use in a subsequent <code>ListSegmentReferences</code> operation
     * to return the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use in a subsequent <code>ListSegmentReferences</code> operation
     * to return the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use in a subsequent <code>ListSegmentReferences</code> operation
     * to return the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use in a subsequent <code>ListSegmentReferences</code> operation
     * to return the next set of results.</p>
     */
    inline ListSegmentReferencesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use in a subsequent <code>ListSegmentReferences</code> operation
     * to return the next set of results.</p>
     */
    inline ListSegmentReferencesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use in a subsequent <code>ListSegmentReferences</code> operation
     * to return the next set of results.</p>
     */
    inline ListSegmentReferencesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of structures, where each structure contains information about one
     * experiment or launch that uses this segment. </p>
     */
    inline const Aws::Vector<RefResource>& GetReferencedBy() const{ return m_referencedBy; }

    /**
     * <p>An array of structures, where each structure contains information about one
     * experiment or launch that uses this segment. </p>
     */
    inline void SetReferencedBy(const Aws::Vector<RefResource>& value) { m_referencedBy = value; }

    /**
     * <p>An array of structures, where each structure contains information about one
     * experiment or launch that uses this segment. </p>
     */
    inline void SetReferencedBy(Aws::Vector<RefResource>&& value) { m_referencedBy = std::move(value); }

    /**
     * <p>An array of structures, where each structure contains information about one
     * experiment or launch that uses this segment. </p>
     */
    inline ListSegmentReferencesResult& WithReferencedBy(const Aws::Vector<RefResource>& value) { SetReferencedBy(value); return *this;}

    /**
     * <p>An array of structures, where each structure contains information about one
     * experiment or launch that uses this segment. </p>
     */
    inline ListSegmentReferencesResult& WithReferencedBy(Aws::Vector<RefResource>&& value) { SetReferencedBy(std::move(value)); return *this;}

    /**
     * <p>An array of structures, where each structure contains information about one
     * experiment or launch that uses this segment. </p>
     */
    inline ListSegmentReferencesResult& AddReferencedBy(const RefResource& value) { m_referencedBy.push_back(value); return *this; }

    /**
     * <p>An array of structures, where each structure contains information about one
     * experiment or launch that uses this segment. </p>
     */
    inline ListSegmentReferencesResult& AddReferencedBy(RefResource&& value) { m_referencedBy.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RefResource> m_referencedBy;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
