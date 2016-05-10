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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the DescribeThing operation.</p>
   */
  class AWS_IOT_API DescribeThingResult
  {
  public:
    DescribeThingResult();
    DescribeThingResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeThingResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The default client ID.</p>
     */
    inline const Aws::String& GetDefaultClientId() const{ return m_defaultClientId; }

    /**
     * <p>The default client ID.</p>
     */
    inline void SetDefaultClientId(const Aws::String& value) { m_defaultClientId = value; }

    /**
     * <p>The default client ID.</p>
     */
    inline void SetDefaultClientId(Aws::String&& value) { m_defaultClientId = value; }

    /**
     * <p>The default client ID.</p>
     */
    inline void SetDefaultClientId(const char* value) { m_defaultClientId.assign(value); }

    /**
     * <p>The default client ID.</p>
     */
    inline DescribeThingResult& WithDefaultClientId(const Aws::String& value) { SetDefaultClientId(value); return *this;}

    /**
     * <p>The default client ID.</p>
     */
    inline DescribeThingResult& WithDefaultClientId(Aws::String&& value) { SetDefaultClientId(value); return *this;}

    /**
     * <p>The default client ID.</p>
     */
    inline DescribeThingResult& WithDefaultClientId(const char* value) { SetDefaultClientId(value); return *this;}

    /**
     * <p>The name of the thing.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingName = value; }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingName = value; }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(const char* value) { m_thingName.assign(value); }

    /**
     * <p>The name of the thing.</p>
     */
    inline DescribeThingResult& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing.</p>
     */
    inline DescribeThingResult& WithThingName(Aws::String&& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing.</p>
     */
    inline DescribeThingResult& WithThingName(const char* value) { SetThingName(value); return *this;}

    /**
     * <p>The attributes, which are name/value pairs in JSON format (for example:
     * {\"attributes\":{\"some-name1\":\"some-value1\"},
     * {\"some-name2\":\"some-value2\"}, {\"some-name3\":\"some-value3\"}})</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes, which are name/value pairs in JSON format (for example:
     * {\"attributes\":{\"some-name1\":\"some-value1\"},
     * {\"some-name2\":\"some-value2\"}, {\"some-name3\":\"some-value3\"}})</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributes = value; }

    /**
     * <p>The attributes, which are name/value pairs in JSON format (for example:
     * {\"attributes\":{\"some-name1\":\"some-value1\"},
     * {\"some-name2\":\"some-value2\"}, {\"some-name3\":\"some-value3\"}})</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributes = value; }

    /**
     * <p>The attributes, which are name/value pairs in JSON format (for example:
     * {\"attributes\":{\"some-name1\":\"some-value1\"},
     * {\"some-name2\":\"some-value2\"}, {\"some-name3\":\"some-value3\"}})</p>
     */
    inline DescribeThingResult& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes, which are name/value pairs in JSON format (for example:
     * {\"attributes\":{\"some-name1\":\"some-value1\"},
     * {\"some-name2\":\"some-value2\"}, {\"some-name3\":\"some-value3\"}})</p>
     */
    inline DescribeThingResult& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes, which are name/value pairs in JSON format (for example:
     * {\"attributes\":{\"some-name1\":\"some-value1\"},
     * {\"some-name2\":\"some-value2\"}, {\"some-name3\":\"some-value3\"}})</p>
     */
    inline DescribeThingResult& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The attributes, which are name/value pairs in JSON format (for example:
     * {\"attributes\":{\"some-name1\":\"some-value1\"},
     * {\"some-name2\":\"some-value2\"}, {\"some-name3\":\"some-value3\"}})</p>
     */
    inline DescribeThingResult& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The attributes, which are name/value pairs in JSON format (for example:
     * {\"attributes\":{\"some-name1\":\"some-value1\"},
     * {\"some-name2\":\"some-value2\"}, {\"some-name3\":\"some-value3\"}})</p>
     */
    inline DescribeThingResult& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The attributes, which are name/value pairs in JSON format (for example:
     * {\"attributes\":{\"some-name1\":\"some-value1\"},
     * {\"some-name2\":\"some-value2\"}, {\"some-name3\":\"some-value3\"}})</p>
     */
    inline DescribeThingResult& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The attributes, which are name/value pairs in JSON format (for example:
     * {\"attributes\":{\"some-name1\":\"some-value1\"},
     * {\"some-name2\":\"some-value2\"}, {\"some-name3\":\"some-value3\"}})</p>
     */
    inline DescribeThingResult& AddAttributes(const char* key, Aws::String&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The attributes, which are name/value pairs in JSON format (for example:
     * {\"attributes\":{\"some-name1\":\"some-value1\"},
     * {\"some-name2\":\"some-value2\"}, {\"some-name3\":\"some-value3\"}})</p>
     */
    inline DescribeThingResult& AddAttributes(Aws::String&& key, const char* value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The attributes, which are name/value pairs in JSON format (for example:
     * {\"attributes\":{\"some-name1\":\"some-value1\"},
     * {\"some-name2\":\"some-value2\"}, {\"some-name3\":\"some-value3\"}})</p>
     */
    inline DescribeThingResult& AddAttributes(const char* key, const char* value) { m_attributes[key] = value; return *this; }

  private:
    Aws::String m_defaultClientId;
    Aws::String m_thingName;
    Aws::Map<Aws::String, Aws::String> m_attributes;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
