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
    AWS_APPMESH_API Duration();
    AWS_APPMESH_API Duration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Duration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unit of time.</p>
     */
    inline const DurationUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>A unit of time.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>A unit of time.</p>
     */
    inline void SetUnit(const DurationUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>A unit of time.</p>
     */
    inline void SetUnit(DurationUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>A unit of time.</p>
     */
    inline Duration& WithUnit(const DurationUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>A unit of time.</p>
     */
    inline Duration& WithUnit(DurationUnit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>A number of time units.</p>
     */
    inline long long GetValue() const{ return m_value; }

    /**
     * <p>A number of time units.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A number of time units.</p>
     */
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A number of time units.</p>
     */
    inline Duration& WithValue(long long value) { SetValue(value); return *this;}

  private:

    DurationUnit m_unit;
    bool m_unitHasBeenSet = false;

    long long m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
