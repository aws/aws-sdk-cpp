﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/Tag.h>
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
namespace StorageGateway
{
namespace Model
{
  class AWS_STORAGEGATEWAY_API DescribeSnapshotScheduleResult
  {
  public:
    DescribeSnapshotScheduleResult();
    DescribeSnapshotScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSnapshotScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was specified in the
     * request.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was specified in the
     * request.</p>
     */
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was specified in the
     * request.</p>
     */
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was specified in the
     * request.</p>
     */
    inline void SetVolumeARN(const char* value) { m_volumeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was specified in the
     * request.</p>
     */
    inline DescribeSnapshotScheduleResult& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was specified in the
     * request.</p>
     */
    inline DescribeSnapshotScheduleResult& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was specified in the
     * request.</p>
     */
    inline DescribeSnapshotScheduleResult& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}


    /**
     * <p>The hour of the day at which the snapshot schedule begins represented as
     * <i>hh</i>, where <i>hh</i> is the hour (0 to 23). The hour of the day is in the
     * time zone of the gateway.</p>
     */
    inline int GetStartAt() const{ return m_startAt; }

    /**
     * <p>The hour of the day at which the snapshot schedule begins represented as
     * <i>hh</i>, where <i>hh</i> is the hour (0 to 23). The hour of the day is in the
     * time zone of the gateway.</p>
     */
    inline void SetStartAt(int value) { m_startAt = value; }

    /**
     * <p>The hour of the day at which the snapshot schedule begins represented as
     * <i>hh</i>, where <i>hh</i> is the hour (0 to 23). The hour of the day is in the
     * time zone of the gateway.</p>
     */
    inline DescribeSnapshotScheduleResult& WithStartAt(int value) { SetStartAt(value); return *this;}


    /**
     * <p>The number of hours between snapshots.</p>
     */
    inline int GetRecurrenceInHours() const{ return m_recurrenceInHours; }

    /**
     * <p>The number of hours between snapshots.</p>
     */
    inline void SetRecurrenceInHours(int value) { m_recurrenceInHours = value; }

    /**
     * <p>The number of hours between snapshots.</p>
     */
    inline DescribeSnapshotScheduleResult& WithRecurrenceInHours(int value) { SetRecurrenceInHours(value); return *this;}


    /**
     * <p>The snapshot description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The snapshot description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The snapshot description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The snapshot description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The snapshot description.</p>
     */
    inline DescribeSnapshotScheduleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The snapshot description.</p>
     */
    inline DescribeSnapshotScheduleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The snapshot description.</p>
     */
    inline DescribeSnapshotScheduleResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezone = value; }

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezone = std::move(value); }

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline void SetTimezone(const char* value) { m_timezone.assign(value); }

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline DescribeSnapshotScheduleResult& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline DescribeSnapshotScheduleResult& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline DescribeSnapshotScheduleResult& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>A list of up to 50 tags assigned to the snapshot schedule, sorted
     * alphabetically by key name. Each tag is a key-value pair. For a gateway with
     * more than 10 tags assigned, you can view all tags using the
     * <code>ListTagsForResource</code> API operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of up to 50 tags assigned to the snapshot schedule, sorted
     * alphabetically by key name. Each tag is a key-value pair. For a gateway with
     * more than 10 tags assigned, you can view all tags using the
     * <code>ListTagsForResource</code> API operation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>A list of up to 50 tags assigned to the snapshot schedule, sorted
     * alphabetically by key name. Each tag is a key-value pair. For a gateway with
     * more than 10 tags assigned, you can view all tags using the
     * <code>ListTagsForResource</code> API operation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>A list of up to 50 tags assigned to the snapshot schedule, sorted
     * alphabetically by key name. Each tag is a key-value pair. For a gateway with
     * more than 10 tags assigned, you can view all tags using the
     * <code>ListTagsForResource</code> API operation.</p>
     */
    inline DescribeSnapshotScheduleResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of up to 50 tags assigned to the snapshot schedule, sorted
     * alphabetically by key name. Each tag is a key-value pair. For a gateway with
     * more than 10 tags assigned, you can view all tags using the
     * <code>ListTagsForResource</code> API operation.</p>
     */
    inline DescribeSnapshotScheduleResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of up to 50 tags assigned to the snapshot schedule, sorted
     * alphabetically by key name. Each tag is a key-value pair. For a gateway with
     * more than 10 tags assigned, you can view all tags using the
     * <code>ListTagsForResource</code> API operation.</p>
     */
    inline DescribeSnapshotScheduleResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>A list of up to 50 tags assigned to the snapshot schedule, sorted
     * alphabetically by key name. Each tag is a key-value pair. For a gateway with
     * more than 10 tags assigned, you can view all tags using the
     * <code>ListTagsForResource</code> API operation.</p>
     */
    inline DescribeSnapshotScheduleResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_volumeARN;

    int m_startAt;

    int m_recurrenceInHours;

    Aws::String m_description;

    Aws::String m_timezone;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
