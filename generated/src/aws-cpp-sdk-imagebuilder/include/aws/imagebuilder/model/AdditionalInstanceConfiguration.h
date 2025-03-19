/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/SystemsManagerAgent.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>In addition to your infrastructure configuration, these settings provide an
   * extra layer of control over your build instances. You can also specify commands
   * to run on launch for all of your build instances.</p> <p>Image Builder does not
   * automatically install the Systems Manager agent on Windows instances. If your
   * base image includes the Systems Manager agent, then the AMI that you create will
   * also include the agent. For Linux instances, if the base image does not already
   * include the Systems Manager agent, Image Builder installs it. For Linux
   * instances where Image Builder installs the Systems Manager agent, you can choose
   * whether to keep it for the AMI that you create.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/AdditionalInstanceConfiguration">AWS
   * API Reference</a></p>
   */
  class AdditionalInstanceConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API AdditionalInstanceConfiguration() = default;
    AWS_IMAGEBUILDER_API AdditionalInstanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API AdditionalInstanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains settings for the Systems Manager agent on your build instance.</p>
     */
    inline const SystemsManagerAgent& GetSystemsManagerAgent() const { return m_systemsManagerAgent; }
    inline bool SystemsManagerAgentHasBeenSet() const { return m_systemsManagerAgentHasBeenSet; }
    template<typename SystemsManagerAgentT = SystemsManagerAgent>
    void SetSystemsManagerAgent(SystemsManagerAgentT&& value) { m_systemsManagerAgentHasBeenSet = true; m_systemsManagerAgent = std::forward<SystemsManagerAgentT>(value); }
    template<typename SystemsManagerAgentT = SystemsManagerAgent>
    AdditionalInstanceConfiguration& WithSystemsManagerAgent(SystemsManagerAgentT&& value) { SetSystemsManagerAgent(std::forward<SystemsManagerAgentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this property to provide commands or a command script to run when you
     * launch your build instance.</p> <p>The userDataOverride property replaces any
     * commands that Image Builder might have added to ensure that Systems Manager is
     * installed on your Linux build instance. If you override the user data, make sure
     * that you add commands to install Systems Manager, if it is not pre-installed on
     * your base image.</p>  <p>The user data is always base 64 encoded. For
     * example, the following commands are encoded as
     * <code>IyEvYmluL2Jhc2gKbWtkaXIgLXAgL3Zhci9iYi8KdG91Y2ggL3Zhci$</code>:</p> <p>
     * <i>#!/bin/bash</i> </p> <p>mkdir -p /var/bb/</p> <p>touch /var</p> 
     */
    inline const Aws::String& GetUserDataOverride() const { return m_userDataOverride; }
    inline bool UserDataOverrideHasBeenSet() const { return m_userDataOverrideHasBeenSet; }
    template<typename UserDataOverrideT = Aws::String>
    void SetUserDataOverride(UserDataOverrideT&& value) { m_userDataOverrideHasBeenSet = true; m_userDataOverride = std::forward<UserDataOverrideT>(value); }
    template<typename UserDataOverrideT = Aws::String>
    AdditionalInstanceConfiguration& WithUserDataOverride(UserDataOverrideT&& value) { SetUserDataOverride(std::forward<UserDataOverrideT>(value)); return *this;}
    ///@}
  private:

    SystemsManagerAgent m_systemsManagerAgent;
    bool m_systemsManagerAgentHasBeenSet = false;

    Aws::String m_userDataOverride;
    bool m_userDataOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
