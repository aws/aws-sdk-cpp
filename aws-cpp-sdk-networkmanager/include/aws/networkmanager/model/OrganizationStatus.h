/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/AccountStatus.h>
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
namespace NetworkManager
{
namespace Model
{

  class AWS_NETWORKMANAGER_API OrganizationStatus
  {
  public:
    OrganizationStatus();
    OrganizationStatus(Aws::Utils::Json::JsonView jsonValue);
    OrganizationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    
    inline OrganizationStatus& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    
    inline OrganizationStatus& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    
    inline OrganizationStatus& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    
    inline const Aws::String& GetOrganizationAwsServiceAccessStatus() const{ return m_organizationAwsServiceAccessStatus; }

    
    inline bool OrganizationAwsServiceAccessStatusHasBeenSet() const { return m_organizationAwsServiceAccessStatusHasBeenSet; }

    
    inline void SetOrganizationAwsServiceAccessStatus(const Aws::String& value) { m_organizationAwsServiceAccessStatusHasBeenSet = true; m_organizationAwsServiceAccessStatus = value; }

    
    inline void SetOrganizationAwsServiceAccessStatus(Aws::String&& value) { m_organizationAwsServiceAccessStatusHasBeenSet = true; m_organizationAwsServiceAccessStatus = std::move(value); }

    
    inline void SetOrganizationAwsServiceAccessStatus(const char* value) { m_organizationAwsServiceAccessStatusHasBeenSet = true; m_organizationAwsServiceAccessStatus.assign(value); }

    
    inline OrganizationStatus& WithOrganizationAwsServiceAccessStatus(const Aws::String& value) { SetOrganizationAwsServiceAccessStatus(value); return *this;}

    
    inline OrganizationStatus& WithOrganizationAwsServiceAccessStatus(Aws::String&& value) { SetOrganizationAwsServiceAccessStatus(std::move(value)); return *this;}

    
    inline OrganizationStatus& WithOrganizationAwsServiceAccessStatus(const char* value) { SetOrganizationAwsServiceAccessStatus(value); return *this;}


    
    inline const Aws::String& GetSLRDeploymentStatus() const{ return m_sLRDeploymentStatus; }

    
    inline bool SLRDeploymentStatusHasBeenSet() const { return m_sLRDeploymentStatusHasBeenSet; }

    
    inline void SetSLRDeploymentStatus(const Aws::String& value) { m_sLRDeploymentStatusHasBeenSet = true; m_sLRDeploymentStatus = value; }

    
    inline void SetSLRDeploymentStatus(Aws::String&& value) { m_sLRDeploymentStatusHasBeenSet = true; m_sLRDeploymentStatus = std::move(value); }

    
    inline void SetSLRDeploymentStatus(const char* value) { m_sLRDeploymentStatusHasBeenSet = true; m_sLRDeploymentStatus.assign(value); }

    
    inline OrganizationStatus& WithSLRDeploymentStatus(const Aws::String& value) { SetSLRDeploymentStatus(value); return *this;}

    
    inline OrganizationStatus& WithSLRDeploymentStatus(Aws::String&& value) { SetSLRDeploymentStatus(std::move(value)); return *this;}

    
    inline OrganizationStatus& WithSLRDeploymentStatus(const char* value) { SetSLRDeploymentStatus(value); return *this;}


    
    inline const Aws::Vector<AccountStatus>& GetAccountStatusList() const{ return m_accountStatusList; }

    
    inline bool AccountStatusListHasBeenSet() const { return m_accountStatusListHasBeenSet; }

    
    inline void SetAccountStatusList(const Aws::Vector<AccountStatus>& value) { m_accountStatusListHasBeenSet = true; m_accountStatusList = value; }

    
    inline void SetAccountStatusList(Aws::Vector<AccountStatus>&& value) { m_accountStatusListHasBeenSet = true; m_accountStatusList = std::move(value); }

    
    inline OrganizationStatus& WithAccountStatusList(const Aws::Vector<AccountStatus>& value) { SetAccountStatusList(value); return *this;}

    
    inline OrganizationStatus& WithAccountStatusList(Aws::Vector<AccountStatus>&& value) { SetAccountStatusList(std::move(value)); return *this;}

    
    inline OrganizationStatus& AddAccountStatusList(const AccountStatus& value) { m_accountStatusListHasBeenSet = true; m_accountStatusList.push_back(value); return *this; }

    
    inline OrganizationStatus& AddAccountStatusList(AccountStatus&& value) { m_accountStatusListHasBeenSet = true; m_accountStatusList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet;

    Aws::String m_organizationAwsServiceAccessStatus;
    bool m_organizationAwsServiceAccessStatusHasBeenSet;

    Aws::String m_sLRDeploymentStatus;
    bool m_sLRDeploymentStatusHasBeenSet;

    Aws::Vector<AccountStatus> m_accountStatusList;
    bool m_accountStatusListHasBeenSet;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
