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

#include <aws/securityhub/model/AwsS3ObjectDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsS3ObjectDetails::AwsS3ObjectDetails() : 
    m_lastModifiedHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_serverSideEncryptionHasBeenSet(false),
    m_sSEKMSKeyIdHasBeenSet(false)
{
}

AwsS3ObjectDetails::AwsS3ObjectDetails(JsonView jsonValue) : 
    m_lastModifiedHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_serverSideEncryptionHasBeenSet(false),
    m_sSEKMSKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3ObjectDetails& AwsS3ObjectDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetString("LastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ETag"))
  {
    m_eTag = jsonValue.GetString("ETag");

    m_eTagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");

    m_versionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerSideEncryption"))
  {
    m_serverSideEncryption = jsonValue.GetString("ServerSideEncryption");

    m_serverSideEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SSEKMSKeyId"))
  {
    m_sSEKMSKeyId = jsonValue.GetString("SSEKMSKeyId");

    m_sSEKMSKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3ObjectDetails::Jsonize() const
{
  JsonValue payload;

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithString("LastModified", m_lastModified);

  }

  if(m_eTagHasBeenSet)
  {
   payload.WithString("ETag", m_eTag);

  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_serverSideEncryptionHasBeenSet)
  {
   payload.WithString("ServerSideEncryption", m_serverSideEncryption);

  }

  if(m_sSEKMSKeyIdHasBeenSet)
  {
   payload.WithString("SSEKMSKeyId", m_sSEKMSKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
