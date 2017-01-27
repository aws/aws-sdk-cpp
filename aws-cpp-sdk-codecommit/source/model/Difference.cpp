/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codecommit/model/Difference.h>
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

Difference::Difference() : 
    m_beforeBlobHasBeenSet(false),
    m_afterBlobHasBeenSet(false),
    m_changeType(ChangeTypeEnum::NOT_SET),
    m_changeTypeHasBeenSet(false)
{
}

Difference::Difference(const JsonValue& jsonValue) : 
    m_beforeBlobHasBeenSet(false),
    m_afterBlobHasBeenSet(false),
    m_changeType(ChangeTypeEnum::NOT_SET),
    m_changeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Difference& Difference::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("beforeBlob"))
  {
    m_beforeBlob = jsonValue.GetObject("beforeBlob");

    m_beforeBlobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("afterBlob"))
  {
    m_afterBlob = jsonValue.GetObject("afterBlob");

    m_afterBlobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("changeType"))
  {
    m_changeType = ChangeTypeEnumMapper::GetChangeTypeEnumForName(jsonValue.GetString("changeType"));

    m_changeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Difference::Jsonize() const
{
  JsonValue payload;

  if(m_beforeBlobHasBeenSet)
  {
   payload.WithObject("beforeBlob", m_beforeBlob.Jsonize());

  }

  if(m_afterBlobHasBeenSet)
  {
   payload.WithObject("afterBlob", m_afterBlob.Jsonize());

  }

  if(m_changeTypeHasBeenSet)
  {
   payload.WithString("changeType", ChangeTypeEnumMapper::GetNameForChangeTypeEnum(m_changeType));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws