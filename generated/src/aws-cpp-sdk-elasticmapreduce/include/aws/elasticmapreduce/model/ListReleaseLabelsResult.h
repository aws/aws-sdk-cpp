/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EMR
{
namespace Model
{
  class ListReleaseLabelsResult
  {
  public:
    AWS_EMR_API ListReleaseLabelsResult();
    AWS_EMR_API ListReleaseLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListReleaseLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The returned release labels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReleaseLabels() const{ return m_releaseLabels; }

    /**
     * <p>The returned release labels.</p>
     */
    inline void SetReleaseLabels(const Aws::Vector<Aws::String>& value) { m_releaseLabels = value; }

    /**
     * <p>The returned release labels.</p>
     */
    inline void SetReleaseLabels(Aws::Vector<Aws::String>&& value) { m_releaseLabels = std::move(value); }

    /**
     * <p>The returned release labels.</p>
     */
    inline ListReleaseLabelsResult& WithReleaseLabels(const Aws::Vector<Aws::String>& value) { SetReleaseLabels(value); return *this;}

    /**
     * <p>The returned release labels.</p>
     */
    inline ListReleaseLabelsResult& WithReleaseLabels(Aws::Vector<Aws::String>&& value) { SetReleaseLabels(std::move(value)); return *this;}

    /**
     * <p>The returned release labels.</p>
     */
    inline ListReleaseLabelsResult& AddReleaseLabels(const Aws::String& value) { m_releaseLabels.push_back(value); return *this; }

    /**
     * <p>The returned release labels.</p>
     */
    inline ListReleaseLabelsResult& AddReleaseLabels(Aws::String&& value) { m_releaseLabels.push_back(std::move(value)); return *this; }

    /**
     * <p>The returned release labels.</p>
     */
    inline ListReleaseLabelsResult& AddReleaseLabels(const char* value) { m_releaseLabels.push_back(value); return *this; }


    /**
     * <p>Used to paginate the next page of results if specified in the next
     * <code>ListReleaseLabels</code> request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Used to paginate the next page of results if specified in the next
     * <code>ListReleaseLabels</code> request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Used to paginate the next page of results if specified in the next
     * <code>ListReleaseLabels</code> request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Used to paginate the next page of results if specified in the next
     * <code>ListReleaseLabels</code> request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Used to paginate the next page of results if specified in the next
     * <code>ListReleaseLabels</code> request.</p>
     */
    inline ListReleaseLabelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Used to paginate the next page of results if specified in the next
     * <code>ListReleaseLabels</code> request.</p>
     */
    inline ListReleaseLabelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Used to paginate the next page of results if specified in the next
     * <code>ListReleaseLabels</code> request.</p>
     */
    inline ListReleaseLabelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_releaseLabels;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
