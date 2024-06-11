﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SystemTemplateDescription
  {
  public:
    AWS_IOTTHINGSGRAPH_API SystemTemplateDescription();
    AWS_IOTTHINGSGRAPH_API SystemTemplateDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API SystemTemplateDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains summary information about a system.</p>
     */
    inline const SystemTemplateSummary& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const SystemTemplateSummary& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(SystemTemplateSummary&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline SystemTemplateDescription& WithSummary(const SystemTemplateSummary& value) { SetSummary(value); return *this;}
    inline SystemTemplateDescription& WithSummary(SystemTemplateSummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition document of a system.</p>
     */
    inline const DefinitionDocument& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const DefinitionDocument& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(DefinitionDocument&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline SystemTemplateDescription& WithDefinition(const DefinitionDocument& value) { SetDefinition(value); return *this;}
    inline SystemTemplateDescription& WithDefinition(DefinitionDocument&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace version against which the system was validated. Use this value
     * in your system instance.</p>
     */
    inline long long GetValidatedNamespaceVersion() const{ return m_validatedNamespaceVersion; }
    inline bool ValidatedNamespaceVersionHasBeenSet() const { return m_validatedNamespaceVersionHasBeenSet; }
    inline void SetValidatedNamespaceVersion(long long value) { m_validatedNamespaceVersionHasBeenSet = true; m_validatedNamespaceVersion = value; }
    inline SystemTemplateDescription& WithValidatedNamespaceVersion(long long value) { SetValidatedNamespaceVersion(value); return *this;}
    ///@}
  private:

    SystemTemplateSummary m_summary;
    bool m_summaryHasBeenSet = false;

    DefinitionDocument m_definition;
    bool m_definitionHasBeenSet = false;

    long long m_validatedNamespaceVersion;
    bool m_validatedNamespaceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
