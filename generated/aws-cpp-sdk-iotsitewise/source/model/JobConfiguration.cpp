/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/JobConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

JobConfiguration::JobConfiguration() : 
    m_fileFormatHasBeenSet(false)
{
}

JobConfiguration::JobConfiguration(JsonView jsonValue) : 
    m_fileFormatHasBeenSet(false)
{
  *this = jsonValue;
}

JobConfiguration& JobConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileFormat"))
  {
    m_fileFormat = jsonValue.GetObject("fileFormat");

    m_fileFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue JobConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fileFormatHasBeenSet)
  {
   payload.WithObject("fileFormat", m_fileFormat.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
