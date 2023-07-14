/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The container path, mount options, and size (in MiB) of a tmpfs
   * mount.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails
  {
  public:
    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails();
    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline const Aws::String& GetContainerPath() const{ return m_containerPath; }

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline bool ContainerPathHasBeenSet() const { return m_containerPathHasBeenSet; }

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline void SetContainerPath(const Aws::String& value) { m_containerPathHasBeenSet = true; m_containerPath = value; }

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline void SetContainerPath(Aws::String&& value) { m_containerPathHasBeenSet = true; m_containerPath = std::move(value); }

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline void SetContainerPath(const char* value) { m_containerPathHasBeenSet = true; m_containerPath.assign(value); }

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithContainerPath(const Aws::String& value) { SetContainerPath(value); return *this;}

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithContainerPath(Aws::String&& value) { SetContainerPath(std::move(value)); return *this;}

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithContainerPath(const char* value) { SetContainerPath(value); return *this;}


    /**
     * <p>The list of tmpfs volume mount options.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMountOptions() const{ return m_mountOptions; }

    /**
     * <p>The list of tmpfs volume mount options.</p>
     */
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }

    /**
     * <p>The list of tmpfs volume mount options.</p>
     */
    inline void SetMountOptions(const Aws::Vector<Aws::String>& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = value; }

    /**
     * <p>The list of tmpfs volume mount options.</p>
     */
    inline void SetMountOptions(Aws::Vector<Aws::String>&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::move(value); }

    /**
     * <p>The list of tmpfs volume mount options.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithMountOptions(const Aws::Vector<Aws::String>& value) { SetMountOptions(value); return *this;}

    /**
     * <p>The list of tmpfs volume mount options.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithMountOptions(Aws::Vector<Aws::String>&& value) { SetMountOptions(std::move(value)); return *this;}

    /**
     * <p>The list of tmpfs volume mount options.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& AddMountOptions(const Aws::String& value) { m_mountOptionsHasBeenSet = true; m_mountOptions.push_back(value); return *this; }

    /**
     * <p>The list of tmpfs volume mount options.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& AddMountOptions(Aws::String&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of tmpfs volume mount options.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& AddMountOptions(const char* value) { m_mountOptionsHasBeenSet = true; m_mountOptions.push_back(value); return *this; }


    /**
     * <p>The maximum size (in MiB) of the tmpfs volume.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The maximum size (in MiB) of the tmpfs volume.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The maximum size (in MiB) of the tmpfs volume.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The maximum size (in MiB) of the tmpfs volume.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithSize(int value) { SetSize(value); return *this;}

  private:

    Aws::String m_containerPath;
    bool m_containerPathHasBeenSet;

    Aws::Vector<Aws::String> m_mountOptions;
    bool m_mountOptionsHasBeenSet;

    int m_size;
    bool m_sizeHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
