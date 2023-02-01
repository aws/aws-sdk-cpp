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
  class CreateSiteResult
  {
  public:
    AWS_IOTROBORUNNER_API CreateSiteResult();
    AWS_IOTROBORUNNER_API CreateSiteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTROBORUNNER_API CreateSiteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arn.assign(value); }

    
    inline CreateSiteResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline CreateSiteResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline CreateSiteResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_id.assign(value); }

    
    inline CreateSiteResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline CreateSiteResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline CreateSiteResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    
    inline CreateSiteResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline CreateSiteResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    
    inline CreateSiteResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline CreateSiteResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
