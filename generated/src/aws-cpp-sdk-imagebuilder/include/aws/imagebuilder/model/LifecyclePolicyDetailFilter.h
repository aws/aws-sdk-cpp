/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/LifecyclePolicyDetailFilterType.h>
#include <aws/imagebuilder/model/LifecyclePolicyTimeUnit.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Defines filters that the lifecycle policy uses to determine impacted
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecyclePolicyDetailFilter">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicyDetailFilter
  {
  public:
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailFilter() = default;
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter resources based on either <code>age</code> or <code>count</code>.</p>
     */
    inline LifecyclePolicyDetailFilterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(LifecyclePolicyDetailFilterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline LifecyclePolicyDetailFilter& WithType(LifecyclePolicyDetailFilterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of units for the time period or for the count. For example, a
     * value of <code>6</code> might refer to six months or six AMIs.</p>  <p>For
     * count-based filters, this value represents the minimum number of resources to
     * keep on hand. If you have fewer resources than this number, the resource is
     * excluded from lifecycle actions.</p> 
     */
    inline int GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline LifecyclePolicyDetailFilter& WithValue(int value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the unit of time that the lifecycle policy uses to determine impacted
     * resources. This is required for age-based rules.</p>
     */
    inline LifecyclePolicyTimeUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(LifecyclePolicyTimeUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline LifecyclePolicyDetailFilter& WithUnit(LifecyclePolicyTimeUnit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For age-based filters, this is the number of resources to keep on hand after
     * the lifecycle <code>DELETE</code> action is applied. Impacted resources are only
     * deleted if you have more than this number of resources. If you have fewer
     * resources than this number, the impacted resource is not deleted.</p>
     */
    inline int GetRetainAtLeast() const { return m_retainAtLeast; }
    inline bool RetainAtLeastHasBeenSet() const { return m_retainAtLeastHasBeenSet; }
    inline void SetRetainAtLeast(int value) { m_retainAtLeastHasBeenSet = true; m_retainAtLeast = value; }
    inline LifecyclePolicyDetailFilter& WithRetainAtLeast(int value) { SetRetainAtLeast(value); return *this;}
    ///@}
  private:

    LifecyclePolicyDetailFilterType m_type{LifecyclePolicyDetailFilterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_value{0};
    bool m_valueHasBeenSet = false;

    LifecyclePolicyTimeUnit m_unit{LifecyclePolicyTimeUnit::NOT_SET};
    bool m_unitHasBeenSet = false;

    int m_retainAtLeast{0};
    bool m_retainAtLeastHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
