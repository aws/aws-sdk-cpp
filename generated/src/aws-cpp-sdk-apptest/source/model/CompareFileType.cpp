/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/CompareFileType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

CompareFileType::CompareFileType(JsonView jsonValue)
{
  *this = jsonValue;
}

CompareFileType& CompareFileType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("datasets"))
  {
    m_datasets = jsonValue.GetObject("datasets");
    m_datasetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("databaseCDC"))
  {
    m_databaseCDC = jsonValue.GetObject("databaseCDC");
    m_databaseCDCHasBeenSet = true;
  }
  return *this;
}

JsonValue CompareFileType::Jsonize() const
{
  JsonValue payload;

  if(m_datasetsHasBeenSet)
  {
   payload.WithObject("datasets", m_datasets.Jsonize());

  }

  if(m_databaseCDCHasBeenSet)
  {
   payload.WithObject("databaseCDC", m_databaseCDC.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
