/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/S3Destination.h>
#include <aws/mediapackage/model/Status.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaPackage
{
namespace Model
{
  class DescribeHarvestJobResult
  {
  public:
    AWS_MEDIAPACKAGE_API DescribeHarvestJobResult();
    AWS_MEDIAPACKAGE_API DescribeHarvestJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGE_API DescribeHarvestJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The Amazon Resource Name (ARN) assigned to the HarvestJob.

     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The Amazon Resource Name (ARN) assigned to the HarvestJob.

     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The Amazon Resource Name (ARN) assigned to the HarvestJob.

     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) assigned to the HarvestJob.

     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) assigned to the HarvestJob.

     */
    inline DescribeHarvestJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) assigned to the HarvestJob.

     */
    inline DescribeHarvestJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) assigned to the HarvestJob.

     */
    inline DescribeHarvestJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The ID of the Channel that the HarvestJob will harvest from.

     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * The ID of the Channel that the HarvestJob will harvest from.

     */
    inline void SetChannelId(const Aws::String& value) { m_channelId = value; }

    /**
     * The ID of the Channel that the HarvestJob will harvest from.

     */
    inline void SetChannelId(Aws::String&& value) { m_channelId = std::move(value); }

    /**
     * The ID of the Channel that the HarvestJob will harvest from.

     */
    inline void SetChannelId(const char* value) { m_channelId.assign(value); }

    /**
     * The ID of the Channel that the HarvestJob will harvest from.

     */
    inline DescribeHarvestJobResult& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * The ID of the Channel that the HarvestJob will harvest from.

     */
    inline DescribeHarvestJobResult& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * The ID of the Channel that the HarvestJob will harvest from.

     */
    inline DescribeHarvestJobResult& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * The time the HarvestJob was submitted

     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * The time the HarvestJob was submitted

     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAt = value; }

    /**
     * The time the HarvestJob was submitted

     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAt = std::move(value); }

    /**
     * The time the HarvestJob was submitted

     */
    inline void SetCreatedAt(const char* value) { m_createdAt.assign(value); }

    /**
     * The time the HarvestJob was submitted

     */
    inline DescribeHarvestJobResult& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * The time the HarvestJob was submitted

     */
    inline DescribeHarvestJobResult& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * The time the HarvestJob was submitted

     */
    inline DescribeHarvestJobResult& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * The end of the time-window which will be harvested.

     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }

    /**
     * The end of the time-window which will be harvested.

     */
    inline void SetEndTime(const Aws::String& value) { m_endTime = value; }

    /**
     * The end of the time-window which will be harvested.

     */
    inline void SetEndTime(Aws::String&& value) { m_endTime = std::move(value); }

    /**
     * The end of the time-window which will be harvested.

     */
    inline void SetEndTime(const char* value) { m_endTime.assign(value); }

    /**
     * The end of the time-window which will be harvested.

     */
    inline DescribeHarvestJobResult& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}

    /**
     * The end of the time-window which will be harvested.

     */
    inline DescribeHarvestJobResult& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}

    /**
     * The end of the time-window which will be harvested.

     */
    inline DescribeHarvestJobResult& WithEndTime(const char* value) { SetEndTime(value); return *this;}


    /**
     * The ID of the HarvestJob. The ID must be unique within the region
and it cannot
     * be changed after the HarvestJob is submitted.

     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the HarvestJob. The ID must be unique within the region
and it cannot
     * be changed after the HarvestJob is submitted.

     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The ID of the HarvestJob. The ID must be unique within the region
and it cannot
     * be changed after the HarvestJob is submitted.

     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The ID of the HarvestJob. The ID must be unique within the region
and it cannot
     * be changed after the HarvestJob is submitted.

     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The ID of the HarvestJob. The ID must be unique within the region
and it cannot
     * be changed after the HarvestJob is submitted.

     */
    inline DescribeHarvestJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the HarvestJob. The ID must be unique within the region
and it cannot
     * be changed after the HarvestJob is submitted.

     */
    inline DescribeHarvestJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the HarvestJob. The ID must be unique within the region
and it cannot
     * be changed after the HarvestJob is submitted.

     */
    inline DescribeHarvestJobResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The ID of the OriginEndpoint that the HarvestJob will harvest from.
