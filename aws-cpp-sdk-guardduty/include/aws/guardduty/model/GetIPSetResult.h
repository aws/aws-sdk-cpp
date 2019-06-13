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
#include <aws/guardduty/model/IpSetFormat.h>
#include <aws/guardduty/model/IpSetStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
     * <p>The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.</p>
     */
    inline GetIPSetResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.</p>
     */
    inline GetIPSetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.</p>
     */
    inline GetIPSetResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The format of the file that contains the IPSet.</p>
     */
    inline const IpSetFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the file that contains the IPSet.</p>
     */
    inline void SetFormat(const IpSetFormat& value) { m_format = value; }

    /**
     * <p>The format of the file that contains the IPSet.</p>
     */
    inline void SetFormat(IpSetFormat&& value) { m_format = std::move(value); }

    /**
     * <p>The format of the file that contains the IPSet.</p>
     */
    inline GetIPSetResult& WithFormat(const IpSetFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the file that contains the IPSet.</p>
     */
    inline GetIPSetResult& WithFormat(IpSetFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)</p>
     */
    inline GetIPSetResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)</p>
     */
    inline GetIPSetResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)</p>
     */
    inline GetIPSetResult& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The status of ipSet file uploaded.</p>
     */
    inline const IpSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of ipSet file uploaded.</p>
     */
    inline void SetStatus(const IpSetStatus& value) { m_status = value; }

    /**
     * <p>The status of ipSet file uploaded.</p>
     */
    inline void SetStatus(IpSetStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of ipSet file uploaded.</p>
     */
    inline GetIPSetResult& WithStatus(const IpSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of ipSet file uploaded.</p>
     */
    inline GetIPSetResult& WithStatus(IpSetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The tags of the IP set resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the IP set resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags of the IP set resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags of the IP set resource.</p>
     */
    inline GetIPSetResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the IP set resource.</p>
     */
    inline GetIPSetResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the IP set resource.</p>
     */
    inline GetIPSetResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of the IP set resource.</p>
     */
    inline GetIPSetResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the IP set resource.</p>
     */
    inline GetIPSetResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the IP set resource.</p>
     */
    inline GetIPSetResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of the IP set resource.</p>
     */
    inline GetIPSetResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the IP set resource.</p>
     */
    inline GetIPSetResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the IP set resource.</p>
     */
    inline GetIPSetResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;

    IpSetFormat m_format;

    Aws::String m_location;

    IpSetStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
