/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FIS
{
namespace Model
{

ExperimentReport::ExperimentReport(JsonView jsonValue)
{
  *this = jsonValue;
}

ExperimentReport& ExperimentReport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetObject("state");
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3Reports"))
  {
    Aws::Utils::Array<JsonView> s3ReportsJsonList = jsonValue.GetArray("s3Reports");
    for(unsigned s3ReportsIndex = 0; s3ReportsIndex < s3ReportsJsonList.GetLength(); ++s3ReportsIndex)
    {
      m_s3Reports.push_back(s3ReportsJsonList[s3ReportsIndex].AsObject());
    }
    m_s3ReportsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExperimentReport::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  if(m_s3ReportsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3ReportsJsonList(m_s3Reports.size());
   for(unsigned s3ReportsIndex = 0; s3ReportsIndex < s3ReportsJsonList.GetLength(); ++s3ReportsIndex)
   {
     s3ReportsJsonList[s3ReportsIndex].AsObject(m_s3Reports[s3ReportsIndex].Jsonize());
   }
   payload.WithArray("s3Reports", std::move(s3ReportsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
