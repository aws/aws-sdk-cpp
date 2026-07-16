/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/SourceFormat.h>

#include <utility>

namespace Aws {
namespace HealthLake {
namespace Model {

/**
 * <p>The request parameters for the <code>PublishDataTransformationProfile</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/PublishDataTransformationProfileRequest">AWS
 * API Reference</a></p>
 */
class PublishDataTransformationProfileRequest : public HealthLakeRequest {
 public:
  AWS_HEALTHLAKE_API PublishDataTransformationProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PublishDataTransformationProfile"; }

  AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

  AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the profile to publish.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  PublishDataTransformationProfileRequest& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source data format of the profile.</p>
   */
  inline SourceFormat GetSourceFormat() const { return m_sourceFormat; }
  inline bool SourceFormatHasBeenSet() const { return m_sourceFormatHasBeenSet; }
  inline void SetSourceFormat(SourceFormat value) {
    m_sourceFormatHasBeenSet = true;
    m_sourceFormat = value;
  }
  inline PublishDataTransformationProfileRequest& WithSourceFormat(SourceFormat value) {
    SetSourceFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version number of a previously published version to republish as the new
   * latest version. Use this parameter for rollback scenarios. If you omit this
   * parameter, the service publishes the current DRAFT version.</p>
   */
  inline int GetFromExistingVersion() const { return m_fromExistingVersion; }
  inline bool FromExistingVersionHasBeenSet() const { return m_fromExistingVersionHasBeenSet; }
  inline void SetFromExistingVersion(int value) {
    m_fromExistingVersionHasBeenSet = true;
    m_fromExistingVersion = value;
  }
  inline PublishDataTransformationProfileRequest& WithFromExistingVersion(int value) {
    SetFromExistingVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of what changed or why this version is being published.</p>
   */
  inline const Aws::String& GetChangeDescription() const { return m_changeDescription; }
  inline bool ChangeDescriptionHasBeenSet() const { return m_changeDescriptionHasBeenSet; }
  template <typename ChangeDescriptionT = Aws::String>
  void SetChangeDescription(ChangeDescriptionT&& value) {
    m_changeDescriptionHasBeenSet = true;
    m_changeDescription = std::forward<ChangeDescriptionT>(value);
  }
  template <typename ChangeDescriptionT = Aws::String>
  PublishDataTransformationProfileRequest& WithChangeDescription(ChangeDescriptionT&& value) {
    SetChangeDescription(std::forward<ChangeDescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileId;

  SourceFormat m_sourceFormat{SourceFormat::NOT_SET};

  int m_fromExistingVersion{0};

  Aws::String m_changeDescription;
  bool m_profileIdHasBeenSet = false;
  bool m_sourceFormatHasBeenSet = false;
  bool m_fromExistingVersionHasBeenSet = false;
  bool m_changeDescriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
