/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/rds-data/model/DecimalReturnType.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>Options that control how the result set is returned.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ResultSetOptions">AWS
   * API Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API ResultSetOptions
  {
  public:
    ResultSetOptions();
    ResultSetOptions(Aws::Utils::Json::JsonView jsonValue);
    ResultSetOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that indicates how a field of <code>DECIMAL</code> type is
     * represented in the response. The value of <code>STRING</code>, the default,
     * specifies that it is converted to a String value. The value of
     * <code>DOUBLE_OR_LONG</code> specifies that it is converted to a Long value if
     * its scale is 0, or to a Double value otherwise.</p> <important> <p>Conversion to
     * Double or Long can result in roundoff errors due to precision loss. We recommend
     * converting to String, especially when working with currency values.</p>
     * </important>
     */
    inline const DecimalReturnType& GetDecimalReturnType() const{ return m_decimalReturnType; }

    /**
     * <p>A value that indicates how a field of <code>DECIMAL</code> type is
     * represented in the response. The value of <code>STRING</code>, the default,
     * specifies that it is converted to a String value. The value of
     * <code>DOUBLE_OR_LONG</code> specifies that it is converted to a Long value if
     * its scale is 0, or to a Double value otherwise.</p> <important> <p>Conversion to
     * Double or Long can result in roundoff errors due to precision loss. We recommend
     * converting to String, especially when working with currency values.</p>
     * </important>
     */
    inline bool DecimalReturnTypeHasBeenSet() const { return m_decimalReturnTypeHasBeenSet; }

    /**
     * <p>A value that indicates how a field of <code>DECIMAL</code> type is
     * represented in the response. The value of <code>STRING</code>, the default,
     * specifies that it is converted to a String value. The value of
     * <code>DOUBLE_OR_LONG</code> specifies that it is converted to a Long value if
     * its scale is 0, or to a Double value otherwise.</p> <important> <p>Conversion to
     * Double or Long can result in roundoff errors due to precision loss. We recommend
     * converting to String, especially when working with currency values.</p>
     * </important>
     */
    inline void SetDecimalReturnType(const DecimalReturnType& value) { m_decimalReturnTypeHasBeenSet = true; m_decimalReturnType = value; }

    /**
     * <p>A value that indicates how a field of <code>DECIMAL</code> type is
     * represented in the response. The value of <code>STRING</code>, the default,
     * specifies that it is converted to a String value. The value of
     * <code>DOUBLE_OR_LONG</code> specifies that it is converted to a Long value if
     * its scale is 0, or to a Double value otherwise.</p> <important> <p>Conversion to
     * Double or Long can result in roundoff errors due to precision loss. We recommend
     * converting to String, especially when working with currency values.</p>
     * </important>
     */
    inline void SetDecimalReturnType(DecimalReturnType&& value) { m_decimalReturnTypeHasBeenSet = true; m_decimalReturnType = std::move(value); }

    /**
     * <p>A value that indicates how a field of <code>DECIMAL</code> type is
     * represented in the response. The value of <code>STRING</code>, the default,
     * specifies that it is converted to a String value. The value of
     * <code>DOUBLE_OR_LONG</code> specifies that it is converted to a Long value if
     * its scale is 0, or to a Double value otherwise.</p> <important> <p>Conversion to
     * Double or Long can result in roundoff errors due to precision loss. We recommend
     * converting to String, especially when working with currency values.</p>
     * </important>
     */
    inline ResultSetOptions& WithDecimalReturnType(const DecimalReturnType& value) { SetDecimalReturnType(value); return *this;}

    /**
     * <p>A value that indicates how a field of <code>DECIMAL</code> type is
     * represented in the response. The value of <code>STRING</code>, the default,
     * specifies that it is converted to a String value. The value of
     * <code>DOUBLE_OR_LONG</code> specifies that it is converted to a Long value if
     * its scale is 0, or to a Double value otherwise.</p> <important> <p>Conversion to
     * Double or Long can result in roundoff errors due to precision loss. We recommend
     * converting to String, especially when working with currency values.</p>
     * </important>
     */
    inline ResultSetOptions& WithDecimalReturnType(DecimalReturnType&& value) { SetDecimalReturnType(std::move(value)); return *this;}

  private:

    DecimalReturnType m_decimalReturnType;
    bool m_decimalReturnTypeHasBeenSet;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
