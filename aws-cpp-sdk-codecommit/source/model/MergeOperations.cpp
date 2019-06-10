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

#include <aws/codecommit/model/MergeOperations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

MergeOperations::MergeOperations() : 
    m_source(ChangeTypeEnum::NOT_SET),
    m_sourceHasBeenSet(false),
    m_destination(ChangeTypeEnum::NOT_SET),
    m_destinationHasBeenSet(false)
{
}

MergeOperations::MergeOperations(JsonView jsonValue) : 
    m_source(ChangeTypeEnum::NOT_SET),
    m_sourceHasBeenSet(false),
    m_destination(ChangeTypeEnum::NOT_SET),
    m_destinationHasBeenSet(false)
{
  *this = jsonValue;
}

MergeOperations& MergeOperations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = ChangeTypeEnumMapper::GetChangeTypeEnumForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = ChangeTypeEnumMapper::GetChangeTypeEnumForName(jsonValue.GetString("destination"));

    m_destinationHasBeenSet = true;
  }

  return *this;
}

JsonValue MergeOperations::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", ChangeTypeEnumMapper::GetNameForChangeTypeEnum(m_source));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", ChangeTypeEnumMapper::GetNameForChangeTypeEnum(m_destination));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
