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
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sms/model/LicenseType.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class AWS_SMS_API CreateReplicationJobRequest : public SMSRequest
  {
  public:
    CreateReplicationJobRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    
    inline CreateReplicationJobRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    
    inline CreateReplicationJobRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    
    inline CreateReplicationJobRequest& WithServerId(const char* value) { SetServerId(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetSeedReplicationTime() const{ return m_seedReplicationTime; }

    
    inline void SetSeedReplicationTime(const Aws::Utils::DateTime& value) { m_seedReplicationTimeHasBeenSet = true; m_seedReplicationTime = value; }

    
    inline void SetSeedReplicationTime(Aws::Utils::DateTime&& value) { m_seedReplicationTimeHasBeenSet = true; m_seedReplicationTime = std::move(value); }

    
    inline CreateReplicationJobRequest& WithSeedReplicationTime(const Aws::Utils::DateTime& value) { SetSeedReplicationTime(value); return *this;}

    
    inline CreateReplicationJobRequest& WithSeedReplicationTime(Aws::Utils::DateTime&& value) { SetSeedReplicationTime(std::move(value)); return *this;}


    
    inline int GetFrequency() const{ return m_frequency; }

    
    inline void SetFrequency(int value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    
    inline CreateReplicationJobRequest& WithFrequency(int value) { SetFrequency(value); return *this;}


    
    inline const LicenseType& GetLicenseType() const{ return m_licenseType; }

    
    inline void SetLicenseType(const LicenseType& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }

    
    inline void SetLicenseType(LicenseType&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }

    
    inline CreateReplicationJobRequest& WithLicenseType(const LicenseType& value) { SetLicenseType(value); return *this;}

    
    inline CreateReplicationJobRequest& WithLicenseType(LicenseType&& value) { SetLicenseType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    
    inline CreateReplicationJobRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    
    inline CreateReplicationJobRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    
    inline CreateReplicationJobRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline CreateReplicationJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline CreateReplicationJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline CreateReplicationJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;

    Aws::Utils::DateTime m_seedReplicationTime;
    bool m_seedReplicationTimeHasBeenSet;

    int m_frequency;
    bool m_frequencyHasBeenSet;

    LicenseType m_licenseType;
    bool m_licenseTypeHasBeenSet;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
