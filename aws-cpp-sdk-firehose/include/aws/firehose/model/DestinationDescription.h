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
#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/S3DestinationDescription.h>
#include <aws/firehose/model/RedshiftDestinationDescription.h>
#include <aws/firehose/model/ElasticsearchDestinationDescription.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes the destination for a delivery stream.</p>
   */
  class AWS_FIREHOSE_API DestinationDescription
  {
  public:
    DestinationDescription();
    DestinationDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    DestinationDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ID of the destination.</p>
     */
    inline const Aws::String& GetDestinationId() const{ return m_destinationId; }

    /**
     * <p>The ID of the destination.</p>
     */
    inline void SetDestinationId(const Aws::String& value) { m_destinationIdHasBeenSet = true; m_destinationId = value; }

    /**
     * <p>The ID of the destination.</p>
     */
    inline void SetDestinationId(Aws::String&& value) { m_destinationIdHasBeenSet = true; m_destinationId = value; }

    /**
     * <p>The ID of the destination.</p>
     */
    inline void SetDestinationId(const char* value) { m_destinationIdHasBeenSet = true; m_destinationId.assign(value); }

    /**
     * <p>The ID of the destination.</p>
     */
    inline DestinationDescription& WithDestinationId(const Aws::String& value) { SetDestinationId(value); return *this;}

    /**
     * <p>The ID of the destination.</p>
     */
    inline DestinationDescription& WithDestinationId(Aws::String&& value) { SetDestinationId(value); return *this;}

    /**
     * <p>The ID of the destination.</p>
     */
    inline DestinationDescription& WithDestinationId(const char* value) { SetDestinationId(value); return *this;}

    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline const S3DestinationDescription& GetS3DestinationDescription() const{ return m_s3DestinationDescription; }

    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline void SetS3DestinationDescription(const S3DestinationDescription& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = value; }

    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline void SetS3DestinationDescription(S3DestinationDescription&& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = value; }

    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline DestinationDescription& WithS3DestinationDescription(const S3DestinationDescription& value) { SetS3DestinationDescription(value); return *this;}

    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline DestinationDescription& WithS3DestinationDescription(S3DestinationDescription&& value) { SetS3DestinationDescription(value); return *this;}

    /**
     * <p>The destination in Amazon Redshift.</p>
     */
    inline const RedshiftDestinationDescription& GetRedshiftDestinationDescription() const{ return m_redshiftDestinationDescription; }

    /**
     * <p>The destination in Amazon Redshift.</p>
     */
    inline void SetRedshiftDestinationDescription(const RedshiftDestinationDescription& value) { m_redshiftDestinationDescriptionHasBeenSet = true; m_redshiftDestinationDescription = value; }

    /**
     * <p>The destination in Amazon Redshift.</p>
     */
    inline void SetRedshiftDestinationDescription(RedshiftDestinationDescription&& value) { m_redshiftDestinationDescriptionHasBeenSet = true; m_redshiftDestinationDescription = value; }

    /**
     * <p>The destination in Amazon Redshift.</p>
     */
    inline DestinationDescription& WithRedshiftDestinationDescription(const RedshiftDestinationDescription& value) { SetRedshiftDestinationDescription(value); return *this;}

    /**
     * <p>The destination in Amazon Redshift.</p>
     */
    inline DestinationDescription& WithRedshiftDestinationDescription(RedshiftDestinationDescription&& value) { SetRedshiftDestinationDescription(value); return *this;}

    /**
     * <p>The destination in Amazon ES.</p>
     */
    inline const ElasticsearchDestinationDescription& GetElasticsearchDestinationDescription() const{ return m_elasticsearchDestinationDescription; }

    /**
     * <p>The destination in Amazon ES.</p>
     */
    inline void SetElasticsearchDestinationDescription(const ElasticsearchDestinationDescription& value) { m_elasticsearchDestinationDescriptionHasBeenSet = true; m_elasticsearchDestinationDescription = value; }

    /**
     * <p>The destination in Amazon ES.</p>
     */
    inline void SetElasticsearchDestinationDescription(ElasticsearchDestinationDescription&& value) { m_elasticsearchDestinationDescriptionHasBeenSet = true; m_elasticsearchDestinationDescription = value; }

    /**
     * <p>The destination in Amazon ES.</p>
     */
    inline DestinationDescription& WithElasticsearchDestinationDescription(const ElasticsearchDestinationDescription& value) { SetElasticsearchDestinationDescription(value); return *this;}

    /**
     * <p>The destination in Amazon ES.</p>
     */
    inline DestinationDescription& WithElasticsearchDestinationDescription(ElasticsearchDestinationDescription&& value) { SetElasticsearchDestinationDescription(value); return *this;}

  private:
    Aws::String m_destinationId;
    bool m_destinationIdHasBeenSet;
    S3DestinationDescription m_s3DestinationDescription;
    bool m_s3DestinationDescriptionHasBeenSet;
    RedshiftDestinationDescription m_redshiftDestinationDescription;
    bool m_redshiftDestinationDescriptionHasBeenSet;
    ElasticsearchDestinationDescription m_elasticsearchDestinationDescription;
    bool m_elasticsearchDestinationDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
