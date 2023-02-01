/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The Amazon EC2 Availability Zone configuration of the cluster (job
   * flow).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PlacementType">AWS
   * API Reference</a></p>
   */
  class PlacementType
  {
  public:
    AWS_EMR_API PlacementType();
    AWS_EMR_API PlacementType(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API PlacementType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon EC2 Availability Zone for the cluster.
     * <code>AvailabilityZone</code> is used for uniform instance groups, while
     * <code>AvailabilityZones</code> (plural) is used for instance fleets.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Amazon EC2 Availability Zone for the cluster.
     * <code>AvailabilityZone</code> is used for uniform instance groups, while
     * <code>AvailabilityZones</code> (plural) is used for instance fleets.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Amazon EC2 Availability Zone for the cluster.
     * <code>AvailabilityZone</code> is used for uniform instance groups, while
     * <code>AvailabilityZones</code> (plural) is used for instance fleets.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Amazon EC2 Availability Zone for the cluster.
     * <code>AvailabilityZone</code> is used for uniform instance groups, while
     * <code>AvailabilityZones</code> (plural) is used for instance fleets.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Amazon EC2 Availability Zone for the cluster.
     * <code>AvailabilityZone</code> is used for uniform instance groups, while
     * <code>AvailabilityZones</code> (plural) is used for instance fleets.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Amazon EC2 Availability Zone for the cluster.
     * <code>AvailabilityZone</code> is used for uniform instance groups, while
     * <code>AvailabilityZones</code> (plural) is used for instance fleets.</p>
     */
    inline PlacementType& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Amazon EC2 Availability Zone for the cluster.
     * <code>AvailabilityZone</code> is used for uniform instance groups, while
     * <code>AvailabilityZones</code> (plural) is used for instance fleets.</p>
     */
    inline PlacementType& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 Availability Zone for the cluster.
     * <code>AvailabilityZone</code> is used for uniform instance groups, while
     * <code>AvailabilityZones</code> (plural) is used for instance fleets.</p>
     */
    inline PlacementType& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>When multiple Availability Zones are specified, Amazon EMR evaluates them and
     * launches instances in the optimal Availability Zone.
     * <code>AvailabilityZones</code> is used for instance fleets, while
     * <code>AvailabilityZone</code> (singular) is used for uniform instance
     * groups.</p>  <p>The instance fleet configuration is available only in
     * Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>When multiple Availability Zones are specified, Amazon EMR evaluates them and
     * launches instances in the optimal Availability Zone.
     * <code>AvailabilityZones</code> is used for instance fleets, while
     * <code>AvailabilityZone</code> (singular) is used for uniform instance
     * groups.</p>  <p>The instance fleet configuration is available only in
     * Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions.</p> 
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>When multiple Availability Zones are specified, Amazon EMR evaluates them and
     * launches instances in the optimal Availability Zone.
     * <code>AvailabilityZones</code> is used for instance fleets, while
     * <code>AvailabilityZone</code> (singular) is used for uniform instance
     * groups.</p>  <p>The instance fleet configuration is available only in
     * Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions.</p> 
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>When multiple Availability Zones are specified, Amazon EMR evaluates them and
     * launches instances in the optimal Availability Zone.
     * <code>AvailabilityZones</code> is used for instance fleets, while
     * <code>AvailabilityZone</code> (singular) is used for uniform instance
     * groups.</p>  <p>The instance fleet configuration is available only in
     * Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions.</p> 
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>When multiple Availability Zones are specified, Amazon EMR evaluates them and
     * launches instances in the optimal Availability Zone.
     * <code>AvailabilityZones</code> is used for instance fleets, while
     * <code>AvailabilityZone</code> (singular) is used for uniform instance
     * groups.</p>  <p>The instance fleet configuration is available only in
     * Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions.</p> 
     */
    inline PlacementType& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>When multiple Availability Zones are specified, Amazon EMR evaluates them and
     * launches instances in the optimal Availability Zone.
     * <code>AvailabilityZones</code> is used for instance fleets, while
     * <code>AvailabilityZone</code> (singular) is used for uniform instance
     * groups.</p>  <p>The instance fleet configuration is available only in
     * Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions.</p> 
     */
    inline PlacementType& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>When multiple Availability Zones are specified, Amazon EMR evaluates them and
     * launches instances in the optimal Availability Zone.
     * <code>AvailabilityZones</code> is used for instance fleets, while
     * <code>AvailabilityZone</code> (singular) is used for uniform instance
     * groups.</p>  <p>The instance fleet configuration is available only in
     * Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions.</p> 
     */
    inline PlacementType& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>When multiple Availability Zones are specified, Amazon EMR evaluates them and
     * launches instances in the optimal Availability Zone.
     * <code>AvailabilityZones</code> is used for instance fleets, while
     * <code>AvailabilityZone</code> (singular) is used for uniform instance
     * groups.</p>  <p>The instance fleet configuration is available only in
     * Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions.</p> 
     */
    inline PlacementType& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>When multiple Availability Zones are specified, Amazon EMR evaluates them and
     * launches instances in the optimal Availability Zone.
     * <code>AvailabilityZones</code> is used for instance fleets, while
     * <code>AvailabilityZone</code> (singular) is used for uniform instance
     * groups.</p>  <p>The instance fleet configuration is available only in
     * Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions.</p> 
     */
    inline PlacementType& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
