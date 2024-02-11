/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/IngestionJobFilterAttribute.h>
#include <aws/bedrock-agent/model/IngestionJobFilterOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Filters the response returned by ListIngestionJobs operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/IngestionJobFilter">AWS
   * API Reference</a></p>
   */
  class IngestionJobFilter
  {
  public:
    AWS_BEDROCKAGENT_API IngestionJobFilter();
    AWS_BEDROCKAGENT_API IngestionJobFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API IngestionJobFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const IngestionJobFilterAttribute& GetAttribute() const{ return m_attribute; }

    
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    
    inline void SetAttribute(const IngestionJobFilterAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    
    inline void SetAttribute(IngestionJobFilterAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    
    inline IngestionJobFilter& WithAttribute(const IngestionJobFilterAttribute& value) { SetAttribute(value); return *this;}

    
    inline IngestionJobFilter& WithAttribute(IngestionJobFilterAttribute&& value) { SetAttribute(std::move(value)); return *this;}


    
    inline const IngestionJobFilterOperator& GetOperator() const{ return m_operator; }

    
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    
    inline void SetOperator(const IngestionJobFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    
    inline void SetOperator(IngestionJobFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    
    inline IngestionJobFilter& WithOperator(const IngestionJobFilterOperator& value) { SetOperator(value); return *this;}

    
    inline IngestionJobFilter& WithOperator(IngestionJobFilterOperator&& value) { SetOperator(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    
    inline IngestionJobFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    
    inline IngestionJobFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    
    inline IngestionJobFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    
    inline IngestionJobFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    
    inline IngestionJobFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    IngestionJobFilterAttribute m_attribute;
    bool m_attributeHasBeenSet = false;

    IngestionJobFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
