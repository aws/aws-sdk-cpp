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
   * <p>An object representing the duration between retry attempts.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/Duration">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API Duration
  {
  public:
    Duration();
    Duration(Aws::Utils::Json::JsonView jsonValue);
    Duration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unit of time between retry attempts.</p>
     */
    inline const DurationUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of time between retry attempts.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of time between retry attempts.</p>
     */
    inline void SetUnit(const DurationUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of time between retry attempts.</p>
     */
    inline void SetUnit(DurationUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of time between retry attempts.</p>
     */
    inline Duration& WithUnit(const DurationUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of time between retry attempts.</p>
     */
    inline Duration& WithUnit(DurationUnit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>The duration of time between retry attempts.</p>
     */
    inline long long GetValue() const{ return m_value; }

    /**
     * <p>The duration of time between retry attempts.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The duration of time between retry attempts.</p>
     */
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The duration of time between retry attempts.</p>
     */
    inline Duration& WithValue(long long value) { SetValue(value); return *this;}

  private:

    DurationUnit m_unit;
    bool m_unitHasBeenSet;

    long long m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
