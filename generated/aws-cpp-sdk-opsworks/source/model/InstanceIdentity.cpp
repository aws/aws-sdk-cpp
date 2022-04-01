/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

InstanceIdentity::InstanceIdentity(JsonView jsonValue) : 
    m_documentHasBeenSet(false),
    m_signatureHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceIdentity& InstanceIdentity::operator =(JsonView jsonValue)
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
