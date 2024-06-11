/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Define and configure the output AMIs of the pipeline.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/AmiDistributionConfiguration">AWS
   * API Reference</a></p>
   */
  class AmiDistributionConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API AmiDistributionConfiguration();
    AWS_IMAGEBUILDER_API AmiDistributionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API AmiDistributionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the output AMI.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AmiDistributionConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AmiDistributionConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AmiDistributionConfiguration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the AMI distribution configuration. Minimum and maximum
     * length are in characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AmiDistributionConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AmiDistributionConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AmiDistributionConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an account to which you want to distribute an image.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetAccountIds() const{ return m_targetAccountIds; }
    inline bool TargetAccountIdsHasBeenSet() const { return m_targetAccountIdsHasBeenSet; }
    inline void SetTargetAccountIds(const Aws::Vector<Aws::String>& value) { m_targetAccountIdsHasBeenSet = true; m_targetAccountIds = value; }
    inline void SetTargetAccountIds(Aws::Vector<Aws::String>&& value) { m_targetAccountIdsHasBeenSet = true; m_targetAccountIds = std::move(value); }
    inline AmiDistributionConfiguration& WithTargetAccountIds(const Aws::Vector<Aws::String>& value) { SetTargetAccountIds(value); return *this;}
    inline AmiDistributionConfiguration& WithTargetAccountIds(Aws::Vector<Aws::String>&& value) { SetTargetAccountIds(std::move(value)); return *this;}
    inline AmiDistributionConfiguration& AddTargetAccountIds(const Aws::String& value) { m_targetAccountIdsHasBeenSet = true; m_targetAccountIds.push_back(value); return *this; }
    inline AmiDistributionConfiguration& AddTargetAccountIds(Aws::String&& value) { m_targetAccountIdsHasBeenSet = true; m_targetAccountIds.push_back(std::move(value)); return *this; }
    inline AmiDistributionConfiguration& AddTargetAccountIds(const char* value) { m_targetAccountIdsHasBeenSet = true; m_targetAccountIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to apply to AMIs distributed to this Region.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAmiTags() const{ return m_amiTags; }
    inline bool AmiTagsHasBeenSet() const { return m_amiTagsHasBeenSet; }
    inline void SetAmiTags(const Aws::Map<Aws::String, Aws::String>& value) { m_amiTagsHasBeenSet = true; m_amiTags = value; }
    inline void SetAmiTags(Aws::Map<Aws::String, Aws::String>&& value) { m_amiTagsHasBeenSet = true; m_amiTags = std::move(value); }
    inline AmiDistributionConfiguration& WithAmiTags(const Aws::Map<Aws::String, Aws::String>& value) { SetAmiTags(value); return *this;}
    inline AmiDistributionConfiguration& WithAmiTags(Aws::Map<Aws::String, Aws::String>&& value) { SetAmiTags(std::move(value)); return *this;}
    inline AmiDistributionConfiguration& AddAmiTags(const Aws::String& key, const Aws::String& value) { m_amiTagsHasBeenSet = true; m_amiTags.emplace(key, value); return *this; }
    inline AmiDistributionConfiguration& AddAmiTags(Aws::String&& key, const Aws::String& value) { m_amiTagsHasBeenSet = true; m_amiTags.emplace(std::move(key), value); return *this; }
    inline AmiDistributionConfiguration& AddAmiTags(const Aws::String& key, Aws::String&& value) { m_amiTagsHasBeenSet = true; m_amiTags.emplace(key, std::move(value)); return *this; }
    inline AmiDistributionConfiguration& AddAmiTags(Aws::String&& key, Aws::String&& value) { m_amiTagsHasBeenSet = true; m_amiTags.emplace(std::move(key), std::move(value)); return *this; }
    inline AmiDistributionConfiguration& AddAmiTags(const char* key, Aws::String&& value) { m_amiTagsHasBeenSet = true; m_amiTags.emplace(key, std::move(value)); return *this; }
    inline AmiDistributionConfiguration& AddAmiTags(Aws::String&& key, const char* value) { m_amiTagsHasBeenSet = true; m_amiTags.emplace(std::move(key), value); return *this; }
    inline AmiDistributionConfiguration& AddAmiTags(const char* key, const char* value) { m_amiTagsHasBeenSet = true; m_amiTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier used to encrypt the distributed image.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline AmiDistributionConfiguration& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline AmiDistributionConfiguration& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline AmiDistributionConfiguration& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch permissions can be used to configure which Amazon Web Services
     * accounts can use the AMI to launch instances.</p>
     */
    inline const LaunchPermissionConfiguration& GetLaunchPermission() const{ return m_launchPermission; }
    inline bool LaunchPermissionHasBeenSet() const { return m_launchPermissionHasBeenSet; }
    inline void SetLaunchPermission(const LaunchPermissionConfiguration& value) { m_launchPermissionHasBeenSet = true; m_launchPermission = value; }
    inline void SetLaunchPermission(LaunchPermissionConfiguration&& value) { m_launchPermissionHasBeenSet = true; m_launchPermission = std::move(value); }
    inline AmiDistributionConfiguration& WithLaunchPermission(const LaunchPermissionConfiguration& value) { SetLaunchPermission(value); return *this;}
    inline AmiDistributionConfiguration& WithLaunchPermission(LaunchPermissionConfiguration&& value) { SetLaunchPermission(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetAccountIds;
    bool m_targetAccountIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_amiTags;
    bool m_amiTagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    LaunchPermissionConfiguration m_launchPermission;
    bool m_launchPermissionHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
