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

#include <aws/sagemaker/model/HumanLoopRequestSource.h>
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

HumanLoopRequestSource::HumanLoopRequestSource() : 
    m_awsManagedHumanLoopRequestSource(AwsManagedHumanLoopRequestSource::NOT_SET),
    m_awsManagedHumanLoopRequestSourceHasBeenSet(false)
{
}

HumanLoopRequestSource::HumanLoopRequestSource(JsonView jsonValue) : 
    m_awsManagedHumanLoopRequestSource(AwsManagedHumanLoopRequestSource::NOT_SET),
    m_awsManagedHumanLoopRequestSourceHasBeenSet(false)
{
  *this = jsonValue;
}

HumanLoopRequestSource& HumanLoopRequestSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AwsManagedHumanLoopRequestSource"))
  {
    m_awsManagedHumanLoopRequestSource = AwsManagedHumanLoopRequestSourceMapper::GetAwsManagedHumanLoopRequestSourceForName(jsonValue.GetString("AwsManagedHumanLoopRequestSource"));

    m_awsManagedHumanLoopRequestSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanLoopRequestSource::Jsonize() const
{
  JsonValue payload;

  if(m_awsManagedHumanLoopRequestSourceHasBeenSet)
  {
   payload.WithString("AwsManagedHumanLoopRequestSource", AwsManagedHumanLoopRequestSourceMapper::GetNameForAwsManagedHumanLoopRequestSource(m_awsManagedHumanLoopRequestSource));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
