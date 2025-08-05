/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/LambdaUngracefulBehavior.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>Configuration for handling failures when invoking Lambda
   * functions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/LambdaUngraceful">AWS
   * API Reference</a></p>
   */
  class LambdaUngraceful
  {
  public:
    AWS_ARCREGIONSWITCH_API LambdaUngraceful() = default;
    AWS_ARCREGIONSWITCH_API LambdaUngraceful(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API LambdaUngraceful& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ungraceful behavior for a Lambda function, which must be set to
     * <code>skip</code>.</p>
     */
    inline LambdaUngracefulBehavior GetBehavior() const { return m_behavior; }
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
    inline void SetBehavior(LambdaUngracefulBehavior value) { m_behaviorHasBeenSet = true; m_behavior = value; }
    inline LambdaUngraceful& WithBehavior(LambdaUngracefulBehavior value) { SetBehavior(value); return *this;}
    ///@}
  private:

    LambdaUngracefulBehavior m_behavior{LambdaUngracefulBehavior::NOT_SET};
    bool m_behaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
