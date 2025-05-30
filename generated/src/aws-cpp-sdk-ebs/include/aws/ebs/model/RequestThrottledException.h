﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ebs/model/RequestThrottledExceptionReason.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EBS
{
namespace Model
{

  /**
   * <p>The number of API requests has exceeded the maximum allowed API request
   * throttling limit for the snapshot. For more information see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/error-retries.html">Error
   * retries</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/RequestThrottledException">AWS
   * API Reference</a></p>
   */
  class RequestThrottledException
  {
  public:
    AWS_EBS_API RequestThrottledException() = default;
    AWS_EBS_API RequestThrottledException(Aws::Utils::Json::JsonView jsonValue);
    AWS_EBS_API RequestThrottledException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EBS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    RequestThrottledException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the exception.</p>
     */
    inline RequestThrottledExceptionReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(RequestThrottledExceptionReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline RequestThrottledException& WithReason(RequestThrottledExceptionReason value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    RequestThrottledExceptionReason m_reason{RequestThrottledExceptionReason::NOT_SET};
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
