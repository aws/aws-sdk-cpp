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
   * <p>The output of the CreateThingType operation.</p>
   */
  class AWS_IOT_API CreateThingTypeResult
  {
  public:
    CreateThingTypeResult();
    CreateThingTypeResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateThingTypeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline CreateThingTypeResult& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The name of the thing type.</p>
     */
    inline CreateThingTypeResult& WithThingTypeName(Aws::String&& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The name of the thing type.</p>
     */
    inline CreateThingTypeResult& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the thing type.</p>
     */
    inline const Aws::String& GetThingTypeArn() const{ return m_thingTypeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the thing type.</p>
     */
    inline void SetThingTypeArn(const Aws::String& value) { m_thingTypeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the thing type.</p>
     */
    inline void SetThingTypeArn(Aws::String&& value) { m_thingTypeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the thing type.</p>
     */
    inline void SetThingTypeArn(const char* value) { m_thingTypeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the thing type.</p>
     */
    inline CreateThingTypeResult& WithThingTypeArn(const Aws::String& value) { SetThingTypeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the thing type.</p>
     */
    inline CreateThingTypeResult& WithThingTypeArn(Aws::String&& value) { SetThingTypeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the thing type.</p>
     */
    inline CreateThingTypeResult& WithThingTypeArn(const char* value) { SetThingTypeArn(value); return *this;}

  private:
    Aws::String m_thingTypeName;
    Aws::String m_thingTypeArn;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
