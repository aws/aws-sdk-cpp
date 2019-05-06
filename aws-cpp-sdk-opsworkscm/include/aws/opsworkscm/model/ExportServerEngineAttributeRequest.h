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
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKSCM_API ExportServerEngineAttributeRequest : public OpsWorksCMRequest
  {
  public:
    ExportServerEngineAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportServerEngineAttribute"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the export attribute. Currently, the supported export attribute
     * is <code>Userdata</code>. This exports a user data script that includes
     * parameters and values provided in the <code>InputAttributes</code> list.</p>
     */
    inline const Aws::String& GetExportAttributeName() const{ return m_exportAttributeName; }

    /**
     * <p>The name of the export attribute. Currently, the supported export attribute
     * is <code>Userdata</code>. This exports a user data script that includes
     * parameters and values provided in the <code>InputAttributes</code> list.</p>
     */
    inline bool ExportAttributeNameHasBeenSet() const { return m_exportAttributeNameHasBeenSet; }

    /**
     * <p>The name of the export attribute. Currently, the supported export attribute
     * is <code>Userdata</code>. This exports a user data script that includes
     * parameters and values provided in the <code>InputAttributes</code> list.</p>
     */
    inline void SetExportAttributeName(const Aws::String& value) { m_exportAttributeNameHasBeenSet = true; m_exportAttributeName = value; }

    /**
     * <p>The name of the export attribute. Currently, the supported export attribute
     * is <code>Userdata</code>. This exports a user data script that includes
     * parameters and values provided in the <code>InputAttributes</code> list.</p>
     */
    inline void SetExportAttributeName(Aws::String&& value) { m_exportAttributeNameHasBeenSet = true; m_exportAttributeName = std::move(value); }

    /**
     * <p>The name of the export attribute. Currently, the supported export attribute
     * is <code>Userdata</code>. This exports a user data script that includes
     * parameters and values provided in the <code>InputAttributes</code> list.</p>
     */
    inline void SetExportAttributeName(const char* value) { m_exportAttributeNameHasBeenSet = true; m_exportAttributeName.assign(value); }

    /**
     * <p>The name of the export attribute. Currently, the supported export attribute
     * is <code>Userdata</code>. This exports a user data script that includes
     * parameters and values provided in the <code>InputAttributes</code> list.</p>
     */
    inline ExportServerEngineAttributeRequest& WithExportAttributeName(const Aws::String& value) { SetExportAttributeName(value); return *this;}

    /**
     * <p>The name of the export attribute. Currently, the supported export attribute
     * is <code>Userdata</code>. This exports a user data script that includes
     * parameters and values provided in the <code>InputAttributes</code> list.</p>
     */
    inline ExportServerEngineAttributeRequest& WithExportAttributeName(Aws::String&& value) { SetExportAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the export attribute. Currently, the supported export attribute
     * is <code>Userdata</code>. This exports a user data script that includes
     * parameters and values provided in the <code>InputAttributes</code> list.</p>
     */
    inline ExportServerEngineAttributeRequest& WithExportAttributeName(const char* value) { SetExportAttributeName(value); return *this;}


    /**
     * <p>The name of the server from which you are exporting the attribute.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the server from which you are exporting the attribute.</p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The name of the server from which you are exporting the attribute.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the server from which you are exporting the attribute.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The name of the server from which you are exporting the attribute.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the server from which you are exporting the attribute.</p>
     */
    inline ExportServerEngineAttributeRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server from which you are exporting the attribute.</p>
     */
    inline ExportServerEngineAttributeRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the server from which you are exporting the attribute.</p>
     */
    inline ExportServerEngineAttributeRequest& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * An <code>EngineAttribute</code> list item is a pair that includes an attribute
     * name and its value. For the <code>Userdata</code> ExportAttributeName, the
     * following are supported engine attribute names.</p> <ul> <li> <p> <b>RunList</b>
     * In Chef, a list of roles or recipes that are run in the specified order. In
     * Puppet, this parameter is ignored.</p> </li> <li> <p> <b>OrganizationName</b> In
     * Chef, an organization name. AWS OpsWorks for Chef Automate always creates the
     * organization <code>default</code>. In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeEnvironment</b> In Chef, a node environment (for example,
     * development, staging, or one-box). In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeClientVersion</b> In Chef, the version of the Chef engine
     * (three numbers separated by dots, such as 13.8.5). If this attribute is empty,
     * OpsWorks for Chef Automate uses the most current version. In Puppet, this
     * parameter is ignored.</p> </li> </ul>
     */
    inline const Aws::Vector<EngineAttribute>& GetInputAttributes() const{ return m_inputAttributes; }

    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * An <code>EngineAttribute</code> list item is a pair that includes an attribute
     * name and its value. For the <code>Userdata</code> ExportAttributeName, the
     * following are supported engine attribute names.</p> <ul> <li> <p> <b>RunList</b>
     * In Chef, a list of roles or recipes that are run in the specified order. In
     * Puppet, this parameter is ignored.</p> </li> <li> <p> <b>OrganizationName</b> In
     * Chef, an organization name. AWS OpsWorks for Chef Automate always creates the
     * organization <code>default</code>. In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeEnvironment</b> In Chef, a node environment (for example,
     * development, staging, or one-box). In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeClientVersion</b> In Chef, the version of the Chef engine
     * (three numbers separated by dots, such as 13.8.5). If this attribute is empty,
     * OpsWorks for Chef Automate uses the most current version. In Puppet, this
     * parameter is ignored.</p> </li> </ul>
     */
    inline bool InputAttributesHasBeenSet() const { return m_inputAttributesHasBeenSet; }

    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * An <code>EngineAttribute</code> list item is a pair that includes an attribute
     * name and its value. For the <code>Userdata</code> ExportAttributeName, the
     * following are supported engine attribute names.</p> <ul> <li> <p> <b>RunList</b>
     * In Chef, a list of roles or recipes that are run in the specified order. In
     * Puppet, this parameter is ignored.</p> </li> <li> <p> <b>OrganizationName</b> In
     * Chef, an organization name. AWS OpsWorks for Chef Automate always creates the
     * organization <code>default</code>. In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeEnvironment</b> In Chef, a node environment (for example,
     * development, staging, or one-box). In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeClientVersion</b> In Chef, the version of the Chef engine
     * (three numbers separated by dots, such as 13.8.5). If this attribute is empty,
     * OpsWorks for Chef Automate uses the most current version. In Puppet, this
     * parameter is ignored.</p> </li> </ul>
     */
    inline void SetInputAttributes(const Aws::Vector<EngineAttribute>& value) { m_inputAttributesHasBeenSet = true; m_inputAttributes = value; }

    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * An <code>EngineAttribute</code> list item is a pair that includes an attribute
     * name and its value. For the <code>Userdata</code> ExportAttributeName, the
     * following are supported engine attribute names.</p> <ul> <li> <p> <b>RunList</b>
     * In Chef, a list of roles or recipes that are run in the specified order. In
     * Puppet, this parameter is ignored.</p> </li> <li> <p> <b>OrganizationName</b> In
     * Chef, an organization name. AWS OpsWorks for Chef Automate always creates the
     * organization <code>default</code>. In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeEnvironment</b> In Chef, a node environment (for example,
     * development, staging, or one-box). In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeClientVersion</b> In Chef, the version of the Chef engine
     * (three numbers separated by dots, such as 13.8.5). If this attribute is empty,
     * OpsWorks for Chef Automate uses the most current version. In Puppet, this
     * parameter is ignored.</p> </li> </ul>
     */
    inline void SetInputAttributes(Aws::Vector<EngineAttribute>&& value) { m_inputAttributesHasBeenSet = true; m_inputAttributes = std::move(value); }

    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * An <code>EngineAttribute</code> list item is a pair that includes an attribute
     * name and its value. For the <code>Userdata</code> ExportAttributeName, the
     * following are supported engine attribute names.</p> <ul> <li> <p> <b>RunList</b>
     * In Chef, a list of roles or recipes that are run in the specified order. In
     * Puppet, this parameter is ignored.</p> </li> <li> <p> <b>OrganizationName</b> In
     * Chef, an organization name. AWS OpsWorks for Chef Automate always creates the
     * organization <code>default</code>. In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeEnvironment</b> In Chef, a node environment (for example,
     * development, staging, or one-box). In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeClientVersion</b> In Chef, the version of the Chef engine
     * (three numbers separated by dots, such as 13.8.5). If this attribute is empty,
     * OpsWorks for Chef Automate uses the most current version. In Puppet, this
     * parameter is ignored.</p> </li> </ul>
     */
    inline ExportServerEngineAttributeRequest& WithInputAttributes(const Aws::Vector<EngineAttribute>& value) { SetInputAttributes(value); return *this;}

    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * An <code>EngineAttribute</code> list item is a pair that includes an attribute
     * name and its value. For the <code>Userdata</code> ExportAttributeName, the
     * following are supported engine attribute names.</p> <ul> <li> <p> <b>RunList</b>
     * In Chef, a list of roles or recipes that are run in the specified order. In
     * Puppet, this parameter is ignored.</p> </li> <li> <p> <b>OrganizationName</b> In
     * Chef, an organization name. AWS OpsWorks for Chef Automate always creates the
     * organization <code>default</code>. In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeEnvironment</b> In Chef, a node environment (for example,
     * development, staging, or one-box). In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeClientVersion</b> In Chef, the version of the Chef engine
     * (three numbers separated by dots, such as 13.8.5). If this attribute is empty,
     * OpsWorks for Chef Automate uses the most current version. In Puppet, this
     * parameter is ignored.</p> </li> </ul>
     */
    inline ExportServerEngineAttributeRequest& WithInputAttributes(Aws::Vector<EngineAttribute>&& value) { SetInputAttributes(std::move(value)); return *this;}

    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * An <code>EngineAttribute</code> list item is a pair that includes an attribute
     * name and its value. For the <code>Userdata</code> ExportAttributeName, the
     * following are supported engine attribute names.</p> <ul> <li> <p> <b>RunList</b>
     * In Chef, a list of roles or recipes that are run in the specified order. In
     * Puppet, this parameter is ignored.</p> </li> <li> <p> <b>OrganizationName</b> In
     * Chef, an organization name. AWS OpsWorks for Chef Automate always creates the
     * organization <code>default</code>. In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeEnvironment</b> In Chef, a node environment (for example,
     * development, staging, or one-box). In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeClientVersion</b> In Chef, the version of the Chef engine
     * (three numbers separated by dots, such as 13.8.5). If this attribute is empty,
     * OpsWorks for Chef Automate uses the most current version. In Puppet, this
     * parameter is ignored.</p> </li> </ul>
     */
    inline ExportServerEngineAttributeRequest& AddInputAttributes(const EngineAttribute& value) { m_inputAttributesHasBeenSet = true; m_inputAttributes.push_back(value); return *this; }

    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * An <code>EngineAttribute</code> list item is a pair that includes an attribute
     * name and its value. For the <code>Userdata</code> ExportAttributeName, the
     * following are supported engine attribute names.</p> <ul> <li> <p> <b>RunList</b>
     * In Chef, a list of roles or recipes that are run in the specified order. In
     * Puppet, this parameter is ignored.</p> </li> <li> <p> <b>OrganizationName</b> In
     * Chef, an organization name. AWS OpsWorks for Chef Automate always creates the
     * organization <code>default</code>. In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeEnvironment</b> In Chef, a node environment (for example,
     * development, staging, or one-box). In Puppet, this parameter is ignored.</p>
     * </li> <li> <p> <b>NodeClientVersion</b> In Chef, the version of the Chef engine
     * (three numbers separated by dots, such as 13.8.5). If this attribute is empty,
     * OpsWorks for Chef Automate uses the most current version. In Puppet, this
     * parameter is ignored.</p> </li> </ul>
     */
    inline ExportServerEngineAttributeRequest& AddInputAttributes(EngineAttribute&& value) { m_inputAttributesHasBeenSet = true; m_inputAttributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_exportAttributeName;
    bool m_exportAttributeNameHasBeenSet;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    Aws::Vector<EngineAttribute> m_inputAttributes;
    bool m_inputAttributesHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
