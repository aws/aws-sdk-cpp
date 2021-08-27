/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CodeSigningCertificateChain.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

CodeSigningCertificateChain::CodeSigningCertificateChain() : 
    m_certificateNameHasBeenSet(false),
    m_inlineDocumentHasBeenSet(false)
{
}

CodeSigningCertificateChain::CodeSigningCertificateChain(JsonView jsonValue) : 
    m_certificateNameHasBeenSet(false),
    m_inlineDocumentHasBeenSet(false)
{
  *this = jsonValue;
}

CodeSigningCertificateChain& CodeSigningCertificateChain::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateName"))
  {
    m_certificateName = jsonValue.GetString("certificateName");

    m_certificateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inlineDocument"))
  {
    m_inlineDocument = jsonValue.GetString("inlineDocument");

    m_inlineDocumentHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeSigningCertificateChain::Jsonize() const
{
  JsonValue payload;

  if(m_certificateNameHasBeenSet)
  {
   payload.WithString("certificateName", m_certificateName);

  }

  if(m_inlineDocumentHasBeenSet)
  {
   payload.WithString("inlineDocument", m_inlineDocument);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
