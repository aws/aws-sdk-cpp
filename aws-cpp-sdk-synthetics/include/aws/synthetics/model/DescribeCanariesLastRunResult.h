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
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/CanaryLastRun.h>
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
namespace Synthetics
{
namespace Model
{
  class AWS_SYNTHETICS_API DescribeCanariesLastRunResult
  {
  public:
    DescribeCanariesLastRunResult();
    DescribeCanariesLastRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCanariesLastRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array that contains the information from the most recent run of each
     * canary.</p>
     */
    inline const Aws::Vector<CanaryLastRun>& GetCanariesLastRun() const{ return m_canariesLastRun; }

    /**
     * <p>An array that contains the information from the most recent run of each
     * canary.</p>
     */
    inline void SetCanariesLastRun(const Aws::Vector<CanaryLastRun>& value) { m_canariesLastRun = value; }

    /**
     * <p>An array that contains the information from the most recent run of each
     * canary.</p>
     */
    inline void SetCanariesLastRun(Aws::Vector<CanaryLastRun>&& value) { m_canariesLastRun = std::move(value); }

    /**
     * <p>An array that contains the information from the most recent run of each
     * canary.</p>
     */
    inline DescribeCanariesLastRunResult& WithCanariesLastRun(const Aws::Vector<CanaryLastRun>& value) { SetCanariesLastRun(value); return *this;}

    /**
     * <p>An array that contains the information from the most recent run of each
     * canary.</p>
     */
    inline DescribeCanariesLastRunResult& WithCanariesLastRun(Aws::Vector<CanaryLastRun>&& value) { SetCanariesLastRun(std::move(value)); return *this;}

    /**
     * <p>An array that contains the information from the most recent run of each
     * canary.</p>
     */
    inline DescribeCanariesLastRunResult& AddCanariesLastRun(const CanaryLastRun& value) { m_canariesLastRun.push_back(value); return *this; }

    /**
     * <p>An array that contains the information from the most recent run of each
     * canary.</p>
     */
    inline DescribeCanariesLastRunResult& AddCanariesLastRun(CanaryLastRun&& value) { m_canariesLastRun.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline DescribeCanariesLastRunResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline DescribeCanariesLastRunResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline DescribeCanariesLastRunResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CanaryLastRun> m_canariesLastRun;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
