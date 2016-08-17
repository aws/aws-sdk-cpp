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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>An AWS Direct Connect location where connections and interconnects can be
   * requested.</p>
   */
  class AWS_DIRECTCONNECT_API Location
  {
  public:
    Location();
    Location(const Aws::Utils::Json::JsonValue& jsonValue);
    Location& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The code used to indicate the AWS Direct Connect location.</p>
     */
    inline const Aws::String& GetLocationCode() const{ return m_locationCode; }

    /**
     * <p>The code used to indicate the AWS Direct Connect location.</p>
     */
    inline void SetLocationCode(const Aws::String& value) { m_locationCodeHasBeenSet = true; m_locationCode = value; }

    /**
     * <p>The code used to indicate the AWS Direct Connect location.</p>
     */
    inline void SetLocationCode(Aws::String&& value) { m_locationCodeHasBeenSet = true; m_locationCode = value; }

    /**
     * <p>The code used to indicate the AWS Direct Connect location.</p>
     */
    inline void SetLocationCode(const char* value) { m_locationCodeHasBeenSet = true; m_locationCode.assign(value); }

    /**
     * <p>The code used to indicate the AWS Direct Connect location.</p>
     */
    inline Location& WithLocationCode(const Aws::String& value) { SetLocationCode(value); return *this;}

    /**
     * <p>The code used to indicate the AWS Direct Connect location.</p>
     */
    inline Location& WithLocationCode(Aws::String&& value) { SetLocationCode(value); return *this;}

    /**
     * <p>The code used to indicate the AWS Direct Connect location.</p>
     */
    inline Location& WithLocationCode(const char* value) { SetLocationCode(value); return *this;}

    /**
     * <p>The name of the AWS Direct Connect location. The name includes the colocation
     * partner name and the physical site of the lit building.</p>
     */
    inline const Aws::String& GetLocationName() const{ return m_locationName; }

    /**
     * <p>The name of the AWS Direct Connect location. The name includes the colocation
     * partner name and the physical site of the lit building.</p>
     */
    inline void SetLocationName(const Aws::String& value) { m_locationNameHasBeenSet = true; m_locationName = value; }

    /**
     * <p>The name of the AWS Direct Connect location. The name includes the colocation
     * partner name and the physical site of the lit building.</p>
     */
    inline void SetLocationName(Aws::String&& value) { m_locationNameHasBeenSet = true; m_locationName = value; }

    /**
     * <p>The name of the AWS Direct Connect location. The name includes the colocation
     * partner name and the physical site of the lit building.</p>
     */
    inline void SetLocationName(const char* value) { m_locationNameHasBeenSet = true; m_locationName.assign(value); }

    /**
     * <p>The name of the AWS Direct Connect location. The name includes the colocation
     * partner name and the physical site of the lit building.</p>
     */
    inline Location& WithLocationName(const Aws::String& value) { SetLocationName(value); return *this;}

    /**
     * <p>The name of the AWS Direct Connect location. The name includes the colocation
     * partner name and the physical site of the lit building.</p>
     */
    inline Location& WithLocationName(Aws::String&& value) { SetLocationName(value); return *this;}

    /**
     * <p>The name of the AWS Direct Connect location. The name includes the colocation
     * partner name and the physical site of the lit building.</p>
     */
    inline Location& WithLocationName(const char* value) { SetLocationName(value); return *this;}

  private:
    Aws::String m_locationCode;
    bool m_locationCodeHasBeenSet;
    Aws::String m_locationName;
    bool m_locationNameHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
