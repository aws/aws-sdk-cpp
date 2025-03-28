/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/FairsharePolicy.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   * <p>Contains the parameters for
   * <code>UpdateSchedulingPolicy</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateSchedulingPolicyRequest">AWS
   * API Reference</a></p>
   */
  class UpdateSchedulingPolicyRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API UpdateSchedulingPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSchedulingPolicy"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scheduling policy to update.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateSchedulingPolicyRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fair-share policy scheduling details.</p>
     */
    inline const FairsharePolicy& GetFairsharePolicy() const { return m_fairsharePolicy; }
    inline bool FairsharePolicyHasBeenSet() const { return m_fairsharePolicyHasBeenSet; }
    template<typename FairsharePolicyT = FairsharePolicy>
    void SetFairsharePolicy(FairsharePolicyT&& value) { m_fairsharePolicyHasBeenSet = true; m_fairsharePolicy = std::forward<FairsharePolicyT>(value); }
    template<typename FairsharePolicyT = FairsharePolicy>
    UpdateSchedulingPolicyRequest& WithFairsharePolicy(FairsharePolicyT&& value) { SetFairsharePolicy(std::forward<FairsharePolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    FairsharePolicy m_fairsharePolicy;
    bool m_fairsharePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
