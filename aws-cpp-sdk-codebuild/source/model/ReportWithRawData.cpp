/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ReportWithRawData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

ReportWithRawData::ReportWithRawData() : 
    m_reportArnHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

ReportWithRawData::ReportWithRawData(JsonView jsonValue) : 
    m_reportArnHasBeenSet(false),
    m_dataHasBeenSet(false)
{
  *this = jsonValue;
}

ReportWithRawData& ReportWithRawData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reportArn"))
  {
    m_reportArn = jsonValue.GetString("reportArn");

    m_reportArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("data"))
  {
    m_data = jsonValue.GetString("data");

    m_dataHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportWithRawData::Jsonize() const
{
  JsonValue payload;

  if(m_reportArnHasBeenSet)
  {
   payload.WithString("reportArn", m_reportArn);

  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("data", m_data);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
