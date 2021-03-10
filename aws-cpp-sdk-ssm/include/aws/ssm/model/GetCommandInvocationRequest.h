/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
     * instance can be an EC2 instance or an instance in your hybrid environment that
     * is configured for Systems Manager.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>(Required) The ID of the managed instance targeted by the command. A managed
     * instance can be an EC2 instance or an instance in your hybrid environment that
     * is configured for Systems Manager.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>(Required) The ID of the managed instance targeted by the command. A managed
     * instance can be an EC2 instance or an instance in your hybrid environment that
     * is configured for Systems Manager.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>(Required) The ID of the managed instance targeted by the command. A managed
     * instance can be an EC2 instance or an instance in your hybrid environment that
     * is configured for Systems Manager.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>(Required) The ID of the managed instance targeted by the command. A managed
     * instance can be an EC2 instance or an instance in your hybrid environment that
     * is configured for Systems Manager.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>(Required) The ID of the managed instance targeted by the command. A managed
     * instance can be an EC2 instance or an instance in your hybrid environment that
     * is configured for Systems Manager.</p>
     */
    inline GetCommandInvocationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>(Required) The ID of the managed instance targeted by the command. A managed
     * instance can be an EC2 instance or an instance in your hybrid environment that
     * is configured for Systems Manager.</p>
     */
    inline GetCommandInvocationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>(Required) The ID of the managed instance targeted by the command. A managed
     * instance can be an EC2 instance or an instance in your hybrid environment that
     * is configured for Systems Manager.</p>
     */
    inline GetCommandInvocationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The name of the plugin for which you want detailed results. If the document
     * contains only one plugin, you can omit the name and details for that plugin are
     * returned. If the document contains more than one plugin, you must specify the
     * name of the plugin for which you want to view details.</p> <p>Plugin names are
     * also referred to as <i>step names</i> in Systems Manager documents. For example,
     * <code>aws:RunShellScript</code> is a plugin.</p>
     */
    inline const Aws::String& GetPluginName() const{ return m_pluginName; }

    /**
     * <p>The name of the plugin for which you want detailed results. If the document
     * contains only one plugin, you can omit the name and details for that plugin are
     * returned. If the document contains more than one plugin, you must specify the
     * name of the plugin for which you want to view details.</p> <p>Plugin names are
     * also referred to as <i>step names</i> in Systems Manager documents. For example,
     * <code>aws:RunShellScript</code> is a plugin.</p>
     */
    inline bool PluginNameHasBeenSet() const { return m_pluginNameHasBeenSet; }

    /**
     * <p>The name of the plugin for which you want detailed results. If the document
     * contains only one plugin, you can omit the name and details for that plugin are
     * returned. If the document contains more than one plugin, you must specify the
     * name of the plugin for which you want to view details.</p> <p>Plugin names are
     * also referred to as <i>step names</i> in Systems Manager documents. For example,
     * <code>aws:RunShellScript</code> is a plugin.</p>
     */
    inline void SetPluginName(const Aws::String& value) { m_pluginNameHasBeenSet = true; m_pluginName = value; }

    /**
     * <p>The name of the plugin for which you want detailed results. If the document
     * contains only one plugin, you can omit the name and details for that plugin are
     * returned. If the document contains more than one plugin, you must specify the
     * name of the plugin for which you want to view details.</p> <p>Plugin names are
     * also referred to as <i>step names</i> in Systems Manager documents. For example,
     * <code>aws:RunShellScript</code> is a plugin.</p>
     */
    inline void SetPluginName(Aws::String&& value) { m_pluginNameHasBeenSet = true; m_pluginName = std::move(value); }

    /**
     * <p>The name of the plugin for which you want detailed results. If the document
     * contains only one plugin, you can omit the name and details for that plugin are
     * returned. If the document contains more than one plugin, you must specify the
     * name of the plugin for which you want to view details.</p> <p>Plugin names are
     * also referred to as <i>step names</i> in Systems Manager documents. For example,
     * <code>aws:RunShellScript</code> is a plugin.</p>
     */
    inline void SetPluginName(const char* value) { m_pluginNameHasBeenSet = true; m_pluginName.assign(value); }

    /**
     * <p>The name of the plugin for which you want detailed results. If the document
     * contains only one plugin, you can omit the name and details for that plugin are
     * returned. If the document contains more than one plugin, you must specify the
     * name of the plugin for which you want to view details.</p> <p>Plugin names are
     * also referred to as <i>step names</i> in Systems Manager documents. For example,
     * <code>aws:RunShellScript</code> is a plugin.</p>
     */
    inline GetCommandInvocationRequest& WithPluginName(const Aws::String& value) { SetPluginName(value); return *this;}

    /**
     * <p>The name of the plugin for which you want detailed results. If the document
     * contains only one plugin, you can omit the name and details for that plugin are
     * returned. If the document contains more than one plugin, you must specify the
     * name of the plugin for which you want to view details.</p> <p>Plugin names are
     * also referred to as <i>step names</i> in Systems Manager documents. For example,
     * <code>aws:RunShellScript</code> is a plugin.</p>
     */
    inline GetCommandInvocationRequest& WithPluginName(Aws::String&& value) { SetPluginName(std::move(value)); return *this;}

    /**
     * <p>The name of the plugin for which you want detailed results. If the document
     * contains only one plugin, you can omit the name and details for that plugin are
     * returned. If the document contains more than one plugin, you must specify the
     * name of the plugin for which you want to view details.</p> <p>Plugin names are
     * also referred to as <i>step names</i> in Systems Manager documents. For example,
     * <code>aws:RunShellScript</code> is a plugin.</p>
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
