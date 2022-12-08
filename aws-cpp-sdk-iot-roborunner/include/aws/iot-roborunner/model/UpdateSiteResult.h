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
  class UpdateSiteResult
  {
  public:
    AWS_IOTROBORUNNER_API UpdateSiteResult();
    AWS_IOTROBORUNNER_API UpdateSiteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTROBORUNNER_API UpdateSiteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arn.assign(value); }

    
    inline UpdateSiteResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline UpdateSiteResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline UpdateSiteResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_id.assign(value); }

    
    inline UpdateSiteResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline UpdateSiteResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline UpdateSiteResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_name.assign(value); }

    
    inline UpdateSiteResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline UpdateSiteResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline UpdateSiteResult& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }

    
    inline void SetCountryCode(const Aws::String& value) { m_countryCode = value; }

    
    inline void SetCountryCode(Aws::String&& value) { m_countryCode = std::move(value); }

    
    inline void SetCountryCode(const char* value) { m_countryCode.assign(value); }

    
    inline UpdateSiteResult& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    
    inline UpdateSiteResult& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}

    
    inline UpdateSiteResult& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_description.assign(value); }

    
    inline UpdateSiteResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline UpdateSiteResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline UpdateSiteResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    
    inline UpdateSiteResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline UpdateSiteResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_countryCode;

    Aws::String m_description;

    Aws::Utils::DateTime m_updatedAt;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
