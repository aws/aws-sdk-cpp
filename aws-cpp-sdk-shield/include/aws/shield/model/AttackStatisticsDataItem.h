/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/AttackVolume.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>A single attack statistics data record. This is returned by
   * <a>DescribeAttackStatistics</a> along with a time range indicating the time
   * period that the attack statistics apply to. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AttackStatisticsDataItem">AWS
   * API Reference</a></p>
   */
  class AttackStatisticsDataItem
  {
  public:
    AWS_SHIELD_API AttackStatisticsDataItem();
    AWS_SHIELD_API AttackStatisticsDataItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API AttackStatisticsDataItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the volume of attacks during the time period. If the
     * accompanying <code>AttackCount</code> is zero, this setting might be empty.</p>
     */
    inline const AttackVolume& GetAttackVolume() const{ return m_attackVolume; }

    /**
     * <p>Information about the volume of attacks during the time period. If the
     * accompanying <code>AttackCount</code> is zero, this setting might be empty.</p>
     */
    inline bool AttackVolumeHasBeenSet() const { return m_attackVolumeHasBeenSet; }

    /**
     * <p>Information about the volume of attacks during the time period. If the
     * accompanying <code>AttackCount</code> is zero, this setting might be empty.</p>
     */
    inline void SetAttackVolume(const AttackVolume& value) { m_attackVolumeHasBeenSet = true; m_attackVolume = value; }

    /**
     * <p>Information about the volume of attacks during the time period. If the
     * accompanying <code>AttackCount</code> is zero, this setting might be empty.</p>
     */
    inline void SetAttackVolume(AttackVolume&& value) { m_attackVolumeHasBeenSet = true; m_attackVolume = std::move(value); }

    /**
     * <p>Information about the volume of attacks during the time period. If the
     * accompanying <code>AttackCount</code> is zero, this setting might be empty.</p>
     */
    inline AttackStatisticsDataItem& WithAttackVolume(const AttackVolume& value) { SetAttackVolume(value); return *this;}

    /**
     * <p>Information about the volume of attacks during the time period. If the
     * accompanying <code>AttackCount</code> is zero, this setting might be empty.</p>
     */
    inline AttackStatisticsDataItem& WithAttackVolume(AttackVolume&& value) { SetAttackVolume(std::move(value)); return *this;}


    /**
     * <p>The number of attacks detected during the time period. This is always
     * present, but might be zero. </p>
     */
    inline long long GetAttackCount() const{ return m_attackCount; }

    /**
     * <p>The number of attacks detected during the time period. This is always
     * present, but might be zero. </p>
     */
    inline bool AttackCountHasBeenSet() const { return m_attackCountHasBeenSet; }

    /**
     * <p>The number of attacks detected during the time period. This is always
     * present, but might be zero. </p>
     */
    inline void SetAttackCount(long long value) { m_attackCountHasBeenSet = true; m_attackCount = value; }

    /**
     * <p>The number of attacks detected during the time period. This is always
     * present, but might be zero. </p>
     */
    inline AttackStatisticsDataItem& WithAttackCount(long long value) { SetAttackCount(value); return *this;}

  private:

    AttackVolume m_attackVolume;
    bool m_attackVolumeHasBeenSet = false;

    long long m_attackCount;
    bool m_attackCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
