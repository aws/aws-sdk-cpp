/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/ComputePlatform.h>
#include <aws/inspector2/model/StopCisMessageProgress.h>
#include <aws/inspector2/model/StopCisSessionStatus.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The stop CIS session message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/StopCisSessionMessage">AWS
   * API Reference</a></p>
   */
  class StopCisSessionMessage
  {
  public:
    AWS_INSPECTOR2_API StopCisSessionMessage();
    AWS_INSPECTOR2_API StopCisSessionMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API StopCisSessionMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message benchmark profile.</p>
     */
    inline const Aws::String& GetBenchmarkProfile() const{ return m_benchmarkProfile; }
    inline bool BenchmarkProfileHasBeenSet() const { return m_benchmarkProfileHasBeenSet; }
    inline void SetBenchmarkProfile(const Aws::String& value) { m_benchmarkProfileHasBeenSet = true; m_benchmarkProfile = value; }
    inline void SetBenchmarkProfile(Aws::String&& value) { m_benchmarkProfileHasBeenSet = true; m_benchmarkProfile = std::move(value); }
    inline void SetBenchmarkProfile(const char* value) { m_benchmarkProfileHasBeenSet = true; m_benchmarkProfile.assign(value); }
    inline StopCisSessionMessage& WithBenchmarkProfile(const Aws::String& value) { SetBenchmarkProfile(value); return *this;}
    inline StopCisSessionMessage& WithBenchmarkProfile(Aws::String&& value) { SetBenchmarkProfile(std::move(value)); return *this;}
    inline StopCisSessionMessage& WithBenchmarkProfile(const char* value) { SetBenchmarkProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message benchmark version.</p>
     */
    inline const Aws::String& GetBenchmarkVersion() const{ return m_benchmarkVersion; }
    inline bool BenchmarkVersionHasBeenSet() const { return m_benchmarkVersionHasBeenSet; }
    inline void SetBenchmarkVersion(const Aws::String& value) { m_benchmarkVersionHasBeenSet = true; m_benchmarkVersion = value; }
    inline void SetBenchmarkVersion(Aws::String&& value) { m_benchmarkVersionHasBeenSet = true; m_benchmarkVersion = std::move(value); }
    inline void SetBenchmarkVersion(const char* value) { m_benchmarkVersionHasBeenSet = true; m_benchmarkVersion.assign(value); }
    inline StopCisSessionMessage& WithBenchmarkVersion(const Aws::String& value) { SetBenchmarkVersion(value); return *this;}
    inline StopCisSessionMessage& WithBenchmarkVersion(Aws::String&& value) { SetBenchmarkVersion(std::move(value)); return *this;}
    inline StopCisSessionMessage& WithBenchmarkVersion(const char* value) { SetBenchmarkVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message compute platform.</p>
     */
    inline const ComputePlatform& GetComputePlatform() const{ return m_computePlatform; }
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }
    inline void SetComputePlatform(const ComputePlatform& value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }
    inline void SetComputePlatform(ComputePlatform&& value) { m_computePlatformHasBeenSet = true; m_computePlatform = std::move(value); }
    inline StopCisSessionMessage& WithComputePlatform(const ComputePlatform& value) { SetComputePlatform(value); return *this;}
    inline StopCisSessionMessage& WithComputePlatform(ComputePlatform&& value) { SetComputePlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the message.</p>
     */
    inline const StopCisMessageProgress& GetProgress() const{ return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    inline void SetProgress(const StopCisMessageProgress& value) { m_progressHasBeenSet = true; m_progress = value; }
    inline void SetProgress(StopCisMessageProgress&& value) { m_progressHasBeenSet = true; m_progress = std::move(value); }
    inline StopCisSessionMessage& WithProgress(const StopCisMessageProgress& value) { SetProgress(value); return *this;}
    inline StopCisSessionMessage& WithProgress(StopCisMessageProgress&& value) { SetProgress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the message.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline StopCisSessionMessage& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline StopCisSessionMessage& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline StopCisSessionMessage& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the message.</p>
     */
    inline const StopCisSessionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StopCisSessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StopCisSessionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline StopCisSessionMessage& WithStatus(const StopCisSessionStatus& value) { SetStatus(value); return *this;}
    inline StopCisSessionMessage& WithStatus(StopCisSessionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_benchmarkProfile;
    bool m_benchmarkProfileHasBeenSet = false;

    Aws::String m_benchmarkVersion;
    bool m_benchmarkVersionHasBeenSet = false;

    ComputePlatform m_computePlatform;
    bool m_computePlatformHasBeenSet = false;

    StopCisMessageProgress m_progress;
    bool m_progressHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    StopCisSessionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
