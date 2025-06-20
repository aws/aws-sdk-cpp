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
   * <p>Components that correspond to secondary identifiers on an address. The only
   * component type supported currently is Unit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/SecondaryAddressComponent">AWS
   * API Reference</a></p>
   */
  class SecondaryAddressComponent
  {
  public:
    AWS_GEOPLACES_API SecondaryAddressComponent() = default;
    AWS_GEOPLACES_API SecondaryAddressComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API SecondaryAddressComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Number that uniquely identifies a secondary address.</p>
     */
    inline const Aws::String& GetNumber() const { return m_number; }
    inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }
    template<typename NumberT = Aws::String>
    void SetNumber(NumberT&& value) { m_numberHasBeenSet = true; m_number = std::forward<NumberT>(value); }
    template<typename NumberT = Aws::String>
    SecondaryAddressComponent& WithNumber(NumberT&& value) { SetNumber(std::forward<NumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_number;
    bool m_numberHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
