/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudWatchEvidently
{
namespace Model
{
  class StartExperimentResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API StartExperimentResult() = default;
    AWS_CLOUDWATCHEVIDENTLY_API StartExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API StartExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A timestamp that indicates when the experiment started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedTime() const { return m_startedTime; }
    template<typename StartedTimeT = Aws::Utils::DateTime>
    void SetStartedTime(StartedTimeT&& value) { m_startedTimeHasBeenSet = true; m_startedTime = std::forward<StartedTimeT>(value); }
    template<typename StartedTimeT = Aws::Utils::DateTime>
    StartExperimentResult& WithStartedTime(StartedTimeT&& value) { SetStartedTime(std::forward<StartedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartExperimentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startedTime{};
    bool m_startedTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
