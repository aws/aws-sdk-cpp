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
    AWS_BATCH_API UpdateSchedulingPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSchedulingPolicy"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the scheduling policy to update.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduling policy to update.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduling policy to update.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduling policy to update.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduling policy to update.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduling policy to update.</p>
     */
    inline UpdateSchedulingPolicyRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduling policy to update.</p>
     */
    inline UpdateSchedulingPolicyRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduling policy to update.</p>
     */
    inline UpdateSchedulingPolicyRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The fair share policy.</p>
     */
    inline const FairsharePolicy& GetFairsharePolicy() const{ return m_fairsharePolicy; }

    /**
     * <p>The fair share policy.</p>
     */
    inline bool FairsharePolicyHasBeenSet() const { return m_fairsharePolicyHasBeenSet; }

    /**
     * <p>The fair share policy.</p>
     */
    inline void SetFairsharePolicy(const FairsharePolicy& value) { m_fairsharePolicyHasBeenSet = true; m_fairsharePolicy = value; }

    /**
     * <p>The fair share policy.</p>
     */
    inline void SetFairsharePolicy(FairsharePolicy&& value) { m_fairsharePolicyHasBeenSet = true; m_fairsharePolicy = std::move(value); }

    /**
     * <p>The fair share policy.</p>
     */
    inline UpdateSchedulingPolicyRequest& WithFairsharePolicy(const FairsharePolicy& value) { SetFairsharePolicy(value); return *this;}

    /**
     * <p>The fair share policy.</p>
     */
    inline UpdateSchedulingPolicyRequest& WithFairsharePolicy(FairsharePolicy&& value) { SetFairsharePolicy(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    FairsharePolicy m_fairsharePolicy;
    bool m_fairsharePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
