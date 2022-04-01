/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DataPrivacy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

DataPrivacy::DataPrivacy() : 
    m_childDirected(false),
    m_childDirectedHasBeenSet(false)
{
}

DataPrivacy::DataPrivacy(JsonView jsonValue) : 
    m_childDirected(false),
    m_childDirectedHasBeenSet(false)
{
  *this = jsonValue;
}

DataPrivacy& DataPrivacy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("childDirected"))
  {
    m_childDirected = jsonValue.GetBool("childDirected");

    m_childDirectedHasBeenSet = true;
  }

  return *this;
}

JsonValue DataPrivacy::Jsonize() const
{
  JsonValue payload;

  if(m_childDirectedHasBeenSet)
  {
   payload.WithBool("childDirected", m_childDirected);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
