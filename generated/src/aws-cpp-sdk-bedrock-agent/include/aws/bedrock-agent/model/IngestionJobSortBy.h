/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/IngestionJobSortByAttribute.h>
#include <aws/bedrock-agent/model/SortOrder.h>
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
   * <p>The parameters of sorting the data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/IngestionJobSortBy">AWS
   * API Reference</a></p>
   */
  class IngestionJobSortBy
  {
  public:
    AWS_BEDROCKAGENT_API IngestionJobSortBy() = default;
    AWS_BEDROCKAGENT_API IngestionJobSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API IngestionJobSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of field or attribute to apply sorting of data.</p>
     */
    inline IngestionJobSortByAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(IngestionJobSortByAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline IngestionJobSortBy& WithAttribute(IngestionJobSortByAttribute value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order for sorting the data.</p>
     */
    inline SortOrder GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(SortOrder value) { m_orderHasBeenSet = true; m_order = value; }
    inline IngestionJobSortBy& WithOrder(SortOrder value) { SetOrder(value); return *this;}
    ///@}
  private:

    IngestionJobSortByAttribute m_attribute{IngestionJobSortByAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;

    SortOrder m_order{SortOrder::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
