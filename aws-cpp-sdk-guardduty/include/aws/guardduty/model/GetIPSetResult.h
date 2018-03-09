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
#include <aws/guardduty/model/IpSetFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/IpSetStatus.h>
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
  class AWS_GUARDDUTY_API GetIPSetResult
  {
  public:
    GetIPSetResult();
    GetIPSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetIPSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The format of the file that contains the IPSet.
     */
    inline const IpSetFormat& GetFormat() const{ return m_format; }

    /**
     * The format of the file that contains the IPSet.
     */
    inline void SetFormat(const IpSetFormat& value) { m_format = value; }

    /**
     * The format of the file that contains the IPSet.
     */
    inline void SetFormat(IpSetFormat&& value) { m_format = std::move(value); }

    /**
     * The format of the file that contains the IPSet.
     */
    inline GetIPSetResult& WithFormat(const IpSetFormat& value) { SetFormat(value); return *this;}

    /**
     * The format of the file that contains the IPSet.
     */
    inline GetIPSetResult& WithFormat(IpSetFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)
     */
    inline GetIPSetResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)
     */
    inline GetIPSetResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)
     */
    inline GetIPSetResult& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.
     */
    inline GetIPSetResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.
     */
    inline GetIPSetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.
     */
    inline GetIPSetResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The status of ipSet file uploaded.
     */
    inline const IpSetStatus& GetStatus() const{ return m_status; }

    /**
     * The status of ipSet file uploaded.
     */
    inline void SetStatus(const IpSetStatus& value) { m_status = value; }

    /**
     * The status of ipSet file uploaded.
     */
    inline void SetStatus(IpSetStatus&& value) { m_status = std::move(value); }

    /**
     * The status of ipSet file uploaded.
     */
    inline GetIPSetResult& WithStatus(const IpSetStatus& value) { SetStatus(value); return *this;}

    /**
     * The status of ipSet file uploaded.
     */
    inline GetIPSetResult& WithStatus(IpSetStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    IpSetFormat m_format;

    Aws::String m_location;

    Aws::String m_name;

    IpSetStatus m_status;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
