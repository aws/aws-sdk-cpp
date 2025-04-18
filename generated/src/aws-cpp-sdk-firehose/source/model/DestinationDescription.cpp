﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DestinationDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

DestinationDescription::DestinationDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

DestinationDescription& DestinationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationId"))
  {
    m_destinationId = jsonValue.GetString("DestinationId");
    m_destinationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3DestinationDescription"))
  {
    m_s3DestinationDescription = jsonValue.GetObject("S3DestinationDescription");
    m_s3DestinationDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExtendedS3DestinationDescription"))
  {
    m_extendedS3DestinationDescription = jsonValue.GetObject("ExtendedS3DestinationDescription");
    m_extendedS3DestinationDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RedshiftDestinationDescription"))
  {
    m_redshiftDestinationDescription = jsonValue.GetObject("RedshiftDestinationDescription");
    m_redshiftDestinationDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ElasticsearchDestinationDescription"))
  {
    m_elasticsearchDestinationDescription = jsonValue.GetObject("ElasticsearchDestinationDescription");
    m_elasticsearchDestinationDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AmazonopensearchserviceDestinationDescription"))
  {
    m_amazonopensearchserviceDestinationDescription = jsonValue.GetObject("AmazonopensearchserviceDestinationDescription");
    m_amazonopensearchserviceDestinationDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SplunkDestinationDescription"))
  {
    m_splunkDestinationDescription = jsonValue.GetObject("SplunkDestinationDescription");
    m_splunkDestinationDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HttpEndpointDestinationDescription"))
  {
    m_httpEndpointDestinationDescription = jsonValue.GetObject("HttpEndpointDestinationDescription");
    m_httpEndpointDestinationDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SnowflakeDestinationDescription"))
  {
    m_snowflakeDestinationDescription = jsonValue.GetObject("SnowflakeDestinationDescription");
    m_snowflakeDestinationDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AmazonOpenSearchServerlessDestinationDescription"))
  {
    m_amazonOpenSearchServerlessDestinationDescription = jsonValue.GetObject("AmazonOpenSearchServerlessDestinationDescription");
    m_amazonOpenSearchServerlessDestinationDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IcebergDestinationDescription"))
  {
    m_icebergDestinationDescription = jsonValue.GetObject("IcebergDestinationDescription");
    m_icebergDestinationDescriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue DestinationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_destinationIdHasBeenSet)
  {
   payload.WithString("DestinationId", m_destinationId);

  }

  if(m_s3DestinationDescriptionHasBeenSet)
  {
   payload.WithObject("S3DestinationDescription", m_s3DestinationDescription.Jsonize());

  }

  if(m_extendedS3DestinationDescriptionHasBeenSet)
  {
   payload.WithObject("ExtendedS3DestinationDescription", m_extendedS3DestinationDescription.Jsonize());

  }

  if(m_redshiftDestinationDescriptionHasBeenSet)
  {
   payload.WithObject("RedshiftDestinationDescription", m_redshiftDestinationDescription.Jsonize());

  }

  if(m_elasticsearchDestinationDescriptionHasBeenSet)
  {
   payload.WithObject("ElasticsearchDestinationDescription", m_elasticsearchDestinationDescription.Jsonize());

  }

  if(m_amazonopensearchserviceDestinationDescriptionHasBeenSet)
  {
   payload.WithObject("AmazonopensearchserviceDestinationDescription", m_amazonopensearchserviceDestinationDescription.Jsonize());

  }

  if(m_splunkDestinationDescriptionHasBeenSet)
  {
   payload.WithObject("SplunkDestinationDescription", m_splunkDestinationDescription.Jsonize());

  }

  if(m_httpEndpointDestinationDescriptionHasBeenSet)
  {
   payload.WithObject("HttpEndpointDestinationDescription", m_httpEndpointDestinationDescription.Jsonize());

  }

  if(m_snowflakeDestinationDescriptionHasBeenSet)
  {
   payload.WithObject("SnowflakeDestinationDescription", m_snowflakeDestinationDescription.Jsonize());

  }

  if(m_amazonOpenSearchServerlessDestinationDescriptionHasBeenSet)
  {
   payload.WithObject("AmazonOpenSearchServerlessDestinationDescription", m_amazonOpenSearchServerlessDestinationDescription.Jsonize());

  }

  if(m_icebergDestinationDescriptionHasBeenSet)
  {
   payload.WithObject("IcebergDestinationDescription", m_icebergDestinationDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
