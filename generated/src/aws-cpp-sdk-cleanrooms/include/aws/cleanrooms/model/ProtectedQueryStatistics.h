/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/BilledResourceUtilization.h>
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
   * <p>Contains statistics about the execution of the protected query.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQueryStatistics">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryStatistics
  {
  public:
    AWS_CLEANROOMS_API ProtectedQueryStatistics() = default;
    AWS_CLEANROOMS_API ProtectedQueryStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The duration of the protected query, from creation until query completion, in
     * milliseconds.</p>
     */
    inline long long GetTotalDurationInMillis() const { return m_totalDurationInMillis; }
    inline bool TotalDurationInMillisHasBeenSet() const { return m_totalDurationInMillisHasBeenSet; }
    inline void SetTotalDurationInMillis(long long value) { m_totalDurationInMillisHasBeenSet = true; m_totalDurationInMillis = value; }
    inline ProtectedQueryStatistics& WithTotalDurationInMillis(long long value) { SetTotalDurationInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The billed resource utilization.</p>
     */
    inline const BilledResourceUtilization& GetBilledResourceUtilization() const { return m_billedResourceUtilization; }
    inline bool BilledResourceUtilizationHasBeenSet() const { return m_billedResourceUtilizationHasBeenSet; }
    template<typename BilledResourceUtilizationT = BilledResourceUtilization>
    void SetBilledResourceUtilization(BilledResourceUtilizationT&& value) { m_billedResourceUtilizationHasBeenSet = true; m_billedResourceUtilization = std::forward<BilledResourceUtilizationT>(value); }
    template<typename BilledResourceUtilizationT = BilledResourceUtilization>
    ProtectedQueryStatistics& WithBilledResourceUtilization(BilledResourceUtilizationT&& value) { SetBilledResourceUtilization(std::forward<BilledResourceUtilizationT>(value)); return *this;}
    ///@}
  private:

    long long m_totalDurationInMillis{0};
    bool m_totalDurationInMillisHasBeenSet = false;

    BilledResourceUtilization m_billedResourceUtilization;
    bool m_billedResourceUtilizationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
