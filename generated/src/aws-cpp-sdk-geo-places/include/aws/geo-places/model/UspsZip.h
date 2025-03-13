/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/geo-places/model/ZipClassificationCode.h>
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
   * <p>The USPS zip code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/UspsZip">AWS
   * API Reference</a></p>
   */
  class UspsZip
  {
  public:
    AWS_GEOPLACES_API UspsZip() = default;
    AWS_GEOPLACES_API UspsZip(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API UspsZip& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ZIP Classification Code, or in other words what type of postal code is
     * it. </p>
     */
    inline ZipClassificationCode GetZipClassificationCode() const { return m_zipClassificationCode; }
    inline bool ZipClassificationCodeHasBeenSet() const { return m_zipClassificationCodeHasBeenSet; }
    inline void SetZipClassificationCode(ZipClassificationCode value) { m_zipClassificationCodeHasBeenSet = true; m_zipClassificationCode = value; }
    inline UspsZip& WithZipClassificationCode(ZipClassificationCode value) { SetZipClassificationCode(value); return *this;}
    ///@}
  private:

    ZipClassificationCode m_zipClassificationCode{ZipClassificationCode::NOT_SET};
    bool m_zipClassificationCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
