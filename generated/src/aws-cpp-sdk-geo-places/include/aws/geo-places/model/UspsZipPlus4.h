/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/geo-places/model/RecordTypeCode.h>
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
   * <p>The USPS zip+4 code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/UspsZipPlus4">AWS
   * API Reference</a></p>
   */
  class UspsZipPlus4
  {
  public:
    AWS_GEOPLACES_API UspsZipPlus4() = default;
    AWS_GEOPLACES_API UspsZipPlus4(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API UspsZipPlus4& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The USPS ZIP+4 Record Type Code.</p>
     */
    inline RecordTypeCode GetRecordTypeCode() const { return m_recordTypeCode; }
    inline bool RecordTypeCodeHasBeenSet() const { return m_recordTypeCodeHasBeenSet; }
    inline void SetRecordTypeCode(RecordTypeCode value) { m_recordTypeCodeHasBeenSet = true; m_recordTypeCode = value; }
    inline UspsZipPlus4& WithRecordTypeCode(RecordTypeCode value) { SetRecordTypeCode(value); return *this;}
    ///@}
  private:

    RecordTypeCode m_recordTypeCode{RecordTypeCode::NOT_SET};
    bool m_recordTypeCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
