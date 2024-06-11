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
    AWS_DATAZONE_API UserProfileDetails();
    AWS_DATAZONE_API UserProfileDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API UserProfileDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IAM details included in the user profile details.</p>
     */
    inline const IamUserProfileDetails& GetIam() const{ return m_iam; }
    inline bool IamHasBeenSet() const { return m_iamHasBeenSet; }
    inline void SetIam(const IamUserProfileDetails& value) { m_iamHasBeenSet = true; m_iam = value; }
    inline void SetIam(IamUserProfileDetails&& value) { m_iamHasBeenSet = true; m_iam = std::move(value); }
    inline UserProfileDetails& WithIam(const IamUserProfileDetails& value) { SetIam(value); return *this;}
    inline UserProfileDetails& WithIam(IamUserProfileDetails&& value) { SetIam(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The single sign-on details included in the user profile details.</p>
     */
    inline const SsoUserProfileDetails& GetSso() const{ return m_sso; }
    inline bool SsoHasBeenSet() const { return m_ssoHasBeenSet; }
    inline void SetSso(const SsoUserProfileDetails& value) { m_ssoHasBeenSet = true; m_sso = value; }
    inline void SetSso(SsoUserProfileDetails&& value) { m_ssoHasBeenSet = true; m_sso = std::move(value); }
    inline UserProfileDetails& WithSso(const SsoUserProfileDetails& value) { SetSso(value); return *this;}
    inline UserProfileDetails& WithSso(SsoUserProfileDetails&& value) { SetSso(std::move(value)); return *this;}
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
