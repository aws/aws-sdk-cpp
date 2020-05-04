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

#include <aws/waf-regional/model/WAFEntityMigrationException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

WAFEntityMigrationException::WAFEntityMigrationException() : 
    m_messageHasBeenSet(false),
    m_migrationErrorType(MigrationErrorType::NOT_SET),
    m_migrationErrorTypeHasBeenSet(false),
    m_migrationErrorReasonHasBeenSet(false)
{
}

WAFEntityMigrationException::WAFEntityMigrationException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_migrationErrorType(MigrationErrorType::NOT_SET),
    m_migrationErrorTypeHasBeenSet(false),
    m_migrationErrorReasonHasBeenSet(false)
{
  *this = jsonValue;
}

WAFEntityMigrationException& WAFEntityMigrationException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MigrationErrorType"))
  {
    m_migrationErrorType = MigrationErrorTypeMapper::GetMigrationErrorTypeForName(jsonValue.GetString("MigrationErrorType"));

    m_migrationErrorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MigrationErrorReason"))
  {
    m_migrationErrorReason = jsonValue.GetString("MigrationErrorReason");

    m_migrationErrorReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue WAFEntityMigrationException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_migrationErrorTypeHasBeenSet)
  {
   payload.WithString("MigrationErrorType", MigrationErrorTypeMapper::GetNameForMigrationErrorType(m_migrationErrorType));
  }

  if(m_migrationErrorReasonHasBeenSet)
  {
   payload.WithString("MigrationErrorReason", m_migrationErrorReason);

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
