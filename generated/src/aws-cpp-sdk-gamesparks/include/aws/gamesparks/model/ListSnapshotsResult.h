/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamesparks/model/SnapshotSummary.h>
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
namespace GameSparks
{
namespace Model
{
  class ListSnapshotsResult
  {
  public:
    AWS_GAMESPARKS_API ListSnapshotsResult();
    AWS_GAMESPARKS_API ListSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API ListSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListSnapshotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListSnapshotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListSnapshotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> A list of snapshot summaries. You can use the returned snapshot IDs in the
     * <code>UpdateSnapshot</code> and <code>GetSnapshot</code> operations. </p>
     */
    inline const Aws::Vector<SnapshotSummary>& GetSnapshots() const{ return m_snapshots; }

    /**
     * <p> A list of snapshot summaries. You can use the returned snapshot IDs in the
     * <code>UpdateSnapshot</code> and <code>GetSnapshot</code> operations. </p>
     */
    inline void SetSnapshots(const Aws::Vector<SnapshotSummary>& value) { m_snapshots = value; }

    /**
     * <p> A list of snapshot summaries. You can use the returned snapshot IDs in the
     * <code>UpdateSnapshot</code> and <code>GetSnapshot</code> operations. </p>
     */
    inline void SetSnapshots(Aws::Vector<SnapshotSummary>&& value) { m_snapshots = std::move(value); }

    /**
     * <p> A list of snapshot summaries. You can use the returned snapshot IDs in the
     * <code>UpdateSnapshot</code> and <code>GetSnapshot</code> operations. </p>
     */
    inline ListSnapshotsResult& WithSnapshots(const Aws::Vector<SnapshotSummary>& value) { SetSnapshots(value); return *this;}

    /**
     * <p> A list of snapshot summaries. You can use the returned snapshot IDs in the
     * <code>UpdateSnapshot</code> and <code>GetSnapshot</code> operations. </p>
     */
    inline ListSnapshotsResult& WithSnapshots(Aws::Vector<SnapshotSummary>&& value) { SetSnapshots(std::move(value)); return *this;}

    /**
     * <p> A list of snapshot summaries. You can use the returned snapshot IDs in the
     * <code>UpdateSnapshot</code> and <code>GetSnapshot</code> operations. </p>
     */
    inline ListSnapshotsResult& AddSnapshots(const SnapshotSummary& value) { m_snapshots.push_back(value); return *this; }

    /**
     * <p> A list of snapshot summaries. You can use the returned snapshot IDs in the
     * <code>UpdateSnapshot</code> and <code>GetSnapshot</code> operations. </p>
     */
    inline ListSnapshotsResult& AddSnapshots(SnapshotSummary&& value) { m_snapshots.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SnapshotSummary> m_snapshots;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
