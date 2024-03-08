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
   * <p>Sorts the response returned by ListIngestionJobs operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/IngestionJobSortBy">AWS
   * API Reference</a></p>
   */
  class IngestionJobSortBy
  {
  public:
    AWS_BEDROCKAGENT_API IngestionJobSortBy();
    AWS_BEDROCKAGENT_API IngestionJobSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API IngestionJobSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const IngestionJobSortByAttribute& GetAttribute() const{ return m_attribute; }

    
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    
    inline void SetAttribute(const IngestionJobSortByAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    
    inline void SetAttribute(IngestionJobSortByAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    
    inline IngestionJobSortBy& WithAttribute(const IngestionJobSortByAttribute& value) { SetAttribute(value); return *this;}

    
    inline IngestionJobSortBy& WithAttribute(IngestionJobSortByAttribute&& value) { SetAttribute(std::move(value)); return *this;}


    
    inline const SortOrder& GetOrder() const{ return m_order; }

    
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    
    inline void SetOrder(const SortOrder& value) { m_orderHasBeenSet = true; m_order = value; }

    
    inline void SetOrder(SortOrder&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    
    inline IngestionJobSortBy& WithOrder(const SortOrder& value) { SetOrder(value); return *this;}

    
    inline IngestionJobSortBy& WithOrder(SortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    IngestionJobSortByAttribute m_attribute;
    bool m_attributeHasBeenSet = false;

    SortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
