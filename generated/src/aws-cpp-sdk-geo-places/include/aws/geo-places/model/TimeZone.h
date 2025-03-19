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
    AWS_GEOPLACES_API TimeZone() = default;
    AWS_GEOPLACES_API TimeZone(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API TimeZone& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time zone name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TimeZone& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time zone offset of the timezone from UTC.</p>
     */
    inline const Aws::String& GetOffset() const { return m_offset; }
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }
    template<typename OffsetT = Aws::String>
    void SetOffset(OffsetT&& value) { m_offsetHasBeenSet = true; m_offset = std::forward<OffsetT>(value); }
    template<typename OffsetT = Aws::String>
    TimeZone& WithOffset(OffsetT&& value) { SetOffset(std::forward<OffsetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offset of the time zone from UTC, in seconds.</p>
     */
    inline long long GetOffsetSeconds() const { return m_offsetSeconds; }
    inline bool OffsetSecondsHasBeenSet() const { return m_offsetSecondsHasBeenSet; }
    inline void SetOffsetSeconds(long long value) { m_offsetSecondsHasBeenSet = true; m_offsetSeconds = value; }
    inline TimeZone& WithOffsetSeconds(long long value) { SetOffsetSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_offset;
    bool m_offsetHasBeenSet = false;

    long long m_offsetSeconds{0};
    bool m_offsetSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
