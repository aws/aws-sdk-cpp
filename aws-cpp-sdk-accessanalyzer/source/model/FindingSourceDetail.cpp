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

#include <aws/accessanalyzer/model/FindingSourceDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

FindingSourceDetail::FindingSourceDetail() : 
    m_accessPointArnHasBeenSet(false)
{
}

FindingSourceDetail::FindingSourceDetail(JsonView jsonValue) : 
    m_accessPointArnHasBeenSet(false)
{
  *this = jsonValue;
}

FindingSourceDetail& FindingSourceDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessPointArn"))
  {
    m_accessPointArn = jsonValue.GetString("accessPointArn");

    m_accessPointArnHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingSourceDetail::Jsonize() const
{
  JsonValue payload;

  if(m_accessPointArnHasBeenSet)
  {
   payload.WithString("accessPointArn", m_accessPointArn);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
