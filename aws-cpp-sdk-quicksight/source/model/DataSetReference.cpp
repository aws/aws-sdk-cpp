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

#include <aws/quicksight/model/DataSetReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DataSetReference::DataSetReference() : 
    m_dataSetPlaceholderHasBeenSet(false),
    m_dataSetArnHasBeenSet(false)
{
}

DataSetReference::DataSetReference(JsonView jsonValue) : 
    m_dataSetPlaceholderHasBeenSet(false),
    m_dataSetArnHasBeenSet(false)
{
  *this = jsonValue;
}

DataSetReference& DataSetReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetPlaceholder"))
  {
    m_dataSetPlaceholder = jsonValue.GetString("DataSetPlaceholder");

    m_dataSetPlaceholderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetArn"))
  {
    m_dataSetArn = jsonValue.GetString("DataSetArn");

    m_dataSetArnHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSetReference::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetPlaceholderHasBeenSet)
  {
   payload.WithString("DataSetPlaceholder", m_dataSetPlaceholder);

  }

  if(m_dataSetArnHasBeenSet)
  {
   payload.WithString("DataSetArn", m_dataSetArn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
