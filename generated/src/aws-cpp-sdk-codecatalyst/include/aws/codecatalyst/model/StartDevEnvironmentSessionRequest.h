/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/CodeCatalystRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecatalyst/model/DevEnvironmentSessionConfiguration.h>
#include <utility>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

  /**
   */
  class StartDevEnvironmentSessionRequest : public CodeCatalystRequest
  {
  public:
    AWS_CODECATALYST_API StartDevEnvironmentSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDevEnvironmentSession"; }

    AWS_CODECATALYST_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const { return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    template<typename SpaceNameT = Aws::String>
    void SetSpaceName(SpaceNameT&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::forward<SpaceNameT>(value); }
    template<typename SpaceNameT = Aws::String>
    StartDevEnvironmentSessionRequest& WithSpaceName(SpaceNameT&& value) { SetSpaceName(std::forward<SpaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    StartDevEnvironmentSessionRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of the Dev Environment.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    StartDevEnvironmentSessionRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DevEnvironmentSessionConfiguration& GetSessionConfiguration() const { return m_sessionConfiguration; }
    inline bool SessionConfigurationHasBeenSet() const { return m_sessionConfigurationHasBeenSet; }
    template<typename SessionConfigurationT = DevEnvironmentSessionConfiguration>
    void SetSessionConfiguration(SessionConfigurationT&& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration = std::forward<SessionConfigurationT>(value); }
    template<typename SessionConfigurationT = DevEnvironmentSessionConfiguration>
    StartDevEnvironmentSessionRequest& WithSessionConfiguration(SessionConfigurationT&& value) { SetSessionConfiguration(std::forward<SessionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    DevEnvironmentSessionConfiguration m_sessionConfiguration;
    bool m_sessionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
