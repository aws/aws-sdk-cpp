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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SegmentDimensions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * Segment definition.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/WriteSegmentRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API WriteSegmentRequest
  {
  public:
    WriteSegmentRequest();
    WriteSegmentRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    WriteSegmentRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The segment dimensions attributes.
     */
    inline const SegmentDimensions& GetDimensions() const{ return m_dimensions; }

    /**
     * The segment dimensions attributes.
     */
    inline void SetDimensions(const SegmentDimensions& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * The segment dimensions attributes.
     */
    inline void SetDimensions(SegmentDimensions&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * The segment dimensions attributes.
     */
    inline WriteSegmentRequest& WithDimensions(const SegmentDimensions& value) { SetDimensions(value); return *this;}

    /**
     * The segment dimensions attributes.
     */
    inline WriteSegmentRequest& WithDimensions(SegmentDimensions&& value) { SetDimensions(std::move(value)); return *this;}


    /**
     * The name of segment
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of segment
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of segment
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of segment
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of segment
     */
    inline WriteSegmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of segment
     */
    inline WriteSegmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of segment
     */
    inline WriteSegmentRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    SegmentDimensions m_dimensions;
    bool m_dimensionsHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
