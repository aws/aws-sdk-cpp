/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ClassificationExportConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

ClassificationExportConfiguration::ClassificationExportConfiguration() : 
    m_s3DestinationHasBeenSet(false)
{
}

ClassificationExportConfiguration::ClassificationExportConfiguration(JsonView jsonValue) : 
    m_s3DestinationHasBeenSet(false)
{
  *this = jsonValue;
}

ClassificationExportConfiguration& ClassificationExportConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Destination"))
  {
    m_s3Destination = jsonValue.GetObject("s3Destination");

    m_s3DestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue ClassificationExportConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3DestinationHasBeenSet)
  {
   payload.WithObject("s3Destination", m_s3Destination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
