/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutvision/model/TargetDevice.h>
#include <aws/lookoutvision/model/TargetPlatform.h>
#include <aws/lookoutvision/model/S3Location.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutvision/model/Tag.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>Configuration information for the AWS IoT Greengrass component created in a
   * model packaging job. For more information, see <a>StartModelPackagingJob</a>.
   * </p>  <p>You can't specify a component with the same
   * <code>ComponentName</code> and <code>Componentversion</code> as an existing
   * component with the same component name and component version.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/GreengrassConfiguration">AWS
   * API Reference</a></p>
   */
  class GreengrassConfiguration
  {
  public:
    AWS_LOOKOUTFORVISION_API GreengrassConfiguration() = default;
    AWS_LOOKOUTFORVISION_API GreengrassConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API GreengrassConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional compiler options for the Greengrass component. Currently, only
     * NVIDIA Graphics Processing Units (GPU) and CPU accelerators are supported. If
     * you specify <code>TargetDevice</code>, don't specify
     * <code>CompilerOptions</code>.</p> <p>For more information, see <i>Compiler
     * options</i> in the Amazon Lookout for Vision Developer Guide. </p>
     */
    inline const Aws::String& GetCompilerOptions() const { return m_compilerOptions; }
    inline bool CompilerOptionsHasBeenSet() const { return m_compilerOptionsHasBeenSet; }
    template<typename CompilerOptionsT = Aws::String>
    void SetCompilerOptions(CompilerOptionsT&& value) { m_compilerOptionsHasBeenSet = true; m_compilerOptions = std::forward<CompilerOptionsT>(value); }
    template<typename CompilerOptionsT = Aws::String>
    GreengrassConfiguration& WithCompilerOptions(CompilerOptionsT&& value) { SetCompilerOptions(std::forward<CompilerOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target device for the model. Currently the only supported value is
     * <code>jetson_xavier</code>. If you specify <code>TargetDevice</code>, you can't
     * specify <code>TargetPlatform</code>. </p>
     */
    inline TargetDevice GetTargetDevice() const { return m_targetDevice; }
    inline bool TargetDeviceHasBeenSet() const { return m_targetDeviceHasBeenSet; }
    inline void SetTargetDevice(TargetDevice value) { m_targetDeviceHasBeenSet = true; m_targetDevice = value; }
    inline GreengrassConfiguration& WithTargetDevice(TargetDevice value) { SetTargetDevice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target platform for the model. If you specify
     * <code>TargetPlatform</code>, you can't specify <code>TargetDevice</code>. </p>
     */
    inline const TargetPlatform& GetTargetPlatform() const { return m_targetPlatform; }
    inline bool TargetPlatformHasBeenSet() const { return m_targetPlatformHasBeenSet; }
    template<typename TargetPlatformT = TargetPlatform>
    void SetTargetPlatform(TargetPlatformT&& value) { m_targetPlatformHasBeenSet = true; m_targetPlatform = std::forward<TargetPlatformT>(value); }
    template<typename TargetPlatformT = TargetPlatform>
    GreengrassConfiguration& WithTargetPlatform(TargetPlatformT&& value) { SetTargetPlatform(std::forward<TargetPlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An S3 location in which Lookout for Vision stores the component artifacts.
     * </p>
     */
    inline const S3Location& GetS3OutputLocation() const { return m_s3OutputLocation; }
    inline bool S3OutputLocationHasBeenSet() const { return m_s3OutputLocationHasBeenSet; }
    template<typename S3OutputLocationT = S3Location>
    void SetS3OutputLocation(S3OutputLocationT&& value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation = std::forward<S3OutputLocationT>(value); }
    template<typename S3OutputLocationT = S3Location>
    GreengrassConfiguration& WithS3OutputLocation(S3OutputLocationT&& value) { SetS3OutputLocation(std::forward<S3OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A name for the AWS IoT Greengrass component. </p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    GreengrassConfiguration& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Version for the AWS IoT Greengrass component. If you don't provide a value,
     * a default value of <code> <i>Model Version</i>.0.0</code> is used. </p>
     */
    inline const Aws::String& GetComponentVersion() const { return m_componentVersion; }
    inline bool ComponentVersionHasBeenSet() const { return m_componentVersionHasBeenSet; }
    template<typename ComponentVersionT = Aws::String>
    void SetComponentVersion(ComponentVersionT&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::forward<ComponentVersionT>(value); }
    template<typename ComponentVersionT = Aws::String>
    GreengrassConfiguration& WithComponentVersion(ComponentVersionT&& value) { SetComponentVersion(std::forward<ComponentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description for the AWS IoT Greengrass component. </p>
     */
    inline const Aws::String& GetComponentDescription() const { return m_componentDescription; }
    inline bool ComponentDescriptionHasBeenSet() const { return m_componentDescriptionHasBeenSet; }
    template<typename ComponentDescriptionT = Aws::String>
    void SetComponentDescription(ComponentDescriptionT&& value) { m_componentDescriptionHasBeenSet = true; m_componentDescription = std::forward<ComponentDescriptionT>(value); }
    template<typename ComponentDescriptionT = Aws::String>
    GreengrassConfiguration& WithComponentDescription(ComponentDescriptionT&& value) { SetComponentDescription(std::forward<ComponentDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the AWS IoT
     * Greengrass component. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    GreengrassConfiguration& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    GreengrassConfiguration& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_compilerOptions;
    bool m_compilerOptionsHasBeenSet = false;

    TargetDevice m_targetDevice{TargetDevice::NOT_SET};
    bool m_targetDeviceHasBeenSet = false;

    TargetPlatform m_targetPlatform;
    bool m_targetPlatformHasBeenSet = false;

    S3Location m_s3OutputLocation;
    bool m_s3OutputLocationHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentVersion;
    bool m_componentVersionHasBeenSet = false;

    Aws::String m_componentDescription;
    bool m_componentDescriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
