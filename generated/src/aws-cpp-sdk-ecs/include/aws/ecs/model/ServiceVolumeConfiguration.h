/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ServiceManagedEBSVolumeConfiguration.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The configuration for a volume specified in the task definition as a volume
   * that is configured at launch time. Currently, the only supported volume type is
   * an Amazon EBS volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class ServiceVolumeConfiguration
  {
  public:
    AWS_ECS_API ServiceVolumeConfiguration();
    AWS_ECS_API ServiceVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline ServiceVolumeConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline ServiceVolumeConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline ServiceVolumeConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
     * manages on your behalf. These settings are used to create each Amazon EBS
     * volume, with one volume created for each task in the service. The Amazon EBS
     * volumes are visible in your account in the Amazon EC2 console once they are
     * created.</p>
     */
    inline const ServiceManagedEBSVolumeConfiguration& GetManagedEBSVolume() const{ return m_managedEBSVolume; }

    /**
     * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
     * manages on your behalf. These settings are used to create each Amazon EBS
     * volume, with one volume created for each task in the service. The Amazon EBS
     * volumes are visible in your account in the Amazon EC2 console once they are
     * created.</p>
     */
    inline bool ManagedEBSVolumeHasBeenSet() const { return m_managedEBSVolumeHasBeenSet; }

    /**
     * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
     * manages on your behalf. These settings are used to create each Amazon EBS
     * volume, with one volume created for each task in the service. The Amazon EBS
     * volumes are visible in your account in the Amazon EC2 console once they are
     * created.</p>
     */
    inline void SetManagedEBSVolume(const ServiceManagedEBSVolumeConfiguration& value) { m_managedEBSVolumeHasBeenSet = true; m_managedEBSVolume = value; }

    /**
     * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
     * manages on your behalf. These settings are used to create each Amazon EBS
     * volume, with one volume created for each task in the service. The Amazon EBS
     * volumes are visible in your account in the Amazon EC2 console once they are
     * created.</p>
     */
    inline void SetManagedEBSVolume(ServiceManagedEBSVolumeConfiguration&& value) { m_managedEBSVolumeHasBeenSet = true; m_managedEBSVolume = std::move(value); }

    /**
     * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
     * manages on your behalf. These settings are used to create each Amazon EBS
     * volume, with one volume created for each task in the service. The Amazon EBS
     * volumes are visible in your account in the Amazon EC2 console once they are
     * created.</p>
     */
    inline ServiceVolumeConfiguration& WithManagedEBSVolume(const ServiceManagedEBSVolumeConfiguration& value) { SetManagedEBSVolume(value); return *this;}

    /**
     * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
     * manages on your behalf. These settings are used to create each Amazon EBS
     * volume, with one volume created for each task in the service. The Amazon EBS
     * volumes are visible in your account in the Amazon EC2 console once they are
     * created.</p>
     */
    inline ServiceVolumeConfiguration& WithManagedEBSVolume(ServiceManagedEBSVolumeConfiguration&& value) { SetManagedEBSVolume(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServiceManagedEBSVolumeConfiguration m_managedEBSVolume;
    bool m_managedEBSVolumeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
