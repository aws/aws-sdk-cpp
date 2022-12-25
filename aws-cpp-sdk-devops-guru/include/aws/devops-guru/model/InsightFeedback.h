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
    AWS_DEVOPSGURU_API InsightFeedback();
    AWS_DEVOPSGURU_API InsightFeedback(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API InsightFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The insight feedback ID. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The insight feedback ID. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The insight feedback ID. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The insight feedback ID. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The insight feedback ID. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The insight feedback ID. </p>
     */
    inline InsightFeedback& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The insight feedback ID. </p>
     */
    inline InsightFeedback& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The insight feedback ID. </p>
     */
    inline InsightFeedback& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The feedback provided by the customer. </p>
     */
    inline const InsightFeedbackOption& GetFeedback() const{ return m_feedback; }

    /**
     * <p> The feedback provided by the customer. </p>
     */
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }

    /**
     * <p> The feedback provided by the customer. </p>
     */
    inline void SetFeedback(const InsightFeedbackOption& value) { m_feedbackHasBeenSet = true; m_feedback = value; }

    /**
     * <p> The feedback provided by the customer. </p>
     */
    inline void SetFeedback(InsightFeedbackOption&& value) { m_feedbackHasBeenSet = true; m_feedback = std::move(value); }

    /**
     * <p> The feedback provided by the customer. </p>
     */
    inline InsightFeedback& WithFeedback(const InsightFeedbackOption& value) { SetFeedback(value); return *this;}

    /**
     * <p> The feedback provided by the customer. </p>
     */
    inline InsightFeedback& WithFeedback(InsightFeedbackOption&& value) { SetFeedback(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    InsightFeedbackOption m_feedback;
    bool m_feedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
