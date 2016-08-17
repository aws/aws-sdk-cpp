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
   * <p>The output of the CreateThing operation.</p>
   */
  class AWS_IOT_API CreateThingResult
  {
  public:
    CreateThingResult();
    CreateThingResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateThingResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The name of the new thing.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the new thing.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingName = value; }

    /**
     * <p>The name of the new thing.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingName = value; }

    /**
     * <p>The name of the new thing.</p>
     */
    inline void SetThingName(const char* value) { m_thingName.assign(value); }

    /**
     * <p>The name of the new thing.</p>
     */
    inline CreateThingResult& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the new thing.</p>
     */
    inline CreateThingResult& WithThingName(Aws::String&& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the new thing.</p>
     */
    inline CreateThingResult& WithThingName(const char* value) { SetThingName(value); return *this;}

    /**
     * <p>The ARN of the new thing.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }

    /**
     * <p>The ARN of the new thing.</p>
     */
    inline void SetThingArn(const Aws::String& value) { m_thingArn = value; }

    /**
     * <p>The ARN of the new thing.</p>
     */
    inline void SetThingArn(Aws::String&& value) { m_thingArn = value; }

    /**
     * <p>The ARN of the new thing.</p>
     */
    inline void SetThingArn(const char* value) { m_thingArn.assign(value); }

    /**
     * <p>The ARN of the new thing.</p>
     */
    inline CreateThingResult& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}

    /**
     * <p>The ARN of the new thing.</p>
     */
    inline CreateThingResult& WithThingArn(Aws::String&& value) { SetThingArn(value); return *this;}

    /**
     * <p>The ARN of the new thing.</p>
     */
    inline CreateThingResult& WithThingArn(const char* value) { SetThingArn(value); return *this;}

  private:
    Aws::String m_thingName;
    Aws::String m_thingArn;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
