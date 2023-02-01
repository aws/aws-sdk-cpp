/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/TagCondition.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>An object that can be used to specify Tag conditions inside the
   * <code>SearchFilter</code>. This accepts an <code>OR</code> of <code>AND</code>
   * (List of List) input where: </p> <ul> <li> <p>Top level list specifies
   * conditions that need to be applied with <code>OR</code> operator</p> </li> <li>
   * <p>Inner list specifies conditions that need to be applied with <code>AND</code>
   * operator.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ControlPlaneTagFilter">AWS
   * API Reference</a></p>
   */
  class ControlPlaneTagFilter
  {
  public:
    AWS_CONNECT_API ControlPlaneTagFilter();
    AWS_CONNECT_API ControlPlaneTagFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ControlPlaneTagFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition. </p>
     */
    inline const Aws::Vector<Aws::Vector<TagCondition>>& GetOrConditions() const{ return m_orConditions; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition. </p>
     */
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition. </p>
     */
    inline void SetOrConditions(const Aws::Vector<Aws::Vector<TagCondition>>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition. </p>
     */
    inline void SetOrConditions(Aws::Vector<Aws::Vector<TagCondition>>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition. </p>
     */
    inline ControlPlaneTagFilter& WithOrConditions(const Aws::Vector<Aws::Vector<TagCondition>>& value) { SetOrConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition. </p>
     */
    inline ControlPlaneTagFilter& WithOrConditions(Aws::Vector<Aws::Vector<TagCondition>>&& value) { SetOrConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition. </p>
     */
    inline ControlPlaneTagFilter& AddOrConditions(const Aws::Vector<TagCondition>& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition. </p>
     */
    inline ControlPlaneTagFilter& AddOrConditions(Aws::Vector<TagCondition>&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline const Aws::Vector<TagCondition>& GetAndConditions() const{ return m_andConditions; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline void SetAndConditions(const Aws::Vector<TagCondition>& value) { m_andConditionsHasBeenSet = true; m_andConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline void SetAndConditions(Aws::Vector<TagCondition>&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline ControlPlaneTagFilter& WithAndConditions(const Aws::Vector<TagCondition>& value) { SetAndConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline ControlPlaneTagFilter& WithAndConditions(Aws::Vector<TagCondition>&& value) { SetAndConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline ControlPlaneTagFilter& AddAndConditions(const TagCondition& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline ControlPlaneTagFilter& AddAndConditions(TagCondition&& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>A leaf node condition which can be used to specify a tag condition. </p>
     */
    inline const TagCondition& GetTagCondition() const{ return m_tagCondition; }

    /**
     * <p>A leaf node condition which can be used to specify a tag condition. </p>
     */
    inline bool TagConditionHasBeenSet() const { return m_tagConditionHasBeenSet; }

    /**
     * <p>A leaf node condition which can be used to specify a tag condition. </p>
     */
    inline void SetTagCondition(const TagCondition& value) { m_tagConditionHasBeenSet = true; m_tagCondition = value; }

    /**
     * <p>A leaf node condition which can be used to specify a tag condition. </p>
     */
    inline void SetTagCondition(TagCondition&& value) { m_tagConditionHasBeenSet = true; m_tagCondition = std::move(value); }

    /**
     * <p>A leaf node condition which can be used to specify a tag condition. </p>
     */
    inline ControlPlaneTagFilter& WithTagCondition(const TagCondition& value) { SetTagCondition(value); return *this;}

    /**
     * <p>A leaf node condition which can be used to specify a tag condition. </p>
     */
    inline ControlPlaneTagFilter& WithTagCondition(TagCondition&& value) { SetTagCondition(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::Vector<TagCondition>> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<TagCondition> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    TagCondition m_tagCondition;
    bool m_tagConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
