/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/InstanceIdentity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataPipeline
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
  if(jsonValue.ValueExists("document"))
  {
    m_document = jsonValue.GetString("document");

    m_documentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signature"))
  {
    m_signature = jsonValue.GetString("signature");

    m_signatureHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_documentHasBeenSet)
  {
   payload.WithString("document", m_document);

  }

  if(m_signatureHasBeenSet)
  {
   payload.WithString("signature", m_signature);

  }

  return payload;
}

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
