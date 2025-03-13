/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/ExportSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupSearch
{
namespace Model
{

ExportSpecification::ExportSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

ExportSpecification& ExportSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3ExportSpecification"))
  {
    m_s3ExportSpecification = jsonValue.GetObject("s3ExportSpecification");
    m_s3ExportSpecificationHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_s3ExportSpecificationHasBeenSet)
  {
   payload.WithObject("s3ExportSpecification", m_s3ExportSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
