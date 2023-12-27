/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/IntermediateSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

IntermediateSourceConfiguration::IntermediateSourceConfiguration() : 
    m_intermediateS3PathHasBeenSet(false)
{
}

IntermediateSourceConfiguration::IntermediateSourceConfiguration(JsonView jsonValue) : 
    m_intermediateS3PathHasBeenSet(false)
{
  *this = jsonValue;
}

IntermediateSourceConfiguration& IntermediateSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intermediateS3Path"))
  {
    m_intermediateS3Path = jsonValue.GetString("intermediateS3Path");

    m_intermediateS3PathHasBeenSet = true;
  }

  return *this;
}

JsonValue IntermediateSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_intermediateS3PathHasBeenSet)
  {
   payload.WithString("intermediateS3Path", m_intermediateS3Path);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
