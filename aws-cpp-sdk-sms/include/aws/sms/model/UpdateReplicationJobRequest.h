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
  class AWS_SMS_API UpdateReplicationJobRequest : public SMSRequest
  {
  public:
    UpdateReplicationJobRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReplicationJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetReplicationJobId() const{ return m_replicationJobId; }

    
    inline void SetReplicationJobId(const Aws::String& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = value; }

    
    inline void SetReplicationJobId(Aws::String&& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = std::move(value); }

    
    inline void SetReplicationJobId(const char* value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId.assign(value); }

    
    inline UpdateReplicationJobRequest& WithReplicationJobId(const Aws::String& value) { SetReplicationJobId(value); return *this;}

    
    inline UpdateReplicationJobRequest& WithReplicationJobId(Aws::String&& value) { SetReplicationJobId(std::move(value)); return *this;}

    
    inline UpdateReplicationJobRequest& WithReplicationJobId(const char* value) { SetReplicationJobId(value); return *this;}


    
    inline int GetFrequency() const{ return m_frequency; }

    
    inline void SetFrequency(int value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    
    inline UpdateReplicationJobRequest& WithFrequency(int value) { SetFrequency(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetNextReplicationRunStartTime() const{ return m_nextReplicationRunStartTime; }

    
    inline void SetNextReplicationRunStartTime(const Aws::Utils::DateTime& value) { m_nextReplicationRunStartTimeHasBeenSet = true; m_nextReplicationRunStartTime = value; }

    
    inline void SetNextReplicationRunStartTime(Aws::Utils::DateTime&& value) { m_nextReplicationRunStartTimeHasBeenSet = true; m_nextReplicationRunStartTime = std::move(value); }

    
    inline UpdateReplicationJobRequest& WithNextReplicationRunStartTime(const Aws::Utils::DateTime& value) { SetNextReplicationRunStartTime(value); return *this;}

    
    inline UpdateReplicationJobRequest& WithNextReplicationRunStartTime(Aws::Utils::DateTime&& value) { SetNextReplicationRunStartTime(std::move(value)); return *this;}


    
    inline const LicenseType& GetLicenseType() const{ return m_licenseType; }

    
    inline void SetLicenseType(const LicenseType& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }

    
    inline void SetLicenseType(LicenseType&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }

    
    inline UpdateReplicationJobRequest& WithLicenseType(const LicenseType& value) { SetLicenseType(value); return *this;}

    
    inline UpdateReplicationJobRequest& WithLicenseType(LicenseType&& value) { SetLicenseType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    
    inline UpdateReplicationJobRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    
    inline UpdateReplicationJobRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    
    inline UpdateReplicationJobRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline UpdateReplicationJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline UpdateReplicationJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline UpdateReplicationJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_replicationJobId;
    bool m_replicationJobIdHasBeenSet;

    int m_frequency;
    bool m_frequencyHasBeenSet;

    Aws::Utils::DateTime m_nextReplicationRunStartTime;
    bool m_nextReplicationRunStartTimeHasBeenSet;

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
