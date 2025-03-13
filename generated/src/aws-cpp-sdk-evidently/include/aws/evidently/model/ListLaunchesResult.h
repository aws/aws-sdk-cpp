/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/Launch.h>
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
  class ListLaunchesResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ListLaunchesResult() = default;
    AWS_CLOUDWATCHEVIDENTLY_API ListLaunchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API ListLaunchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures that contain the configuration details of the launches
     * in the specified project.</p>
     */
    inline const Aws::Vector<Launch>& GetLaunches() const { return m_launches; }
    template<typename LaunchesT = Aws::Vector<Launch>>
    void SetLaunches(LaunchesT&& value) { m_launchesHasBeenSet = true; m_launches = std::forward<LaunchesT>(value); }
    template<typename LaunchesT = Aws::Vector<Launch>>
    ListLaunchesResult& WithLaunches(LaunchesT&& value) { SetLaunches(std::forward<LaunchesT>(value)); return *this;}
    template<typename LaunchesT = Launch>
    ListLaunchesResult& AddLaunches(LaunchesT&& value) { m_launchesHasBeenSet = true; m_launches.emplace_back(std::forward<LaunchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use in a subsequent <code>ListLaunches</code> operation to
     * return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLaunchesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLaunchesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Launch> m_launches;
    bool m_launchesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
