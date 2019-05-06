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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API GetCommandInvocationRequest : public SSMRequest
  {
  public:
    GetCommandInvocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCommandInvocation"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>(Required) The parent command ID of the invocation plugin.</p>
     */
    inline const Aws::String& GetCommandId() const{ return m_commandId; }

    /**
     * <p>(Required) The parent command ID of the invocation plugin.</p>
     */
    inline bool CommandIdHasBeenSet() const { return m_commandIdHasBeenSet; }

    /**
     * <p>(Required) The parent command ID of the invocation plugin.</p>
     */
    inline void SetCommandId(const Aws::String& value) { m_commandIdHasBeenSet = true; m_commandId = value; }

    /**
     * <p>(Required) The parent command ID of the invocation plugin.</p>
     */
    inline void SetCommandId(Aws::String&& value) { m_commandIdHasBeenSet = true; m_commandId = std::move(value); }

    /**
     * <p>(Required) The parent command ID of the invocation plugin.</p>
     */
    inline void SetCommandId(const char* value) { m_commandIdHasBeenSet = true; m_commandId.assign(value); }

    /**
     * <p>(Required) The parent command ID of the invocation plugin.</p>
     */
    inline GetCommandInvocationRequest& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}

    /**
     * <p>(Required) The parent command ID of the invocation plugin.</p>
     */
    inline GetCommandInvocationRequest& WithCommandId(Aws::String&& value) { SetCommandId(std::move(value)); return *this;}

    /**
     * <p>(Required) The parent command ID of the invocation plugin.</p>
     */
    inline GetCommandInvocationRequest& WithCommandId(const char* value) { SetCommandId(value); return *this;}


    /**
     * <p>(Required) The ID of the managed instance targeted by the command. A managed
     * instance can be an Amazon EC2 instance or an instance in your hybrid environment
     * that is configured for Systems Manager.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>(Required) The ID of the managed instance targeted by the command. A managed
     * instance can be an Amazon EC2 instance or an instance in your hybrid environment
     * that is configured for Systems Manager.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>(Required) The ID of the managed instance targeted by the command. A managed
     * instance can be an Amazon EC2 instance or an instance in your hybrid environment
     * that is configured for Systems Manager.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>(Required) The ID of the managed instance targeted by the command. A managed
     * instance can be an Amazon EC2 instance or an instance in your hybrid environment
     * that is configured for Systems Manager.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>(Required) The ID of the managed instance targeted by the command. A managed
     * instance can be an Amazon EC2 instance or an instance in your hybrid environment
     * that is configured for Systems Manager.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>(Required) The ID of the managed instance targeted by the command. A managed
     * instance can be an Amazon EC2 instance or an instance in your hybrid environment
     * that is configured for Systems Manager.</p>
     */
    inline GetCommandInvocationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>(Required) The ID of the managed instance targeted by the command. A managed
     * instance can be an Amazon EC2 instance or an instance in your hybrid environment
     * that is configured for Systems Manager.</p>
     */
    inline GetCommandInvocationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>(Required) The ID of the managed instance targeted by the command. A managed
     * instance can be an Amazon EC2 instance or an instance in your hybrid environment
     * that is configured for Systems Manager.</p>
     */
    inline GetCommandInvocationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>(Optional) The name of the plugin for which you want detailed results. If the
     * document contains only one plugin, the name can be omitted and the details will
     * be returned.</p>
     */
    inline const Aws::String& GetPluginName() const{ return m_pluginName; }

    /**
     * <p>(Optional) The name of the plugin for which you want detailed results. If the
     * document contains only one plugin, the name can be omitted and the details will
     * be returned.</p>
     */
    inline bool PluginNameHasBeenSet() const { return m_pluginNameHasBeenSet; }

    /**
     * <p>(Optional) The name of the plugin for which you want detailed results. If the
     * document contains only one plugin, the name can be omitted and the details will
     * be returned.</p>
     */
    inline void SetPluginName(const Aws::String& value) { m_pluginNameHasBeenSet = true; m_pluginName = value; }

    /**
     * <p>(Optional) The name of the plugin for which you want detailed results. If the
     * document contains only one plugin, the name can be omitted and the details will
     * be returned.</p>
     */
    inline void SetPluginName(Aws::String&& value) { m_pluginNameHasBeenSet = true; m_pluginName = std::move(value); }

    /**
     * <p>(Optional) The name of the plugin for which you want detailed results. If the
     * document contains only one plugin, the name can be omitted and the details will
     * be returned.</p>
     */
    inline void SetPluginName(const char* value) { m_pluginNameHasBeenSet = true; m_pluginName.assign(value); }

    /**
     * <p>(Optional) The name of the plugin for which you want detailed results. If the
     * document contains only one plugin, the name can be omitted and the details will
     * be returned.</p>
     */
    inline GetCommandInvocationRequest& WithPluginName(const Aws::String& value) { SetPluginName(value); return *this;}

    /**
     * <p>(Optional) The name of the plugin for which you want detailed results. If the
     * document contains only one plugin, the name can be omitted and the details will
     * be returned.</p>
     */
    inline GetCommandInvocationRequest& WithPluginName(Aws::String&& value) { SetPluginName(std::move(value)); return *this;}

    /**
     * <p>(Optional) The name of the plugin for which you want detailed results. If the
     * document contains only one plugin, the name can be omitted and the details will
     * be returned.</p>
     */
    inline GetCommandInvocationRequest& WithPluginName(const char* value) { SetPluginName(value); return *this;}

  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_pluginName;
    bool m_pluginNameHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
