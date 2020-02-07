/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/LaunchPermissionConfiguration.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p> Define and configure the output AMIs of the pipeline. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/AmiDistributionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IMAGEBUILDER_API AmiDistributionConfiguration
  {
  public:
    AmiDistributionConfiguration();
    AmiDistributionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AmiDistributionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the distribution configuration. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the distribution configuration. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the distribution configuration. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the distribution configuration. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the distribution configuration. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the distribution configuration. </p>
     */
    inline AmiDistributionConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the distribution configuration. </p>
     */
    inline AmiDistributionConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the distribution configuration. </p>
     */
    inline AmiDistributionConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the distribution configuration. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the distribution configuration. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the distribution configuration. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the distribution configuration. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the distribution configuration. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the distribution configuration. </p>
     */
    inline AmiDistributionConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the distribution configuration. </p>
     */
    inline AmiDistributionConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the distribution configuration. </p>
     */
    inline AmiDistributionConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The tags to apply to AMIs distributed to this Region. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAmiTags() const{ return m_amiTags; }

    /**
     * <p> The tags to apply to AMIs distributed to this Region. </p>
     */
    inline bool AmiTagsHasBeenSet() const { return m_amiTagsHasBeenSet; }

    /**
     * <p> The tags to apply to AMIs distributed to this Region. </p>
     */
    inline void SetAmiTags(const Aws::Map<Aws::String, Aws::String>& value) { m_amiTagsHasBeenSet = true; m_amiTags = value; }

    /**
     * <p> The tags to apply to AMIs distributed to this Region. </p>
     */
    inline void SetAmiTags(Aws::Map<Aws::String, Aws::String>&& value) { m_amiTagsHasBeenSet = true; m_amiTags = std::move(value); }

    /**
     * <p> The tags to apply to AMIs distributed to this Region. </p>
     */
    inline AmiDistributionConfiguration& WithAmiTags(const Aws::Map<Aws::String, Aws::String>& value) { SetAmiTags(value); return *this;}

    /**
     * <p> The tags to apply to AMIs distributed to this Region. </p>
     */
    inline AmiDistributionConfiguration& WithAmiTags(Aws::Map<Aws::String, Aws::String>&& value) { SetAmiTags(std::move(value)); return *this;}

    /**
     * <p> The tags to apply to AMIs distributed to this Region. </p>
     */
    inline AmiDistributionConfiguration& AddAmiTags(const Aws::String& key, const Aws::String& value) { m_amiTagsHasBeenSet = true; m_amiTags.emplace(key, value); return *this; }

    /**
     * <p> The tags to apply to AMIs distributed to this Region. </p>
     */
    inline AmiDistributionConfiguration& AddAmiTags(Aws::String&& key, const Aws::String& value) { m_amiTagsHasBeenSet = true; m_amiTags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags to apply to AMIs distributed to this Region. </p>
     */
    inline AmiDistributionConfiguration& AddAmiTags(const Aws::String& key, Aws::String&& value) { m_amiTagsHasBeenSet = true; m_amiTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags to apply to AMIs distributed to this Region. </p>
     */
    inline AmiDistributionConfiguration& AddAmiTags(Aws::String&& key, Aws::String&& value) { m_amiTagsHasBeenSet = true; m_amiTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The tags to apply to AMIs distributed to this Region. </p>
     */
    inline AmiDistributionConfiguration& AddAmiTags(const char* key, Aws::String&& value) { m_amiTagsHasBeenSet = true; m_amiTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags to apply to AMIs distributed to this Region. </p>
     */
    inline AmiDistributionConfiguration& AddAmiTags(Aws::String&& key, const char* value) { m_amiTagsHasBeenSet = true; m_amiTags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags to apply to AMIs distributed to this Region. </p>
     */
    inline AmiDistributionConfiguration& AddAmiTags(const char* key, const char* value) { m_amiTagsHasBeenSet = true; m_amiTags.emplace(key, value); return *this; }


    /**
     * <p> Launch permissions can be used to configure which AWS accounts can use the
     * AMI to launch instances. </p>
     */
    inline const LaunchPermissionConfiguration& GetLaunchPermission() const{ return m_launchPermission; }

    /**
     * <p> Launch permissions can be used to configure which AWS accounts can use the
     * AMI to launch instances. </p>
     */
    inline bool LaunchPermissionHasBeenSet() const { return m_launchPermissionHasBeenSet; }

    /**
     * <p> Launch permissions can be used to configure which AWS accounts can use the
     * AMI to launch instances. </p>
     */
    inline void SetLaunchPermission(const LaunchPermissionConfiguration& value) { m_launchPermissionHasBeenSet = true; m_launchPermission = value; }

    /**
     * <p> Launch permissions can be used to configure which AWS accounts can use the
     * AMI to launch instances. </p>
     */
    inline void SetLaunchPermission(LaunchPermissionConfiguration&& value) { m_launchPermissionHasBeenSet = true; m_launchPermission = std::move(value); }

    /**
     * <p> Launch permissions can be used to configure which AWS accounts can use the
     * AMI to launch instances. </p>
     */
    inline AmiDistributionConfiguration& WithLaunchPermission(const LaunchPermissionConfiguration& value) { SetLaunchPermission(value); return *this;}

    /**
     * <p> Launch permissions can be used to configure which AWS accounts can use the
     * AMI to launch instances. </p>
     */
    inline AmiDistributionConfiguration& WithLaunchPermission(LaunchPermissionConfiguration&& value) { SetLaunchPermission(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_amiTags;
    bool m_amiTagsHasBeenSet;

    LaunchPermissionConfiguration m_launchPermission;
    bool m_launchPermissionHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
