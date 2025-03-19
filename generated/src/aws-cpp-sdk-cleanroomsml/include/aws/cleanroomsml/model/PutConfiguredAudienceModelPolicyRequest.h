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
    AWS_CLEANROOMSML_API PutConfiguredAudienceModelPolicyRequest() = default;

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
    inline const Aws::String& GetConfiguredAudienceModelArn() const { return m_configuredAudienceModelArn; }
    inline bool ConfiguredAudienceModelArnHasBeenSet() const { return m_configuredAudienceModelArnHasBeenSet; }
    template<typename ConfiguredAudienceModelArnT = Aws::String>
    void SetConfiguredAudienceModelArn(ConfiguredAudienceModelArnT&& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = std::forward<ConfiguredAudienceModelArnT>(value); }
    template<typename ConfiguredAudienceModelArnT = Aws::String>
    PutConfiguredAudienceModelPolicyRequest& WithConfiguredAudienceModelArn(ConfiguredAudienceModelArnT&& value) { SetConfiguredAudienceModelArn(std::forward<ConfiguredAudienceModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM resource policy.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelPolicy() const { return m_configuredAudienceModelPolicy; }
    inline bool ConfiguredAudienceModelPolicyHasBeenSet() const { return m_configuredAudienceModelPolicyHasBeenSet; }
    template<typename ConfiguredAudienceModelPolicyT = Aws::String>
    void SetConfiguredAudienceModelPolicy(ConfiguredAudienceModelPolicyT&& value) { m_configuredAudienceModelPolicyHasBeenSet = true; m_configuredAudienceModelPolicy = std::forward<ConfiguredAudienceModelPolicyT>(value); }
    template<typename ConfiguredAudienceModelPolicyT = Aws::String>
    PutConfiguredAudienceModelPolicyRequest& WithConfiguredAudienceModelPolicy(ConfiguredAudienceModelPolicyT&& value) { SetConfiguredAudienceModelPolicy(std::forward<ConfiguredAudienceModelPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cryptographic hash of the contents of the policy used to prevent unexpected
     * concurrent modification of the policy.</p>
     */
    inline const Aws::String& GetPreviousPolicyHash() const { return m_previousPolicyHash; }
    inline bool PreviousPolicyHashHasBeenSet() const { return m_previousPolicyHashHasBeenSet; }
    template<typename PreviousPolicyHashT = Aws::String>
    void SetPreviousPolicyHash(PreviousPolicyHashT&& value) { m_previousPolicyHashHasBeenSet = true; m_previousPolicyHash = std::forward<PreviousPolicyHashT>(value); }
    template<typename PreviousPolicyHashT = Aws::String>
    PutConfiguredAudienceModelPolicyRequest& WithPreviousPolicyHash(PreviousPolicyHashT&& value) { SetPreviousPolicyHash(std::forward<PreviousPolicyHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this to prevent unexpected concurrent modification of the policy.</p>
     */
    inline PolicyExistenceCondition GetPolicyExistenceCondition() const { return m_policyExistenceCondition; }
    inline bool PolicyExistenceConditionHasBeenSet() const { return m_policyExistenceConditionHasBeenSet; }
    inline void SetPolicyExistenceCondition(PolicyExistenceCondition value) { m_policyExistenceConditionHasBeenSet = true; m_policyExistenceCondition = value; }
    inline PutConfiguredAudienceModelPolicyRequest& WithPolicyExistenceCondition(PolicyExistenceCondition value) { SetPolicyExistenceCondition(value); return *this;}
    ///@}
  private:

    Aws::String m_configuredAudienceModelArn;
    bool m_configuredAudienceModelArnHasBeenSet = false;

    Aws::String m_configuredAudienceModelPolicy;
    bool m_configuredAudienceModelPolicyHasBeenSet = false;

    Aws::String m_previousPolicyHash;
    bool m_previousPolicyHashHasBeenSet = false;

    PolicyExistenceCondition m_policyExistenceCondition{PolicyExistenceCondition::NOT_SET};
    bool m_policyExistenceConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
