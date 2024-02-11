/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/AmazonRedshiftSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

AmazonRedshiftSource::AmazonRedshiftSource() : 
    m_nameHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

AmazonRedshiftSource::AmazonRedshiftSource(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_dataHasBeenSet(false)
{
  *this = jsonValue;
}

AmazonRedshiftSource& AmazonRedshiftSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Data"))
  {
    m_data = jsonValue.GetObject("Data");

    m_dataHasBeenSet = true;
  }

  return *this;
}

JsonValue AmazonRedshiftSource::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_dataHasBeenSet)
  {
   payload.WithObject("Data", m_data.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
