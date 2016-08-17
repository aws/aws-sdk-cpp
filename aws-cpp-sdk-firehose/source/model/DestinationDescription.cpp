/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

DestinationDescription::DestinationDescription() : 
    m_destinationIdHasBeenSet(false),
    m_s3DestinationDescriptionHasBeenSet(false),
    m_redshiftDestinationDescriptionHasBeenSet(false),
    m_elasticsearchDestinationDescriptionHasBeenSet(false)
{
}

DestinationDescription::DestinationDescription(const JsonValue& jsonValue) : 
    m_destinationIdHasBeenSet(false),
    m_s3DestinationDescriptionHasBeenSet(false),
    m_redshiftDestinationDescriptionHasBeenSet(false),
    m_elasticsearchDestinationDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationDescription& DestinationDescription::operator =(const JsonValue& jsonValue)
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

  if(m_redshiftDestinationDescriptionHasBeenSet)
  {
   payload.WithObject("RedshiftDestinationDescription", m_redshiftDestinationDescription.Jsonize());

  }

  if(m_elasticsearchDestinationDescriptionHasBeenSet)
  {
   payload.WithObject("ElasticsearchDestinationDescription", m_elasticsearchDestinationDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws