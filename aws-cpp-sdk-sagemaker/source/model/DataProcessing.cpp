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

#include <aws/sagemaker/model/DataProcessing.h>
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

DataProcessing::DataProcessing() : 
    m_inputFilterHasBeenSet(false),
    m_outputFilterHasBeenSet(false),
    m_joinSource(JoinSource::NOT_SET),
    m_joinSourceHasBeenSet(false)
{
}

DataProcessing::DataProcessing(JsonView jsonValue) : 
    m_inputFilterHasBeenSet(false),
    m_outputFilterHasBeenSet(false),
    m_joinSource(JoinSource::NOT_SET),
    m_joinSourceHasBeenSet(false)
{
  *this = jsonValue;
}

DataProcessing& DataProcessing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputFilter"))
  {
    m_inputFilter = jsonValue.GetString("InputFilter");

    m_inputFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputFilter"))
  {
    m_outputFilter = jsonValue.GetString("OutputFilter");

    m_outputFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JoinSource"))
  {
    m_joinSource = JoinSourceMapper::GetJoinSourceForName(jsonValue.GetString("JoinSource"));

    m_joinSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue DataProcessing::Jsonize() const
{
  JsonValue payload;

  if(m_inputFilterHasBeenSet)
  {
   payload.WithString("InputFilter", m_inputFilter);

  }

  if(m_outputFilterHasBeenSet)
  {
   payload.WithString("OutputFilter", m_outputFilter);

  }

  if(m_joinSourceHasBeenSet)
  {
   payload.WithString("JoinSource", JoinSourceMapper::GetNameForJoinSource(m_joinSource));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
