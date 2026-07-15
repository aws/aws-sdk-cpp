/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/CreateDataTransformationProfileSource.h>
#include <aws/healthlake/model/SourceFormat.h>

#include <utility>

namespace Aws {
namespace HealthLake {
namespace Model {

/**
 * <p>The request parameters for the <code>CreateDataTransformationProfile</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/CreateDataTransformationProfileRequest">AWS
 * API Reference</a></p>
 */
class CreateDataTransformationProfileRequest : public HealthLakeRequest {
 public:
  AWS_HEALTHLAKE_API CreateDataTransformationProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDataTransformationProfile"; }

  AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

  AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The source data format that this profile converts from (Consolidated Clinical
   * Document Architecture (C-CDA) or Comma-separated values (CSV)).</p>
   */
  inline SourceFormat GetSourceFormat() const { return m_sourceFormat; }
  inline bool SourceFormatHasBeenSet() const { return m_sourceFormatHasBeenSet; }
  inline void SetSourceFormat(SourceFormat value) {
    m_sourceFormatHasBeenSet = true;
    m_sourceFormat = value;
  }
  inline CreateDataTransformationProfileRequest& WithSourceFormat(SourceFormat value) {
    SetSourceFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source for the initial profile content. Specify a built-in starter
   * profile, an existing profile version to clone, raw profile content for CI/CD
   * workflows, or a sample data file in Amazon S3.</p>
   */
  inline const CreateDataTransformationProfileSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = CreateDataTransformationProfileSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = CreateDataTransformationProfileSource>
  CreateDataTransformationProfileRequest& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Key Management Service (AWS KMS) key identifier used to encrypt the
   * profile content at rest.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  CreateDataTransformationProfileRequest& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the profile's purpose.</p>
   */
  inline const Aws::String& GetProfileDescription() const { return m_profileDescription; }
  inline bool ProfileDescriptionHasBeenSet() const { return m_profileDescriptionHasBeenSet; }
  template <typename ProfileDescriptionT = Aws::String>
  void SetProfileDescription(ProfileDescriptionT&& value) {
    m_profileDescriptionHasBeenSet = true;
    m_profileDescription = std::forward<ProfileDescriptionT>(value);
  }
  template <typename ProfileDescriptionT = Aws::String>
  CreateDataTransformationProfileRequest& WithProfileDescription(ProfileDescriptionT&& value) {
    SetProfileDescription(std::forward<ProfileDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A name for the data transformation profile.</p>
   */
  inline const Aws::String& GetProfileName() const { return m_profileName; }
  inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
  template <typename ProfileNameT = Aws::String>
  void SetProfileName(ProfileNameT&& value) {
    m_profileNameHasBeenSet = true;
    m_profileName = std::forward<ProfileNameT>(value);
  }
  template <typename ProfileNameT = Aws::String>
  CreateDataTransformationProfileRequest& WithProfileName(ProfileNameT&& value) {
    SetProfileName(std::forward<ProfileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to associate with the profile at creation time.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateDataTransformationProfileRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateDataTransformationProfileRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request, the service
   * ignores the request but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateDataTransformationProfileRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  SourceFormat m_sourceFormat{SourceFormat::NOT_SET};

  CreateDataTransformationProfileSource m_source;

  Aws::String m_kmsKeyId;

  Aws::String m_profileDescription;

  Aws::String m_profileName;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_sourceFormatHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_profileDescriptionHasBeenSet = false;
  bool m_profileNameHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
