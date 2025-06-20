/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>

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
   * <p>Match score for a secondary address component in the result.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/SecondaryAddressComponentMatchScore">AWS
   * API Reference</a></p>
   */
  class SecondaryAddressComponentMatchScore
  {
  public:
    AWS_GEOPLACES_API SecondaryAddressComponentMatchScore() = default;
    AWS_GEOPLACES_API SecondaryAddressComponentMatchScore(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API SecondaryAddressComponentMatchScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Match score for the secondary address number.</p>
     */
    inline double GetNumber() const { return m_number; }
    inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }
    inline void SetNumber(double value) { m_numberHasBeenSet = true; m_number = value; }
    inline SecondaryAddressComponentMatchScore& WithNumber(double value) { SetNumber(value); return *this;}
    ///@}
  private:

    double m_number{0.0};
    bool m_numberHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
