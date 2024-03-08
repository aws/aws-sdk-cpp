/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ExpandConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

ExpandConfiguration::ExpandConfiguration() : 
    m_maxResultItemsToExpand(0),
    m_maxResultItemsToExpandHasBeenSet(false),
    m_maxExpandedResultsPerItem(0),
    m_maxExpandedResultsPerItemHasBeenSet(false)
{
}

ExpandConfiguration::ExpandConfiguration(JsonView jsonValue) : 
    m_maxResultItemsToExpand(0),
    m_maxResultItemsToExpandHasBeenSet(false),
    m_maxExpandedResultsPerItem(0),
    m_maxExpandedResultsPerItemHasBeenSet(false)
{
  *this = jsonValue;
}

ExpandConfiguration& ExpandConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxResultItemsToExpand"))
  {
    m_maxResultItemsToExpand = jsonValue.GetInteger("MaxResultItemsToExpand");

    m_maxResultItemsToExpandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxExpandedResultsPerItem"))
  {
    m_maxExpandedResultsPerItem = jsonValue.GetInteger("MaxExpandedResultsPerItem");

    m_maxExpandedResultsPerItemHasBeenSet = true;
  }

  return *this;
}

JsonValue ExpandConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_maxResultItemsToExpandHasBeenSet)
  {
   payload.WithInteger("MaxResultItemsToExpand", m_maxResultItemsToExpand);

  }

  if(m_maxExpandedResultsPerItemHasBeenSet)
  {
   payload.WithInteger("MaxExpandedResultsPerItem", m_maxExpandedResultsPerItem);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
