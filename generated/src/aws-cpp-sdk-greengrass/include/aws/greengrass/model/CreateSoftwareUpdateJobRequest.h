/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateSoftwareUpdateJobRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API CreateSoftwareUpdateJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSoftwareUpdateJob"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const { return m_amznClientToken; }
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }
    template<typename AmznClientTokenT = Aws::String>
    void SetAmznClientToken(AmznClientTokenT&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::forward<AmznClientTokenT>(value); }
    template<typename AmznClientTokenT = Aws::String>
    CreateSoftwareUpdateJobRequest& WithAmznClientToken(AmznClientTokenT&& value) { SetAmznClientToken(std::forward<AmznClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetS3UrlSignerRole() const { return m_s3UrlSignerRole; }
    inline bool S3UrlSignerRoleHasBeenSet() const { return m_s3UrlSignerRoleHasBeenSet; }
    template<typename S3UrlSignerRoleT = Aws::String>
    void SetS3UrlSignerRole(S3UrlSignerRoleT&& value) { m_s3UrlSignerRoleHasBeenSet = true; m_s3UrlSignerRole = std::forward<S3UrlSignerRoleT>(value); }
    template<typename S3UrlSignerRoleT = Aws::String>
    CreateSoftwareUpdateJobRequest& WithS3UrlSignerRole(S3UrlSignerRoleT&& value) { SetS3UrlSignerRole(std::forward<S3UrlSignerRoleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline SoftwareToUpdate GetSoftwareToUpdate() const { return m_softwareToUpdate; }
    inline bool SoftwareToUpdateHasBeenSet() const { return m_softwareToUpdateHasBeenSet; }
    inline void SetSoftwareToUpdate(SoftwareToUpdate value) { m_softwareToUpdateHasBeenSet = true; m_softwareToUpdate = value; }
    inline CreateSoftwareUpdateJobRequest& WithSoftwareToUpdate(SoftwareToUpdate value) { SetSoftwareToUpdate(value); return *this;}
    ///@}

    ///@{
    
    inline UpdateAgentLogLevel GetUpdateAgentLogLevel() const { return m_updateAgentLogLevel; }
    inline bool UpdateAgentLogLevelHasBeenSet() const { return m_updateAgentLogLevelHasBeenSet; }
    inline void SetUpdateAgentLogLevel(UpdateAgentLogLevel value) { m_updateAgentLogLevelHasBeenSet = true; m_updateAgentLogLevel = value; }
    inline CreateSoftwareUpdateJobRequest& WithUpdateAgentLogLevel(UpdateAgentLogLevel value) { SetUpdateAgentLogLevel(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetUpdateTargets() const { return m_updateTargets; }
    inline bool UpdateTargetsHasBeenSet() const { return m_updateTargetsHasBeenSet; }
    template<typename UpdateTargetsT = Aws::Vector<Aws::String>>
    void SetUpdateTargets(UpdateTargetsT&& value) { m_updateTargetsHasBeenSet = true; m_updateTargets = std::forward<UpdateTargetsT>(value); }
    template<typename UpdateTargetsT = Aws::Vector<Aws::String>>
    CreateSoftwareUpdateJobRequest& WithUpdateTargets(UpdateTargetsT&& value) { SetUpdateTargets(std::forward<UpdateTargetsT>(value)); return *this;}
    template<typename UpdateTargetsT = Aws::String>
    CreateSoftwareUpdateJobRequest& AddUpdateTargets(UpdateTargetsT&& value) { m_updateTargetsHasBeenSet = true; m_updateTargets.emplace_back(std::forward<UpdateTargetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline UpdateTargetsArchitecture GetUpdateTargetsArchitecture() const { return m_updateTargetsArchitecture; }
    inline bool UpdateTargetsArchitectureHasBeenSet() const { return m_updateTargetsArchitectureHasBeenSet; }
    inline void SetUpdateTargetsArchitecture(UpdateTargetsArchitecture value) { m_updateTargetsArchitectureHasBeenSet = true; m_updateTargetsArchitecture = value; }
    inline CreateSoftwareUpdateJobRequest& WithUpdateTargetsArchitecture(UpdateTargetsArchitecture value) { SetUpdateTargetsArchitecture(value); return *this;}
    ///@}

    ///@{
    
    inline UpdateTargetsOperatingSystem GetUpdateTargetsOperatingSystem() const { return m_updateTargetsOperatingSystem; }
    inline bool UpdateTargetsOperatingSystemHasBeenSet() const { return m_updateTargetsOperatingSystemHasBeenSet; }
    inline void SetUpdateTargetsOperatingSystem(UpdateTargetsOperatingSystem value) { m_updateTargetsOperatingSystemHasBeenSet = true; m_updateTargetsOperatingSystem = value; }
    inline CreateSoftwareUpdateJobRequest& WithUpdateTargetsOperatingSystem(UpdateTargetsOperatingSystem value) { SetUpdateTargetsOperatingSystem(value); return *this;}
    ///@}
  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet = false;

    Aws::String m_s3UrlSignerRole;
    bool m_s3UrlSignerRoleHasBeenSet = false;

    SoftwareToUpdate m_softwareToUpdate{SoftwareToUpdate::NOT_SET};
    bool m_softwareToUpdateHasBeenSet = false;

    UpdateAgentLogLevel m_updateAgentLogLevel{UpdateAgentLogLevel::NOT_SET};
    bool m_updateAgentLogLevelHasBeenSet = false;

    Aws::Vector<Aws::String> m_updateTargets;
    bool m_updateTargetsHasBeenSet = false;

    UpdateTargetsArchitecture m_updateTargetsArchitecture{UpdateTargetsArchitecture::NOT_SET};
    bool m_updateTargetsArchitectureHasBeenSet = false;

    UpdateTargetsOperatingSystem m_updateTargetsOperatingSystem{UpdateTargetsOperatingSystem::NOT_SET};
    bool m_updateTargetsOperatingSystemHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
