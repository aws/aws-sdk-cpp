/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/BatchStepOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

BatchStepOutput::BatchStepOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchStepOutput& BatchStepOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSetExportLocation"))
  {
    m_dataSetExportLocation = jsonValue.GetString("dataSetExportLocation");
    m_dataSetExportLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dmsOutputLocation"))
  {
    m_dmsOutputLocation = jsonValue.GetString("dmsOutputLocation");
    m_dmsOutputLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataSetDetails"))
  {
    Aws::Utils::Array<JsonView> dataSetDetailsJsonList = jsonValue.GetArray("dataSetDetails");
    for(unsigned dataSetDetailsIndex = 0; dataSetDetailsIndex < dataSetDetailsJsonList.GetLength(); ++dataSetDetailsIndex)
    {
      m_dataSetDetails.push_back(dataSetDetailsJsonList[dataSetDetailsIndex].AsObject());
    }
    m_dataSetDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchStepOutput::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetExportLocationHasBeenSet)
  {
   payload.WithString("dataSetExportLocation", m_dataSetExportLocation);

  }

  if(m_dmsOutputLocationHasBeenSet)
  {
   payload.WithString("dmsOutputLocation", m_dmsOutputLocation);

  }

  if(m_dataSetDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSetDetailsJsonList(m_dataSetDetails.size());
   for(unsigned dataSetDetailsIndex = 0; dataSetDetailsIndex < dataSetDetailsJsonList.GetLength(); ++dataSetDetailsIndex)
   {
     dataSetDetailsJsonList[dataSetDetailsIndex].AsObject(m_dataSetDetails[dataSetDetailsIndex].Jsonize());
   }
   payload.WithArray("dataSetDetails", std::move(dataSetDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
