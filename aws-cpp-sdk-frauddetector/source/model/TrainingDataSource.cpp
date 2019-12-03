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

#include <aws/frauddetector/model/TrainingDataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

TrainingDataSource::TrainingDataSource() : 
    m_dataLocationHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false)
{
}

TrainingDataSource::TrainingDataSource(JsonView jsonValue) : 
    m_dataLocationHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingDataSource& TrainingDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataLocation"))
  {
    m_dataLocation = jsonValue.GetString("dataLocation");

    m_dataLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("dataAccessRoleArn");

    m_dataAccessRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_dataLocationHasBeenSet)
  {
   payload.WithString("dataLocation", m_dataLocation);

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("dataAccessRoleArn", m_dataAccessRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
