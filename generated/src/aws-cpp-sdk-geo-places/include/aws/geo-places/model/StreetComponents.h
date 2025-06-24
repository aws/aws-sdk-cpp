/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/model/TypePlacement.h>
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
   * <p>Components of a street.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/StreetComponents">AWS
   * API Reference</a></p>
   */
  class StreetComponents
  {
  public:
    AWS_GEOPLACES_API StreetComponents() = default;
    AWS_GEOPLACES_API StreetComponents(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API StreetComponents& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Base name part of the street name. </p> <p>Example: Younge from the "Younge
     * street".</p>
     */
    inline const Aws::String& GetBaseName() const { return m_baseName; }
    inline bool BaseNameHasBeenSet() const { return m_baseNameHasBeenSet; }
    template<typename BaseNameT = Aws::String>
    void SetBaseName(BaseNameT&& value) { m_baseNameHasBeenSet = true; m_baseName = std::forward<BaseNameT>(value); }
    template<typename BaseNameT = Aws::String>
    StreetComponents& WithBaseName(BaseNameT&& value) { SetBaseName(std::forward<BaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Street type part of the street name. </p> <p>Example:
     * <code>"avenue"</code>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    StreetComponents& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines if the street type is before or after the base name.</p>
     */
    inline TypePlacement GetTypePlacement() const { return m_typePlacement; }
    inline bool TypePlacementHasBeenSet() const { return m_typePlacementHasBeenSet; }
    inline void SetTypePlacement(TypePlacement value) { m_typePlacementHasBeenSet = true; m_typePlacement = value; }
    inline StreetComponents& WithTypePlacement(TypePlacement value) { SetTypePlacement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines a separator character such as <code>""</code> or <code>" "</code>
     * between the base name and type.</p>
     */
    inline const Aws::String& GetTypeSeparator() const { return m_typeSeparator; }
    inline bool TypeSeparatorHasBeenSet() const { return m_typeSeparatorHasBeenSet; }
    template<typename TypeSeparatorT = Aws::String>
    void SetTypeSeparator(TypeSeparatorT&& value) { m_typeSeparatorHasBeenSet = true; m_typeSeparator = std::forward<TypeSeparatorT>(value); }
    template<typename TypeSeparatorT = Aws::String>
    StreetComponents& WithTypeSeparator(TypeSeparatorT&& value) { SetTypeSeparator(std::forward<TypeSeparatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A prefix is a directional identifier that precedes, but is not included in,
     * the base name of a road. </p> <p>Example: E for East.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    StreetComponents& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A suffix is a directional identifier that follows, but is not included in,
     * the base name of a road. </p> <p>Example W for West.</p>
     */
    inline const Aws::String& GetSuffix() const { return m_suffix; }
    inline bool SuffixHasBeenSet() const { return m_suffixHasBeenSet; }
    template<typename SuffixT = Aws::String>
    void SetSuffix(SuffixT&& value) { m_suffixHasBeenSet = true; m_suffix = std::forward<SuffixT>(value); }
    template<typename SuffixT = Aws::String>
    StreetComponents& WithSuffix(SuffixT&& value) { SetSuffix(std::forward<SuffixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the official directional identifiers assigned to highways.</p>
     */
    inline const Aws::String& GetDirection() const { return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    template<typename DirectionT = Aws::String>
    void SetDirection(DirectionT&& value) { m_directionHasBeenSet = true; m_direction = std::forward<DirectionT>(value); }
    template<typename DirectionT = Aws::String>
    StreetComponents& WithDirection(DirectionT&& value) { SetDirection(std::forward<DirectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a href="https://en.wikipedia.org/wiki/IETF_language_tag">BCP 47</a>
     * compliant language codes for the results to be rendered in. If there is no data
     * for the result in the requested language, data will be returned in the default
     * language for the entry.</p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    StreetComponents& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baseName;
    bool m_baseNameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    TypePlacement m_typePlacement{TypePlacement::NOT_SET};
    bool m_typePlacementHasBeenSet = false;

    Aws::String m_typeSeparator;
    bool m_typeSeparatorHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_suffix;
    bool m_suffixHasBeenSet = false;

    Aws::String m_direction;
    bool m_directionHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
