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
#include <aws/opsworks/model/InstanceIdentity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

InstanceIdentity::InstanceIdentity() : 
    m_documentHasBeenSet(false),
    m_signatureHasBeenSet(false)
{
}

InstanceIdentity::InstanceIdentity(const JsonValue& jsonValue) : 
    m_documentHasBeenSet(false),
    m_signatureHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceIdentity& InstanceIdentity::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Document"))
  {
    m_document = jsonValue.GetString("Document");

    m_documentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Signature"))
  {
    m_signature = jsonValue.GetString("Signature");

    m_signatureHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_documentHasBeenSet)
  {
   payload.WithString("Document", m_document);

  }

  if(m_signatureHasBeenSet)
  {
   payload.WithString("Signature", m_signature);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws