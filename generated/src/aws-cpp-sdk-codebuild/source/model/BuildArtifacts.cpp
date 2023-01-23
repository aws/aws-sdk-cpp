/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BuildArtifacts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

BuildArtifacts::BuildArtifacts() : 
    m_locationHasBeenSet(false),
    m_sha256sumHasBeenSet(false),
    m_md5sumHasBeenSet(false),
    m_overrideArtifactName(false),
    m_overrideArtifactNameHasBeenSet(false),
    m_encryptionDisabled(false),
    m_encryptionDisabledHasBeenSet(false),
    m_artifactIdentifierHasBeenSet(false),
    m_bucketOwnerAccess(BucketOwnerAccess::NOT_SET),
    m_bucketOwnerAccessHasBeenSet(false)
{
}

BuildArtifacts::BuildArtifacts(JsonView jsonValue) : 
    m_locationHasBeenSet(false),
    m_sha256sumHasBeenSet(false),
    m_md5sumHasBeenSet(false),
    m_overrideArtifactName(false),
    m_overrideArtifactNameHasBeenSet(false),
    m_encryptionDisabled(false),
    m_encryptionDisabledHasBeenSet(false),
    m_artifactIdentifierHasBeenSet(false),
    m_bucketOwnerAccess(BucketOwnerAccess::NOT_SET),
    m_bucketOwnerAccessHasBeenSet(false)
{
  *this = jsonValue;
}

BuildArtifacts& BuildArtifacts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sha256sum"))
  {
    m_sha256sum = jsonValue.GetString("sha256sum");

    m_sha256sumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("md5sum"))
  {
    m_md5sum = jsonValue.GetString("md5sum");

    m_md5sumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("overrideArtifactName"))
  {
    m_overrideArtifactName = jsonValue.GetBool("overrideArtifactName");

    m_overrideArtifactNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionDisabled"))
  {
    m_encryptionDisabled = jsonValue.GetBool("encryptionDisabled");

    m_encryptionDisabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("artifactIdentifier"))
  {
    m_artifactIdentifier = jsonValue.GetString("artifactIdentifier");

    m_artifactIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketOwnerAccess"))
  {
    m_bucketOwnerAccess = BucketOwnerAccessMapper::GetBucketOwnerAccessForName(jsonValue.GetString("bucketOwnerAccess"));

    m_bucketOwnerAccessHasBeenSet = true;
  }

  return *this;
}

JsonValue BuildArtifacts::Jsonize() const
{
  JsonValue payload;

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_sha256sumHasBeenSet)
  {
   payload.WithString("sha256sum", m_sha256sum);

  }

  if(m_md5sumHasBeenSet)
  {
   payload.WithString("md5sum", m_md5sum);

  }

  if(m_overrideArtifactNameHasBeenSet)
  {
   payload.WithBool("overrideArtifactName", m_overrideArtifactName);

  }

  if(m_encryptionDisabledHasBeenSet)
  {
   payload.WithBool("encryptionDisabled", m_encryptionDisabled);

  }

  if(m_artifactIdentifierHasBeenSet)
  {
   payload.WithString("artifactIdentifier", m_artifactIdentifier);

  }

  if(m_bucketOwnerAccessHasBeenSet)
  {
   payload.WithString("bucketOwnerAccess", BucketOwnerAccessMapper::GetNameForBucketOwnerAccess(m_bucketOwnerAccess));
  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
