/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/PolicyExistenceCondition.h>
#include <utility>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

  /**
   */
  class PutConfiguredAudienceModelPolicyRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API PutConfiguredAudienceModelPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfiguredAudienceModelPolicy"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that the
     * resource policy will govern.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const{ return m_configuredAudienceModelArn; }
    inline bool ConfiguredAudienceModelArnHasBeenSet() const { return m_configuredAudienceModelArnHasBeenSet; }
    inline void SetConfiguredAudienceModelArn(const Aws::String& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = value; }
    inline void SetConfiguredAudienceModelArn(Aws::String&& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = std::move(value); }
    inline void SetConfiguredAudienceModelArn(const char* value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn.assign(value); }
    inline PutConfiguredAudienceModelPolicyRequest& WithConfiguredAudienceModelArn(const Aws::String& value) { SetConfiguredAudienceModelArn(value); return *this;}
    inline PutConfiguredAudienceModelPolicyRequest& WithConfiguredAudienceModelArn(Aws::String&& value) { SetConfiguredAudienceModelArn(std::move(value)); return *this;}
    inline PutConfiguredAudienceModelPolicyRequest& WithConfiguredAudienceModelArn(const char* value) { SetConfiguredAudienceModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM resource policy.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelPolicy() const{ return m_configuredAudienceModelPolicy; }
    inline bool ConfiguredAudienceModelPolicyHasBeenSet() const { return m_configuredAudienceModelPolicyHasBeenSet; }
    inline void SetConfiguredAudienceModelPolicy(const Aws::String& value) { m_configuredAudienceModelPolicyHasBeenSet = true; m_configuredAudienceModelPolicy = value; }
    inline void SetConfiguredAudienceModelPolicy(Aws::String&& value) { m_configuredAudienceModelPolicyHasBeenSet = true; m_configuredAudienceModelPolicy = std::move(value); }
    inline void SetConfiguredAudienceModelPolicy(const char* value) { m_configuredAudienceModelPolicyHasBeenSet = true; m_configuredAudienceModelPolicy.assign(value); }
    inline PutConfiguredAudienceModelPolicyRequest& WithConfiguredAudienceModelPolicy(const Aws::String& value) { SetConfiguredAudienceModelPolicy(value); return *this;}
    inline PutConfiguredAudienceModelPolicyRequest& WithConfiguredAudienceModelPolicy(Aws::String&& value) { SetConfiguredAudienceModelPolicy(std::move(value)); return *this;}
    inline PutConfiguredAudienceModelPolicyRequest& WithConfiguredAudienceModelPolicy(const char* value) { SetConfiguredAudienceModelPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cryptographic hash of the contents of the policy used to prevent unexpected
     * concurrent modification of the policy.</p>
     */
    inline const Aws::String& GetPreviousPolicyHash() const{ return m_previousPolicyHash; }
    inline bool PreviousPolicyHashHasBeenSet() const { return m_previousPolicyHashHasBeenSet; }
    inline void SetPreviousPolicyHash(const Aws::String& value) { m_previousPolicyHashHasBeenSet = true; m_previousPolicyHash = value; }
    inline void SetPreviousPolicyHash(Aws::String&& value) { m_previousPolicyHashHasBeenSet = true; m_previousPolicyHash = std::move(value); }
    inline void SetPreviousPolicyHash(const char* value) { m_previousPolicyHashHasBeenSet = true; m_previousPolicyHash.assign(value); }
    inline PutConfiguredAudienceModelPolicyRequest& WithPreviousPolicyHash(const Aws::String& value) { SetPreviousPolicyHash(value); return *this;}
    inline PutConfiguredAudienceModelPolicyRequest& WithPreviousPolicyHash(Aws::String&& value) { SetPreviousPolicyHash(std::move(value)); return *this;}
    inline PutConfiguredAudienceModelPolicyRequest& WithPreviousPolicyHash(const char* value) { SetPreviousPolicyHash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this to prevent unexpected concurrent modification of the policy.</p>
     */
    inline const PolicyExistenceCondition& GetPolicyExistenceCondition() const{ return m_policyExistenceCondition; }
    inline bool PolicyExistenceConditionHasBeenSet() const { return m_policyExistenceConditionHasBeenSet; }
    inline void SetPolicyExistenceCondition(const PolicyExistenceCondition& value) { m_policyExistenceConditionHasBeenSet = true; m_policyExistenceCondition = value; }
    inline void SetPolicyExistenceCondition(PolicyExistenceCondition&& value) { m_policyExistenceConditionHasBeenSet = true; m_policyExistenceCondition = std::move(value); }
    inline PutConfiguredAudienceModelPolicyRequest& WithPolicyExistenceCondition(const PolicyExistenceCondition& value) { SetPolicyExistenceCondition(value); return *this;}
    inline PutConfiguredAudienceModelPolicyRequest& WithPolicyExistenceCondition(PolicyExistenceCondition&& value) { SetPolicyExistenceCondition(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_configuredAudienceModelArn;
    bool m_configuredAudienceModelArnHasBeenSet = false;

    Aws::String m_configuredAudienceModelPolicy;
    bool m_configuredAudienceModelPolicyHasBeenSet = false;

    Aws::String m_previousPolicyHash;
    bool m_previousPolicyHashHasBeenSet = false;

    PolicyExistenceCondition m_policyExistenceCondition;
    bool m_policyExistenceConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
