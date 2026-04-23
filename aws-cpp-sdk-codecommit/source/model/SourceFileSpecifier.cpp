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

#include <aws/codecommit/model/SourceFileSpecifier.h>
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

SourceFileSpecifier::SourceFileSpecifier() : 
    m_filePathHasBeenSet(false),
    m_isMove(false),
    m_isMoveHasBeenSet(false)
{
}

SourceFileSpecifier::SourceFileSpecifier(JsonView jsonValue) : 
    m_filePathHasBeenSet(false),
    m_isMove(false),
    m_isMoveHasBeenSet(false)
{
  *this = jsonValue;
}

SourceFileSpecifier& SourceFileSpecifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filePath"))
  {
    m_filePath = jsonValue.GetString("filePath");

    m_filePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isMove"))
  {
    m_isMove = jsonValue.GetBool("isMove");

    m_isMoveHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceFileSpecifier::Jsonize() const
{
  JsonValue payload;

  if(m_filePathHasBeenSet)
  {
   payload.WithString("filePath", m_filePath);

  }

  if(m_isMoveHasBeenSet)
  {
   payload.WithBool("isMove", m_isMove);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
