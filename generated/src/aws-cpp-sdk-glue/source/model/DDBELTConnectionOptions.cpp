/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DDBELTConnectionOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DDBELTConnectionOptions::DDBELTConnectionOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

DDBELTConnectionOptions& DDBELTConnectionOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DynamodbExport"))
  {
    m_dynamodbExport = DdbExportTypeMapper::GetDdbExportTypeForName(jsonValue.GetString("DynamodbExport"));
    m_dynamodbExportHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DynamodbUnnestDDBJson"))
  {
    m_dynamodbUnnestDDBJson = jsonValue.GetBool("DynamodbUnnestDDBJson");
    m_dynamodbUnnestDDBJsonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DynamodbTableArn"))
  {
    m_dynamodbTableArn = jsonValue.GetString("DynamodbTableArn");
    m_dynamodbTableArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DynamodbS3Bucket"))
  {
    m_dynamodbS3Bucket = jsonValue.GetString("DynamodbS3Bucket");
    m_dynamodbS3BucketHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DynamodbS3Prefix"))
  {
    m_dynamodbS3Prefix = jsonValue.GetString("DynamodbS3Prefix");
    m_dynamodbS3PrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DynamodbS3BucketOwner"))
  {
    m_dynamodbS3BucketOwner = jsonValue.GetString("DynamodbS3BucketOwner");
    m_dynamodbS3BucketOwnerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DynamodbStsRoleArn"))
  {
    m_dynamodbStsRoleArn = jsonValue.GetString("DynamodbStsRoleArn");
    m_dynamodbStsRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue DDBELTConnectionOptions::Jsonize() const
{
  JsonValue payload;

  if(m_dynamodbExportHasBeenSet)
  {
   payload.WithString("DynamodbExport", DdbExportTypeMapper::GetNameForDdbExportType(m_dynamodbExport));
  }

  if(m_dynamodbUnnestDDBJsonHasBeenSet)
  {
   payload.WithBool("DynamodbUnnestDDBJson", m_dynamodbUnnestDDBJson);

  }

  if(m_dynamodbTableArnHasBeenSet)
  {
   payload.WithString("DynamodbTableArn", m_dynamodbTableArn);

  }

  if(m_dynamodbS3BucketHasBeenSet)
  {
   payload.WithString("DynamodbS3Bucket", m_dynamodbS3Bucket);

  }

  if(m_dynamodbS3PrefixHasBeenSet)
  {
   payload.WithString("DynamodbS3Prefix", m_dynamodbS3Prefix);

  }

  if(m_dynamodbS3BucketOwnerHasBeenSet)
  {
   payload.WithString("DynamodbS3BucketOwner", m_dynamodbS3BucketOwner);

  }

  if(m_dynamodbStsRoleArnHasBeenSet)
  {
   payload.WithString("DynamodbStsRoleArn", m_dynamodbStsRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
