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

#include <aws/macie2/model/SessionContextAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

SessionContextAttributes::SessionContextAttributes() : 
    m_creationDateHasBeenSet(false),
    m_mfaAuthenticated(false),
    m_mfaAuthenticatedHasBeenSet(false)
{
}

SessionContextAttributes::SessionContextAttributes(JsonView jsonValue) : 
    m_creationDateHasBeenSet(false),
    m_mfaAuthenticated(false),
    m_mfaAuthenticatedHasBeenSet(false)
{
  *this = jsonValue;
}

SessionContextAttributes& SessionContextAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetString("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mfaAuthenticated"))
  {
    m_mfaAuthenticated = jsonValue.GetBool("mfaAuthenticated");

    m_mfaAuthenticatedHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionContextAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("creationDate", m_creationDate.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_mfaAuthenticatedHasBeenSet)
  {
   payload.WithBool("mfaAuthenticated", m_mfaAuthenticated);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
