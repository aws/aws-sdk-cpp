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
  class StopLaunchResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API StopLaunchResult() = default;
    AWS_CLOUDWATCHEVIDENTLY_API StopLaunchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API StopLaunchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date and time that the launch stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedTime() const { return m_endedTime; }
    template<typename EndedTimeT = Aws::Utils::DateTime>
    void SetEndedTime(EndedTimeT&& value) { m_endedTimeHasBeenSet = true; m_endedTime = std::forward<EndedTimeT>(value); }
    template<typename EndedTimeT = Aws::Utils::DateTime>
    StopLaunchResult& WithEndedTime(EndedTimeT&& value) { SetEndedTime(std::forward<EndedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StopLaunchResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_endedTime{};
    bool m_endedTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
