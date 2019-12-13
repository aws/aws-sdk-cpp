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

#include <aws/sesv2/model/DkimSigningAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

DkimSigningAttributes::DkimSigningAttributes() : 
    m_domainSigningSelectorHasBeenSet(false),
    m_domainSigningPrivateKeyHasBeenSet(false)
{
}

DkimSigningAttributes::DkimSigningAttributes(JsonView jsonValue) : 
    m_domainSigningSelectorHasBeenSet(false),
    m_domainSigningPrivateKeyHasBeenSet(false)
{
  *this = jsonValue;
}

DkimSigningAttributes& DkimSigningAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainSigningSelector"))
  {
    m_domainSigningSelector = jsonValue.GetString("DomainSigningSelector");

    m_domainSigningSelectorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainSigningPrivateKey"))
  {
    m_domainSigningPrivateKey = jsonValue.GetString("DomainSigningPrivateKey");

    m_domainSigningPrivateKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue DkimSigningAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_domainSigningSelectorHasBeenSet)
  {
   payload.WithString("DomainSigningSelector", m_domainSigningSelector);

  }

  if(m_domainSigningPrivateKeyHasBeenSet)
  {
   payload.WithString("DomainSigningPrivateKey", m_domainSigningPrivateKey);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
