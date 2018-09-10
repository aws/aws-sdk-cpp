﻿/*
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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>An AWS Direct Connect location where connections and interconnects can be
   * requested.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/Location">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API Location
  {
  public:
    Location();
    Location(Aws::Utils::Json::JsonView jsonValue);
    Location& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline void SetLocationCode(Aws::String&& value) { m_locationCodeHasBeenSet = true; m_locationCode = std::move(value); }

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
    inline Location& WithLocationCode(Aws::String&& value) { SetLocationCode(std::move(value)); return *this;}

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
    inline void SetLocationName(Aws::String&& value) { m_locationNameHasBeenSet = true; m_locationName = std::move(value); }

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
    inline Location& WithLocationName(Aws::String&& value) { SetLocationName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Direct Connect location. The name includes the colocation
     * partner name and the physical site of the lit building.</p>
     */
    inline Location& WithLocationName(const char* value) { SetLocationName(value); return *this;}


    /**
     * <p>The AWS region where the AWS Direct connect location is located.</p>
     * <p>Example: us-east-1</p> <p>Default: None</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS region where the AWS Direct connect location is located.</p>
     * <p>Example: us-east-1</p> <p>Default: None</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS region where the AWS Direct connect location is located.</p>
     * <p>Example: us-east-1</p> <p>Default: None</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS region where the AWS Direct connect location is located.</p>
     * <p>Example: us-east-1</p> <p>Default: None</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS region where the AWS Direct connect location is located.</p>
     * <p>Example: us-east-1</p> <p>Default: None</p>
     */
    inline Location& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS region where the AWS Direct connect location is located.</p>
     * <p>Example: us-east-1</p> <p>Default: None</p>
     */
    inline Location& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS region where the AWS Direct connect location is located.</p>
     * <p>Example: us-east-1</p> <p>Default: None</p>
     */
    inline Location& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:

    Aws::String m_locationCode;
    bool m_locationCodeHasBeenSet;

    Aws::String m_locationName;
    bool m_locationNameHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
