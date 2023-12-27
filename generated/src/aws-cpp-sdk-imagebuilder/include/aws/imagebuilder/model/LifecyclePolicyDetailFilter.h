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
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailFilter();
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filter resources based on either <code>age</code> or <code>count</code>.</p>
     */
    inline const LifecyclePolicyDetailFilterType& GetType() const{ return m_type; }

    /**
     * <p>Filter resources based on either <code>age</code> or <code>count</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Filter resources based on either <code>age</code> or <code>count</code>.</p>
     */
    inline void SetType(const LifecyclePolicyDetailFilterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Filter resources based on either <code>age</code> or <code>count</code>.</p>
     */
    inline void SetType(LifecyclePolicyDetailFilterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Filter resources based on either <code>age</code> or <code>count</code>.</p>
     */
    inline LifecyclePolicyDetailFilter& WithType(const LifecyclePolicyDetailFilterType& value) { SetType(value); return *this;}

    /**
     * <p>Filter resources based on either <code>age</code> or <code>count</code>.</p>
     */
    inline LifecyclePolicyDetailFilter& WithType(LifecyclePolicyDetailFilterType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The number of units for the time period or for the count. For example, a
     * value of <code>6</code> might refer to six months or six AMIs.</p>  <p>For
     * count-based filters, this value represents the minimum number of resources to
     * keep on hand. If you have fewer resources than this number, the resource is
     * excluded from lifecycle actions.</p> 
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p>The number of units for the time period or for the count. For example, a
     * value of <code>6</code> might refer to six months or six AMIs.</p>  <p>For
     * count-based filters, this value represents the minimum number of resources to
     * keep on hand. If you have fewer resources than this number, the resource is
     * excluded from lifecycle actions.</p> 
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The number of units for the time period or for the count. For example, a
     * value of <code>6</code> might refer to six months or six AMIs.</p>  <p>For
     * count-based filters, this value represents the minimum number of resources to
     * keep on hand. If you have fewer resources than this number, the resource is
     * excluded from lifecycle actions.</p> 
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The number of units for the time period or for the count. For example, a
     * value of <code>6</code> might refer to six months or six AMIs.</p>  <p>For
     * count-based filters, this value represents the minimum number of resources to
     * keep on hand. If you have fewer resources than this number, the resource is
     * excluded from lifecycle actions.</p> 
     */
    inline LifecyclePolicyDetailFilter& WithValue(int value) { SetValue(value); return *this;}


    /**
     * <p>Defines the unit of time that the lifecycle policy uses to determine impacted
     * resources. This is required for age-based rules.</p>
     */
    inline const LifecyclePolicyTimeUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>Defines the unit of time that the lifecycle policy uses to determine impacted
     * resources. This is required for age-based rules.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>Defines the unit of time that the lifecycle policy uses to determine impacted
     * resources. This is required for age-based rules.</p>
     */
    inline void SetUnit(const LifecyclePolicyTimeUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>Defines the unit of time that the lifecycle policy uses to determine impacted
     * resources. This is required for age-based rules.</p>
     */
    inline void SetUnit(LifecyclePolicyTimeUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>Defines the unit of time that the lifecycle policy uses to determine impacted
     * resources. This is required for age-based rules.</p>
     */
    inline LifecyclePolicyDetailFilter& WithUnit(const LifecyclePolicyTimeUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>Defines the unit of time that the lifecycle policy uses to determine impacted
     * resources. This is required for age-based rules.</p>
     */
    inline LifecyclePolicyDetailFilter& WithUnit(LifecyclePolicyTimeUnit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>For age-based filters, this is the number of resources to keep on hand after
     * the lifecycle <code>DELETE</code> action is applied. Impacted resources are only
     * deleted if you have more than this number of resources. If you have fewer
     * resources than this number, the impacted resource is not deleted.</p>
     */
    inline int GetRetainAtLeast() const{ return m_retainAtLeast; }

    /**
     * <p>For age-based filters, this is the number of resources to keep on hand after
     * the lifecycle <code>DELETE</code> action is applied. Impacted resources are only
     * deleted if you have more than this number of resources. If you have fewer
     * resources than this number, the impacted resource is not deleted.</p>
     */
    inline bool RetainAtLeastHasBeenSet() const { return m_retainAtLeastHasBeenSet; }

    /**
     * <p>For age-based filters, this is the number of resources to keep on hand after
     * the lifecycle <code>DELETE</code> action is applied. Impacted resources are only
     * deleted if you have more than this number of resources. If you have fewer
     * resources than this number, the impacted resource is not deleted.</p>
     */
    inline void SetRetainAtLeast(int value) { m_retainAtLeastHasBeenSet = true; m_retainAtLeast = value; }

    /**
     * <p>For age-based filters, this is the number of resources to keep on hand after
     * the lifecycle <code>DELETE</code> action is applied. Impacted resources are only
     * deleted if you have more than this number of resources. If you have fewer
     * resources than this number, the impacted resource is not deleted.</p>
     */
    inline LifecyclePolicyDetailFilter& WithRetainAtLeast(int value) { SetRetainAtLeast(value); return *this;}

  private:

    LifecyclePolicyDetailFilterType m_type;
    bool m_typeHasBeenSet = false;

    int m_value;
    bool m_valueHasBeenSet = false;

    LifecyclePolicyTimeUnit m_unit;
    bool m_unitHasBeenSet = false;

    int m_retainAtLeast;
    bool m_retainAtLeastHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
