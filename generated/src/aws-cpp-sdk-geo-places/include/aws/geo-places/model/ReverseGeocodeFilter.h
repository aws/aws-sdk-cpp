/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/ReverseGeocodeFilterPlaceType.h>
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
   * <p>The included place types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/ReverseGeocodeFilter">AWS
   * API Reference</a></p>
   */
  class ReverseGeocodeFilter
  {
  public:
    AWS_GEOPLACES_API ReverseGeocodeFilter() = default;
    AWS_GEOPLACES_API ReverseGeocodeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API ReverseGeocodeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The included place types.</p>
     */
    inline const Aws::Vector<ReverseGeocodeFilterPlaceType>& GetIncludePlaceTypes() const { return m_includePlaceTypes; }
    inline bool IncludePlaceTypesHasBeenSet() const { return m_includePlaceTypesHasBeenSet; }
    template<typename IncludePlaceTypesT = Aws::Vector<ReverseGeocodeFilterPlaceType>>
    void SetIncludePlaceTypes(IncludePlaceTypesT&& value) { m_includePlaceTypesHasBeenSet = true; m_includePlaceTypes = std::forward<IncludePlaceTypesT>(value); }
    template<typename IncludePlaceTypesT = Aws::Vector<ReverseGeocodeFilterPlaceType>>
    ReverseGeocodeFilter& WithIncludePlaceTypes(IncludePlaceTypesT&& value) { SetIncludePlaceTypes(std::forward<IncludePlaceTypesT>(value)); return *this;}
    inline ReverseGeocodeFilter& AddIncludePlaceTypes(ReverseGeocodeFilterPlaceType value) { m_includePlaceTypesHasBeenSet = true; m_includePlaceTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<ReverseGeocodeFilterPlaceType> m_includePlaceTypes;
    bool m_includePlaceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
