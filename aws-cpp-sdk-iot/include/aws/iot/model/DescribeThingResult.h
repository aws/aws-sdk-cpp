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
     * <p>The thing type name.</p>
     */
    inline const Aws::String& GetThingTypeName() const{ return m_thingTypeName; }

    /**
     * <p>The thing type name.</p>
     */
    inline void SetThingTypeName(const Aws::String& value) { m_thingTypeName = value; }

    /**
     * <p>The thing type name.</p>
     */
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeName = value; }

    /**
     * <p>The thing type name.</p>
     */
    inline void SetThingTypeName(const char* value) { m_thingTypeName.assign(value); }

    /**
     * <p>The thing type name.</p>
     */
    inline DescribeThingResult& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The thing type name.</p>
     */
    inline DescribeThingResult& WithThingTypeName(Aws::String&& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The thing type name.</p>
     */
    inline DescribeThingResult& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The thing attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The thing attributes.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributes = value; }

    /**
     * <p>The thing attributes.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributes = value; }

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& AddAttributes(const char* key, Aws::String&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& AddAttributes(Aws::String&& key, const char* value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& AddAttributes(const char* key, const char* value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The current version of the thing record in the registry.</p> <note> <p>To
     * avoid unintentional changes to the information in the registry, you can pass the
     * version information in the <code>expectedVersion</code> parameter of the
     * <code>UpdateThing</code> and <code>DeleteThing</code> calls.</p> </note>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The current version of the thing record in the registry.</p> <note> <p>To
     * avoid unintentional changes to the information in the registry, you can pass the
     * version information in the <code>expectedVersion</code> parameter of the
     * <code>UpdateThing</code> and <code>DeleteThing</code> calls.</p> </note>
     */
    inline void SetVersion(long long value) { m_version = value; }

    /**
     * <p>The current version of the thing record in the registry.</p> <note> <p>To
     * avoid unintentional changes to the information in the registry, you can pass the
     * version information in the <code>expectedVersion</code> parameter of the
     * <code>UpdateThing</code> and <code>DeleteThing</code> calls.</p> </note>
     */
    inline DescribeThingResult& WithVersion(long long value) { SetVersion(value); return *this;}

  private:
    Aws::String m_defaultClientId;
    Aws::String m_thingName;
    Aws::String m_thingTypeName;
    Aws::Map<Aws::String, Aws::String> m_attributes;
    long long m_version;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
