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
   * <p>Information about a secondary address component parsed from the query
   * text.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/ParsedQuerySecondaryAddressComponent">AWS
   * API Reference</a></p>
   */
  class ParsedQuerySecondaryAddressComponent
  {
  public:
    AWS_GEOPLACES_API ParsedQuerySecondaryAddressComponent() = default;
    AWS_GEOPLACES_API ParsedQuerySecondaryAddressComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API ParsedQuerySecondaryAddressComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Start index of the parsed secondary address component in the query text.</p>
     */
    inline int GetStartIndex() const { return m_startIndex; }
    inline bool StartIndexHasBeenSet() const { return m_startIndexHasBeenSet; }
    inline void SetStartIndex(int value) { m_startIndexHasBeenSet = true; m_startIndex = value; }
    inline ParsedQuerySecondaryAddressComponent& WithStartIndex(int value) { SetStartIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>End index of the parsed secondary address component in the query text.</p>
     */
    inline int GetEndIndex() const { return m_endIndex; }
    inline bool EndIndexHasBeenSet() const { return m_endIndexHasBeenSet; }
    inline void SetEndIndex(int value) { m_endIndexHasBeenSet = true; m_endIndex = value; }
    inline ParsedQuerySecondaryAddressComponent& WithEndIndex(int value) { SetEndIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Value of the parsed secondary address component.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ParsedQuerySecondaryAddressComponent& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Secondary address number provided in the query.</p>
     */
    inline const Aws::String& GetNumber() const { return m_number; }
    inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }
    template<typename NumberT = Aws::String>
    void SetNumber(NumberT&& value) { m_numberHasBeenSet = true; m_number = std::forward<NumberT>(value); }
    template<typename NumberT = Aws::String>
    ParsedQuerySecondaryAddressComponent& WithNumber(NumberT&& value) { SetNumber(std::forward<NumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Secondary address designator provided in the query.</p>
     */
    inline const Aws::String& GetDesignator() const { return m_designator; }
    inline bool DesignatorHasBeenSet() const { return m_designatorHasBeenSet; }
    template<typename DesignatorT = Aws::String>
    void SetDesignator(DesignatorT&& value) { m_designatorHasBeenSet = true; m_designator = std::forward<DesignatorT>(value); }
    template<typename DesignatorT = Aws::String>
    ParsedQuerySecondaryAddressComponent& WithDesignator(DesignatorT&& value) { SetDesignator(std::forward<DesignatorT>(value)); return *this;}
    ///@}
  private:

    int m_startIndex{0};
    bool m_startIndexHasBeenSet = false;

    int m_endIndex{0};
    bool m_endIndexHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_number;
    bool m_numberHasBeenSet = false;

    Aws::String m_designator;
    bool m_designatorHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
