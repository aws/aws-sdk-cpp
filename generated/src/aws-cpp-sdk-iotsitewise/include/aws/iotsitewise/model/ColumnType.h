/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ScalarType.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>The data type of the column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ColumnType">AWS
   * API Reference</a></p>
   */
  class ColumnType
  {
  public:
    AWS_IOTSITEWISE_API ColumnType() = default;
    AWS_IOTSITEWISE_API ColumnType(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ColumnType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The allowed data types that the column has as it's value.</p>
     */
    inline ScalarType GetScalarType() const { return m_scalarType; }
    inline bool ScalarTypeHasBeenSet() const { return m_scalarTypeHasBeenSet; }
    inline void SetScalarType(ScalarType value) { m_scalarTypeHasBeenSet = true; m_scalarType = value; }
    inline ColumnType& WithScalarType(ScalarType value) { SetScalarType(value); return *this;}
    ///@}
  private:

    ScalarType m_scalarType{ScalarType::NOT_SET};
    bool m_scalarTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
