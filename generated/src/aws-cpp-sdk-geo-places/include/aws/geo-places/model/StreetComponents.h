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
    AWS_GEOPLACES_API StreetComponents();
    AWS_GEOPLACES_API StreetComponents(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API StreetComponents& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Base name part of the street name. </p> <p>Example: Younge from the “Younge
     * street".</p>
     */
    inline const Aws::String& GetBaseName() const{ return m_baseName; }
    inline bool BaseNameHasBeenSet() const { return m_baseNameHasBeenSet; }
    inline void SetBaseName(const Aws::String& value) { m_baseNameHasBeenSet = true; m_baseName = value; }
    inline void SetBaseName(Aws::String&& value) { m_baseNameHasBeenSet = true; m_baseName = std::move(value); }
    inline void SetBaseName(const char* value) { m_baseNameHasBeenSet = true; m_baseName.assign(value); }
    inline StreetComponents& WithBaseName(const Aws::String& value) { SetBaseName(value); return *this;}
    inline StreetComponents& WithBaseName(Aws::String&& value) { SetBaseName(std::move(value)); return *this;}
    inline StreetComponents& WithBaseName(const char* value) { SetBaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Street type part of the street name. </p> <p>Example:
     * <code>“avenue"</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline StreetComponents& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline StreetComponents& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline StreetComponents& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines if the street type is before or after the base name.</p>
     */
    inline const TypePlacement& GetTypePlacement() const{ return m_typePlacement; }
    inline bool TypePlacementHasBeenSet() const { return m_typePlacementHasBeenSet; }
    inline void SetTypePlacement(const TypePlacement& value) { m_typePlacementHasBeenSet = true; m_typePlacement = value; }
    inline void SetTypePlacement(TypePlacement&& value) { m_typePlacementHasBeenSet = true; m_typePlacement = std::move(value); }
    inline StreetComponents& WithTypePlacement(const TypePlacement& value) { SetTypePlacement(value); return *this;}
    inline StreetComponents& WithTypePlacement(TypePlacement&& value) { SetTypePlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>What character(s) separates the string from its type. </p>
     */
    inline const Aws::String& GetTypeSeparator() const{ return m_typeSeparator; }
    inline bool TypeSeparatorHasBeenSet() const { return m_typeSeparatorHasBeenSet; }
    inline void SetTypeSeparator(const Aws::String& value) { m_typeSeparatorHasBeenSet = true; m_typeSeparator = value; }
    inline void SetTypeSeparator(Aws::String&& value) { m_typeSeparatorHasBeenSet = true; m_typeSeparator = std::move(value); }
    inline void SetTypeSeparator(const char* value) { m_typeSeparatorHasBeenSet = true; m_typeSeparator.assign(value); }
    inline StreetComponents& WithTypeSeparator(const Aws::String& value) { SetTypeSeparator(value); return *this;}
    inline StreetComponents& WithTypeSeparator(Aws::String&& value) { SetTypeSeparator(std::move(value)); return *this;}
    inline StreetComponents& WithTypeSeparator(const char* value) { SetTypeSeparator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A prefix is a directional identifier that precedes, but is not included in,
     * the base name of a road. </p> <p>Example: E for East.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline StreetComponents& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline StreetComponents& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline StreetComponents& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A suffix is a directional identifier that follows, but is not included in,
     * the base name of a road. </p> <p>Example W for West.</p>
     */
    inline const Aws::String& GetSuffix() const{ return m_suffix; }
    inline bool SuffixHasBeenSet() const { return m_suffixHasBeenSet; }
    inline void SetSuffix(const Aws::String& value) { m_suffixHasBeenSet = true; m_suffix = value; }
    inline void SetSuffix(Aws::String&& value) { m_suffixHasBeenSet = true; m_suffix = std::move(value); }
    inline void SetSuffix(const char* value) { m_suffixHasBeenSet = true; m_suffix.assign(value); }
    inline StreetComponents& WithSuffix(const Aws::String& value) { SetSuffix(value); return *this;}
    inline StreetComponents& WithSuffix(Aws::String&& value) { SetSuffix(std::move(value)); return *this;}
    inline StreetComponents& WithSuffix(const char* value) { SetSuffix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the official directional identifiers assigned to highways.</p>
     */
    inline const Aws::String& GetDirection() const{ return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(const Aws::String& value) { m_directionHasBeenSet = true; m_direction = value; }
    inline void SetDirection(Aws::String&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }
    inline void SetDirection(const char* value) { m_directionHasBeenSet = true; m_direction.assign(value); }
    inline StreetComponents& WithDirection(const Aws::String& value) { SetDirection(value); return *this;}
    inline StreetComponents& WithDirection(Aws::String&& value) { SetDirection(std::move(value)); return *this;}
    inline StreetComponents& WithDirection(const char* value) { SetDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a href="https://en.wikipedia.org/wiki/IETF_language_tag">BCP 47</a>
     * compliant language codes for the results to be rendered in. If there is no data
     * for the result in the requested language, data will be returned in the default
     * language for the entry.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }
    inline StreetComponents& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline StreetComponents& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline StreetComponents& WithLanguage(const char* value) { SetLanguage(value); return *this;}
    ///@}
  private:

    Aws::String m_baseName;
    bool m_baseNameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    TypePlacement m_typePlacement;
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
