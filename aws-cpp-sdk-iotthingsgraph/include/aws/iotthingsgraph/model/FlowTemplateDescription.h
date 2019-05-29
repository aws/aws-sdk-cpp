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
#include <aws/iotthingsgraph/model/FlowTemplateSummary.h>
#include <aws/iotthingsgraph/model/DefinitionDocument.h>
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
namespace IoTThingsGraph
{
namespace Model
{

  /**
   * <p>An object that contains a workflow's definition and summary
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/FlowTemplateDescription">AWS
   * API Reference</a></p>
   */
  class AWS_IOTTHINGSGRAPH_API FlowTemplateDescription
  {
  public:
    FlowTemplateDescription();
    FlowTemplateDescription(Aws::Utils::Json::JsonView jsonValue);
    FlowTemplateDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains summary information about a workflow.</p>
     */
    inline const FlowTemplateSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>An object that contains summary information about a workflow.</p>
     */
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }

    /**
     * <p>An object that contains summary information about a workflow.</p>
     */
    inline void SetSummary(const FlowTemplateSummary& value) { m_summaryHasBeenSet = true; m_summary = value; }

    /**
     * <p>An object that contains summary information about a workflow.</p>
     */
    inline void SetSummary(FlowTemplateSummary&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }

    /**
     * <p>An object that contains summary information about a workflow.</p>
     */
    inline FlowTemplateDescription& WithSummary(const FlowTemplateSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>An object that contains summary information about a workflow.</p>
     */
    inline FlowTemplateDescription& WithSummary(FlowTemplateSummary&& value) { SetSummary(std::move(value)); return *this;}


    /**
     * <p>A workflow's definition document.</p>
     */
    inline const DefinitionDocument& GetDefinition() const{ return m_definition; }

    /**
     * <p>A workflow's definition document.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>A workflow's definition document.</p>
     */
    inline void SetDefinition(const DefinitionDocument& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>A workflow's definition document.</p>
     */
    inline void SetDefinition(DefinitionDocument&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>A workflow's definition document.</p>
     */
    inline FlowTemplateDescription& WithDefinition(const DefinitionDocument& value) { SetDefinition(value); return *this;}

    /**
     * <p>A workflow's definition document.</p>
     */
    inline FlowTemplateDescription& WithDefinition(DefinitionDocument&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The version of the user's namespace against which the workflow was validated.
     * Use this value in your system instance.</p>
     */
    inline long long GetValidatedNamespaceVersion() const{ return m_validatedNamespaceVersion; }

    /**
     * <p>The version of the user's namespace against which the workflow was validated.
     * Use this value in your system instance.</p>
     */
    inline bool ValidatedNamespaceVersionHasBeenSet() const { return m_validatedNamespaceVersionHasBeenSet; }

    /**
     * <p>The version of the user's namespace against which the workflow was validated.
     * Use this value in your system instance.</p>
     */
    inline void SetValidatedNamespaceVersion(long long value) { m_validatedNamespaceVersionHasBeenSet = true; m_validatedNamespaceVersion = value; }

    /**
     * <p>The version of the user's namespace against which the workflow was validated.
     * Use this value in your system instance.</p>
     */
    inline FlowTemplateDescription& WithValidatedNamespaceVersion(long long value) { SetValidatedNamespaceVersion(value); return *this;}

  private:

    FlowTemplateSummary m_summary;
    bool m_summaryHasBeenSet;

    DefinitionDocument m_definition;
    bool m_definitionHasBeenSet;

    long long m_validatedNamespaceVersion;
    bool m_validatedNamespaceVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
