/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/CanaryRun.h>
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
  class GetCanaryRunsResult
  {
  public:
    AWS_SYNTHETICS_API GetCanaryRunsResult();
    AWS_SYNTHETICS_API GetCanaryRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SYNTHETICS_API GetCanaryRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of structures. Each structure contains the details of one of the
     * retrieved canary runs.</p>
     */
    inline const Aws::Vector<CanaryRun>& GetCanaryRuns() const{ return m_canaryRuns; }

    /**
     * <p>An array of structures. Each structure contains the details of one of the
     * retrieved canary runs.</p>
     */
    inline void SetCanaryRuns(const Aws::Vector<CanaryRun>& value) { m_canaryRuns = value; }

    /**
     * <p>An array of structures. Each structure contains the details of one of the
     * retrieved canary runs.</p>
     */
    inline void SetCanaryRuns(Aws::Vector<CanaryRun>&& value) { m_canaryRuns = std::move(value); }

    /**
     * <p>An array of structures. Each structure contains the details of one of the
     * retrieved canary runs.</p>
     */
    inline GetCanaryRunsResult& WithCanaryRuns(const Aws::Vector<CanaryRun>& value) { SetCanaryRuns(value); return *this;}

    /**
     * <p>An array of structures. Each structure contains the details of one of the
     * retrieved canary runs.</p>
     */
    inline GetCanaryRunsResult& WithCanaryRuns(Aws::Vector<CanaryRun>&& value) { SetCanaryRuns(std::move(value)); return *this;}

    /**
     * <p>An array of structures. Each structure contains the details of one of the
     * retrieved canary runs.</p>
     */
    inline GetCanaryRunsResult& AddCanaryRuns(const CanaryRun& value) { m_canaryRuns.push_back(value); return *this; }

    /**
     * <p>An array of structures. Each structure contains the details of one of the
     * retrieved canary runs.</p>
     */
    inline GetCanaryRunsResult& AddCanaryRuns(CanaryRun&& value) { m_canaryRuns.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>GetCanaryRuns</code> operation to retrieve the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>GetCanaryRuns</code> operation to retrieve the next
     * set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>GetCanaryRuns</code> operation to retrieve the next
     * set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>GetCanaryRuns</code> operation to retrieve the next
     * set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>GetCanaryRuns</code> operation to retrieve the next
     * set of results.</p>
     */
    inline GetCanaryRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>GetCanaryRuns</code> operation to retrieve the next
     * set of results.</p>
     */
    inline GetCanaryRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>GetCanaryRuns</code> operation to retrieve the next
     * set of results.</p>
     */
    inline GetCanaryRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CanaryRun> m_canaryRuns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
