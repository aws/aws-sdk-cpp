/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspaces/model/AutoScalingSettings.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>The Amazon Web Services Region specific settings of a multi-Region table.</p>
   * <p>For a multi-Region table, you can configure the table's read capacity
   * differently per Amazon Web Services Region. You can do this by configuring the
   * following parameters.</p> <ul> <li> <p> <code>region</code>: The Region where
   * these settings are applied. (Required)</p> </li> <li> <p>
   * <code>readCapacityUnits</code>: The provisioned read capacity units.
   * (Optional)</p> </li> <li> <p> <code>readCapacityAutoScaling</code>: The read
   * capacity auto scaling settings for the table. (Optional)</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/ReplicaSpecification">AWS
   * API Reference</a></p>
   */
  class ReplicaSpecification
  {
  public:
    AWS_KEYSPACES_API ReplicaSpecification() = default;
    AWS_KEYSPACES_API ReplicaSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API ReplicaSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    ReplicaSpecification& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioned read capacity units for the multi-Region table in the
     * specified Amazon Web Services Region.</p>
     */
    inline long long GetReadCapacityUnits() const { return m_readCapacityUnits; }
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }
    inline void SetReadCapacityUnits(long long value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }
    inline ReplicaSpecification& WithReadCapacityUnits(long long value) { SetReadCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read capacity auto scaling settings for the multi-Region table in the
     * specified Amazon Web Services Region.</p>
     */
    inline const AutoScalingSettings& GetReadCapacityAutoScaling() const { return m_readCapacityAutoScaling; }
    inline bool ReadCapacityAutoScalingHasBeenSet() const { return m_readCapacityAutoScalingHasBeenSet; }
    template<typename ReadCapacityAutoScalingT = AutoScalingSettings>
    void SetReadCapacityAutoScaling(ReadCapacityAutoScalingT&& value) { m_readCapacityAutoScalingHasBeenSet = true; m_readCapacityAutoScaling = std::forward<ReadCapacityAutoScalingT>(value); }
    template<typename ReadCapacityAutoScalingT = AutoScalingSettings>
    ReplicaSpecification& WithReadCapacityAutoScaling(ReadCapacityAutoScalingT&& value) { SetReadCapacityAutoScaling(std::forward<ReadCapacityAutoScalingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    long long m_readCapacityUnits{0};
    bool m_readCapacityUnitsHasBeenSet = false;

    AutoScalingSettings m_readCapacityAutoScaling;
    bool m_readCapacityAutoScalingHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
