/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/SlateSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

SlateSource::SlateSource() : 
    m_sourceLocationNameHasBeenSet(false),
    m_vodSourceNameHasBeenSet(false)
{
}

SlateSource::SlateSource(JsonView jsonValue) : 
    m_sourceLocationNameHasBeenSet(false),
    m_vodSourceNameHasBeenSet(false)
{
  *this = jsonValue;
}

SlateSource& SlateSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceLocationName"))
  {
    m_sourceLocationName = jsonValue.GetString("SourceLocationName");

    m_sourceLocationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VodSourceName"))
  {
    m_vodSourceName = jsonValue.GetString("VodSourceName");

    m_vodSourceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SlateSource::Jsonize() const
{
  JsonValue payload;

  if(m_sourceLocationNameHasBeenSet)
  {
   payload.WithString("SourceLocationName", m_sourceLocationName);

  }

  if(m_vodSourceNameHasBeenSet)
  {
   payload.WithString("VodSourceName", m_vodSourceName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
