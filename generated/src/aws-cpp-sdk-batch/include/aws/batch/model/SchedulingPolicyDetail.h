/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/FairsharePolicy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that represents a scheduling policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/SchedulingPolicyDetail">AWS
   * API Reference</a></p>
   */
  class SchedulingPolicyDetail
  {
  public:
    AWS_BATCH_API SchedulingPolicyDetail();
    AWS_BATCH_API SchedulingPolicyDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API SchedulingPolicyDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the scheduling policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SchedulingPolicyDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SchedulingPolicyDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SchedulingPolicyDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scheduling policy. An example is
     * <code>arn:<i>aws</i>:batch:<i>us-east-1</i>:<i>123456789012</i>:scheduling-policy/<i>HighPriority</i>
     * </code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline SchedulingPolicyDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline SchedulingPolicyDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline SchedulingPolicyDetail& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fair share policy for the scheduling policy.</p>
     */
    inline const FairsharePolicy& GetFairsharePolicy() const{ return m_fairsharePolicy; }
    inline bool FairsharePolicyHasBeenSet() const { return m_fairsharePolicyHasBeenSet; }
    inline void SetFairsharePolicy(const FairsharePolicy& value) { m_fairsharePolicyHasBeenSet = true; m_fairsharePolicy = value; }
    inline void SetFairsharePolicy(FairsharePolicy&& value) { m_fairsharePolicyHasBeenSet = true; m_fairsharePolicy = std::move(value); }
    inline SchedulingPolicyDetail& WithFairsharePolicy(const FairsharePolicy& value) { SetFairsharePolicy(value); return *this;}
    inline SchedulingPolicyDetail& WithFairsharePolicy(FairsharePolicy&& value) { SetFairsharePolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that you apply to the scheduling policy to categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SchedulingPolicyDetail& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline SchedulingPolicyDetail& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline SchedulingPolicyDetail& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline SchedulingPolicyDetail& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SchedulingPolicyDetail& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SchedulingPolicyDetail& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline SchedulingPolicyDetail& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SchedulingPolicyDetail& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SchedulingPolicyDetail& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    FairsharePolicy m_fairsharePolicy;
    bool m_fairsharePolicyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
