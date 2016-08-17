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
#include <aws/firehose/FirehoseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/S3DestinationUpdate.h>
#include <aws/firehose/model/RedshiftDestinationUpdate.h>
#include <aws/firehose/model/ElasticsearchDestinationUpdate.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   * <p>Contains the parameters for <a>UpdateDestination</a>.</p>
   */
  class AWS_FIREHOSE_API UpdateDestinationRequest : public FirehoseRequest
  {
  public:
    UpdateDestinationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline void SetDeliveryStreamName(const char* value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName.assign(value); }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline UpdateDestinationRequest& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline UpdateDestinationRequest& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline UpdateDestinationRequest& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>Obtain this value from the <b>VersionId</b> result of the
     * <a>DeliveryStreamDescription</a> operation. This value is required, and helps
     * the service to perform conditional operations. For example, if there is a
     * interleaving update and this value is null, then the update destination fails.
     * After the update is successful, the <b>VersionId</b> value is updated. The
     * service then performs a merge of the old configuration with the new
     * configuration.</p>
     */
    inline const Aws::String& GetCurrentDeliveryStreamVersionId() const{ return m_currentDeliveryStreamVersionId; }

    /**
     * <p>Obtain this value from the <b>VersionId</b> result of the
     * <a>DeliveryStreamDescription</a> operation. This value is required, and helps
     * the service to perform conditional operations. For example, if there is a
     * interleaving update and this value is null, then the update destination fails.
     * After the update is successful, the <b>VersionId</b> value is updated. The
     * service then performs a merge of the old configuration with the new
     * configuration.</p>
     */
    inline void SetCurrentDeliveryStreamVersionId(const Aws::String& value) { m_currentDeliveryStreamVersionIdHasBeenSet = true; m_currentDeliveryStreamVersionId = value; }

    /**
     * <p>Obtain this value from the <b>VersionId</b> result of the
     * <a>DeliveryStreamDescription</a> operation. This value is required, and helps
     * the service to perform conditional operations. For example, if there is a
     * interleaving update and this value is null, then the update destination fails.
     * After the update is successful, the <b>VersionId</b> value is updated. The
     * service then performs a merge of the old configuration with the new
     * configuration.</p>
     */
    inline void SetCurrentDeliveryStreamVersionId(Aws::String&& value) { m_currentDeliveryStreamVersionIdHasBeenSet = true; m_currentDeliveryStreamVersionId = value; }

    /**
     * <p>Obtain this value from the <b>VersionId</b> result of the
     * <a>DeliveryStreamDescription</a> operation. This value is required, and helps
     * the service to perform conditional operations. For example, if there is a
     * interleaving update and this value is null, then the update destination fails.
     * After the update is successful, the <b>VersionId</b> value is updated. The
     * service then performs a merge of the old configuration with the new
     * configuration.</p>
     */
    inline void SetCurrentDeliveryStreamVersionId(const char* value) { m_currentDeliveryStreamVersionIdHasBeenSet = true; m_currentDeliveryStreamVersionId.assign(value); }

    /**
     * <p>Obtain this value from the <b>VersionId</b> result of the
     * <a>DeliveryStreamDescription</a> operation. This value is required, and helps
     * the service to perform conditional operations. For example, if there is a
     * interleaving update and this value is null, then the update destination fails.
     * After the update is successful, the <b>VersionId</b> value is updated. The
     * service then performs a merge of the old configuration with the new
     * configuration.</p>
     */
    inline UpdateDestinationRequest& WithCurrentDeliveryStreamVersionId(const Aws::String& value) { SetCurrentDeliveryStreamVersionId(value); return *this;}

    /**
     * <p>Obtain this value from the <b>VersionId</b> result of the
     * <a>DeliveryStreamDescription</a> operation. This value is required, and helps
     * the service to perform conditional operations. For example, if there is a
     * interleaving update and this value is null, then the update destination fails.
     * After the update is successful, the <b>VersionId</b> value is updated. The
     * service then performs a merge of the old configuration with the new
     * configuration.</p>
     */
    inline UpdateDestinationRequest& WithCurrentDeliveryStreamVersionId(Aws::String&& value) { SetCurrentDeliveryStreamVersionId(value); return *this;}

    /**
     * <p>Obtain this value from the <b>VersionId</b> result of the
     * <a>DeliveryStreamDescription</a> operation. This value is required, and helps
     * the service to perform conditional operations. For example, if there is a
     * interleaving update and this value is null, then the update destination fails.
     * After the update is successful, the <b>VersionId</b> value is updated. The
     * service then performs a merge of the old configuration with the new
     * configuration.</p>
     */
    inline UpdateDestinationRequest& WithCurrentDeliveryStreamVersionId(const char* value) { SetCurrentDeliveryStreamVersionId(value); return *this;}

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
    inline UpdateDestinationRequest& WithDestinationId(const Aws::String& value) { SetDestinationId(value); return *this;}

    /**
     * <p>The ID of the destination.</p>
     */
    inline UpdateDestinationRequest& WithDestinationId(Aws::String&& value) { SetDestinationId(value); return *this;}

    /**
     * <p>The ID of the destination.</p>
     */
    inline UpdateDestinationRequest& WithDestinationId(const char* value) { SetDestinationId(value); return *this;}

    /**
     * <p>Describes an update for a destination in Amazon S3.</p>
     */
    inline const S3DestinationUpdate& GetS3DestinationUpdate() const{ return m_s3DestinationUpdate; }

    /**
     * <p>Describes an update for a destination in Amazon S3.</p>
     */
    inline void SetS3DestinationUpdate(const S3DestinationUpdate& value) { m_s3DestinationUpdateHasBeenSet = true; m_s3DestinationUpdate = value; }

    /**
     * <p>Describes an update for a destination in Amazon S3.</p>
     */
    inline void SetS3DestinationUpdate(S3DestinationUpdate&& value) { m_s3DestinationUpdateHasBeenSet = true; m_s3DestinationUpdate = value; }

    /**
     * <p>Describes an update for a destination in Amazon S3.</p>
     */
    inline UpdateDestinationRequest& WithS3DestinationUpdate(const S3DestinationUpdate& value) { SetS3DestinationUpdate(value); return *this;}

    /**
     * <p>Describes an update for a destination in Amazon S3.</p>
     */
    inline UpdateDestinationRequest& WithS3DestinationUpdate(S3DestinationUpdate&& value) { SetS3DestinationUpdate(value); return *this;}

    /**
     * <p>Describes an update for a destination in Amazon Redshift.</p>
     */
    inline const RedshiftDestinationUpdate& GetRedshiftDestinationUpdate() const{ return m_redshiftDestinationUpdate; }

    /**
     * <p>Describes an update for a destination in Amazon Redshift.</p>
     */
    inline void SetRedshiftDestinationUpdate(const RedshiftDestinationUpdate& value) { m_redshiftDestinationUpdateHasBeenSet = true; m_redshiftDestinationUpdate = value; }

    /**
     * <p>Describes an update for a destination in Amazon Redshift.</p>
     */
    inline void SetRedshiftDestinationUpdate(RedshiftDestinationUpdate&& value) { m_redshiftDestinationUpdateHasBeenSet = true; m_redshiftDestinationUpdate = value; }

    /**
     * <p>Describes an update for a destination in Amazon Redshift.</p>
     */
    inline UpdateDestinationRequest& WithRedshiftDestinationUpdate(const RedshiftDestinationUpdate& value) { SetRedshiftDestinationUpdate(value); return *this;}

    /**
     * <p>Describes an update for a destination in Amazon Redshift.</p>
     */
    inline UpdateDestinationRequest& WithRedshiftDestinationUpdate(RedshiftDestinationUpdate&& value) { SetRedshiftDestinationUpdate(value); return *this;}

    /**
     * <p>Describes an update for a destination in Amazon ES.</p>
     */
    inline const ElasticsearchDestinationUpdate& GetElasticsearchDestinationUpdate() const{ return m_elasticsearchDestinationUpdate; }

    /**
     * <p>Describes an update for a destination in Amazon ES.</p>
     */
    inline void SetElasticsearchDestinationUpdate(const ElasticsearchDestinationUpdate& value) { m_elasticsearchDestinationUpdateHasBeenSet = true; m_elasticsearchDestinationUpdate = value; }

    /**
     * <p>Describes an update for a destination in Amazon ES.</p>
     */
    inline void SetElasticsearchDestinationUpdate(ElasticsearchDestinationUpdate&& value) { m_elasticsearchDestinationUpdateHasBeenSet = true; m_elasticsearchDestinationUpdate = value; }

    /**
     * <p>Describes an update for a destination in Amazon ES.</p>
     */
    inline UpdateDestinationRequest& WithElasticsearchDestinationUpdate(const ElasticsearchDestinationUpdate& value) { SetElasticsearchDestinationUpdate(value); return *this;}

    /**
     * <p>Describes an update for a destination in Amazon ES.</p>
     */
    inline UpdateDestinationRequest& WithElasticsearchDestinationUpdate(ElasticsearchDestinationUpdate&& value) { SetElasticsearchDestinationUpdate(value); return *this;}

  private:
    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet;
    Aws::String m_currentDeliveryStreamVersionId;
    bool m_currentDeliveryStreamVersionIdHasBeenSet;
    Aws::String m_destinationId;
    bool m_destinationIdHasBeenSet;
    S3DestinationUpdate m_s3DestinationUpdate;
    bool m_s3DestinationUpdateHasBeenSet;
    RedshiftDestinationUpdate m_redshiftDestinationUpdate;
    bool m_redshiftDestinationUpdateHasBeenSet;
    ElasticsearchDestinationUpdate m_elasticsearchDestinationUpdate;
    bool m_elasticsearchDestinationUpdateHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
