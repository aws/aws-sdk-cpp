/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
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
namespace GeoPlaces
{
namespace Model
{

  /**
   * <p>The time zone in which the place is located.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/TimeZone">AWS
   * API Reference</a></p>
   */
  class TimeZone
  {
  public:
    AWS_GEOPLACES_API TimeZone();
    AWS_GEOPLACES_API TimeZone(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API TimeZone& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time zone name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TimeZone& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TimeZone& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TimeZone& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time zone offset of the timezone from UTC.</p>
     */
    inline const Aws::String& GetOffset() const{ return m_offset; }
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }
    inline void SetOffset(const Aws::String& value) { m_offsetHasBeenSet = true; m_offset = value; }
    inline void SetOffset(Aws::String&& value) { m_offsetHasBeenSet = true; m_offset = std::move(value); }
    inline void SetOffset(const char* value) { m_offsetHasBeenSet = true; m_offset.assign(value); }
    inline TimeZone& WithOffset(const Aws::String& value) { SetOffset(value); return *this;}
    inline TimeZone& WithOffset(Aws::String&& value) { SetOffset(std::move(value)); return *this;}
    inline TimeZone& WithOffset(const char* value) { SetOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offset of the time zone from UTC, in seconds.</p>
     */
    inline long long GetOffsetSeconds() const{ return m_offsetSeconds; }
    inline bool OffsetSecondsHasBeenSet() const { return m_offsetSecondsHasBeenSet; }
    inline void SetOffsetSeconds(long long value) { m_offsetSecondsHasBeenSet = true; m_offsetSeconds = value; }
    inline TimeZone& WithOffsetSeconds(long long value) { SetOffsetSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_offset;
    bool m_offsetHasBeenSet = false;

    long long m_offsetSeconds;
    bool m_offsetSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
