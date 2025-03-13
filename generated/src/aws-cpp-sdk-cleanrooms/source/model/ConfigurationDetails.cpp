/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ConfigurationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ConfigurationDetails::ConfigurationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationDetails& ConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("directAnalysisConfigurationDetails"))
  {
    m_directAnalysisConfigurationDetails = jsonValue.GetObject("directAnalysisConfigurationDetails");
    m_directAnalysisConfigurationDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_directAnalysisConfigurationDetailsHasBeenSet)
  {
   payload.WithObject("directAnalysisConfigurationDetails", m_directAnalysisConfigurationDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
