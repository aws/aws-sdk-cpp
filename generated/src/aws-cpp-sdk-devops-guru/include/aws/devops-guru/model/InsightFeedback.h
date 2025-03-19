/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/InsightFeedbackOption.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about insight feedback received from a customer. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/InsightFeedback">AWS
   * API Reference</a></p>
   */
  class InsightFeedback
  {
  public:
    AWS_DEVOPSGURU_API InsightFeedback() = default;
    AWS_DEVOPSGURU_API InsightFeedback(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API InsightFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The insight feedback ID. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    InsightFeedback& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The feedback provided by the customer. </p>
     */
    inline InsightFeedbackOption GetFeedback() const { return m_feedback; }
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }
    inline void SetFeedback(InsightFeedbackOption value) { m_feedbackHasBeenSet = true; m_feedback = value; }
    inline InsightFeedback& WithFeedback(InsightFeedbackOption value) { SetFeedback(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    InsightFeedbackOption m_feedback{InsightFeedbackOption::NOT_SET};
    bool m_feedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
