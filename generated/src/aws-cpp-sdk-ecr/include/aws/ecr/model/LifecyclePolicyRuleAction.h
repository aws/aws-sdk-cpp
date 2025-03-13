/**
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
  class LifecyclePolicyRuleAction
  {
  public:
    AWS_ECR_API LifecyclePolicyRuleAction() = default;
    AWS_ECR_API LifecyclePolicyRuleAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API LifecyclePolicyRuleAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of action to be taken.</p>
     */
    inline ImageActionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ImageActionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline LifecyclePolicyRuleAction& WithType(ImageActionType value) { SetType(value); return *this;}
    ///@}
  private:

    ImageActionType m_type{ImageActionType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
