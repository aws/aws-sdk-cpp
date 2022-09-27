/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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

  class AWS_NETWORKMANAGER_API AccountStatus
  {
  public:
    AccountStatus();
    AccountStatus(Aws::Utils::Json::JsonView jsonValue);
    AccountStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline AccountStatus& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline AccountStatus& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    
    inline AccountStatus& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    
    inline const Aws::String& GetSLRDeploymentStatus() const{ return m_sLRDeploymentStatus; }

    
    inline bool SLRDeploymentStatusHasBeenSet() const { return m_sLRDeploymentStatusHasBeenSet; }

    
    inline void SetSLRDeploymentStatus(const Aws::String& value) { m_sLRDeploymentStatusHasBeenSet = true; m_sLRDeploymentStatus = value; }

    
    inline void SetSLRDeploymentStatus(Aws::String&& value) { m_sLRDeploymentStatusHasBeenSet = true; m_sLRDeploymentStatus = std::move(value); }

    
    inline void SetSLRDeploymentStatus(const char* value) { m_sLRDeploymentStatusHasBeenSet = true; m_sLRDeploymentStatus.assign(value); }

    
    inline AccountStatus& WithSLRDeploymentStatus(const Aws::String& value) { SetSLRDeploymentStatus(value); return *this;}

    
    inline AccountStatus& WithSLRDeploymentStatus(Aws::String&& value) { SetSLRDeploymentStatus(std::move(value)); return *this;}

    
    inline AccountStatus& WithSLRDeploymentStatus(const char* value) { SetSLRDeploymentStatus(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_sLRDeploymentStatus;
    bool m_sLRDeploymentStatusHasBeenSet;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
