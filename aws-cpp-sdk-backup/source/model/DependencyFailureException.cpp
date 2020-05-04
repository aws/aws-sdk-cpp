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

#include <aws/backup/model/DependencyFailureException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

DependencyFailureException::DependencyFailureException() : 
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

DependencyFailureException::DependencyFailureException(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_contextHasBeenSet(false)
{
  *this = jsonValue;
}

DependencyFailureException& DependencyFailureException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetString("Code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Context"))
  {
    m_context = jsonValue.GetString("Context");

    m_contextHasBeenSet = true;
  }

  return *this;
}

JsonValue DependencyFailureException::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", m_code);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_contextHasBeenSet)
  {
   payload.WithString("Context", m_context);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
