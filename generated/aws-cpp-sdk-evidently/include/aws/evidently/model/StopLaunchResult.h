﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
  class AWS_CLOUDWATCHEVIDENTLY_API StopLaunchResult
  {
  public:
    StopLaunchResult();
    StopLaunchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StopLaunchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time that the launch stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedTime() const{ return m_endedTime; }

    /**
     * <p>The date and time that the launch stopped.</p>
     */
    inline void SetEndedTime(const Aws::Utils::DateTime& value) { m_endedTime = value; }

    /**
     * <p>The date and time that the launch stopped.</p>
     */
    inline void SetEndedTime(Aws::Utils::DateTime&& value) { m_endedTime = std::move(value); }

    /**
     * <p>The date and time that the launch stopped.</p>
     */
    inline StopLaunchResult& WithEndedTime(const Aws::Utils::DateTime& value) { SetEndedTime(value); return *this;}

    /**
     * <p>The date and time that the launch stopped.</p>
     */
    inline StopLaunchResult& WithEndedTime(Aws::Utils::DateTime&& value) { SetEndedTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_endedTime;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
