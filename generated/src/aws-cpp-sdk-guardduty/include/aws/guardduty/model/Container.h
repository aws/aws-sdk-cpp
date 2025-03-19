/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/SecurityContext.h>
#include <aws/guardduty/model/VolumeMount.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Details of a container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Container">AWS
   * API Reference</a></p>
   */
  class Container
  {
  public:
    AWS_GUARDDUTY_API Container() = default;
    AWS_GUARDDUTY_API Container(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Container& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container runtime (such as, Docker or containerd) used to run the
     * container.</p>
     */
    inline const Aws::String& GetContainerRuntime() const { return m_containerRuntime; }
    inline bool ContainerRuntimeHasBeenSet() const { return m_containerRuntimeHasBeenSet; }
    template<typename ContainerRuntimeT = Aws::String>
    void SetContainerRuntime(ContainerRuntimeT&& value) { m_containerRuntimeHasBeenSet = true; m_containerRuntime = std::forward<ContainerRuntimeT>(value); }
    template<typename ContainerRuntimeT = Aws::String>
    Container& WithContainerRuntime(ContainerRuntimeT&& value) { SetContainerRuntime(std::forward<ContainerRuntimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Container& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Container& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container image.</p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    Container& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Part of the image name before the last slash. For example, imagePrefix for
     * public.ecr.aws/amazonlinux/amazonlinux:latest would be
     * public.ecr.aws/amazonlinux. If the image name is relative and does not have a
     * slash, this field is empty.</p>
     */
    inline const Aws::String& GetImagePrefix() const { return m_imagePrefix; }
    inline bool ImagePrefixHasBeenSet() const { return m_imagePrefixHasBeenSet; }
    template<typename ImagePrefixT = Aws::String>
    void SetImagePrefix(ImagePrefixT&& value) { m_imagePrefixHasBeenSet = true; m_imagePrefix = std::forward<ImagePrefixT>(value); }
    template<typename ImagePrefixT = Aws::String>
    Container& WithImagePrefix(ImagePrefixT&& value) { SetImagePrefix(std::forward<ImagePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container volume mounts.</p>
     */
    inline const Aws::Vector<VolumeMount>& GetVolumeMounts() const { return m_volumeMounts; }
    inline bool VolumeMountsHasBeenSet() const { return m_volumeMountsHasBeenSet; }
    template<typename VolumeMountsT = Aws::Vector<VolumeMount>>
    void SetVolumeMounts(VolumeMountsT&& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts = std::forward<VolumeMountsT>(value); }
    template<typename VolumeMountsT = Aws::Vector<VolumeMount>>
    Container& WithVolumeMounts(VolumeMountsT&& value) { SetVolumeMounts(std::forward<VolumeMountsT>(value)); return *this;}
    template<typename VolumeMountsT = VolumeMount>
    Container& AddVolumeMounts(VolumeMountsT&& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts.emplace_back(std::forward<VolumeMountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Container security context.</p>
     */
    inline const SecurityContext& GetSecurityContext() const { return m_securityContext; }
    inline bool SecurityContextHasBeenSet() const { return m_securityContextHasBeenSet; }
    template<typename SecurityContextT = SecurityContext>
    void SetSecurityContext(SecurityContextT&& value) { m_securityContextHasBeenSet = true; m_securityContext = std::forward<SecurityContextT>(value); }
    template<typename SecurityContextT = SecurityContext>
    Container& WithSecurityContext(SecurityContextT&& value) { SetSecurityContext(std::forward<SecurityContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_containerRuntime;
    bool m_containerRuntimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_imagePrefix;
    bool m_imagePrefixHasBeenSet = false;

    Aws::Vector<VolumeMount> m_volumeMounts;
    bool m_volumeMountsHasBeenSet = false;

    SecurityContext m_securityContext;
    bool m_securityContextHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
