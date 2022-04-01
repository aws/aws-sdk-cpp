/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/ArtifactConfigInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

ArtifactConfigInput::ArtifactConfigInput() : 
    m_s3EncryptionHasBeenSet(false)
{
}

ArtifactConfigInput::ArtifactConfigInput(JsonView jsonValue) : 
    m_s3EncryptionHasBeenSet(false)
{
  *this = jsonValue;
}

ArtifactConfigInput& ArtifactConfigInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Encryption"))
  {
    m_s3Encryption = jsonValue.GetObject("S3Encryption");

    m_s3EncryptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ArtifactConfigInput::Jsonize() const
{
  JsonValue payload;

  if(m_s3EncryptionHasBeenSet)
  {
   payload.WithObject("S3Encryption", m_s3Encryption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
