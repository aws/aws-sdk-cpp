/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/ExportErrorDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

ExportErrorDetails::ExportErrorDetails() : 
    m_exportResultsHasBeenSet(false),
    m_exportSourceImagesHasBeenSet(false)
{
}

ExportErrorDetails::ExportErrorDetails(JsonView jsonValue) : 
    m_exportResultsHasBeenSet(false),
    m_exportSourceImagesHasBeenSet(false)
{
  *this = jsonValue;
}

ExportErrorDetails& ExportErrorDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExportResults"))
  {
    m_exportResults = jsonValue.GetObject("ExportResults");

    m_exportResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportSourceImages"))
  {
    m_exportSourceImages = jsonValue.GetObject("ExportSourceImages");

    m_exportSourceImagesHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportErrorDetails::Jsonize() const
{
  JsonValue payload;

  if(m_exportResultsHasBeenSet)
  {
   payload.WithObject("ExportResults", m_exportResults.Jsonize());

  }

  if(m_exportSourceImagesHasBeenSet)
  {
   payload.WithObject("ExportSourceImages", m_exportSourceImages.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
