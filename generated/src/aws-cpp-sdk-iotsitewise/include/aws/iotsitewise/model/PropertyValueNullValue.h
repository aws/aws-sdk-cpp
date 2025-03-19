/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/RawValueType.h>
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
   * <p>The value type of null asset property data with BAD and UNCERTAIN
   * qualities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PropertyValueNullValue">AWS
   * API Reference</a></p>
   */
  class PropertyValueNullValue
  {
  public:
    AWS_IOTSITEWISE_API PropertyValueNullValue() = default;
    AWS_IOTSITEWISE_API PropertyValueNullValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API PropertyValueNullValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of null asset property data.</p>
     */
    inline RawValueType GetValueType() const { return m_valueType; }
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
    inline void SetValueType(RawValueType value) { m_valueTypeHasBeenSet = true; m_valueType = value; }
    inline PropertyValueNullValue& WithValueType(RawValueType value) { SetValueType(value); return *this;}
    ///@}
  private:

    RawValueType m_valueType{RawValueType::NOT_SET};
    bool m_valueTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
