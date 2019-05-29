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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/IoTThingsGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/model/DefinitionDocument.h>
#include <utility>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

  /**
   */
  class AWS_IOTTHINGSGRAPH_API UpdateFlowTemplateRequest : public IoTThingsGraphRequest
  {
  public:
    UpdateFlowTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlowTemplate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the workflow to be updated.</p> <p>The ID should be in the
     * following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:workflow:WORKFLOWNAME</code> </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the workflow to be updated.</p> <p>The ID should be in the
     * following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:workflow:WORKFLOWNAME</code> </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the workflow to be updated.</p> <p>The ID should be in the
     * following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:workflow:WORKFLOWNAME</code> </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the workflow to be updated.</p> <p>The ID should be in the
     * following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:workflow:WORKFLOWNAME</code> </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the workflow to be updated.</p> <p>The ID should be in the
     * following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:workflow:WORKFLOWNAME</code> </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the workflow to be updated.</p> <p>The ID should be in the
     * following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:workflow:WORKFLOWNAME</code> </p>
     */
    inline UpdateFlowTemplateRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the workflow to be updated.</p> <p>The ID should be in the
     * following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:workflow:WORKFLOWNAME</code> </p>
     */
    inline UpdateFlowTemplateRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workflow to be updated.</p> <p>The ID should be in the
     * following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:workflow:WORKFLOWNAME</code> </p>
     */
    inline UpdateFlowTemplateRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The <code>DefinitionDocument</code> that contains the updated workflow
     * definition.</p>
     */
    inline const DefinitionDocument& GetDefinition() const{ return m_definition; }

    /**
     * <p>The <code>DefinitionDocument</code> that contains the updated workflow
     * definition.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The <code>DefinitionDocument</code> that contains the updated workflow
     * definition.</p>
     */
    inline void SetDefinition(const DefinitionDocument& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The <code>DefinitionDocument</code> that contains the updated workflow
     * definition.</p>
     */
    inline void SetDefinition(DefinitionDocument&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The <code>DefinitionDocument</code> that contains the updated workflow
     * definition.</p>
     */
    inline UpdateFlowTemplateRequest& WithDefinition(const DefinitionDocument& value) { SetDefinition(value); return *this;}

    /**
     * <p>The <code>DefinitionDocument</code> that contains the updated workflow
     * definition.</p>
     */
    inline UpdateFlowTemplateRequest& WithDefinition(DefinitionDocument&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The version of the user's namespace.</p> <p>If no value is specified, the
     * latest version is used by default. Use the <code>GetFlowTemplateRevisions</code>
     * if you want to find earlier revisions of the flow to update.</p>
     */
    inline long long GetCompatibleNamespaceVersion() const{ return m_compatibleNamespaceVersion; }

    /**
     * <p>The version of the user's namespace.</p> <p>If no value is specified, the
     * latest version is used by default. Use the <code>GetFlowTemplateRevisions</code>
     * if you want to find earlier revisions of the flow to update.</p>
     */
    inline bool CompatibleNamespaceVersionHasBeenSet() const { return m_compatibleNamespaceVersionHasBeenSet; }

    /**
     * <p>The version of the user's namespace.</p> <p>If no value is specified, the
     * latest version is used by default. Use the <code>GetFlowTemplateRevisions</code>
     * if you want to find earlier revisions of the flow to update.</p>
     */
    inline void SetCompatibleNamespaceVersion(long long value) { m_compatibleNamespaceVersionHasBeenSet = true; m_compatibleNamespaceVersion = value; }

    /**
     * <p>The version of the user's namespace.</p> <p>If no value is specified, the
     * latest version is used by default. Use the <code>GetFlowTemplateRevisions</code>
     * if you want to find earlier revisions of the flow to update.</p>
     */
    inline UpdateFlowTemplateRequest& WithCompatibleNamespaceVersion(long long value) { SetCompatibleNamespaceVersion(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    DefinitionDocument m_definition;
    bool m_definitionHasBeenSet;

    long long m_compatibleNamespaceVersion;
    bool m_compatibleNamespaceVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
