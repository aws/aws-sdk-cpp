/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Contains statistics for a notebook calculation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CalculationStatistics">AWS
   * API Reference</a></p>
   */
  class CalculationStatistics
  {
  public:
    AWS_ATHENA_API CalculationStatistics() = default;
    AWS_ATHENA_API CalculationStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CalculationStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data processing unit execution time in milliseconds for the
     * calculation.</p>
     */
    inline long long GetDpuExecutionInMillis() const { return m_dpuExecutionInMillis; }
    inline bool DpuExecutionInMillisHasBeenSet() const { return m_dpuExecutionInMillisHasBeenSet; }
    inline void SetDpuExecutionInMillis(long long value) { m_dpuExecutionInMillisHasBeenSet = true; m_dpuExecutionInMillis = value; }
    inline CalculationStatistics& WithDpuExecutionInMillis(long long value) { SetDpuExecutionInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the calculation.</p>
     */
    inline const Aws::String& GetProgress() const { return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    template<typename ProgressT = Aws::String>
    void SetProgress(ProgressT&& value) { m_progressHasBeenSet = true; m_progress = std::forward<ProgressT>(value); }
    template<typename ProgressT = Aws::String>
    CalculationStatistics& WithProgress(ProgressT&& value) { SetProgress(std::forward<ProgressT>(value)); return *this;}
    ///@}
  private:

    long long m_dpuExecutionInMillis{0};
    bool m_dpuExecutionInMillisHasBeenSet = false;

    Aws::String m_progress;
    bool m_progressHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
