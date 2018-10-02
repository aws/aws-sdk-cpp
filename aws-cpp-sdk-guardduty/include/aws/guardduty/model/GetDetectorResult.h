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

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FindingPublishingFrequency.h>
#include <aws/guardduty/model/DetectorStatus.h>
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
namespace GuardDuty
{
namespace Model
{
  class AWS_GUARDDUTY_API GetDetectorResult
  {
  public:
    GetDetectorResult();
    GetDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    
    inline void SetCreatedAt(const Aws::String& value) { m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::String&& value) { m_createdAt = std::move(value); }

    
    inline void SetCreatedAt(const char* value) { m_createdAt.assign(value); }

    
    inline GetDetectorResult& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    
    inline GetDetectorResult& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    
    inline GetDetectorResult& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    
    inline const FindingPublishingFrequency& GetFindingPublishingFrequency() const{ return m_findingPublishingFrequency; }

    
    inline void SetFindingPublishingFrequency(const FindingPublishingFrequency& value) { m_findingPublishingFrequency = value; }

    
    inline void SetFindingPublishingFrequency(FindingPublishingFrequency&& value) { m_findingPublishingFrequency = std::move(value); }

    
    inline GetDetectorResult& WithFindingPublishingFrequency(const FindingPublishingFrequency& value) { SetFindingPublishingFrequency(value); return *this;}

    
    inline GetDetectorResult& WithFindingPublishingFrequency(FindingPublishingFrequency&& value) { SetFindingPublishingFrequency(std::move(value)); return *this;}


    
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    
    inline void SetServiceRole(const Aws::String& value) { m_serviceRole = value; }

    
    inline void SetServiceRole(Aws::String&& value) { m_serviceRole = std::move(value); }

    
    inline void SetServiceRole(const char* value) { m_serviceRole.assign(value); }

    
    inline GetDetectorResult& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    
    inline GetDetectorResult& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    
    inline GetDetectorResult& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    
    inline const DetectorStatus& GetStatus() const{ return m_status; }

    
    inline void SetStatus(const DetectorStatus& value) { m_status = value; }

    
    inline void SetStatus(DetectorStatus&& value) { m_status = std::move(value); }

    
    inline GetDetectorResult& WithStatus(const DetectorStatus& value) { SetStatus(value); return *this;}

    
    inline GetDetectorResult& WithStatus(DetectorStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline void SetUpdatedAt(const Aws::String& value) { m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::String&& value) { m_updatedAt = std::move(value); }

    
    inline void SetUpdatedAt(const char* value) { m_updatedAt.assign(value); }

    
    inline GetDetectorResult& WithUpdatedAt(const Aws::String& value) { SetUpdatedAt(value); return *this;}

    
    inline GetDetectorResult& WithUpdatedAt(Aws::String&& value) { SetUpdatedAt(std::move(value)); return *this;}

    
    inline GetDetectorResult& WithUpdatedAt(const char* value) { SetUpdatedAt(value); return *this;}

  private:

    Aws::String m_createdAt;

    FindingPublishingFrequency m_findingPublishingFrequency;

    Aws::String m_serviceRole;

    DetectorStatus m_status;

    Aws::String m_updatedAt;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
