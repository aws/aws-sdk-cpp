/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/WorkUnitRange.h>
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
namespace LakeFormation
{
namespace Model
{
  /**
   * <p>A structure for the output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetWorkUnitsResponse">AWS
   * API Reference</a></p>
   */
  class GetWorkUnitsResult
  {
  public:
    AWS_LAKEFORMATION_API GetWorkUnitsResult();
    AWS_LAKEFORMATION_API GetWorkUnitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetWorkUnitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline GetWorkUnitsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline GetWorkUnitsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline GetWorkUnitsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryId = value; }

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryId = std::move(value); }

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline void SetQueryId(const char* value) { m_queryId.assign(value); }

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline GetWorkUnitsResult& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline GetWorkUnitsResult& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline GetWorkUnitsResult& WithQueryId(const char* value) { SetQueryId(value); return *this;}


    /**
     * <p>A <code>WorkUnitRangeList</code> object that specifies the valid range of
     * work unit IDs for querying the execution service.</p>
     */
    inline const Aws::Vector<WorkUnitRange>& GetWorkUnitRanges() const{ return m_workUnitRanges; }

    /**
     * <p>A <code>WorkUnitRangeList</code> object that specifies the valid range of
     * work unit IDs for querying the execution service.</p>
     */
    inline void SetWorkUnitRanges(const Aws::Vector<WorkUnitRange>& value) { m_workUnitRanges = value; }

    /**
     * <p>A <code>WorkUnitRangeList</code> object that specifies the valid range of
     * work unit IDs for querying the execution service.</p>
     */
    inline void SetWorkUnitRanges(Aws::Vector<WorkUnitRange>&& value) { m_workUnitRanges = std::move(value); }

    /**
     * <p>A <code>WorkUnitRangeList</code> object that specifies the valid range of
     * work unit IDs for querying the execution service.</p>
     */
    inline GetWorkUnitsResult& WithWorkUnitRanges(const Aws::Vector<WorkUnitRange>& value) { SetWorkUnitRanges(value); return *this;}

    /**
     * <p>A <code>WorkUnitRangeList</code> object that specifies the valid range of
     * work unit IDs for querying the execution service.</p>
     */
    inline GetWorkUnitsResult& WithWorkUnitRanges(Aws::Vector<WorkUnitRange>&& value) { SetWorkUnitRanges(std::move(value)); return *this;}

    /**
     * <p>A <code>WorkUnitRangeList</code> object that specifies the valid range of
     * work unit IDs for querying the execution service.</p>
     */
    inline GetWorkUnitsResult& AddWorkUnitRanges(const WorkUnitRange& value) { m_workUnitRanges.push_back(value); return *this; }

    /**
     * <p>A <code>WorkUnitRangeList</code> object that specifies the valid range of
     * work unit IDs for querying the execution service.</p>
     */
    inline GetWorkUnitsResult& AddWorkUnitRanges(WorkUnitRange&& value) { m_workUnitRanges.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::String m_queryId;

    Aws::Vector<WorkUnitRange> m_workUnitRanges;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
