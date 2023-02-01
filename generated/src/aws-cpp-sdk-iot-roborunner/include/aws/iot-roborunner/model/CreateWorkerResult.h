/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTRoboRunner
{
namespace Model
{
  class CreateWorkerResult
  {
  public:
    AWS_IOTROBORUNNER_API CreateWorkerResult();
    AWS_IOTROBORUNNER_API CreateWorkerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTROBORUNNER_API CreateWorkerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arn.assign(value); }

    
    inline CreateWorkerResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline CreateWorkerResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline CreateWorkerResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_id.assign(value); }

    
    inline CreateWorkerResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline CreateWorkerResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline CreateWorkerResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    
    inline CreateWorkerResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline CreateWorkerResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    
    inline CreateWorkerResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline CreateWorkerResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetSite() const{ return m_site; }

    
    inline void SetSite(const Aws::String& value) { m_site = value; }

    
    inline void SetSite(Aws::String&& value) { m_site = std::move(value); }

    
    inline void SetSite(const char* value) { m_site.assign(value); }

    
    inline CreateWorkerResult& WithSite(const Aws::String& value) { SetSite(value); return *this;}

    
    inline CreateWorkerResult& WithSite(Aws::String&& value) { SetSite(std::move(value)); return *this;}

    
    inline CreateWorkerResult& WithSite(const char* value) { SetSite(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_site;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
