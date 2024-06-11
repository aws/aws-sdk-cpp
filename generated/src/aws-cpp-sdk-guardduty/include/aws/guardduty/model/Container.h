﻿/**
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
    AWS_GUARDDUTY_API Container();
    AWS_GUARDDUTY_API Container(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Container& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container runtime (such as, Docker or containerd) used to run the
     * container.</p>
     */
    inline const Aws::String& GetContainerRuntime() const{ return m_containerRuntime; }
    inline bool ContainerRuntimeHasBeenSet() const { return m_containerRuntimeHasBeenSet; }
    inline void SetContainerRuntime(const Aws::String& value) { m_containerRuntimeHasBeenSet = true; m_containerRuntime = value; }
    inline void SetContainerRuntime(Aws::String&& value) { m_containerRuntimeHasBeenSet = true; m_containerRuntime = std::move(value); }
    inline void SetContainerRuntime(const char* value) { m_containerRuntimeHasBeenSet = true; m_containerRuntime.assign(value); }
    inline Container& WithContainerRuntime(const Aws::String& value) { SetContainerRuntime(value); return *this;}
    inline Container& WithContainerRuntime(Aws::String&& value) { SetContainerRuntime(std::move(value)); return *this;}
    inline Container& WithContainerRuntime(const char* value) { SetContainerRuntime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Container& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Container& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Container& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Container& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Container& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Container& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container image.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }
    inline Container& WithImage(const Aws::String& value) { SetImage(value); return *this;}
    inline Container& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}
    inline Container& WithImage(const char* value) { SetImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Part of the image name before the last slash. For example, imagePrefix for
     * public.ecr.aws/amazonlinux/amazonlinux:latest would be
     * public.ecr.aws/amazonlinux. If the image name is relative and does not have a
     * slash, this field is empty.</p>
     */
    inline const Aws::String& GetImagePrefix() const{ return m_imagePrefix; }
    inline bool ImagePrefixHasBeenSet() const { return m_imagePrefixHasBeenSet; }
    inline void SetImagePrefix(const Aws::String& value) { m_imagePrefixHasBeenSet = true; m_imagePrefix = value; }
    inline void SetImagePrefix(Aws::String&& value) { m_imagePrefixHasBeenSet = true; m_imagePrefix = std::move(value); }
    inline void SetImagePrefix(const char* value) { m_imagePrefixHasBeenSet = true; m_imagePrefix.assign(value); }
    inline Container& WithImagePrefix(const Aws::String& value) { SetImagePrefix(value); return *this;}
    inline Container& WithImagePrefix(Aws::String&& value) { SetImagePrefix(std::move(value)); return *this;}
    inline Container& WithImagePrefix(const char* value) { SetImagePrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container volume mounts.</p>
     */
    inline const Aws::Vector<VolumeMount>& GetVolumeMounts() const{ return m_volumeMounts; }
    inline bool VolumeMountsHasBeenSet() const { return m_volumeMountsHasBeenSet; }
    inline void SetVolumeMounts(const Aws::Vector<VolumeMount>& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts = value; }
    inline void SetVolumeMounts(Aws::Vector<VolumeMount>&& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts = std::move(value); }
    inline Container& WithVolumeMounts(const Aws::Vector<VolumeMount>& value) { SetVolumeMounts(value); return *this;}
    inline Container& WithVolumeMounts(Aws::Vector<VolumeMount>&& value) { SetVolumeMounts(std::move(value)); return *this;}
    inline Container& AddVolumeMounts(const VolumeMount& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts.push_back(value); return *this; }
    inline Container& AddVolumeMounts(VolumeMount&& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Container security context.</p>
     */
    inline const SecurityContext& GetSecurityContext() const{ return m_securityContext; }
    inline bool SecurityContextHasBeenSet() const { return m_securityContextHasBeenSet; }
    inline void SetSecurityContext(const SecurityContext& value) { m_securityContextHasBeenSet = true; m_securityContext = value; }
    inline void SetSecurityContext(SecurityContext&& value) { m_securityContextHasBeenSet = true; m_securityContext = std::move(value); }
    inline Container& WithSecurityContext(const SecurityContext& value) { SetSecurityContext(value); return *this;}
    inline Container& WithSecurityContext(SecurityContext&& value) { SetSecurityContext(std::move(value)); return *this;}
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
