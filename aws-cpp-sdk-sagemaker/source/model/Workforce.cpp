/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sagemaker/model/Workforce.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

Workforce::Workforce() : 
    m_workforceNameHasBeenSet(false),
    m_workforceArnHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_sourceIpConfigHasBeenSet(false)
{
}

Workforce::Workforce(JsonView jsonValue) : 
    m_workforceNameHasBeenSet(false),
    m_workforceArnHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_sourceIpConfigHasBeenSet(false)
{
  *this = jsonValue;
}

Workforce& Workforce::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkforceName"))
  {
    m_workforceName = jsonValue.GetString("WorkforceName");

    m_workforceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkforceArn"))
  {
    m_workforceArn = jsonValue.GetString("WorkforceArn");

    m_workforceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("LastUpdatedDate");

    m_lastUpdatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceIpConfig"))
  {
    m_sourceIpConfig = jsonValue.GetObject("SourceIpConfig");

    m_sourceIpConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue Workforce::Jsonize() const
{
  JsonValue payload;

  if(m_workforceNameHasBeenSet)
  {
   payload.WithString("WorkforceName", m_workforceName);

  }

  if(m_workforceArnHasBeenSet)
  {
   payload.WithString("WorkforceArn", m_workforceArn);

  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithDouble("LastUpdatedDate", m_lastUpdatedDate.SecondsWithMSPrecision());
  }

  if(m_sourceIpConfigHasBeenSet)
  {
   payload.WithObject("SourceIpConfig", m_sourceIpConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
