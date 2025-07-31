/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/StopCisSessionStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/StopCisMessageProgress.h>
#include <aws/inspector2/model/ComputePlatform.h>
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
    AWS_INSPECTOR2_API StopCisSessionMessage() = default;
    AWS_INSPECTOR2_API StopCisSessionMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API StopCisSessionMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the message.</p>
     */
    inline StopCisSessionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StopCisSessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StopCisSessionMessage& WithStatus(StopCisSessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the message.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    StopCisSessionMessage& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the message.</p>
     */
    inline const StopCisMessageProgress& GetProgress() const { return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    template<typename ProgressT = StopCisMessageProgress>
    void SetProgress(ProgressT&& value) { m_progressHasBeenSet = true; m_progress = std::forward<ProgressT>(value); }
    template<typename ProgressT = StopCisMessageProgress>
    StopCisSessionMessage& WithProgress(ProgressT&& value) { SetProgress(std::forward<ProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message compute platform.</p>
     */
    inline const ComputePlatform& GetComputePlatform() const { return m_computePlatform; }
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }
    template<typename ComputePlatformT = ComputePlatform>
    void SetComputePlatform(ComputePlatformT&& value) { m_computePlatformHasBeenSet = true; m_computePlatform = std::forward<ComputePlatformT>(value); }
    template<typename ComputePlatformT = ComputePlatform>
    StopCisSessionMessage& WithComputePlatform(ComputePlatformT&& value) { SetComputePlatform(std::forward<ComputePlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message benchmark version.</p>
     */
    inline const Aws::String& GetBenchmarkVersion() const { return m_benchmarkVersion; }
    inline bool BenchmarkVersionHasBeenSet() const { return m_benchmarkVersionHasBeenSet; }
    template<typename BenchmarkVersionT = Aws::String>
    void SetBenchmarkVersion(BenchmarkVersionT&& value) { m_benchmarkVersionHasBeenSet = true; m_benchmarkVersion = std::forward<BenchmarkVersionT>(value); }
    template<typename BenchmarkVersionT = Aws::String>
    StopCisSessionMessage& WithBenchmarkVersion(BenchmarkVersionT&& value) { SetBenchmarkVersion(std::forward<BenchmarkVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message benchmark profile.</p>
     */
    inline const Aws::String& GetBenchmarkProfile() const { return m_benchmarkProfile; }
    inline bool BenchmarkProfileHasBeenSet() const { return m_benchmarkProfileHasBeenSet; }
    template<typename BenchmarkProfileT = Aws::String>
    void SetBenchmarkProfile(BenchmarkProfileT&& value) { m_benchmarkProfileHasBeenSet = true; m_benchmarkProfile = std::forward<BenchmarkProfileT>(value); }
    template<typename BenchmarkProfileT = Aws::String>
    StopCisSessionMessage& WithBenchmarkProfile(BenchmarkProfileT&& value) { SetBenchmarkProfile(std::forward<BenchmarkProfileT>(value)); return *this;}
    ///@}
  private:

    StopCisSessionStatus m_status{StopCisSessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    StopCisMessageProgress m_progress;
    bool m_progressHasBeenSet = false;

    ComputePlatform m_computePlatform;
    bool m_computePlatformHasBeenSet = false;

    Aws::String m_benchmarkVersion;
    bool m_benchmarkVersionHasBeenSet = false;

    Aws::String m_benchmarkProfile;
    bool m_benchmarkProfileHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
