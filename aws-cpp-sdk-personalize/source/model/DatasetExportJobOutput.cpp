/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DatasetExportJobOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

DatasetExportJobOutput::DatasetExportJobOutput() : 
    m_s3DataDestinationHasBeenSet(false)
{
}

DatasetExportJobOutput::DatasetExportJobOutput(JsonView jsonValue) : 
    m_s3DataDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetExportJobOutput& DatasetExportJobOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3DataDestination"))
  {
    m_s3DataDestination = jsonValue.GetObject("s3DataDestination");

    m_s3DataDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetExportJobOutput::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataDestinationHasBeenSet)
  {
   payload.WithObject("s3DataDestination", m_s3DataDestination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
