/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/As2ConnectorConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

As2ConnectorConfig::As2ConnectorConfig() : 
    m_localProfileIdHasBeenSet(false),
    m_partnerProfileIdHasBeenSet(false),
    m_messageSubjectHasBeenSet(false),
    m_compression(CompressionEnum::NOT_SET),
    m_compressionHasBeenSet(false),
    m_encryptionAlgorithm(EncryptionAlg::NOT_SET),
    m_encryptionAlgorithmHasBeenSet(false),
    m_signingAlgorithm(SigningAlg::NOT_SET),
    m_signingAlgorithmHasBeenSet(false),
    m_mdnSigningAlgorithm(MdnSigningAlg::NOT_SET),
    m_mdnSigningAlgorithmHasBeenSet(false),
    m_mdnResponse(MdnResponse::NOT_SET),
    m_mdnResponseHasBeenSet(false),
    m_basicAuthSecretIdHasBeenSet(false)
{
}

As2ConnectorConfig::As2ConnectorConfig(JsonView jsonValue) : 
    m_localProfileIdHasBeenSet(false),
    m_partnerProfileIdHasBeenSet(false),
    m_messageSubjectHasBeenSet(false),
    m_compression(CompressionEnum::NOT_SET),
    m_compressionHasBeenSet(false),
    m_encryptionAlgorithm(EncryptionAlg::NOT_SET),
    m_encryptionAlgorithmHasBeenSet(false),
    m_signingAlgorithm(SigningAlg::NOT_SET),
    m_signingAlgorithmHasBeenSet(false),
    m_mdnSigningAlgorithm(MdnSigningAlg::NOT_SET),
    m_mdnSigningAlgorithmHasBeenSet(false),
    m_mdnResponse(MdnResponse::NOT_SET),
    m_mdnResponseHasBeenSet(false),
    m_basicAuthSecretIdHasBeenSet(false)
{
  *this = jsonValue;
}

As2ConnectorConfig& As2ConnectorConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocalProfileId"))
  {
    m_localProfileId = jsonValue.GetString("LocalProfileId");

    m_localProfileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartnerProfileId"))
  {
    m_partnerProfileId = jsonValue.GetString("PartnerProfileId");

    m_partnerProfileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageSubject"))
  {
    m_messageSubject = jsonValue.GetString("MessageSubject");

    m_messageSubjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Compression"))
  {
    m_compression = CompressionEnumMapper::GetCompressionEnumForName(jsonValue.GetString("Compression"));

    m_compressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionAlgorithm"))
  {
    m_encryptionAlgorithm = EncryptionAlgMapper::GetEncryptionAlgForName(jsonValue.GetString("EncryptionAlgorithm"));

    m_encryptionAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SigningAlgorithm"))
  {
    m_signingAlgorithm = SigningAlgMapper::GetSigningAlgForName(jsonValue.GetString("SigningAlgorithm"));

    m_signingAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MdnSigningAlgorithm"))
  {
    m_mdnSigningAlgorithm = MdnSigningAlgMapper::GetMdnSigningAlgForName(jsonValue.GetString("MdnSigningAlgorithm"));

    m_mdnSigningAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MdnResponse"))
  {
    m_mdnResponse = MdnResponseMapper::GetMdnResponseForName(jsonValue.GetString("MdnResponse"));

    m_mdnResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BasicAuthSecretId"))
  {
    m_basicAuthSecretId = jsonValue.GetString("BasicAuthSecretId");

    m_basicAuthSecretIdHasBeenSet = true;
  }

  return *this;
}

JsonValue As2ConnectorConfig::Jsonize() const
{
  JsonValue payload;

  if(m_localProfileIdHasBeenSet)
  {
   payload.WithString("LocalProfileId", m_localProfileId);

  }

  if(m_partnerProfileIdHasBeenSet)
  {
   payload.WithString("PartnerProfileId", m_partnerProfileId);

  }

  if(m_messageSubjectHasBeenSet)
  {
   payload.WithString("MessageSubject", m_messageSubject);

  }

  if(m_compressionHasBeenSet)
  {
   payload.WithString("Compression", CompressionEnumMapper::GetNameForCompressionEnum(m_compression));
  }

  if(m_encryptionAlgorithmHasBeenSet)
  {
   payload.WithString("EncryptionAlgorithm", EncryptionAlgMapper::GetNameForEncryptionAlg(m_encryptionAlgorithm));
  }

  if(m_signingAlgorithmHasBeenSet)
  {
   payload.WithString("SigningAlgorithm", SigningAlgMapper::GetNameForSigningAlg(m_signingAlgorithm));
  }

  if(m_mdnSigningAlgorithmHasBeenSet)
  {
   payload.WithString("MdnSigningAlgorithm", MdnSigningAlgMapper::GetNameForMdnSigningAlg(m_mdnSigningAlgorithm));
  }

  if(m_mdnResponseHasBeenSet)
  {
   payload.WithString("MdnResponse", MdnResponseMapper::GetNameForMdnResponse(m_mdnResponse));
  }

  if(m_basicAuthSecretIdHasBeenSet)
  {
   payload.WithString("BasicAuthSecretId", m_basicAuthSecretId);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
