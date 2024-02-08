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
    AWS_KEYSPACES_API ReplicaSpecification();
    AWS_KEYSPACES_API ReplicaSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API ReplicaSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline ReplicaSpecification& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline ReplicaSpecification& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline ReplicaSpecification& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The provisioned read capacity units for the multi-Region table in the
     * specified Amazon Web Services Region.</p>
     */
    inline long long GetReadCapacityUnits() const{ return m_readCapacityUnits; }

    /**
     * <p>The provisioned read capacity units for the multi-Region table in the
     * specified Amazon Web Services Region.</p>
     */
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }

    /**
     * <p>The provisioned read capacity units for the multi-Region table in the
     * specified Amazon Web Services Region.</p>
     */
    inline void SetReadCapacityUnits(long long value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }

    /**
     * <p>The provisioned read capacity units for the multi-Region table in the
     * specified Amazon Web Services Region.</p>
     */
    inline ReplicaSpecification& WithReadCapacityUnits(long long value) { SetReadCapacityUnits(value); return *this;}


    /**
     * <p>The read capacity auto scaling settings for the multi-Region table in the
     * specified Amazon Web Services Region.</p>
     */
    inline const AutoScalingSettings& GetReadCapacityAutoScaling() const{ return m_readCapacityAutoScaling; }

    /**
     * <p>The read capacity auto scaling settings for the multi-Region table in the
     * specified Amazon Web Services Region.</p>
     */
    inline bool ReadCapacityAutoScalingHasBeenSet() const { return m_readCapacityAutoScalingHasBeenSet; }

    /**
     * <p>The read capacity auto scaling settings for the multi-Region table in the
     * specified Amazon Web Services Region.</p>
     */
    inline void SetReadCapacityAutoScaling(const AutoScalingSettings& value) { m_readCapacityAutoScalingHasBeenSet = true; m_readCapacityAutoScaling = value; }

    /**
     * <p>The read capacity auto scaling settings for the multi-Region table in the
     * specified Amazon Web Services Region.</p>
     */
    inline void SetReadCapacityAutoScaling(AutoScalingSettings&& value) { m_readCapacityAutoScalingHasBeenSet = true; m_readCapacityAutoScaling = std::move(value); }

    /**
     * <p>The read capacity auto scaling settings for the multi-Region table in the
     * specified Amazon Web Services Region.</p>
     */
    inline ReplicaSpecification& WithReadCapacityAutoScaling(const AutoScalingSettings& value) { SetReadCapacityAutoScaling(value); return *this;}

    /**
     * <p>The read capacity auto scaling settings for the multi-Region table in the
     * specified Amazon Web Services Region.</p>
     */
    inline ReplicaSpecification& WithReadCapacityAutoScaling(AutoScalingSettings&& value) { SetReadCapacityAutoScaling(std::move(value)); return *this;}

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    long long m_readCapacityUnits;
    bool m_readCapacityUnitsHasBeenSet = false;

    AutoScalingSettings m_readCapacityAutoScaling;
    bool m_readCapacityAutoScalingHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
