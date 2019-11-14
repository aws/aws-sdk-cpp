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

#include <aws/personalize/model/BatchInferenceJobInput.h>
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

BatchInferenceJobInput::BatchInferenceJobInput() : 
    m_s3DataSourceHasBeenSet(false)
{
}

BatchInferenceJobInput::BatchInferenceJobInput(JsonView jsonValue) : 
    m_s3DataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

BatchInferenceJobInput& BatchInferenceJobInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3DataSource"))
  {
    m_s3DataSource = jsonValue.GetObject("s3DataSource");

    m_s3DataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchInferenceJobInput::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataSourceHasBeenSet)
  {
   payload.WithObject("s3DataSource", m_s3DataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
