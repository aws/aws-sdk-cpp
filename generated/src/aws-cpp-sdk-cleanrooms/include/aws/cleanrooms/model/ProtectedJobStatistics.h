/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/BilledJobResourceUtilization.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Contains statistics about the execution of the protected job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJobStatistics">AWS
   * API Reference</a></p>
   */
  class ProtectedJobStatistics
  {
  public:
    AWS_CLEANROOMS_API ProtectedJobStatistics() = default;
    AWS_CLEANROOMS_API ProtectedJobStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The duration of the protected job, from creation until job completion, in
     * milliseconds.</p>
     */
    inline long long GetTotalDurationInMillis() const { return m_totalDurationInMillis; }
    inline bool TotalDurationInMillisHasBeenSet() const { return m_totalDurationInMillisHasBeenSet; }
    inline void SetTotalDurationInMillis(long long value) { m_totalDurationInMillisHasBeenSet = true; m_totalDurationInMillis = value; }
    inline ProtectedJobStatistics& WithTotalDurationInMillis(long long value) { SetTotalDurationInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The billed resource utilization for the protected job.</p>
     */
    inline const BilledJobResourceUtilization& GetBilledResourceUtilization() const { return m_billedResourceUtilization; }
    inline bool BilledResourceUtilizationHasBeenSet() const { return m_billedResourceUtilizationHasBeenSet; }
    template<typename BilledResourceUtilizationT = BilledJobResourceUtilization>
    void SetBilledResourceUtilization(BilledResourceUtilizationT&& value) { m_billedResourceUtilizationHasBeenSet = true; m_billedResourceUtilization = std::forward<BilledResourceUtilizationT>(value); }
    template<typename BilledResourceUtilizationT = BilledJobResourceUtilization>
    ProtectedJobStatistics& WithBilledResourceUtilization(BilledResourceUtilizationT&& value) { SetBilledResourceUtilization(std::forward<BilledResourceUtilizationT>(value)); return *this;}
    ///@}
  private:

    long long m_totalDurationInMillis{0};
    bool m_totalDurationInMillisHasBeenSet = false;

    BilledJobResourceUtilization m_billedResourceUtilization;
    bool m_billedResourceUtilizationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
