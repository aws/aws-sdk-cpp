﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/CommonAttributeAndCondition.h>
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
   * <code>SearchFilter</code>. This accepts an <code>OR</code> or <code>AND</code>
   * (List of List) input where: </p> <ul> <li> <p>The top level list specifies
   * conditions that need to be applied with <code>OR</code> operator.</p> </li> <li>
   * <p>The inner list specifies conditions that need to be applied with
   * <code>AND</code> operator.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ControlPlaneAttributeFilter">AWS
   * API Reference</a></p>
   */
  class ControlPlaneAttributeFilter
  {
  public:
    AWS_CONNECT_API ControlPlaneAttributeFilter();
    AWS_CONNECT_API ControlPlaneAttributeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ControlPlaneAttributeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline const Aws::Vector<CommonAttributeAndCondition>& GetOrConditions() const{ return m_orConditions; }
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
    inline void SetOrConditions(const Aws::Vector<CommonAttributeAndCondition>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }
    inline void SetOrConditions(Aws::Vector<CommonAttributeAndCondition>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }
    inline ControlPlaneAttributeFilter& WithOrConditions(const Aws::Vector<CommonAttributeAndCondition>& value) { SetOrConditions(value); return *this;}
    inline ControlPlaneAttributeFilter& WithOrConditions(Aws::Vector<CommonAttributeAndCondition>&& value) { SetOrConditions(std::move(value)); return *this;}
    inline ControlPlaneAttributeFilter& AddOrConditions(const CommonAttributeAndCondition& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }
    inline ControlPlaneAttributeFilter& AddOrConditions(CommonAttributeAndCondition&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline const CommonAttributeAndCondition& GetAndCondition() const{ return m_andCondition; }
    inline bool AndConditionHasBeenSet() const { return m_andConditionHasBeenSet; }
    inline void SetAndCondition(const CommonAttributeAndCondition& value) { m_andConditionHasBeenSet = true; m_andCondition = value; }
    inline void SetAndCondition(CommonAttributeAndCondition&& value) { m_andConditionHasBeenSet = true; m_andCondition = std::move(value); }
    inline ControlPlaneAttributeFilter& WithAndCondition(const CommonAttributeAndCondition& value) { SetAndCondition(value); return *this;}
    inline ControlPlaneAttributeFilter& WithAndCondition(CommonAttributeAndCondition&& value) { SetAndCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const TagCondition& GetTagCondition() const{ return m_tagCondition; }
    inline bool TagConditionHasBeenSet() const { return m_tagConditionHasBeenSet; }
    inline void SetTagCondition(const TagCondition& value) { m_tagConditionHasBeenSet = true; m_tagCondition = value; }
    inline void SetTagCondition(TagCondition&& value) { m_tagConditionHasBeenSet = true; m_tagCondition = std::move(value); }
    inline ControlPlaneAttributeFilter& WithTagCondition(const TagCondition& value) { SetTagCondition(value); return *this;}
    inline ControlPlaneAttributeFilter& WithTagCondition(TagCondition&& value) { SetTagCondition(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CommonAttributeAndCondition> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    CommonAttributeAndCondition m_andCondition;
    bool m_andConditionHasBeenSet = false;

    TagCondition m_tagCondition;
    bool m_tagConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
