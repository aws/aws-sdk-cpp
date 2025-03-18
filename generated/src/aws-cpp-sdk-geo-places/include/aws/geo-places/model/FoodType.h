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
   * <p>List of <code>Food</code> types offered by this result.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/FoodType">AWS
   * API Reference</a></p>
   */
  class FoodType
  {
  public:
    AWS_GEOPLACES_API FoodType() = default;
    AWS_GEOPLACES_API FoodType(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API FoodType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Localized name of the food type.</p>
     */
    inline const Aws::String& GetLocalizedName() const { return m_localizedName; }
    inline bool LocalizedNameHasBeenSet() const { return m_localizedNameHasBeenSet; }
    template<typename LocalizedNameT = Aws::String>
    void SetLocalizedName(LocalizedNameT&& value) { m_localizedNameHasBeenSet = true; m_localizedName = std::forward<LocalizedNameT>(value); }
    template<typename LocalizedNameT = Aws::String>
    FoodType& WithLocalizedName(LocalizedNameT&& value) { SetLocalizedName(std::forward<LocalizedNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Food Type Id.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    FoodType& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean which indicates if this food type is the primary offered by the
     * place. For example, if a location serves fast food, but also dessert, he primary
     * would likely be fast food.</p>
     */
    inline bool GetPrimary() const { return m_primary; }
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
    inline void SetPrimary(bool value) { m_primaryHasBeenSet = true; m_primary = value; }
    inline FoodType& WithPrimary(bool value) { SetPrimary(value); return *this;}
    ///@}
  private:

    Aws::String m_localizedName;
    bool m_localizedNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_primary{false};
    bool m_primaryHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
