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
   * <p>In addition to your infrastruction configuration, these settings provide an
   * extra layer of control over your build instances. For instances where Image
   * Builder installs the Systems Manager agent, you can choose whether to keep it
   * for the AMI that you create. You can also specify commands to run on launch for
   * all of your build instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/AdditionalInstanceConfiguration">AWS
   * API Reference</a></p>
   */
  class AdditionalInstanceConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API AdditionalInstanceConfiguration();
    AWS_IMAGEBUILDER_API AdditionalInstanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API AdditionalInstanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains settings for the Systems Manager agent on your build instance.</p>
     */
    inline const SystemsManagerAgent& GetSystemsManagerAgent() const{ return m_systemsManagerAgent; }

    /**
     * <p>Contains settings for the Systems Manager agent on your build instance.</p>
     */
    inline bool SystemsManagerAgentHasBeenSet() const { return m_systemsManagerAgentHasBeenSet; }

    /**
     * <p>Contains settings for the Systems Manager agent on your build instance.</p>
     */
    inline void SetSystemsManagerAgent(const SystemsManagerAgent& value) { m_systemsManagerAgentHasBeenSet = true; m_systemsManagerAgent = value; }

    /**
     * <p>Contains settings for the Systems Manager agent on your build instance.</p>
     */
    inline void SetSystemsManagerAgent(SystemsManagerAgent&& value) { m_systemsManagerAgentHasBeenSet = true; m_systemsManagerAgent = std::move(value); }

    /**
     * <p>Contains settings for the Systems Manager agent on your build instance.</p>
     */
    inline AdditionalInstanceConfiguration& WithSystemsManagerAgent(const SystemsManagerAgent& value) { SetSystemsManagerAgent(value); return *this;}

    /**
     * <p>Contains settings for the Systems Manager agent on your build instance.</p>
     */
    inline AdditionalInstanceConfiguration& WithSystemsManagerAgent(SystemsManagerAgent&& value) { SetSystemsManagerAgent(std::move(value)); return *this;}


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
    inline const Aws::String& GetUserDataOverride() const{ return m_userDataOverride; }

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
    inline bool UserDataOverrideHasBeenSet() const { return m_userDataOverrideHasBeenSet; }

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
    inline void SetUserDataOverride(const Aws::String& value) { m_userDataOverrideHasBeenSet = true; m_userDataOverride = value; }

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
    inline void SetUserDataOverride(Aws::String&& value) { m_userDataOverrideHasBeenSet = true; m_userDataOverride = std::move(value); }

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
    inline void SetUserDataOverride(const char* value) { m_userDataOverrideHasBeenSet = true; m_userDataOverride.assign(value); }

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
    inline AdditionalInstanceConfiguration& WithUserDataOverride(const Aws::String& value) { SetUserDataOverride(value); return *this;}

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
    inline AdditionalInstanceConfiguration& WithUserDataOverride(Aws::String&& value) { SetUserDataOverride(std::move(value)); return *this;}

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
    inline AdditionalInstanceConfiguration& WithUserDataOverride(const char* value) { SetUserDataOverride(value); return *this;}

  private:

    SystemsManagerAgent m_systemsManagerAgent;
    bool m_systemsManagerAgentHasBeenSet = false;

    Aws::String m_userDataOverride;
    bool m_userDataOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