This cannot
     * be changed after the HarvestJob is submitted.

     */
    inline const Aws::String& GetOriginEndpointId() const{ return m_originEndpointId; }

    /**
     * The ID of the OriginEndpoint that the HarvestJob will harvest from.
This cannot
     * be changed after the HarvestJob is submitted.

     */
    inline void SetOriginEndpointId(const Aws::String& value) { m_originEndpointId = value; }

    /**
     * The ID of the OriginEndpoint that the HarvestJob will harvest from.
This cannot
     * be changed after the HarvestJob is submitted.

     */
    inline void SetOriginEndpointId(Aws::String&& value) { m_originEndpointId = std::move(value); }

    /**
     * The ID of the OriginEndpoint that the HarvestJob will harvest from.
This cannot
     * be changed after the HarvestJob is submitted.

     */
    inline void SetOriginEndpointId(const char* value) { m_originEndpointId.assign(value); }

    /**
     * The ID of the OriginEndpoint that the HarvestJob will harvest from.
This cannot
     * be changed after the HarvestJob is submitted.

     */
    inline DescribeHarvestJobResult& WithOriginEndpointId(const Aws::String& value) { SetOriginEndpointId(value); return *this;}

    /**
     * The ID of the OriginEndpoint that the HarvestJob will harvest from.
This cannot
     * be changed after the HarvestJob is submitted.

     */
    inline DescribeHarvestJobResult& WithOriginEndpointId(Aws::String&& value) { SetOriginEndpointId(std::move(value)); return *this;}

    /**
     * The ID of the OriginEndpoint that the HarvestJob will harvest from.
This cannot
     * be changed after the HarvestJob is submitted.

     */
    inline DescribeHarvestJobResult& WithOriginEndpointId(const char* value) { SetOriginEndpointId(value); return *this;}


    
    inline const S3Destination& GetS3Destination() const{ return m_s3Destination; }

    
    inline void SetS3Destination(const S3Destination& value) { m_s3Destination = value; }

    
    inline void SetS3Destination(S3Destination&& value) { m_s3Destination = std::move(value); }

    
    inline DescribeHarvestJobResult& WithS3Destination(const S3Destination& value) { SetS3Destination(value); return *this;}

    
    inline DescribeHarvestJobResult& WithS3Destination(S3Destination&& value) { SetS3Destination(std::move(value)); return *this;}


    /**
     * The start of the time-window which will be harvested.

     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * The start of the time-window which will be harvested.

     */
    inline void SetStartTime(const Aws::String& value) { m_startTime = value; }

    /**
     * The start of the time-window which will be harvested.

     */
    inline void SetStartTime(Aws::String&& value) { m_startTime = std::move(value); }

    /**
     * The start of the time-window which will be harvested.

     */
    inline void SetStartTime(const char* value) { m_startTime.assign(value); }

    /**
     * The start of the time-window which will be harvested.

     */
    inline DescribeHarvestJobResult& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * The start of the time-window which will be harvested.

     */
    inline DescribeHarvestJobResult& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * The start of the time-window which will be harvested.

     */
    inline DescribeHarvestJobResult& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * The current status of the HarvestJob. Consider setting up a CloudWatch Event to
     * listen for
HarvestJobs as they succeed or fail. In the event of failure, the
     * CloudWatch Event will
include an explanation of why the HarvestJob failed.

     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * The current status of the HarvestJob. Consider setting up a CloudWatch Event to
     * listen for
HarvestJobs as they succeed or fail. In the event of failure, the
     * CloudWatch Event will
include an explanation of why the HarvestJob failed.

     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * The current status of the HarvestJob. Consider setting up a CloudWatch Event to
     * listen for
HarvestJobs as they succeed or fail. In the event of failure, the
     * CloudWatch Event will
include an explanation of why the HarvestJob failed.

     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * The current status of the HarvestJob. Consider setting up a CloudWatch Event to
     * listen for
HarvestJobs as they succeed or fail. In the event of failure, the
     * CloudWatch Event will
include an explanation of why the HarvestJob failed.

     */
    inline DescribeHarvestJobResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * The current status of the HarvestJob. Consider setting up a CloudWatch Event to
     * listen for
HarvestJobs as they succeed or fail. In the event of failure, the
     * CloudWatch Event will
include an explanation of why the HarvestJob failed.

     */
    inline DescribeHarvestJobResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_channelId;

    Aws::String m_createdAt;

    Aws::String m_endTime;

    Aws::String m_id;

    Aws::String m_originEndpointId;

    S3Destination m_s3Destination;

    Aws::String m_startTime;

    Status m_status;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
