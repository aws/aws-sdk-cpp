/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/TieringPolicyName.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>Describes the data tiering policy for an ONTAP volume. When enabled, Amazon
   * FSx for ONTAP's intelligent tiering automatically transitions a volume's data
   * between the file system's primary storage and capacity pool storage based on
   * your access patterns.</p> <p>Valid tiering policies are the following:</p> <ul>
   * <li> <p> <code>SNAPSHOT_ONLY</code> - (Default value) moves cold snapshots to
   * the capacity pool storage tier.</p> </li> </ul> <ul> <li> <p> <code>AUTO</code>
   * - moves cold user data and snapshots to the capacity pool storage tier based on
   * your access patterns.</p> </li> </ul> <ul> <li> <p> <code>ALL</code> - moves all
   * user data blocks in both the active file system and Snapshot copies to the
   * storage pool tier.</p> </li> </ul> <ul> <li> <p> <code>NONE</code> - keeps a
   * volume's data in the primary storage tier, preventing it from being moved to the
   * capacity pool tier.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/TieringPolicy">AWS
   * API Reference</a></p>
   */
  class TieringPolicy
  {
  public:
    AWS_FSX_API TieringPolicy();
    AWS_FSX_API TieringPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API TieringPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the number of days that user data in a volume must remain inactive
     * before it is considered "cold" and moved to the capacity pool. Used with the
     * <code>AUTO</code> and <code>SNAPSHOT_ONLY</code> tiering policies. Enter a whole
     * number between 2 and 183. Default values are 31 days for <code>AUTO</code> and 2
     * days for <code>SNAPSHOT_ONLY</code>.</p>
     */
    inline int GetCoolingPeriod() const{ return m_coolingPeriod; }

    /**
     * <p>Specifies the number of days that user data in a volume must remain inactive
     * before it is considered "cold" and moved to the capacity pool. Used with the
     * <code>AUTO</code> and <code>SNAPSHOT_ONLY</code> tiering policies. Enter a whole
     * number between 2 and 183. Default values are 31 days for <code>AUTO</code> and 2
     * days for <code>SNAPSHOT_ONLY</code>.</p>
     */
    inline bool CoolingPeriodHasBeenSet() const { return m_coolingPeriodHasBeenSet; }

    /**
     * <p>Specifies the number of days that user data in a volume must remain inactive
     * before it is considered "cold" and moved to the capacity pool. Used with the
     * <code>AUTO</code> and <code>SNAPSHOT_ONLY</code> tiering policies. Enter a whole
     * number between 2 and 183. Default values are 31 days for <code>AUTO</code> and 2
     * days for <code>SNAPSHOT_ONLY</code>.</p>
     */
    inline void SetCoolingPeriod(int value) { m_coolingPeriodHasBeenSet = true; m_coolingPeriod = value; }

    /**
     * <p>Specifies the number of days that user data in a volume must remain inactive
     * before it is considered "cold" and moved to the capacity pool. Used with the
     * <code>AUTO</code> and <code>SNAPSHOT_ONLY</code> tiering policies. Enter a whole
     * number between 2 and 183. Default values are 31 days for <code>AUTO</code> and 2
     * days for <code>SNAPSHOT_ONLY</code>.</p>
     */
    inline TieringPolicy& WithCoolingPeriod(int value) { SetCoolingPeriod(value); return *this;}


    /**
     * <p>Specifies the tiering policy used to transition data. Default value is
     * <code>SNAPSHOT_ONLY</code>.</p> <ul> <li> <p> <code>SNAPSHOT_ONLY</code> - moves
     * cold snapshots to the capacity pool storage tier.</p> </li> <li> <p>
     * <code>AUTO</code> - moves cold user data and snapshots to the capacity pool
     * storage tier based on your access patterns.</p> </li> <li> <p> <code>ALL</code>
     * - moves all user data blocks in both the active file system and Snapshot copies
     * to the storage pool tier.</p> </li> <li> <p> <code>NONE</code> - keeps a
     * volume's data in the primary storage tier, preventing it from being moved to the
     * capacity pool tier.</p> </li> </ul>
     */
    inline const TieringPolicyName& GetName() const{ return m_name; }

    /**
     * <p>Specifies the tiering policy used to transition data. Default value is
     * <code>SNAPSHOT_ONLY</code>.</p> <ul> <li> <p> <code>SNAPSHOT_ONLY</code> - moves
     * cold snapshots to the capacity pool storage tier.</p> </li> <li> <p>
     * <code>AUTO</code> - moves cold user data and snapshots to the capacity pool
     * storage tier based on your access patterns.</p> </li> <li> <p> <code>ALL</code>
     * - moves all user data blocks in both the active file system and Snapshot copies
     * to the storage pool tier.</p> </li> <li> <p> <code>NONE</code> - keeps a
     * volume's data in the primary storage tier, preventing it from being moved to the
     * capacity pool tier.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies the tiering policy used to transition data. Default value is
     * <code>SNAPSHOT_ONLY</code>.</p> <ul> <li> <p> <code>SNAPSHOT_ONLY</code> - moves
     * cold snapshots to the capacity pool storage tier.</p> </li> <li> <p>
     * <code>AUTO</code> - moves cold user data and snapshots to the capacity pool
     * storage tier based on your access patterns.</p> </li> <li> <p> <code>ALL</code>
     * - moves all user data blocks in both the active file system and Snapshot copies
     * to the storage pool tier.</p> </li> <li> <p> <code>NONE</code> - keeps a
     * volume's data in the primary storage tier, preventing it from being moved to the
     * capacity pool tier.</p> </li> </ul>
     */
    inline void SetName(const TieringPolicyName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the tiering policy used to transition data. Default value is
     * <code>SNAPSHOT_ONLY</code>.</p> <ul> <li> <p> <code>SNAPSHOT_ONLY</code> - moves
     * cold snapshots to the capacity pool storage tier.</p> </li> <li> <p>
     * <code>AUTO</code> - moves cold user data and snapshots to the capacity pool
     * storage tier based on your access patterns.</p> </li> <li> <p> <code>ALL</code>
     * - moves all user data blocks in both the active file system and Snapshot copies
     * to the storage pool tier.</p> </li> <li> <p> <code>NONE</code> - keeps a
     * volume's data in the primary storage tier, preventing it from being moved to the
     * capacity pool tier.</p> </li> </ul>
     */
    inline void SetName(TieringPolicyName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies the tiering policy used to transition data. Default value is
     * <code>SNAPSHOT_ONLY</code>.</p> <ul> <li> <p> <code>SNAPSHOT_ONLY</code> - moves
     * cold snapshots to the capacity pool storage tier.</p> </li> <li> <p>
     * <code>AUTO</code> - moves cold user data and snapshots to the capacity pool
     * storage tier based on your access patterns.</p> </li> <li> <p> <code>ALL</code>
     * - moves all user data blocks in both the active file system and Snapshot copies
     * to the storage pool tier.</p> </li> <li> <p> <code>NONE</code> - keeps a
     * volume's data in the primary storage tier, preventing it from being moved to the
     * capacity pool tier.</p> </li> </ul>
     */
    inline TieringPolicy& WithName(const TieringPolicyName& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the tiering policy used to transition data. Default value is
     * <code>SNAPSHOT_ONLY</code>.</p> <ul> <li> <p> <code>SNAPSHOT_ONLY</code> - moves
     * cold snapshots to the capacity pool storage tier.</p> </li> <li> <p>
     * <code>AUTO</code> - moves cold user data and snapshots to the capacity pool
     * storage tier based on your access patterns.</p> </li> <li> <p> <code>ALL</code>
     * - moves all user data blocks in both the active file system and Snapshot copies
     * to the storage pool tier.</p> </li> <li> <p> <code>NONE</code> - keeps a
     * volume's data in the primary storage tier, preventing it from being moved to the
     * capacity pool tier.</p> </li> </ul>
     */
    inline TieringPolicy& WithName(TieringPolicyName&& value) { SetName(std::move(value)); return *this;}

  private:

    int m_coolingPeriod;
    bool m_coolingPeriodHasBeenSet = false;

    TieringPolicyName m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
