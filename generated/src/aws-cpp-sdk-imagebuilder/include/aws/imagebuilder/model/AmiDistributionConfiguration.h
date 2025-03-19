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
    AWS_IMAGEBUILDER_API AmiDistributionConfiguration() = default;
    AWS_IMAGEBUILDER_API AmiDistributionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API AmiDistributionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the output AMI.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AmiDistributionConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the AMI distribution configuration. Minimum and maximum
     * length are in characters.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AmiDistributionConfiguration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an account to which you want to distribute an image.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetAccountIds() const { return m_targetAccountIds; }
    inline bool TargetAccountIdsHasBeenSet() const { return m_targetAccountIdsHasBeenSet; }
    template<typename TargetAccountIdsT = Aws::Vector<Aws::String>>
    void SetTargetAccountIds(TargetAccountIdsT&& value) { m_targetAccountIdsHasBeenSet = true; m_targetAccountIds = std::forward<TargetAccountIdsT>(value); }
    template<typename TargetAccountIdsT = Aws::Vector<Aws::String>>
    AmiDistributionConfiguration& WithTargetAccountIds(TargetAccountIdsT&& value) { SetTargetAccountIds(std::forward<TargetAccountIdsT>(value)); return *this;}
    template<typename TargetAccountIdsT = Aws::String>
    AmiDistributionConfiguration& AddTargetAccountIds(TargetAccountIdsT&& value) { m_targetAccountIdsHasBeenSet = true; m_targetAccountIds.emplace_back(std::forward<TargetAccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to apply to AMIs distributed to this Region.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAmiTags() const { return m_amiTags; }
    inline bool AmiTagsHasBeenSet() const { return m_amiTagsHasBeenSet; }
    template<typename AmiTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetAmiTags(AmiTagsT&& value) { m_amiTagsHasBeenSet = true; m_amiTags = std::forward<AmiTagsT>(value); }
    template<typename AmiTagsT = Aws::Map<Aws::String, Aws::String>>
    AmiDistributionConfiguration& WithAmiTags(AmiTagsT&& value) { SetAmiTags(std::forward<AmiTagsT>(value)); return *this;}
    template<typename AmiTagsKeyT = Aws::String, typename AmiTagsValueT = Aws::String>
    AmiDistributionConfiguration& AddAmiTags(AmiTagsKeyT&& key, AmiTagsValueT&& value) {
      m_amiTagsHasBeenSet = true; m_amiTags.emplace(std::forward<AmiTagsKeyT>(key), std::forward<AmiTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier used to encrypt the distributed image.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    AmiDistributionConfiguration& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch permissions can be used to configure which Amazon Web Services
     * accounts can use the AMI to launch instances.</p>
     */
    inline const LaunchPermissionConfiguration& GetLaunchPermission() const { return m_launchPermission; }
    inline bool LaunchPermissionHasBeenSet() const { return m_launchPermissionHasBeenSet; }
    template<typename LaunchPermissionT = LaunchPermissionConfiguration>
    void SetLaunchPermission(LaunchPermissionT&& value) { m_launchPermissionHasBeenSet = true; m_launchPermission = std::forward<LaunchPermissionT>(value); }
    template<typename LaunchPermissionT = LaunchPermissionConfiguration>
    AmiDistributionConfiguration& WithLaunchPermission(LaunchPermissionT&& value) { SetLaunchPermission(std::forward<LaunchPermissionT>(value)); return *this;}
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
