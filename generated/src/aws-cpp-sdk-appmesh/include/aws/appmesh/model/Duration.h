/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/DurationUnit.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents a duration of time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/Duration">AWS
   * API Reference</a></p>
   */
  class Duration
  {
  public:
    AWS_APPMESH_API Duration() = default;
    AWS_APPMESH_API Duration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Duration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unit of time.</p>
     */
    inline DurationUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(DurationUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline Duration& WithUnit(DurationUnit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number of time units.</p>
     */
    inline long long GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }
    inline Duration& WithValue(long long value) { SetValue(value); return *this;}
    ///@}
  private:

    DurationUnit m_unit{DurationUnit::NOT_SET};
    bool m_unitHasBeenSet = false;

    long long m_value{0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
