﻿/*
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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/SoftwareToUpdate.h>
#include <aws/greengrass/model/UpdateAgentLogLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/UpdateTargetsArchitecture.h>
#include <aws/greengrass/model/UpdateTargetsOperatingSystem.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API CreateSoftwareUpdateJobRequest : public GreengrassRequest
  {
  public:
    CreateSoftwareUpdateJobRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSoftwareUpdateJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * The client token used to request idempotent operations.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateSoftwareUpdateJobRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateSoftwareUpdateJobRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateSoftwareUpdateJobRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


    
    inline const Aws::String& GetS3UrlSignerRole() const{ return m_s3UrlSignerRole; }

    
    inline void SetS3UrlSignerRole(const Aws::String& value) { m_s3UrlSignerRoleHasBeenSet = true; m_s3UrlSignerRole = value; }

    
    inline void SetS3UrlSignerRole(Aws::String&& value) { m_s3UrlSignerRoleHasBeenSet = true; m_s3UrlSignerRole = std::move(value); }

    
    inline void SetS3UrlSignerRole(const char* value) { m_s3UrlSignerRoleHasBeenSet = true; m_s3UrlSignerRole.assign(value); }

    
    inline CreateSoftwareUpdateJobRequest& WithS3UrlSignerRole(const Aws::String& value) { SetS3UrlSignerRole(value); return *this;}

    
    inline CreateSoftwareUpdateJobRequest& WithS3UrlSignerRole(Aws::String&& value) { SetS3UrlSignerRole(std::move(value)); return *this;}

    
    inline CreateSoftwareUpdateJobRequest& WithS3UrlSignerRole(const char* value) { SetS3UrlSignerRole(value); return *this;}


    
    inline const SoftwareToUpdate& GetSoftwareToUpdate() const{ return m_softwareToUpdate; }

    
    inline void SetSoftwareToUpdate(const SoftwareToUpdate& value) { m_softwareToUpdateHasBeenSet = true; m_softwareToUpdate = value; }

    
    inline void SetSoftwareToUpdate(SoftwareToUpdate&& value) { m_softwareToUpdateHasBeenSet = true; m_softwareToUpdate = std::move(value); }

    
    inline CreateSoftwareUpdateJobRequest& WithSoftwareToUpdate(const SoftwareToUpdate& value) { SetSoftwareToUpdate(value); return *this;}

    
    inline CreateSoftwareUpdateJobRequest& WithSoftwareToUpdate(SoftwareToUpdate&& value) { SetSoftwareToUpdate(std::move(value)); return *this;}


    
    inline const UpdateAgentLogLevel& GetUpdateAgentLogLevel() const{ return m_updateAgentLogLevel; }

    
    inline void SetUpdateAgentLogLevel(const UpdateAgentLogLevel& value) { m_updateAgentLogLevelHasBeenSet = true; m_updateAgentLogLevel = value; }

    
    inline void SetUpdateAgentLogLevel(UpdateAgentLogLevel&& value) { m_updateAgentLogLevelHasBeenSet = true; m_updateAgentLogLevel = std::move(value); }

    
    inline CreateSoftwareUpdateJobRequest& WithUpdateAgentLogLevel(const UpdateAgentLogLevel& value) { SetUpdateAgentLogLevel(value); return *this;}

    
    inline CreateSoftwareUpdateJobRequest& WithUpdateAgentLogLevel(UpdateAgentLogLevel&& value) { SetUpdateAgentLogLevel(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetUpdateTargets() const{ return m_updateTargets; }

    
    inline void SetUpdateTargets(const Aws::Vector<Aws::String>& value) { m_updateTargetsHasBeenSet = true; m_updateTargets = value; }

    
    inline void SetUpdateTargets(Aws::Vector<Aws::String>&& value) { m_updateTargetsHasBeenSet = true; m_updateTargets = std::move(value); }

    
    inline CreateSoftwareUpdateJobRequest& WithUpdateTargets(const Aws::Vector<Aws::String>& value) { SetUpdateTargets(value); return *this;}

    
    inline CreateSoftwareUpdateJobRequest& WithUpdateTargets(Aws::Vector<Aws::String>&& value) { SetUpdateTargets(std::move(value)); return *this;}

    
    inline CreateSoftwareUpdateJobRequest& AddUpdateTargets(const Aws::String& value) { m_updateTargetsHasBeenSet = true; m_updateTargets.push_back(value); return *this; }

    
    inline CreateSoftwareUpdateJobRequest& AddUpdateTargets(Aws::String&& value) { m_updateTargetsHasBeenSet = true; m_updateTargets.push_back(std::move(value)); return *this; }

    
    inline CreateSoftwareUpdateJobRequest& AddUpdateTargets(const char* value) { m_updateTargetsHasBeenSet = true; m_updateTargets.push_back(value); return *this; }


    
    inline const UpdateTargetsArchitecture& GetUpdateTargetsArchitecture() const{ return m_updateTargetsArchitecture; }

    
    inline void SetUpdateTargetsArchitecture(const UpdateTargetsArchitecture& value) { m_updateTargetsArchitectureHasBeenSet = true; m_updateTargetsArchitecture = value; }

    
    inline void SetUpdateTargetsArchitecture(UpdateTargetsArchitecture&& value) { m_updateTargetsArchitectureHasBeenSet = true; m_updateTargetsArchitecture = std::move(value); }

    
    inline CreateSoftwareUpdateJobRequest& WithUpdateTargetsArchitecture(const UpdateTargetsArchitecture& value) { SetUpdateTargetsArchitecture(value); return *this;}

    
    inline CreateSoftwareUpdateJobRequest& WithUpdateTargetsArchitecture(UpdateTargetsArchitecture&& value) { SetUpdateTargetsArchitecture(std::move(value)); return *this;}


    
    inline const UpdateTargetsOperatingSystem& GetUpdateTargetsOperatingSystem() const{ return m_updateTargetsOperatingSystem; }

    
    inline void SetUpdateTargetsOperatingSystem(const UpdateTargetsOperatingSystem& value) { m_updateTargetsOperatingSystemHasBeenSet = true; m_updateTargetsOperatingSystem = value; }

    
    inline void SetUpdateTargetsOperatingSystem(UpdateTargetsOperatingSystem&& value) { m_updateTargetsOperatingSystemHasBeenSet = true; m_updateTargetsOperatingSystem = std::move(value); }

    
    inline CreateSoftwareUpdateJobRequest& WithUpdateTargetsOperatingSystem(const UpdateTargetsOperatingSystem& value) { SetUpdateTargetsOperatingSystem(value); return *this;}

    
    inline CreateSoftwareUpdateJobRequest& WithUpdateTargetsOperatingSystem(UpdateTargetsOperatingSystem&& value) { SetUpdateTargetsOperatingSystem(std::move(value)); return *this;}

  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet;

    Aws::String m_s3UrlSignerRole;
    bool m_s3UrlSignerRoleHasBeenSet;

    SoftwareToUpdate m_softwareToUpdate;
    bool m_softwareToUpdateHasBeenSet;

    UpdateAgentLogLevel m_updateAgentLogLevel;
    bool m_updateAgentLogLevelHasBeenSet;

    Aws::Vector<Aws::String> m_updateTargets;
    bool m_updateTargetsHasBeenSet;

    UpdateTargetsArchitecture m_updateTargetsArchitecture;
    bool m_updateTargetsArchitectureHasBeenSet;

    UpdateTargetsOperatingSystem m_updateTargetsOperatingSystem;
    bool m_updateTargetsOperatingSystemHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
