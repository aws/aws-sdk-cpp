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
    AWS_BATCH_API CreateSchedulingPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSchedulingPolicy"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the scheduling policy. It can be up to 128 letters long. It can
     * contain uppercase and lowercase letters, numbers, hyphens (-), and underscores
     * (_).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the scheduling policy. It can be up to 128 letters long. It can
     * contain uppercase and lowercase letters, numbers, hyphens (-), and underscores
     * (_).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the scheduling policy. It can be up to 128 letters long. It can
     * contain uppercase and lowercase letters, numbers, hyphens (-), and underscores
     * (_).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the scheduling policy. It can be up to 128 letters long. It can
     * contain uppercase and lowercase letters, numbers, hyphens (-), and underscores
     * (_).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the scheduling policy. It can be up to 128 letters long. It can
     * contain uppercase and lowercase letters, numbers, hyphens (-), and underscores
     * (_).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the scheduling policy. It can be up to 128 letters long. It can
     * contain uppercase and lowercase letters, numbers, hyphens (-), and underscores
     * (_).</p>
     */
    inline CreateSchedulingPolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the scheduling policy. It can be up to 128 letters long. It can
     * contain uppercase and lowercase letters, numbers, hyphens (-), and underscores
     * (_).</p>
     */
    inline CreateSchedulingPolicyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the scheduling policy. It can be up to 128 letters long. It can
     * contain uppercase and lowercase letters, numbers, hyphens (-), and underscores
     * (_).</p>
     */
    inline CreateSchedulingPolicyRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The fair share policy of the scheduling policy.</p>
     */
    inline const FairsharePolicy& GetFairsharePolicy() const{ return m_fairsharePolicy; }

    /**
     * <p>The fair share policy of the scheduling policy.</p>
     */
    inline bool FairsharePolicyHasBeenSet() const { return m_fairsharePolicyHasBeenSet; }

    /**
     * <p>The fair share policy of the scheduling policy.</p>
     */
    inline void SetFairsharePolicy(const FairsharePolicy& value) { m_fairsharePolicyHasBeenSet = true; m_fairsharePolicy = value; }

    /**
     * <p>The fair share policy of the scheduling policy.</p>
     */
    inline void SetFairsharePolicy(FairsharePolicy&& value) { m_fairsharePolicyHasBeenSet = true; m_fairsharePolicy = std::move(value); }

    /**
     * <p>The fair share policy of the scheduling policy.</p>
     */
    inline CreateSchedulingPolicyRequest& WithFairsharePolicy(const FairsharePolicy& value) { SetFairsharePolicy(value); return *this;}

    /**
     * <p>The fair share policy of the scheduling policy.</p>
     */
    inline CreateSchedulingPolicyRequest& WithFairsharePolicy(FairsharePolicy&& value) { SetFairsharePolicy(std::move(value)); return *this;}


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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

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
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

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
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

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
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

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
    inline CreateSchedulingPolicyRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

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
    inline CreateSchedulingPolicyRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

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
    inline CreateSchedulingPolicyRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
    inline CreateSchedulingPolicyRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

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
    inline CreateSchedulingPolicyRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

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
    inline CreateSchedulingPolicyRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

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
    inline CreateSchedulingPolicyRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

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
    inline CreateSchedulingPolicyRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

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
    inline CreateSchedulingPolicyRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
