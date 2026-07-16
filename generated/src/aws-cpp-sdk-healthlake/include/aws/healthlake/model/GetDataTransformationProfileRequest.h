/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>

#include <utility>

namespace Aws {
namespace HealthLake {
namespace Model {

/**
 * <p>The request parameters for the <code>GetDataTransformationProfile</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/GetDataTransformationProfileRequest">AWS
 * API Reference</a></p>
 */
class GetDataTransformationProfileRequest : public HealthLakeRequest {
 public:
  AWS_HEALTHLAKE_API GetDataTransformationProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDataTransformationProfile"; }

  AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

  AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the profile to retrieve.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  GetDataTransformationProfileRequest& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version number to retrieve. Specify 0 to retrieve the DRAFT version. If
   * you omit this parameter, the service returns the latest published version.</p>
   */
  inline int GetProfileVersion() const { return m_profileVersion; }
  inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }
  inline void SetProfileVersion(int value) {
    m_profileVersionHasBeenSet = true;
    m_profileVersion = value;
  }
  inline GetDataTransformationProfileRequest& WithProfileVersion(int value) {
    SetProfileVersion(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileId;

  int m_profileVersion{0};
  bool m_profileIdHasBeenSet = false;
  bool m_profileVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
