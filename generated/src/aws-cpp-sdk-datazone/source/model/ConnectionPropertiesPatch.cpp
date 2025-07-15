/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ConnectionPropertiesPatch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

ConnectionPropertiesPatch::ConnectionPropertiesPatch(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectionPropertiesPatch& ConnectionPropertiesPatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("athenaProperties"))
  {
    m_athenaProperties = jsonValue.GetObject("athenaProperties");
    m_athenaPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("glueProperties"))
  {
    m_glueProperties = jsonValue.GetObject("glueProperties");
    m_gluePropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iamProperties"))
  {
    m_iamProperties = jsonValue.GetObject("iamProperties");
    m_iamPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("redshiftProperties"))
  {
    m_redshiftProperties = jsonValue.GetObject("redshiftProperties");
    m_redshiftPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3Properties"))
  {
    m_s3Properties = jsonValue.GetObject("s3Properties");
    m_s3PropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sparkEmrProperties"))
  {
    m_sparkEmrProperties = jsonValue.GetObject("sparkEmrProperties");
    m_sparkEmrPropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectionPropertiesPatch::Jsonize() const
{
  JsonValue payload;

  if(m_athenaPropertiesHasBeenSet)
  {
   payload.WithObject("athenaProperties", m_athenaProperties.Jsonize());

  }

  if(m_gluePropertiesHasBeenSet)
  {
   payload.WithObject("glueProperties", m_glueProperties.Jsonize());

  }

  if(m_iamPropertiesHasBeenSet)
  {
   payload.WithObject("iamProperties", m_iamProperties.Jsonize());

  }

  if(m_redshiftPropertiesHasBeenSet)
  {
   payload.WithObject("redshiftProperties", m_redshiftProperties.Jsonize());

  }

  if(m_s3PropertiesHasBeenSet)
  {
   payload.WithObject("s3Properties", m_s3Properties.Jsonize());

  }

  if(m_sparkEmrPropertiesHasBeenSet)
  {
   payload.WithObject("sparkEmrProperties", m_sparkEmrProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
