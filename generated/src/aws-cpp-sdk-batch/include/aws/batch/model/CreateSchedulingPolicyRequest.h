/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/FairsharePolicy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   * <p>Contains the parameters for
   * <code>CreateSchedulingPolicy</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateSchedulingPolicyRequest">AWS
   * API Reference</a></p>
   */
  class CreateSchedulingPolicyRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API CreateSchedulingPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSchedulingPolicy"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the fair-share scheduling policy. It can be up to 128 letters
     * long. It can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateSchedulingPolicyRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fair-share scheduling policy details.</p>
     */
    inline const FairsharePolicy& GetFairsharePolicy() const { return m_fairsharePolicy; }
    inline bool FairsharePolicyHasBeenSet() const { return m_fairsharePolicyHasBeenSet; }
    template<typename FairsharePolicyT = FairsharePolicy>
    void SetFairsharePolicy(FairsharePolicyT&& value) { m_fairsharePolicyHasBeenSet = true; m_fairsharePolicy = std::forward<FairsharePolicyT>(value); }
    template<typename FairsharePolicyT = FairsharePolicy>
    CreateSchedulingPolicyRequest& WithFairsharePolicy(FairsharePolicyT&& value) { SetFairsharePolicy(std::forward<FairsharePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that you apply to the scheduling policy to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p> <p>These tags can be updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSchedulingPolicyRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSchedulingPolicyRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FairsharePolicy m_fairsharePolicy;
    bool m_fairsharePolicyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
