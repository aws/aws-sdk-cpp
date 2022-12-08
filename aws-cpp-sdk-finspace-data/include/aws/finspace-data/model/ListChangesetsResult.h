/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/ChangesetSummary.h>
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
namespace FinSpaceData
{
namespace Model
{
  /**
   * Response to ListChangesetsResponse. This returns a list of dataset changesets
   * that match the query criteria.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ListChangesetsResponse">AWS
   * API Reference</a></p>
   */
  class ListChangesetsResult
  {
  public:
    AWS_FINSPACEDATA_API ListChangesetsResult();
    AWS_FINSPACEDATA_API ListChangesetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API ListChangesetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of Changesets found.</p>
     */
    inline const Aws::Vector<ChangesetSummary>& GetChangesets() const{ return m_changesets; }

    /**
     * <p>List of Changesets found.</p>
     */
    inline void SetChangesets(const Aws::Vector<ChangesetSummary>& value) { m_changesets = value; }

    /**
     * <p>List of Changesets found.</p>
     */
    inline void SetChangesets(Aws::Vector<ChangesetSummary>&& value) { m_changesets = std::move(value); }

    /**
     * <p>List of Changesets found.</p>
     */
    inline ListChangesetsResult& WithChangesets(const Aws::Vector<ChangesetSummary>& value) { SetChangesets(value); return *this;}

    /**
     * <p>List of Changesets found.</p>
     */
    inline ListChangesetsResult& WithChangesets(Aws::Vector<ChangesetSummary>&& value) { SetChangesets(std::move(value)); return *this;}

    /**
     * <p>List of Changesets found.</p>
     */
    inline ListChangesetsResult& AddChangesets(const ChangesetSummary& value) { m_changesets.push_back(value); return *this; }

    /**
     * <p>List of Changesets found.</p>
     */
    inline ListChangesetsResult& AddChangesets(ChangesetSummary&& value) { m_changesets.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListChangesetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListChangesetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListChangesetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ChangesetSummary> m_changesets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
