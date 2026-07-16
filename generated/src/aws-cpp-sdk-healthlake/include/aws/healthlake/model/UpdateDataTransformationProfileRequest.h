/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>

#include <utility>

namespace Aws {
namespace HealthLake {
namespace Model {

/**
 * <p>The request parameters for the <code>UpdateDataTransformationProfile</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/UpdateDataTransformationProfileRequest">AWS
 * API Reference</a></p>
 */
class UpdateDataTransformationProfileRequest : public HealthLakeRequest {
 public:
  AWS_HEALTHLAKE_API UpdateDataTransformationProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateDataTransformationProfile"; }

  AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

  AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the profile to update.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  UpdateDataTransformationProfileRequest& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new profile content for the DRAFT version. This is a full replacement of
   * all profile files.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetProfileMapping() const { return m_profileMapping; }
  inline bool ProfileMappingHasBeenSet() const { return m_profileMappingHasBeenSet; }
  template <typename ProfileMappingT = Aws::Map<Aws::String, Aws::String>>
  void SetProfileMapping(ProfileMappingT&& value) {
    m_profileMappingHasBeenSet = true;
    m_profileMapping = std::forward<ProfileMappingT>(value);
  }
  template <typename ProfileMappingT = Aws::Map<Aws::String, Aws::String>>
  UpdateDataTransformationProfileRequest& WithProfileMapping(ProfileMappingT&& value) {
    SetProfileMapping(std::forward<ProfileMappingT>(value));
    return *this;
  }
  template <typename ProfileMappingKeyT = Aws::String, typename ProfileMappingValueT = Aws::String>
  UpdateDataTransformationProfileRequest& AddProfileMapping(ProfileMappingKeyT&& key, ProfileMappingValueT&& value) {
    m_profileMappingHasBeenSet = true;
    m_profileMapping.emplace(std::forward<ProfileMappingKeyT>(key), std::forward<ProfileMappingValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of what changed in this update.</p>
   */
  inline const Aws::String& GetChangeDescription() const { return m_changeDescription; }
  inline bool ChangeDescriptionHasBeenSet() const { return m_changeDescriptionHasBeenSet; }
  template <typename ChangeDescriptionT = Aws::String>
  void SetChangeDescription(ChangeDescriptionT&& value) {
    m_changeDescriptionHasBeenSet = true;
    m_changeDescription = std::forward<ChangeDescriptionT>(value);
  }
  template <typename ChangeDescriptionT = Aws::String>
  UpdateDataTransformationProfileRequest& WithChangeDescription(ChangeDescriptionT&& value) {
    SetChangeDescription(std::forward<ChangeDescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileId;

  Aws::Map<Aws::String, Aws::String> m_profileMapping;

  Aws::String m_changeDescription;
  bool m_profileIdHasBeenSet = false;
  bool m_profileMappingHasBeenSet = false;
  bool m_changeDescriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
