/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/Action.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

Action::Action() : 
    m_exportRevisionToS3HasBeenSet(false)
{
}

Action::Action(JsonView jsonValue) : 
    m_exportRevisionToS3HasBeenSet(false)
{
  *this = jsonValue;
}

Action& Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExportRevisionToS3"))
  {
    m_exportRevisionToS3 = jsonValue.GetObject("ExportRevisionToS3");

    m_exportRevisionToS3HasBeenSet = true;
  }

  return *this;
}

JsonValue Action::Jsonize() const
{
  JsonValue payload;

  if(m_exportRevisionToS3HasBeenSet)
  {
   payload.WithObject("ExportRevisionToS3", m_exportRevisionToS3.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
