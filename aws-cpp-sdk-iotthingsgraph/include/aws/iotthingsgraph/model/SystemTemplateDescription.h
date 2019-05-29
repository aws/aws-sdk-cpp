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
#include <aws/iotthingsgraph/model/SystemTemplateSummary.h>
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
   * <p>An object that contains a system's definition document and summary
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SystemTemplateDescription">AWS
   * API Reference</a></p>
   */
  class AWS_IOTTHINGSGRAPH_API SystemTemplateDescription
  {
  public:
    SystemTemplateDescription();
    SystemTemplateDescription(Aws::Utils::Json::JsonView jsonValue);
    SystemTemplateDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains summary information about a system.</p>
     */
    inline const SystemTemplateSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>An object that contains summary information about a system.</p>
     */
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }

    /**
     * <p>An object that contains summary information about a system.</p>
     */
    inline void SetSummary(const SystemTemplateSummary& value) { m_summaryHasBeenSet = true; m_summary = value; }

    /**
     * <p>An object that contains summary information about a system.</p>
     */
    inline void SetSummary(SystemTemplateSummary&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }

    /**
     * <p>An object that contains summary information about a system.</p>
     */
    inline SystemTemplateDescription& WithSummary(const SystemTemplateSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>An object that contains summary information about a system.</p>
     */
    inline SystemTemplateDescription& WithSummary(SystemTemplateSummary&& value) { SetSummary(std::move(value)); return *this;}


    /**
     * <p>The definition document of a system.</p>
     */
    inline const DefinitionDocument& GetDefinition() const{ return m_definition; }

    /**
     * <p>The definition document of a system.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The definition document of a system.</p>
     */
    inline void SetDefinition(const DefinitionDocument& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The definition document of a system.</p>
     */
    inline void SetDefinition(DefinitionDocument&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The definition document of a system.</p>
     */
    inline SystemTemplateDescription& WithDefinition(const DefinitionDocument& value) { SetDefinition(value); return *this;}

    /**
     * <p>The definition document of a system.</p>
     */
    inline SystemTemplateDescription& WithDefinition(DefinitionDocument&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The namespace version against which the system was validated. Use this value
     * in your system instance.</p>
     */
    inline long long GetValidatedNamespaceVersion() const{ return m_validatedNamespaceVersion; }

    /**
     * <p>The namespace version against which the system was validated. Use this value
     * in your system instance.</p>
     */
    inline bool ValidatedNamespaceVersionHasBeenSet() const { return m_validatedNamespaceVersionHasBeenSet; }

    /**
     * <p>The namespace version against which the system was validated. Use this value
     * in your system instance.</p>
     */
    inline void SetValidatedNamespaceVersion(long long value) { m_validatedNamespaceVersionHasBeenSet = true; m_validatedNamespaceVersion = value; }

    /**
     * <p>The namespace version against which the system was validated. Use this value
     * in your system instance.</p>
     */
    inline SystemTemplateDescription& WithValidatedNamespaceVersion(long long value) { SetValidatedNamespaceVersion(value); return *this;}

  private:

    SystemTemplateSummary m_summary;
    bool m_summaryHasBeenSet;

    DefinitionDocument m_definition;
    bool m_definitionHasBeenSet;

    long long m_validatedNamespaceVersion;
    bool m_validatedNamespaceVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
