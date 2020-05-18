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
   * <p>The name and type of entity who performed the action on the affected
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UserIdentity">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API UserIdentity
  {
  public:
    UserIdentity();
    UserIdentity(Aws::Utils::Json::JsonView jsonValue);
    UserIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AssumedRole& GetAssumedRole() const{ return m_assumedRole; }

    
    inline bool AssumedRoleHasBeenSet() const { return m_assumedRoleHasBeenSet; }

    
    inline void SetAssumedRole(const AssumedRole& value) { m_assumedRoleHasBeenSet = true; m_assumedRole = value; }

    
    inline void SetAssumedRole(AssumedRole&& value) { m_assumedRoleHasBeenSet = true; m_assumedRole = std::move(value); }

    
    inline UserIdentity& WithAssumedRole(const AssumedRole& value) { SetAssumedRole(value); return *this;}

    
    inline UserIdentity& WithAssumedRole(AssumedRole&& value) { SetAssumedRole(std::move(value)); return *this;}


    
    inline const AwsAccount& GetAwsAccount() const{ return m_awsAccount; }

    
    inline bool AwsAccountHasBeenSet() const { return m_awsAccountHasBeenSet; }

    
    inline void SetAwsAccount(const AwsAccount& value) { m_awsAccountHasBeenSet = true; m_awsAccount = value; }

    
    inline void SetAwsAccount(AwsAccount&& value) { m_awsAccountHasBeenSet = true; m_awsAccount = std::move(value); }

    
    inline UserIdentity& WithAwsAccount(const AwsAccount& value) { SetAwsAccount(value); return *this;}

    
    inline UserIdentity& WithAwsAccount(AwsAccount&& value) { SetAwsAccount(std::move(value)); return *this;}


    
    inline const AwsService& GetAwsService() const{ return m_awsService; }

    
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }

    
    inline void SetAwsService(const AwsService& value) { m_awsServiceHasBeenSet = true; m_awsService = value; }

    
    inline void SetAwsService(AwsService&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::move(value); }

    
    inline UserIdentity& WithAwsService(const AwsService& value) { SetAwsService(value); return *this;}

    
    inline UserIdentity& WithAwsService(AwsService&& value) { SetAwsService(std::move(value)); return *this;}


    
    inline const FederatedUser& GetFederatedUser() const{ return m_federatedUser; }

    
    inline bool FederatedUserHasBeenSet() const { return m_federatedUserHasBeenSet; }

    
    inline void SetFederatedUser(const FederatedUser& value) { m_federatedUserHasBeenSet = true; m_federatedUser = value; }

    
    inline void SetFederatedUser(FederatedUser&& value) { m_federatedUserHasBeenSet = true; m_federatedUser = std::move(value); }

    
    inline UserIdentity& WithFederatedUser(const FederatedUser& value) { SetFederatedUser(value); return *this;}

    
    inline UserIdentity& WithFederatedUser(FederatedUser&& value) { SetFederatedUser(std::move(value)); return *this;}


    
    inline const IamUser& GetIamUser() const{ return m_iamUser; }

    
    inline bool IamUserHasBeenSet() const { return m_iamUserHasBeenSet; }

    
    inline void SetIamUser(const IamUser& value) { m_iamUserHasBeenSet = true; m_iamUser = value; }

    
    inline void SetIamUser(IamUser&& value) { m_iamUserHasBeenSet = true; m_iamUser = std::move(value); }

    
    inline UserIdentity& WithIamUser(const IamUser& value) { SetIamUser(value); return *this;}

    
    inline UserIdentity& WithIamUser(IamUser&& value) { SetIamUser(std::move(value)); return *this;}


    
    inline const UserIdentityRoot& GetRoot() const{ return m_root; }

    
    inline bool RootHasBeenSet() const { return m_rootHasBeenSet; }

    
    inline void SetRoot(const UserIdentityRoot& value) { m_rootHasBeenSet = true; m_root = value; }

    
    inline void SetRoot(UserIdentityRoot&& value) { m_rootHasBeenSet = true; m_root = std::move(value); }

    
    inline UserIdentity& WithRoot(const UserIdentityRoot& value) { SetRoot(value); return *this;}

    
    inline UserIdentity& WithRoot(UserIdentityRoot&& value) { SetRoot(std::move(value)); return *this;}


    
    inline const UserIdentityType& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const UserIdentityType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(UserIdentityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline UserIdentity& WithType(const UserIdentityType& value) { SetType(value); return *this;}

    
    inline UserIdentity& WithType(UserIdentityType&& value) { SetType(std::move(value)); return *this;}

  private:

    AssumedRole m_assumedRole;
    bool m_assumedRoleHasBeenSet;

    AwsAccount m_awsAccount;
    bool m_awsAccountHasBeenSet;

    AwsService m_awsService;
    bool m_awsServiceHasBeenSet;

    FederatedUser m_federatedUser;
    bool m_federatedUserHasBeenSet;

    IamUser m_iamUser;
    bool m_iamUserHasBeenSet;

    UserIdentityRoot m_root;
    bool m_rootHasBeenSet;

    UserIdentityType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
