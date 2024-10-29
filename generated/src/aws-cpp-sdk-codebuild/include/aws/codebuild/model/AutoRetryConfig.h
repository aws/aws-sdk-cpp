﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about the auto-retry configuration for the build.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/AutoRetryConfig">AWS
   * API Reference</a></p>
   */
  class AutoRetryConfig
  {
  public:
    AWS_CODEBUILD_API AutoRetryConfig();
    AWS_CODEBUILD_API AutoRetryConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API AutoRetryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of additional automatic retries after a failed build. For
     * example, if the auto-retry limit is set to 2, CodeBuild will call the
     * <code>RetryBuild</code> API to automatically retry your build for up to 2
     * additional times.</p>
     */
    inline int GetAutoRetryLimit() const{ return m_autoRetryLimit; }
    inline bool AutoRetryLimitHasBeenSet() const { return m_autoRetryLimitHasBeenSet; }
    inline void SetAutoRetryLimit(int value) { m_autoRetryLimitHasBeenSet = true; m_autoRetryLimit = value; }
    inline AutoRetryConfig& WithAutoRetryLimit(int value) { SetAutoRetryLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times that the build has been retried. The initial build will
     * have an auto-retry number of 0.</p>
     */
    inline int GetAutoRetryNumber() const{ return m_autoRetryNumber; }
    inline bool AutoRetryNumberHasBeenSet() const { return m_autoRetryNumberHasBeenSet; }
    inline void SetAutoRetryNumber(int value) { m_autoRetryNumberHasBeenSet = true; m_autoRetryNumber = value; }
    inline AutoRetryConfig& WithAutoRetryNumber(int value) { SetAutoRetryNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The build ARN of the auto-retried build triggered by the current build. The
     * next auto-retry will be <code>null</code> for builds that don't trigger an
     * auto-retry.</p>
     */
    inline const Aws::String& GetNextAutoRetry() const{ return m_nextAutoRetry; }
    inline bool NextAutoRetryHasBeenSet() const { return m_nextAutoRetryHasBeenSet; }
    inline void SetNextAutoRetry(const Aws::String& value) { m_nextAutoRetryHasBeenSet = true; m_nextAutoRetry = value; }
    inline void SetNextAutoRetry(Aws::String&& value) { m_nextAutoRetryHasBeenSet = true; m_nextAutoRetry = std::move(value); }
    inline void SetNextAutoRetry(const char* value) { m_nextAutoRetryHasBeenSet = true; m_nextAutoRetry.assign(value); }
    inline AutoRetryConfig& WithNextAutoRetry(const Aws::String& value) { SetNextAutoRetry(value); return *this;}
    inline AutoRetryConfig& WithNextAutoRetry(Aws::String&& value) { SetNextAutoRetry(std::move(value)); return *this;}
    inline AutoRetryConfig& WithNextAutoRetry(const char* value) { SetNextAutoRetry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The build ARN of the build that triggered the current auto-retry build. The
     * previous auto-retry will be <code>null</code> for the initial build.</p>
     */
    inline const Aws::String& GetPreviousAutoRetry() const{ return m_previousAutoRetry; }
    inline bool PreviousAutoRetryHasBeenSet() const { return m_previousAutoRetryHasBeenSet; }
    inline void SetPreviousAutoRetry(const Aws::String& value) { m_previousAutoRetryHasBeenSet = true; m_previousAutoRetry = value; }
    inline void SetPreviousAutoRetry(Aws::String&& value) { m_previousAutoRetryHasBeenSet = true; m_previousAutoRetry = std::move(value); }
    inline void SetPreviousAutoRetry(const char* value) { m_previousAutoRetryHasBeenSet = true; m_previousAutoRetry.assign(value); }
    inline AutoRetryConfig& WithPreviousAutoRetry(const Aws::String& value) { SetPreviousAutoRetry(value); return *this;}
    inline AutoRetryConfig& WithPreviousAutoRetry(Aws::String&& value) { SetPreviousAutoRetry(std::move(value)); return *this;}
    inline AutoRetryConfig& WithPreviousAutoRetry(const char* value) { SetPreviousAutoRetry(value); return *this;}
    ///@}
  private:

    int m_autoRetryLimit;
    bool m_autoRetryLimitHasBeenSet = false;

    int m_autoRetryNumber;
    bool m_autoRetryNumberHasBeenSet = false;

    Aws::String m_nextAutoRetry;
    bool m_nextAutoRetryHasBeenSet = false;

    Aws::String m_previousAutoRetry;
    bool m_previousAutoRetryHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
