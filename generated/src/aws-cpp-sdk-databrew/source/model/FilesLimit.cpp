/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/FilesLimit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

FilesLimit::FilesLimit() : 
    m_maxFiles(0),
    m_maxFilesHasBeenSet(false),
    m_orderedBy(OrderedBy::NOT_SET),
    m_orderedByHasBeenSet(false),
    m_order(Order::NOT_SET),
    m_orderHasBeenSet(false)
{
}

FilesLimit::FilesLimit(JsonView jsonValue) : 
    m_maxFiles(0),
    m_maxFilesHasBeenSet(false),
    m_orderedBy(OrderedBy::NOT_SET),
    m_orderedByHasBeenSet(false),
    m_order(Order::NOT_SET),
    m_orderHasBeenSet(false)
{
  *this = jsonValue;
}

FilesLimit& FilesLimit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxFiles"))
  {
    m_maxFiles = jsonValue.GetInteger("MaxFiles");

    m_maxFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrderedBy"))
  {
    m_orderedBy = OrderedByMapper::GetOrderedByForName(jsonValue.GetString("OrderedBy"));

    m_orderedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Order"))
  {
    m_order = OrderMapper::GetOrderForName(jsonValue.GetString("Order"));

    m_orderHasBeenSet = true;
  }

  return *this;
}

JsonValue FilesLimit::Jsonize() const
{
  JsonValue payload;

  if(m_maxFilesHasBeenSet)
  {
   payload.WithInteger("MaxFiles", m_maxFiles);

  }

  if(m_orderedByHasBeenSet)
  {
   payload.WithString("OrderedBy", OrderedByMapper::GetNameForOrderedBy(m_orderedBy));
  }

  if(m_orderHasBeenSet)
  {
   payload.WithString("Order", OrderMapper::GetNameForOrder(m_order));
  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
