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
  class AWS_IOTTHINGSGRAPH_API CreateFlowTemplateRequest : public IoTThingsGraphRequest
  {
  public:
    CreateFlowTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFlowTemplate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The workflow <code>DefinitionDocument</code>.</p>
     */
    inline const DefinitionDocument& GetDefinition() const{ return m_definition; }

    /**
     * <p>The workflow <code>DefinitionDocument</code>.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The workflow <code>DefinitionDocument</code>.</p>
     */
    inline void SetDefinition(const DefinitionDocument& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The workflow <code>DefinitionDocument</code>.</p>
     */
    inline void SetDefinition(DefinitionDocument&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The workflow <code>DefinitionDocument</code>.</p>
     */
    inline CreateFlowTemplateRequest& WithDefinition(const DefinitionDocument& value) { SetDefinition(value); return *this;}

    /**
     * <p>The workflow <code>DefinitionDocument</code>.</p>
     */
    inline CreateFlowTemplateRequest& WithDefinition(DefinitionDocument&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The namespace version in which the workflow is to be created.</p> <p>If no
     * value is specified, the latest version is used by default.</p>
     */
    inline long long GetCompatibleNamespaceVersion() const{ return m_compatibleNamespaceVersion; }

    /**
     * <p>The namespace version in which the workflow is to be created.</p> <p>If no
     * value is specified, the latest version is used by default.</p>
     */
    inline bool CompatibleNamespaceVersionHasBeenSet() const { return m_compatibleNamespaceVersionHasBeenSet; }

    /**
     * <p>The namespace version in which the workflow is to be created.</p> <p>If no
     * value is specified, the latest version is used by default.</p>
     */
    inline void SetCompatibleNamespaceVersion(long long value) { m_compatibleNamespaceVersionHasBeenSet = true; m_compatibleNamespaceVersion = value; }

    /**
     * <p>The namespace version in which the workflow is to be created.</p> <p>If no
     * value is specified, the latest version is used by default.</p>
     */
    inline CreateFlowTemplateRequest& WithCompatibleNamespaceVersion(long long value) { SetCompatibleNamespaceVersion(value); return *this;}

  private:

    DefinitionDocument m_definition;
    bool m_definitionHasBeenSet;

    long long m_compatibleNamespaceVersion;
    bool m_compatibleNamespaceVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
