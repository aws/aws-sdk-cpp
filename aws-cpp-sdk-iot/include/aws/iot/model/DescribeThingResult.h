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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the DescribeThing operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API DescribeThingResult
  {
  public:
    DescribeThingResult();
    DescribeThingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeThingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetDefaultClientId(Aws::String&& value) { m_defaultClientId = std::move(value); }

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
    inline DescribeThingResult& WithDefaultClientId(Aws::String&& value) { SetDefaultClientId(std::move(value)); return *this;}

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
    inline void SetThingName(Aws::String&& value) { m_thingName = std::move(value); }

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
    inline DescribeThingResult& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing.</p>
     */
    inline DescribeThingResult& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The ID of the thing to describe.</p>
     */
    inline const Aws::String& GetThingId() const{ return m_thingId; }

    /**
     * <p>The ID of the thing to describe.</p>
     */
    inline void SetThingId(const Aws::String& value) { m_thingId = value; }

    /**
     * <p>The ID of the thing to describe.</p>
     */
    inline void SetThingId(Aws::String&& value) { m_thingId = std::move(value); }

    /**
     * <p>The ID of the thing to describe.</p>
     */
    inline void SetThingId(const char* value) { m_thingId.assign(value); }

    /**
     * <p>The ID of the thing to describe.</p>
     */
    inline DescribeThingResult& WithThingId(const Aws::String& value) { SetThingId(value); return *this;}

    /**
     * <p>The ID of the thing to describe.</p>
     */
    inline DescribeThingResult& WithThingId(Aws::String&& value) { SetThingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the thing to describe.</p>
     */
    inline DescribeThingResult& WithThingId(const char* value) { SetThingId(value); return *this;}


    /**
     * <p>The ARN of the thing to describe.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }

    /**
     * <p>The ARN of the thing to describe.</p>
     */
    inline void SetThingArn(const Aws::String& value) { m_thingArn = value; }

    /**
     * <p>The ARN of the thing to describe.</p>
     */
    inline void SetThingArn(Aws::String&& value) { m_thingArn = std::move(value); }

    /**
     * <p>The ARN of the thing to describe.</p>
     */
    inline void SetThingArn(const char* value) { m_thingArn.assign(value); }

    /**
     * <p>The ARN of the thing to describe.</p>
     */
    inline DescribeThingResult& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}

    /**
     * <p>The ARN of the thing to describe.</p>
     */
    inline DescribeThingResult& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the thing to describe.</p>
     */
    inline DescribeThingResult& WithThingArn(const char* value) { SetThingArn(value); return *this;}


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
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeName = std::move(value); }

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
    inline DescribeThingResult& WithThingTypeName(Aws::String&& value) { SetThingTypeName(std::move(value)); return *this;}

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
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributes = std::move(value); }

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributes.emplace(key, value); return *this; }

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& AddAttributes(const char* key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& AddAttributes(Aws::String&& key, const char* value) { m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The thing attributes.</p>
     */
    inline DescribeThingResult& AddAttributes(const char* key, const char* value) { m_attributes.emplace(key, value); return *this; }


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


    /**
     * <p>The name of the billing group the thing belongs to.</p>
     */
    inline const Aws::String& GetBillingGroupName() const{ return m_billingGroupName; }

    /**
     * <p>The name of the billing group the thing belongs to.</p>
     */
    inline void SetBillingGroupName(const Aws::String& value) { m_billingGroupName = value; }

    /**
     * <p>The name of the billing group the thing belongs to.</p>
     */
    inline void SetBillingGroupName(Aws::String&& value) { m_billingGroupName = std::move(value); }

    /**
     * <p>The name of the billing group the thing belongs to.</p>
     */
    inline void SetBillingGroupName(const char* value) { m_billingGroupName.assign(value); }

    /**
     * <p>The name of the billing group the thing belongs to.</p>
     */
    inline DescribeThingResult& WithBillingGroupName(const Aws::String& value) { SetBillingGroupName(value); return *this;}

    /**
     * <p>The name of the billing group the thing belongs to.</p>
     */
    inline DescribeThingResult& WithBillingGroupName(Aws::String&& value) { SetBillingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the billing group the thing belongs to.</p>
     */
    inline DescribeThingResult& WithBillingGroupName(const char* value) { SetBillingGroupName(value); return *this;}

  private:

    Aws::String m_defaultClientId;

    Aws::String m_thingName;

    Aws::String m_thingId;

    Aws::String m_thingArn;

    Aws::String m_thingTypeName;

    Aws::Map<Aws::String, Aws::String> m_attributes;

    long long m_version;

    Aws::String m_billingGroupName;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
