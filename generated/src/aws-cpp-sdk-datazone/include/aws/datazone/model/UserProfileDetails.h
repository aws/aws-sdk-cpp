/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/IamUserProfileDetails.h>
#include <aws/datazone/model/SsoUserProfileDetails.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the user profile in Amazon DataZone.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UserProfileDetails">AWS
   * API Reference</a></p>
   */
  class UserProfileDetails
  {
  public:
    AWS_DATAZONE_API UserProfileDetails() = default;
    AWS_DATAZONE_API UserProfileDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API UserProfileDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IAM details included in the user profile details.</p>
     */
    inline const IamUserProfileDetails& GetIam() const { return m_iam; }
    inline bool IamHasBeenSet() const { return m_iamHasBeenSet; }
    template<typename IamT = IamUserProfileDetails>
    void SetIam(IamT&& value) { m_iamHasBeenSet = true; m_iam = std::forward<IamT>(value); }
    template<typename IamT = IamUserProfileDetails>
    UserProfileDetails& WithIam(IamT&& value) { SetIam(std::forward<IamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The single sign-on details included in the user profile details.</p>
     */
    inline const SsoUserProfileDetails& GetSso() const { return m_sso; }
    inline bool SsoHasBeenSet() const { return m_ssoHasBeenSet; }
    template<typename SsoT = SsoUserProfileDetails>
    void SetSso(SsoT&& value) { m_ssoHasBeenSet = true; m_sso = std::forward<SsoT>(value); }
    template<typename SsoT = SsoUserProfileDetails>
    UserProfileDetails& WithSso(SsoT&& value) { SetSso(std::forward<SsoT>(value)); return *this;}
    ///@}
  private:

    IamUserProfileDetails m_iam;
    bool m_iamHasBeenSet = false;

    SsoUserProfileDetails m_sso;
    bool m_ssoHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
