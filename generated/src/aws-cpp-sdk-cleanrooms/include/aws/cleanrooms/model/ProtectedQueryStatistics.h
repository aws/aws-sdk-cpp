﻿/**
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
    AWS_CLEANROOMS_API ProtectedQueryStatistics();
    AWS_CLEANROOMS_API ProtectedQueryStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The duration of the protected query, from creation until query
     * completion.</p>
     */
    inline long long GetTotalDurationInMillis() const{ return m_totalDurationInMillis; }
    inline bool TotalDurationInMillisHasBeenSet() const { return m_totalDurationInMillisHasBeenSet; }
    inline void SetTotalDurationInMillis(long long value) { m_totalDurationInMillisHasBeenSet = true; m_totalDurationInMillis = value; }
    inline ProtectedQueryStatistics& WithTotalDurationInMillis(long long value) { SetTotalDurationInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The billed resource utilization.</p>
     */
    inline const BilledResourceUtilization& GetBilledResourceUtilization() const{ return m_billedResourceUtilization; }
    inline bool BilledResourceUtilizationHasBeenSet() const { return m_billedResourceUtilizationHasBeenSet; }
    inline void SetBilledResourceUtilization(const BilledResourceUtilization& value) { m_billedResourceUtilizationHasBeenSet = true; m_billedResourceUtilization = value; }
    inline void SetBilledResourceUtilization(BilledResourceUtilization&& value) { m_billedResourceUtilizationHasBeenSet = true; m_billedResourceUtilization = std::move(value); }
    inline ProtectedQueryStatistics& WithBilledResourceUtilization(const BilledResourceUtilization& value) { SetBilledResourceUtilization(value); return *this;}
    inline ProtectedQueryStatistics& WithBilledResourceUtilization(BilledResourceUtilization&& value) { SetBilledResourceUtilization(std::move(value)); return *this;}
    ///@}
  private:

    long long m_totalDurationInMillis;
    bool m_totalDurationInMillisHasBeenSet = false;

    BilledResourceUtilization m_billedResourceUtilization;
    bool m_billedResourceUtilizationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
