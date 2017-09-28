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
#include <aws/pinpoint/model/SetDimension.h>
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
   * Segment location dimensions<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentLocation">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SegmentLocation
  {
  public:
    SegmentLocation();
    SegmentLocation(const Aws::Utils::Json::JsonValue& jsonValue);
    SegmentLocation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The country filter according to ISO 3166-1 Alpha-2 codes.
     */
    inline const SetDimension& GetCountry() const{ return m_country; }

    /**
     * The country filter according to ISO 3166-1 Alpha-2 codes.
     */
    inline void SetCountry(const SetDimension& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * The country filter according to ISO 3166-1 Alpha-2 codes.
     */
    inline void SetCountry(SetDimension&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * The country filter according to ISO 3166-1 Alpha-2 codes.
     */
    inline SegmentLocation& WithCountry(const SetDimension& value) { SetCountry(value); return *this;}

    /**
     * The country filter according to ISO 3166-1 Alpha-2 codes.
     */
    inline SegmentLocation& WithCountry(SetDimension&& value) { SetCountry(std::move(value)); return *this;}

  private:

    SetDimension m_country;
    bool m_countryHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
