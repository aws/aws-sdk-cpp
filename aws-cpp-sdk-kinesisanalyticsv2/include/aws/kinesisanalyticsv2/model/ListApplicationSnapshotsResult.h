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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/SnapshotDetails.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{
  class AWS_KINESISANALYTICSV2_API ListApplicationSnapshotsResult
  {
  public:
    ListApplicationSnapshotsResult();
    ListApplicationSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListApplicationSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of objects containing information about the application
     * snapshots.</p>
     */
    inline const Aws::Vector<SnapshotDetails>& GetSnapshotSummaries() const{ return m_snapshotSummaries; }

    /**
     * <p>A collection of objects containing information about the application
     * snapshots.</p>
     */
    inline void SetSnapshotSummaries(const Aws::Vector<SnapshotDetails>& value) { m_snapshotSummaries = value; }

    /**
     * <p>A collection of objects containing information about the application
     * snapshots.</p>
     */
    inline void SetSnapshotSummaries(Aws::Vector<SnapshotDetails>&& value) { m_snapshotSummaries = std::move(value); }

    /**
     * <p>A collection of objects containing information about the application
     * snapshots.</p>
     */
    inline ListApplicationSnapshotsResult& WithSnapshotSummaries(const Aws::Vector<SnapshotDetails>& value) { SetSnapshotSummaries(value); return *this;}

    /**
     * <p>A collection of objects containing information about the application
     * snapshots.</p>
     */
    inline ListApplicationSnapshotsResult& WithSnapshotSummaries(Aws::Vector<SnapshotDetails>&& value) { SetSnapshotSummaries(std::move(value)); return *this;}

    /**
     * <p>A collection of objects containing information about the application
     * snapshots.</p>
     */
    inline ListApplicationSnapshotsResult& AddSnapshotSummaries(const SnapshotDetails& value) { m_snapshotSummaries.push_back(value); return *this; }

    /**
     * <p>A collection of objects containing information about the application
     * snapshots.</p>
     */
    inline ListApplicationSnapshotsResult& AddSnapshotSummaries(SnapshotDetails&& value) { m_snapshotSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * additional results.</p>
     */
    inline ListApplicationSnapshotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * additional results.</p>
     */
    inline ListApplicationSnapshotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * additional results.</p>
     */
    inline ListApplicationSnapshotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SnapshotDetails> m_snapshotSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
