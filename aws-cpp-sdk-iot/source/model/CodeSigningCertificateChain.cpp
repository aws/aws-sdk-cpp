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
    m_streamHasBeenSet(false),
    m_certificateNameHasBeenSet(false),
    m_inlineDocumentHasBeenSet(false)
{
}

CodeSigningCertificateChain::CodeSigningCertificateChain(const JsonValue& jsonValue) : 
    m_streamHasBeenSet(false),
    m_certificateNameHasBeenSet(false),
    m_inlineDocumentHasBeenSet(false)
{
  *this = jsonValue;
}

CodeSigningCertificateChain& CodeSigningCertificateChain::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("stream"))
  {
    m_stream = jsonValue.GetObject("stream");

    m_streamHasBeenSet = true;
  }

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

  if(m_streamHasBeenSet)
  {
   payload.WithObject("stream", m_stream.Jsonize());

  }

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
