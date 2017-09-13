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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/Run.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a list runs request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListRunsResult">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API ListRunsResult
  {
  public:
    ListRunsResult();
    ListRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the runs.</p>
     */
    inline const Aws::Vector<Run>& GetRuns() const{ return m_runs; }

    /**
     * <p>Information about the runs.</p>
     */
    inline void SetRuns(const Aws::Vector<Run>& value) { m_runs = value; }

    /**
     * <p>Information about the runs.</p>
     */
    inline void SetRuns(Aws::Vector<Run>&& value) { m_runs = std::move(value); }

    /**
     * <p>Information about the runs.</p>
     */
    inline ListRunsResult& WithRuns(const Aws::Vector<Run>& value) { SetRuns(value); return *this;}

    /**
     * <p>Information about the runs.</p>
     */
    inline ListRunsResult& WithRuns(Aws::Vector<Run>&& value) { SetRuns(std::move(value)); return *this;}

    /**
     * <p>Information about the runs.</p>
     */
    inline ListRunsResult& AddRuns(const Run& value) { m_runs.push_back(value); return *this; }

    /**
     * <p>Information about the runs.</p>
     */
    inline ListRunsResult& AddRuns(Run&& value) { m_runs.push_back(std::move(value)); return *this; }


    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Run> m_runs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
