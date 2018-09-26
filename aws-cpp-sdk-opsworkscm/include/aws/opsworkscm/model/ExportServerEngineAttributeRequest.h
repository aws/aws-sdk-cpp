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
     * <p>The name of the export attribute. Currently supported export attribute is
     * "Userdata" which exports a userdata script filled out with parameters provided
     * in the <code>InputAttributes</code> list.</p>
     */
    inline const Aws::String& GetExportAttributeName() const{ return m_exportAttributeName; }

    /**
     * <p>The name of the export attribute. Currently supported export attribute is
     * "Userdata" which exports a userdata script filled out with parameters provided
     * in the <code>InputAttributes</code> list.</p>
     */
    inline void SetExportAttributeName(const Aws::String& value) { m_exportAttributeNameHasBeenSet = true; m_exportAttributeName = value; }

    /**
     * <p>The name of the export attribute. Currently supported export attribute is
     * "Userdata" which exports a userdata script filled out with parameters provided
     * in the <code>InputAttributes</code> list.</p>
     */
    inline void SetExportAttributeName(Aws::String&& value) { m_exportAttributeNameHasBeenSet = true; m_exportAttributeName = std::move(value); }

    /**
     * <p>The name of the export attribute. Currently supported export attribute is
     * "Userdata" which exports a userdata script filled out with parameters provided
     * in the <code>InputAttributes</code> list.</p>
     */
    inline void SetExportAttributeName(const char* value) { m_exportAttributeNameHasBeenSet = true; m_exportAttributeName.assign(value); }

    /**
     * <p>The name of the export attribute. Currently supported export attribute is
     * "Userdata" which exports a userdata script filled out with parameters provided
     * in the <code>InputAttributes</code> list.</p>
     */
    inline ExportServerEngineAttributeRequest& WithExportAttributeName(const Aws::String& value) { SetExportAttributeName(value); return *this;}

    /**
     * <p>The name of the export attribute. Currently supported export attribute is
     * "Userdata" which exports a userdata script filled out with parameters provided
     * in the <code>InputAttributes</code> list.</p>
     */
    inline ExportServerEngineAttributeRequest& WithExportAttributeName(Aws::String&& value) { SetExportAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the export attribute. Currently supported export attribute is
     * "Userdata" which exports a userdata script filled out with parameters provided
     * in the <code>InputAttributes</code> list.</p>
     */
    inline ExportServerEngineAttributeRequest& WithExportAttributeName(const char* value) { SetExportAttributeName(value); return *this;}


    /**
     * <p>The name of the Server to which the attribute is being exported from </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the Server to which the attribute is being exported from </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the Server to which the attribute is being exported from </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The name of the Server to which the attribute is being exported from </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the Server to which the attribute is being exported from </p>
     */
    inline ExportServerEngineAttributeRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the Server to which the attribute is being exported from </p>
     */
    inline ExportServerEngineAttributeRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the Server to which the attribute is being exported from </p>
     */
    inline ExportServerEngineAttributeRequest& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * <code>EngineAttribute</code> is a pair of attribute name and value. For
     * <code>ExportAttributeName</code> "Userdata", currently supported input attribute
     * names are: - "RunList": For Chef, an ordered list of roles and/or recipes that
     * are run in the exact order. For Puppet, this parameter is ignored. -
     * "OrganizationName": For Chef, an organization name. AWS OpsWorks for Chef Server
     * always creates the organization "default". For Puppet, this parameter is
     * ignored. - "NodeEnvironment": For Chef, a node environment (eg. development,
     * staging, onebox). For Puppet, this parameter is ignored. - "NodeClientVersion":
     * For Chef, version of Chef Engine (3 numbers separated by dots, eg. "13.8.5"). If
     * empty, it uses the latest one. For Puppet, this parameter is ignored. </p>
     */
    inline const Aws::Vector<EngineAttribute>& GetInputAttributes() const{ return m_inputAttributes; }

    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * <code>EngineAttribute</code> is a pair of attribute name and value. For
     * <code>ExportAttributeName</code> "Userdata", currently supported input attribute
     * names are: - "RunList": For Chef, an ordered list of roles and/or recipes that
     * are run in the exact order. For Puppet, this parameter is ignored. -
     * "OrganizationName": For Chef, an organization name. AWS OpsWorks for Chef Server
     * always creates the organization "default". For Puppet, this parameter is
     * ignored. - "NodeEnvironment": For Chef, a node environment (eg. development,
     * staging, onebox). For Puppet, this parameter is ignored. - "NodeClientVersion":
     * For Chef, version of Chef Engine (3 numbers separated by dots, eg. "13.8.5"). If
     * empty, it uses the latest one. For Puppet, this parameter is ignored. </p>
     */
    inline void SetInputAttributes(const Aws::Vector<EngineAttribute>& value) { m_inputAttributesHasBeenSet = true; m_inputAttributes = value; }

    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * <code>EngineAttribute</code> is a pair of attribute name and value. For
     * <code>ExportAttributeName</code> "Userdata", currently supported input attribute
     * names are: - "RunList": For Chef, an ordered list of roles and/or recipes that
     * are run in the exact order. For Puppet, this parameter is ignored. -
     * "OrganizationName": For Chef, an organization name. AWS OpsWorks for Chef Server
     * always creates the organization "default". For Puppet, this parameter is
     * ignored. - "NodeEnvironment": For Chef, a node environment (eg. development,
     * staging, onebox). For Puppet, this parameter is ignored. - "NodeClientVersion":
     * For Chef, version of Chef Engine (3 numbers separated by dots, eg. "13.8.5"). If
     * empty, it uses the latest one. For Puppet, this parameter is ignored. </p>
     */
    inline void SetInputAttributes(Aws::Vector<EngineAttribute>&& value) { m_inputAttributesHasBeenSet = true; m_inputAttributes = std::move(value); }

    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * <code>EngineAttribute</code> is a pair of attribute name and value. For
     * <code>ExportAttributeName</code> "Userdata", currently supported input attribute
     * names are: - "RunList": For Chef, an ordered list of roles and/or recipes that
     * are run in the exact order. For Puppet, this parameter is ignored. -
     * "OrganizationName": For Chef, an organization name. AWS OpsWorks for Chef Server
     * always creates the organization "default". For Puppet, this parameter is
     * ignored. - "NodeEnvironment": For Chef, a node environment (eg. development,
     * staging, onebox). For Puppet, this parameter is ignored. - "NodeClientVersion":
     * For Chef, version of Chef Engine (3 numbers separated by dots, eg. "13.8.5"). If
     * empty, it uses the latest one. For Puppet, this parameter is ignored. </p>
     */
    inline ExportServerEngineAttributeRequest& WithInputAttributes(const Aws::Vector<EngineAttribute>& value) { SetInputAttributes(value); return *this;}

    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * <code>EngineAttribute</code> is a pair of attribute name and value. For
     * <code>ExportAttributeName</code> "Userdata", currently supported input attribute
     * names are: - "RunList": For Chef, an ordered list of roles and/or recipes that
     * are run in the exact order. For Puppet, this parameter is ignored. -
     * "OrganizationName": For Chef, an organization name. AWS OpsWorks for Chef Server
     * always creates the organization "default". For Puppet, this parameter is
     * ignored. - "NodeEnvironment": For Chef, a node environment (eg. development,
     * staging, onebox). For Puppet, this parameter is ignored. - "NodeClientVersion":
     * For Chef, version of Chef Engine (3 numbers separated by dots, eg. "13.8.5"). If
     * empty, it uses the latest one. For Puppet, this parameter is ignored. </p>
     */
    inline ExportServerEngineAttributeRequest& WithInputAttributes(Aws::Vector<EngineAttribute>&& value) { SetInputAttributes(std::move(value)); return *this;}

    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * <code>EngineAttribute</code> is a pair of attribute name and value. For
     * <code>ExportAttributeName</code> "Userdata", currently supported input attribute
     * names are: - "RunList": For Chef, an ordered list of roles and/or recipes that
     * are run in the exact order. For Puppet, this parameter is ignored. -
     * "OrganizationName": For Chef, an organization name. AWS OpsWorks for Chef Server
     * always creates the organization "default". For Puppet, this parameter is
     * ignored. - "NodeEnvironment": For Chef, a node environment (eg. development,
     * staging, onebox). For Puppet, this parameter is ignored. - "NodeClientVersion":
     * For Chef, version of Chef Engine (3 numbers separated by dots, eg. "13.8.5"). If
     * empty, it uses the latest one. For Puppet, this parameter is ignored. </p>
     */
    inline ExportServerEngineAttributeRequest& AddInputAttributes(const EngineAttribute& value) { m_inputAttributesHasBeenSet = true; m_inputAttributes.push_back(value); return *this; }

    /**
     * <p>The list of engine attributes. The list type is <code>EngineAttribute</code>.
     * <code>EngineAttribute</code> is a pair of attribute name and value. For
     * <code>ExportAttributeName</code> "Userdata", currently supported input attribute
     * names are: - "RunList": For Chef, an ordered list of roles and/or recipes that
     * are run in the exact order. For Puppet, this parameter is ignored. -
     * "OrganizationName": For Chef, an organization name. AWS OpsWorks for Chef Server
     * always creates the organization "default". For Puppet, this parameter is
     * ignored. - "NodeEnvironment": For Chef, a node environment (eg. development,
     * staging, onebox). For Puppet, this parameter is ignored. - "NodeClientVersion":
     * For Chef, version of Chef Engine (3 numbers separated by dots, eg. "13.8.5"). If
     * empty, it uses the latest one. For Puppet, this parameter is ignored. </p>
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
