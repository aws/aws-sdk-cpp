/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/AssumedRole.h>
#include <aws/macie2/model/AwsAccount.h>
#include <aws/macie2/model/AwsService.h>
#include <aws/macie2/model/FederatedUser.h>
#include <aws/macie2/model/IamUser.h>
#include <aws/macie2/model/UserIdentityRoot.h>
#include <aws/macie2/model/UserIdentityType.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the type and other characteristics of an entity
   * that performed an action on an affected resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UserIdentity">AWS
   * API Reference</a></p>
   */
  class UserIdentity
  {
  public:
    AWS_MACIE2_API UserIdentity() = default;
    AWS_MACIE2_API UserIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API UserIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the action was performed with temporary security credentials that were
     * obtained using the AssumeRole operation of the Security Token Service (STS) API,
     * the identifiers, session context, and other details about the identity.</p>
     */
    inline const AssumedRole& GetAssumedRole() const { return m_assumedRole; }
    inline bool AssumedRoleHasBeenSet() const { return m_assumedRoleHasBeenSet; }
    template<typename AssumedRoleT = AssumedRole>
    void SetAssumedRole(AssumedRoleT&& value) { m_assumedRoleHasBeenSet = true; m_assumedRole = std::forward<AssumedRoleT>(value); }
    template<typename AssumedRoleT = AssumedRole>
    UserIdentity& WithAssumedRole(AssumedRoleT&& value) { SetAssumedRole(std::forward<AssumedRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the action was performed using the credentials for another Amazon Web
     * Services account, the details of that account.</p>
     */
    inline const AwsAccount& GetAwsAccount() const { return m_awsAccount; }
    inline bool AwsAccountHasBeenSet() const { return m_awsAccountHasBeenSet; }
    template<typename AwsAccountT = AwsAccount>
    void SetAwsAccount(AwsAccountT&& value) { m_awsAccountHasBeenSet = true; m_awsAccount = std::forward<AwsAccountT>(value); }
    template<typename AwsAccountT = AwsAccount>
    UserIdentity& WithAwsAccount(AwsAccountT&& value) { SetAwsAccount(std::forward<AwsAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the action was performed by an Amazon Web Services account that belongs to
     * an Amazon Web Services service, the name of the service.</p>
     */
    inline const AwsService& GetAwsService() const { return m_awsService; }
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }
    template<typename AwsServiceT = AwsService>
    void SetAwsService(AwsServiceT&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::forward<AwsServiceT>(value); }
    template<typename AwsServiceT = AwsService>
    UserIdentity& WithAwsService(AwsServiceT&& value) { SetAwsService(std::forward<AwsServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the action was performed with temporary security credentials that were
     * obtained using the GetFederationToken operation of the Security Token Service
     * (STS) API, the identifiers, session context, and other details about the
     * identity.</p>
     */
    inline const FederatedUser& GetFederatedUser() const { return m_federatedUser; }
    inline bool FederatedUserHasBeenSet() const { return m_federatedUserHasBeenSet; }
    template<typename FederatedUserT = FederatedUser>
    void SetFederatedUser(FederatedUserT&& value) { m_federatedUserHasBeenSet = true; m_federatedUser = std::forward<FederatedUserT>(value); }
    template<typename FederatedUserT = FederatedUser>
    UserIdentity& WithFederatedUser(FederatedUserT&& value) { SetFederatedUser(std::forward<FederatedUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the action was performed using the credentials for an Identity and Access
     * Management (IAM) user, the name and other details about the user.</p>
     */
    inline const IamUser& GetIamUser() const { return m_iamUser; }
    inline bool IamUserHasBeenSet() const { return m_iamUserHasBeenSet; }
    template<typename IamUserT = IamUser>
    void SetIamUser(IamUserT&& value) { m_iamUserHasBeenSet = true; m_iamUser = std::forward<IamUserT>(value); }
    template<typename IamUserT = IamUser>
    UserIdentity& WithIamUser(IamUserT&& value) { SetIamUser(std::forward<IamUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the action was performed using the credentials for your Amazon Web
     * Services account, the details of your account.</p>
     */
    inline const UserIdentityRoot& GetRoot() const { return m_root; }
    inline bool RootHasBeenSet() const { return m_rootHasBeenSet; }
    template<typename RootT = UserIdentityRoot>
    void SetRoot(RootT&& value) { m_rootHasBeenSet = true; m_root = std::forward<RootT>(value); }
    template<typename RootT = UserIdentityRoot>
    UserIdentity& WithRoot(RootT&& value) { SetRoot(std::forward<RootT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of entity that performed the action.</p>
     */
    inline UserIdentityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(UserIdentityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline UserIdentity& WithType(UserIdentityType value) { SetType(value); return *this;}
    ///@}
  private:

    AssumedRole m_assumedRole;
    bool m_assumedRoleHasBeenSet = false;

    AwsAccount m_awsAccount;
    bool m_awsAccountHasBeenSet = false;

    AwsService m_awsService;
    bool m_awsServiceHasBeenSet = false;

    FederatedUser m_federatedUser;
    bool m_federatedUserHasBeenSet = false;

    IamUser m_iamUser;
    bool m_iamUserHasBeenSet = false;

    UserIdentityRoot m_root;
    bool m_rootHasBeenSet = false;

    UserIdentityType m_type{UserIdentityType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
