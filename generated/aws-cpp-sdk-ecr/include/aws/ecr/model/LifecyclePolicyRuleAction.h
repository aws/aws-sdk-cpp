﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ImageActionType.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The type of action to be taken.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/LifecyclePolicyRuleAction">AWS
   * API Reference</a></p>
   */
  class AWS_ECR_API LifecyclePolicyRuleAction
  {
  public:
    LifecyclePolicyRuleAction();
    LifecyclePolicyRuleAction(Aws::Utils::Json::JsonView jsonValue);
    LifecyclePolicyRuleAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of action to be taken.</p>
     */
    inline const ImageActionType& GetType() const{ return m_type; }

    /**
     * <p>The type of action to be taken.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of action to be taken.</p>
     */
    inline void SetType(const ImageActionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of action to be taken.</p>
     */
    inline void SetType(ImageActionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of action to be taken.</p>
     */
    inline LifecyclePolicyRuleAction& WithType(const ImageActionType& value) { SetType(value); return *this;}

    /**
     * <p>The type of action to be taken.</p>
     */
    inline LifecyclePolicyRuleAction& WithType(ImageActionType&& value) { SetType(std::move(value)); return *this;}

  private:

    ImageActionType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
