/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSetIdentifierDeclaration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DataSetIdentifierDeclaration::DataSetIdentifierDeclaration() : 
    m_identifierHasBeenSet(false),
    m_dataSetArnHasBeenSet(false)
{
}

DataSetIdentifierDeclaration::DataSetIdentifierDeclaration(JsonView jsonValue) : 
    m_identifierHasBeenSet(false),
    m_dataSetArnHasBeenSet(false)
{
  *this = jsonValue;
}

DataSetIdentifierDeclaration& DataSetIdentifierDeclaration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetArn"))
  {
    m_dataSetArn = jsonValue.GetString("DataSetArn");

    m_dataSetArnHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSetIdentifierDeclaration::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_dataSetArnHasBeenSet)
  {
   payload.WithString("DataSetArn", m_dataSetArn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
