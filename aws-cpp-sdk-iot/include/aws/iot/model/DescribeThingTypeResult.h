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
#include <aws/iot/model/ThingTypeProperties.h>
#include <aws/iot/model/ThingTypeMetadata.h>

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
   * <p>The output for the DescribeThingType operation.</p>
   */
  class AWS_IOT_API DescribeThingTypeResult
  {
  public:
    DescribeThingTypeResult();
    DescribeThingTypeResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeThingTypeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeName = value; }

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
    inline DescribeThingTypeResult& WithThingTypeName(Aws::String&& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The name of the thing type.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}

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
    inline void SetThingTypeProperties(ThingTypeProperties&& value) { m_thingTypeProperties = value; }

    /**
     * <p>The ThingTypeProperties contains information about the thing type including
     * description, and a list of searchable thing attribute names.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeProperties(const ThingTypeProperties& value) { SetThingTypeProperties(value); return *this;}

    /**
     * <p>The ThingTypeProperties contains information about the thing type including
     * description, and a list of searchable thing attribute names.</p>
     */
    inline DescribeThingTypeResult& WithThingTypeProperties(ThingTypeProperties&& value) { SetThingTypeProperties(value); return *this;}

    
    inline const ThingTypeMetadata& GetThingTypeMetadata() const{ return m_thingTypeMetadata; }

    
    inline void SetThingTypeMetadata(const ThingTypeMetadata& value) { m_thingTypeMetadata = value; }

    
    inline void SetThingTypeMetadata(ThingTypeMetadata&& value) { m_thingTypeMetadata = value; }

    
    inline DescribeThingTypeResult& WithThingTypeMetadata(const ThingTypeMetadata& value) { SetThingTypeMetadata(value); return *this;}

    
    inline DescribeThingTypeResult& WithThingTypeMetadata(ThingTypeMetadata&& value) { SetThingTypeMetadata(value); return *this;}

  private:
    Aws::String m_thingTypeName;
    ThingTypeProperties m_thingTypeProperties;
    ThingTypeMetadata m_thingTypeMetadata;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
