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
   * <p>The definition of a filter to filter the data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/IngestionJobFilter">AWS
   * API Reference</a></p>
   */
  class IngestionJobFilter
  {
  public:
    AWS_BEDROCKAGENT_API IngestionJobFilter() = default;
    AWS_BEDROCKAGENT_API IngestionJobFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API IngestionJobFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of field or attribute to apply the filter.</p>
     */
    inline IngestionJobFilterAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(IngestionJobFilterAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline IngestionJobFilter& WithAttribute(IngestionJobFilterAttribute value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation to apply to the field or attribute.</p>
     */
    inline IngestionJobFilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(IngestionJobFilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline IngestionJobFilter& WithOperator(IngestionJobFilterOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of values that belong to the field or attribute.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    IngestionJobFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    IngestionJobFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    IngestionJobFilterAttribute m_attribute{IngestionJobFilterAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;

    IngestionJobFilterOperator m_operator{IngestionJobFilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
