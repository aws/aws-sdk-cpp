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
#include <aws/iot/model/ThingTypeProperties.h>
#include <aws/iot/model/ThingTypeMetadata.h>
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
   * <p>The output for the DescribeThingType operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingTypeResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API DescribeThingTypeResult
  {
  public:
    DescribeThingTypeResult();
    DescribeThingTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeThingTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the thing type.</p>
     */
    inline const Aws::String& GetThingTypeName() const{ return m_thingTypeName; }

    /**
     * <p>The name of the thing type.</p>
     */
    inline void SetThingTypeName(const Aws::String& value) { m_thingTypeName = value; }

    /**
     * <p>The name of the thing type.</p>
     */
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeName = std::move(value); }

    /**
     * <p>The name of the thing type.</p>
     */
    inline void SetThingTypeName(const char* value) { m_thingTypeName.assign(value); }

    /**
     * <p>The name of the thing type.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The name of the thing type.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeName(Aws::String&& value) { SetThingTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing type.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}


    /**
     * <p>The thing type ID.</p>
     */
    inline const Aws::String& GetThingTypeId() const{ return m_thingTypeId; }

    /**
     * <p>The thing type ID.</p>
     */
    inline void SetThingTypeId(const Aws::String& value) { m_thingTypeId = value; }

    /**
     * <p>The thing type ID.</p>
     */
    inline void SetThingTypeId(Aws::String&& value) { m_thingTypeId = std::move(value); }

    /**
     * <p>The thing type ID.</p>
     */
    inline void SetThingTypeId(const char* value) { m_thingTypeId.assign(value); }

    /**
     * <p>The thing type ID.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeId(const Aws::String& value) { SetThingTypeId(value); return *this;}

    /**
     * <p>The thing type ID.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeId(Aws::String&& value) { SetThingTypeId(std::move(value)); return *this;}

    /**
     * <p>The thing type ID.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeId(const char* value) { SetThingTypeId(value); return *this;}


    /**
     * <p>The thing type ARN.</p>
     */
    inline const Aws::String& GetThingTypeArn() const{ return m_thingTypeArn; }

    /**
     * <p>The thing type ARN.</p>
     */
    inline void SetThingTypeArn(const Aws::String& value) { m_thingTypeArn = value; }

    /**
     * <p>The thing type ARN.</p>
     */
    inline void SetThingTypeArn(Aws::String&& value) { m_thingTypeArn = std::move(value); }

    /**
     * <p>The thing type ARN.</p>
     */
    inline void SetThingTypeArn(const char* value) { m_thingTypeArn.assign(value); }

    /**
     * <p>The thing type ARN.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeArn(const Aws::String& value) { SetThingTypeArn(value); return *this;}

    /**
     * <p>The thing type ARN.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeArn(Aws::String&& value) { SetThingTypeArn(std::move(value)); return *this;}

    /**
     * <p>The thing type ARN.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeArn(const char* value) { SetThingTypeArn(value); return *this;}


    /**
     * <p>The ThingTypeProperties contains information about the thing type including
     * description, and a list of searchable thing attribute names.</p>
     */
    inline const ThingTypeProperties& GetThingTypeProperties() const{ return m_thingTypeProperties; }

    /**
     * <p>The ThingTypeProperties contains information about the thing type including
     * description, and a list of searchable thing attribute names.</p>
     */
    inline void SetThingTypeProperties(const ThingTypeProperties& value) { m_thingTypeProperties = value; }

    /**
     * <p>The ThingTypeProperties contains information about the thing type including
     * description, and a list of searchable thing attribute names.</p>
     */
    inline void SetThingTypeProperties(ThingTypeProperties&& value) { m_thingTypeProperties = std::move(value); }

    /**
     * <p>The ThingTypeProperties contains information about the thing type including
     * description, and a list of searchable thing attribute names.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeProperties(const ThingTypeProperties& value) { SetThingTypeProperties(value); return *this;}

    /**
     * <p>The ThingTypeProperties contains information about the thing type including
     * description, and a list of searchable thing attribute names.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeProperties(ThingTypeProperties&& value) { SetThingTypeProperties(std::move(value)); return *this;}


    /**
     * <p>The ThingTypeMetadata contains additional information about the thing type
     * including: creation date and time, a value indicating whether the thing type is
     * deprecated, and a date and time when it was deprecated.</p>
     */
    inline const ThingTypeMetadata& GetThingTypeMetadata() const{ return m_thingTypeMetadata; }

    /**
     * <p>The ThingTypeMetadata contains additional information about the thing type
     * including: creation date and time, a value indicating whether the thing type is
     * deprecated, and a date and time when it was deprecated.</p>
     */
    inline void SetThingTypeMetadata(const ThingTypeMetadata& value) { m_thingTypeMetadata = value; }

    /**
     * <p>The ThingTypeMetadata contains additional information about the thing type
     * including: creation date and time, a value indicating whether the thing type is
     * deprecated, and a date and time when it was deprecated.</p>
     */
    inline void SetThingTypeMetadata(ThingTypeMetadata&& value) { m_thingTypeMetadata = std::move(value); }

    /**
     * <p>The ThingTypeMetadata contains additional information about the thing type
     * including: creation date and time, a value indicating whether the thing type is
     * deprecated, and a date and time when it was deprecated.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeMetadata(const ThingTypeMetadata& value) { SetThingTypeMetadata(value); return *this;}

    /**
     * <p>The ThingTypeMetadata contains additional information about the thing type
     * including: creation date and time, a value indicating whether the thing type is
     * deprecated, and a date and time when it was deprecated.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeMetadata(ThingTypeMetadata&& value) { SetThingTypeMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_thingTypeName;

    Aws::String m_thingTypeId;

    Aws::String m_thingTypeArn;

    ThingTypeProperties m_thingTypeProperties;

    ThingTypeMetadata m_thingTypeMetadata;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
