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

#include <aws/ssm/model/ResourceDataSyncS3Destination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResourceDataSyncS3Destination::ResourceDataSyncS3Destination() : 
    m_bucketNameHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_syncFormat(ResourceDataSyncS3Format::NOT_SET),
    m_syncFormatHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_aWSKMSKeyARNHasBeenSet(false),
    m_destinationDataSharingHasBeenSet(false)
{
}

ResourceDataSyncS3Destination::ResourceDataSyncS3Destination(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_syncFormat(ResourceDataSyncS3Format::NOT_SET),
    m_syncFormatHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_aWSKMSKeyARNHasBeenSet(false),
    m_destinationDataSharingHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDataSyncS3Destination& ResourceDataSyncS3Destination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SyncFormat"))
  {
    m_syncFormat = ResourceDataSyncS3FormatMapper::GetResourceDataSyncS3FormatForName(jsonValue.GetString("SyncFormat"));

    m_syncFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AWSKMSKeyARN"))
  {
    m_aWSKMSKeyARN = jsonValue.GetString("AWSKMSKeyARN");

    m_aWSKMSKeyARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationDataSharing"))
  {
    m_destinationDataSharing = jsonValue.GetObject("DestinationDataSharing");

    m_destinationDataSharingHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDataSyncS3Destination::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  if(m_syncFormatHasBeenSet)
  {
   payload.WithString("SyncFormat", ResourceDataSyncS3FormatMapper::GetNameForResourceDataSyncS3Format(m_syncFormat));
  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_aWSKMSKeyARNHasBeenSet)
  {
   payload.WithString("AWSKMSKeyARN", m_aWSKMSKeyARN);

  }

  if(m_destinationDataSharingHasBeenSet)
  {
   payload.WithObject("DestinationDataSharing", m_destinationDataSharing.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
