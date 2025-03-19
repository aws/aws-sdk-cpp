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
    AWS_ECS_API ServiceVolumeConfiguration() = default;
    AWS_ECS_API ServiceVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the volume. This value must match the volume name from the
     * <code>Volume</code> object in the task definition.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ServiceVolumeConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
     * manages on your behalf. These settings are used to create each Amazon EBS
     * volume, with one volume created for each task in the service. The Amazon EBS
     * volumes are visible in your account in the Amazon EC2 console once they are
     * created.</p>
     */
    inline const ServiceManagedEBSVolumeConfiguration& GetManagedEBSVolume() const { return m_managedEBSVolume; }
    inline bool ManagedEBSVolumeHasBeenSet() const { return m_managedEBSVolumeHasBeenSet; }
    template<typename ManagedEBSVolumeT = ServiceManagedEBSVolumeConfiguration>
    void SetManagedEBSVolume(ManagedEBSVolumeT&& value) { m_managedEBSVolumeHasBeenSet = true; m_managedEBSVolume = std::forward<ManagedEBSVolumeT>(value); }
    template<typename ManagedEBSVolumeT = ServiceManagedEBSVolumeConfiguration>
    ServiceVolumeConfiguration& WithManagedEBSVolume(ManagedEBSVolumeT&& value) { SetManagedEBSVolume(std::forward<ManagedEBSVolumeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServiceManagedEBSVolumeConfiguration m_managedEBSVolume;
    bool m_managedEBSVolumeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
