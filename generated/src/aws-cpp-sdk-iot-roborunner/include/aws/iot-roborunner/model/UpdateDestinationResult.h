﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot-roborunner/model/DestinationState.h>
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
  class UpdateDestinationResult
  {
  public:
    AWS_IOTROBORUNNER_API UpdateDestinationResult();
    AWS_IOTROBORUNNER_API UpdateDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTROBORUNNER_API UpdateDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arn.assign(value); }

    
    inline UpdateDestinationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline UpdateDestinationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline UpdateDestinationResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_id.assign(value); }

    
    inline UpdateDestinationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline UpdateDestinationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline UpdateDestinationResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_name.assign(value); }

    
    inline UpdateDestinationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline UpdateDestinationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline UpdateDestinationResult& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    
    inline UpdateDestinationResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline UpdateDestinationResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const DestinationState& GetState() const{ return m_state; }

    
    inline void SetState(const DestinationState& value) { m_state = value; }

    
    inline void SetState(DestinationState&& value) { m_state = std::move(value); }

    
    inline UpdateDestinationResult& WithState(const DestinationState& value) { SetState(value); return *this;}

    
    inline UpdateDestinationResult& WithState(DestinationState&& value) { SetState(std::move(value)); return *this;}


    
    inline const Aws::String& GetAdditionalFixedProperties() const{ return m_additionalFixedProperties; }

    
    inline void SetAdditionalFixedProperties(const Aws::String& value) { m_additionalFixedProperties = value; }

    
    inline void SetAdditionalFixedProperties(Aws::String&& value) { m_additionalFixedProperties = std::move(value); }

    
    inline void SetAdditionalFixedProperties(const char* value) { m_additionalFixedProperties.assign(value); }

    
    inline UpdateDestinationResult& WithAdditionalFixedProperties(const Aws::String& value) { SetAdditionalFixedProperties(value); return *this;}

    
    inline UpdateDestinationResult& WithAdditionalFixedProperties(Aws::String&& value) { SetAdditionalFixedProperties(std::move(value)); return *this;}

    
    inline UpdateDestinationResult& WithAdditionalFixedProperties(const char* value) { SetAdditionalFixedProperties(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateDestinationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateDestinationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateDestinationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_name;

    Aws::Utils::DateTime m_updatedAt;

    DestinationState m_state;

    Aws::String m_additionalFixedProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
