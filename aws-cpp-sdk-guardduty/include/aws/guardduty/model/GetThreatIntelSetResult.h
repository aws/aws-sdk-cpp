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
#include <aws/guardduty/model/ThreatIntelSetFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/ThreatIntelSetStatus.h>
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
  class AWS_GUARDDUTY_API GetThreatIntelSetResult
  {
  public:
    GetThreatIntelSetResult();
    GetThreatIntelSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetThreatIntelSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The format of the threatIntelSet.
     */
    inline const ThreatIntelSetFormat& GetFormat() const{ return m_format; }

    /**
     * The format of the threatIntelSet.
     */
    inline void SetFormat(const ThreatIntelSetFormat& value) { m_format = value; }

    /**
     * The format of the threatIntelSet.
     */
    inline void SetFormat(ThreatIntelSetFormat&& value) { m_format = std::move(value); }

    /**
     * The format of the threatIntelSet.
     */
    inline GetThreatIntelSetResult& WithFormat(const ThreatIntelSetFormat& value) { SetFormat(value); return *this;}

    /**
     * The format of the threatIntelSet.
     */
    inline GetThreatIntelSetResult& WithFormat(ThreatIntelSetFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * The URI of the file that contains the ThreatIntelSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * The URI of the file that contains the ThreatIntelSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * The URI of the file that contains the ThreatIntelSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * The URI of the file that contains the ThreatIntelSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * The URI of the file that contains the ThreatIntelSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline GetThreatIntelSetResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * The URI of the file that contains the ThreatIntelSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline GetThreatIntelSetResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * The URI of the file that contains the ThreatIntelSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline GetThreatIntelSetResult& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * A user-friendly ThreatIntelSet name that is displayed in all finding generated
     * by activity that involves IP addresses included in this ThreatIntelSet.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * A user-friendly ThreatIntelSet name that is displayed in all finding generated
     * by activity that involves IP addresses included in this ThreatIntelSet.
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * A user-friendly ThreatIntelSet name that is displayed in all finding generated
     * by activity that involves IP addresses included in this ThreatIntelSet.
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * A user-friendly ThreatIntelSet name that is displayed in all finding generated
     * by activity that involves IP addresses included in this ThreatIntelSet.
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * A user-friendly ThreatIntelSet name that is displayed in all finding generated
     * by activity that involves IP addresses included in this ThreatIntelSet.
     */
    inline GetThreatIntelSetResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A user-friendly ThreatIntelSet name that is displayed in all finding generated
     * by activity that involves IP addresses included in this ThreatIntelSet.
     */
    inline GetThreatIntelSetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A user-friendly ThreatIntelSet name that is displayed in all finding generated
     * by activity that involves IP addresses included in this ThreatIntelSet.
     */
    inline GetThreatIntelSetResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The status of threatIntelSet file uploaded.
     */
    inline const ThreatIntelSetStatus& GetStatus() const{ return m_status; }

    /**
     * The status of threatIntelSet file uploaded.
     */
    inline void SetStatus(const ThreatIntelSetStatus& value) { m_status = value; }

    /**
     * The status of threatIntelSet file uploaded.
     */
    inline void SetStatus(ThreatIntelSetStatus&& value) { m_status = std::move(value); }

    /**
     * The status of threatIntelSet file uploaded.
     */
    inline GetThreatIntelSetResult& WithStatus(const ThreatIntelSetStatus& value) { SetStatus(value); return *this;}

    /**
     * The status of threatIntelSet file uploaded.
     */
    inline GetThreatIntelSetResult& WithStatus(ThreatIntelSetStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ThreatIntelSetFormat m_format;

    Aws::String m_location;

    Aws::String m_name;

    ThreatIntelSetStatus m_status;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
