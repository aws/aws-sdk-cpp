/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
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
namespace ARCZonalShift
{
namespace Model
{

  /**
   * <p>A complex structure for a managed resource in an account.</p> <p>A managed
   * resource is a Network Load Balancer or Application Load Balancer that has been
   * registered with Route 53 ARC by Elastic Load Balancing. You can start a zonal
   * shift in Route 53 ARC for a managed resource to temporarily move traffic for the
   * resource away from an Availability Zone in an AWS Region.</p>  <p>At this
   * time, you can only start a zonal shift for Network Load Balancers and
   * Application Load Balancers with cross-zone load balancing turned off.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/ManagedResourceSummary">AWS
   * API Reference</a></p>
   */
  class ManagedResourceSummary
  {
  public:
    AWS_ARCZONALSHIFT_API ManagedResourceSummary();
    AWS_ARCZONALSHIFT_API ManagedResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API ManagedResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline ManagedResourceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline ManagedResourceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the managed resource.</p>
     */
    inline ManagedResourceSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline ManagedResourceSummary& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline ManagedResourceSummary& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline ManagedResourceSummary& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline ManagedResourceSummary& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The Availability Zones that a resource is deployed in.</p>
     */
    inline ManagedResourceSummary& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The name of the managed resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the managed resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the managed resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the managed resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the managed resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the managed resource.</p>
     */
    inline ManagedResourceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the managed resource.</p>
     */
    inline ManagedResourceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the managed resource.</p>
     */
    inline ManagedResourceSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
