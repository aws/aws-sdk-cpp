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
  class UpdateWorkerFleetResult
  {
  public:
    AWS_IOTROBORUNNER_API UpdateWorkerFleetResult();
    AWS_IOTROBORUNNER_API UpdateWorkerFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTROBORUNNER_API UpdateWorkerFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arn.assign(value); }

    
    inline UpdateWorkerFleetResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline UpdateWorkerFleetResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline UpdateWorkerFleetResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_id.assign(value); }

    
    inline UpdateWorkerFleetResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline UpdateWorkerFleetResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline UpdateWorkerFleetResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_name.assign(value); }

    
    inline UpdateWorkerFleetResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline UpdateWorkerFleetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline UpdateWorkerFleetResult& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    
    inline UpdateWorkerFleetResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline UpdateWorkerFleetResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetAdditionalFixedProperties() const{ return m_additionalFixedProperties; }

    
    inline void SetAdditionalFixedProperties(const Aws::String& value) { m_additionalFixedProperties = value; }

    
    inline void SetAdditionalFixedProperties(Aws::String&& value) { m_additionalFixedProperties = std::move(value); }

    
    inline void SetAdditionalFixedProperties(const char* value) { m_additionalFixedProperties.assign(value); }

    
    inline UpdateWorkerFleetResult& WithAdditionalFixedProperties(const Aws::String& value) { SetAdditionalFixedProperties(value); return *this;}

    
    inline UpdateWorkerFleetResult& WithAdditionalFixedProperties(Aws::String&& value) { SetAdditionalFixedProperties(std::move(value)); return *this;}

    
    inline UpdateWorkerFleetResult& WithAdditionalFixedProperties(const char* value) { SetAdditionalFixedProperties(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_name;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_additionalFixedProperties;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
