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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
    DescribeSnapshotScheduleResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSnapshotScheduleResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARN = value; }

    
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARN = value; }

    
    inline void SetVolumeARN(const char* value) { m_volumeARN.assign(value); }

    
    inline DescribeSnapshotScheduleResult& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    
    inline DescribeSnapshotScheduleResult& WithVolumeARN(Aws::String&& value) { SetVolumeARN(value); return *this;}

    
    inline DescribeSnapshotScheduleResult& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}

    
    inline int GetStartAt() const{ return m_startAt; }

    
    inline void SetStartAt(int value) { m_startAt = value; }

    
    inline DescribeSnapshotScheduleResult& WithStartAt(int value) { SetStartAt(value); return *this;}

    
    inline int GetRecurrenceInHours() const{ return m_recurrenceInHours; }

    
    inline void SetRecurrenceInHours(int value) { m_recurrenceInHours = value; }

    
    inline DescribeSnapshotScheduleResult& WithRecurrenceInHours(int value) { SetRecurrenceInHours(value); return *this;}

    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    
    inline void SetDescription(const char* value) { m_description.assign(value); }

    
    inline DescribeSnapshotScheduleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline DescribeSnapshotScheduleResult& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    
    inline DescribeSnapshotScheduleResult& WithDescription(const char* value) { SetDescription(value); return *this;}

    
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    
    inline void SetTimezone(const Aws::String& value) { m_timezone = value; }

    
    inline void SetTimezone(Aws::String&& value) { m_timezone = value; }

    
    inline void SetTimezone(const char* value) { m_timezone.assign(value); }

    
    inline DescribeSnapshotScheduleResult& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    
    inline DescribeSnapshotScheduleResult& WithTimezone(Aws::String&& value) { SetTimezone(value); return *this;}

    
    inline DescribeSnapshotScheduleResult& WithTimezone(const char* value) { SetTimezone(value); return *this;}

  private:
    Aws::String m_volumeARN;
    int m_startAt;
    int m_recurrenceInHours;
    Aws::String m_description;
    Aws::String m_timezone;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
