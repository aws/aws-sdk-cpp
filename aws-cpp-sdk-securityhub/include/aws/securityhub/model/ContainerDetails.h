/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/VolumeMount.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Container details related to a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ContainerDetails">AWS
   * API Reference</a></p>
   */
  class ContainerDetails
  {
  public:
    AWS_SECURITYHUB_API ContainerDetails();
    AWS_SECURITYHUB_API ContainerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ContainerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The runtime of the container. </p>
     */
    inline const Aws::String& GetContainerRuntime() const{ return m_containerRuntime; }

    /**
     * <p>The runtime of the container. </p>
     */
    inline bool ContainerRuntimeHasBeenSet() const { return m_containerRuntimeHasBeenSet; }

    /**
     * <p>The runtime of the container. </p>
     */
    inline void SetContainerRuntime(const Aws::String& value) { m_containerRuntimeHasBeenSet = true; m_containerRuntime = value; }

    /**
     * <p>The runtime of the container. </p>
     */
    inline void SetContainerRuntime(Aws::String&& value) { m_containerRuntimeHasBeenSet = true; m_containerRuntime = std::move(value); }

    /**
     * <p>The runtime of the container. </p>
     */
    inline void SetContainerRuntime(const char* value) { m_containerRuntimeHasBeenSet = true; m_containerRuntime.assign(value); }

    /**
     * <p>The runtime of the container. </p>
     */
    inline ContainerDetails& WithContainerRuntime(const Aws::String& value) { SetContainerRuntime(value); return *this;}

    /**
     * <p>The runtime of the container. </p>
     */
    inline ContainerDetails& WithContainerRuntime(Aws::String&& value) { SetContainerRuntime(std::move(value)); return *this;}

    /**
     * <p>The runtime of the container. </p>
     */
    inline ContainerDetails& WithContainerRuntime(const char* value) { SetContainerRuntime(value); return *this;}


    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline ContainerDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline ContainerDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline ContainerDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the container image related to a finding.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The identifier of the container image related to a finding.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The identifier of the container image related to a finding.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The identifier of the container image related to a finding.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The identifier of the container image related to a finding.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The identifier of the container image related to a finding.</p>
     */
    inline ContainerDetails& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The identifier of the container image related to a finding.</p>
     */
    inline ContainerDetails& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the container image related to a finding.</p>
     */
    inline ContainerDetails& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The name of the container image related to a finding.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The name of the container image related to a finding.</p>
     */
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }

    /**
     * <p>The name of the container image related to a finding.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The name of the container image related to a finding.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }

    /**
     * <p>The name of the container image related to a finding.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The name of the container image related to a finding.</p>
     */
    inline ContainerDetails& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The name of the container image related to a finding.</p>
     */
    inline ContainerDetails& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the container image related to a finding.</p>
     */
    inline ContainerDetails& WithImageName(const char* value) { SetImageName(value); return *this;}


    /**
     * <p>Indicates when the container started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetLaunchedAt() const{ return m_launchedAt; }

    /**
     * <p>Indicates when the container started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool LaunchedAtHasBeenSet() const { return m_launchedAtHasBeenSet; }

    /**
     * <p>Indicates when the container started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLaunchedAt(const Aws::String& value) { m_launchedAtHasBeenSet = true; m_launchedAt = value; }

    /**
     * <p>Indicates when the container started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLaunchedAt(Aws::String&& value) { m_launchedAtHasBeenSet = true; m_launchedAt = std::move(value); }

    /**
     * <p>Indicates when the container started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLaunchedAt(const char* value) { m_launchedAtHasBeenSet = true; m_launchedAt.assign(value); }

    /**
     * <p>Indicates when the container started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline ContainerDetails& WithLaunchedAt(const Aws::String& value) { SetLaunchedAt(value); return *this;}

    /**
     * <p>Indicates when the container started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline ContainerDetails& WithLaunchedAt(Aws::String&& value) { SetLaunchedAt(std::move(value)); return *this;}

    /**
     * <p>Indicates when the container started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline ContainerDetails& WithLaunchedAt(const char* value) { SetLaunchedAt(value); return *this;}


    /**
     * <p>Provides information about the mounting of a volume in a container. </p>
     */
    inline const Aws::Vector<VolumeMount>& GetVolumeMounts() const{ return m_volumeMounts; }

    /**
     * <p>Provides information about the mounting of a volume in a container. </p>
     */
    inline bool VolumeMountsHasBeenSet() const { return m_volumeMountsHasBeenSet; }

    /**
     * <p>Provides information about the mounting of a volume in a container. </p>
     */
    inline void SetVolumeMounts(const Aws::Vector<VolumeMount>& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts = value; }

    /**
     * <p>Provides information about the mounting of a volume in a container. </p>
     */
    inline void SetVolumeMounts(Aws::Vector<VolumeMount>&& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts = std::move(value); }

    /**
     * <p>Provides information about the mounting of a volume in a container. </p>
     */
    inline ContainerDetails& WithVolumeMounts(const Aws::Vector<VolumeMount>& value) { SetVolumeMounts(value); return *this;}

    /**
     * <p>Provides information about the mounting of a volume in a container. </p>
     */
    inline ContainerDetails& WithVolumeMounts(Aws::Vector<VolumeMount>&& value) { SetVolumeMounts(std::move(value)); return *this;}

    /**
     * <p>Provides information about the mounting of a volume in a container. </p>
     */
    inline ContainerDetails& AddVolumeMounts(const VolumeMount& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts.push_back(value); return *this; }

    /**
     * <p>Provides information about the mounting of a volume in a container. </p>
     */
    inline ContainerDetails& AddVolumeMounts(VolumeMount&& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts.push_back(std::move(value)); return *this; }


    /**
     * <p>When this parameter is <code>true</code>, the container is given elevated
     * privileges on the host container instance (similar to the root user). </p>
     */
    inline bool GetPrivileged() const{ return m_privileged; }

    /**
     * <p>When this parameter is <code>true</code>, the container is given elevated
     * privileges on the host container instance (similar to the root user). </p>
     */
    inline bool PrivilegedHasBeenSet() const { return m_privilegedHasBeenSet; }

    /**
     * <p>When this parameter is <code>true</code>, the container is given elevated
     * privileges on the host container instance (similar to the root user). </p>
     */
    inline void SetPrivileged(bool value) { m_privilegedHasBeenSet = true; m_privileged = value; }

    /**
     * <p>When this parameter is <code>true</code>, the container is given elevated
     * privileges on the host container instance (similar to the root user). </p>
     */
    inline ContainerDetails& WithPrivileged(bool value) { SetPrivileged(value); return *this;}

  private:

    Aws::String m_containerRuntime;
    bool m_containerRuntimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    Aws::String m_launchedAt;
    bool m_launchedAtHasBeenSet = false;

    Aws::Vector<VolumeMount> m_volumeMounts;
    bool m_volumeMountsHasBeenSet = false;

    bool m_privileged;
    bool m_privilegedHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
