/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestSetExportSpecification.h>
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

TestSetExportSpecification::TestSetExportSpecification() : 
    m_testSetIdHasBeenSet(false)
{
}

TestSetExportSpecification::TestSetExportSpecification(JsonView jsonValue) : 
    m_testSetIdHasBeenSet(false)
{
  *this = jsonValue;
}

TestSetExportSpecification& TestSetExportSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("testSetId"))
  {
    m_testSetId = jsonValue.GetString("testSetId");

    m_testSetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TestSetExportSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_testSetIdHasBeenSet)
  {
   payload.WithString("testSetId", m_testSetId);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
