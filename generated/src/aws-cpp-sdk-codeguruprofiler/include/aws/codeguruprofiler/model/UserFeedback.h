/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/model/FeedbackType.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>Feedback that can be submitted for each instance of an anomaly by the user.
   * Feedback is be used for improvements in generating recommendations for the
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/UserFeedback">AWS
   * API Reference</a></p>
   */
  class UserFeedback
  {
  public:
    AWS_CODEGURUPROFILER_API UserFeedback();
    AWS_CODEGURUPROFILER_API UserFeedback(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API UserFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Optional <code>Positive</code> or <code>Negative</code> feedback submitted by
     * the user about whether the recommendation is useful or not.</p>
     */
    inline const FeedbackType& GetType() const{ return m_type; }

    /**
     * <p>Optional <code>Positive</code> or <code>Negative</code> feedback submitted by
     * the user about whether the recommendation is useful or not.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Optional <code>Positive</code> or <code>Negative</code> feedback submitted by
     * the user about whether the recommendation is useful or not.</p>
     */
    inline void SetType(const FeedbackType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Optional <code>Positive</code> or <code>Negative</code> feedback submitted by
     * the user about whether the recommendation is useful or not.</p>
     */
    inline void SetType(FeedbackType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Optional <code>Positive</code> or <code>Negative</code> feedback submitted by
     * the user about whether the recommendation is useful or not.</p>
     */
    inline UserFeedback& WithType(const FeedbackType& value) { SetType(value); return *this;}

    /**
     * <p>Optional <code>Positive</code> or <code>Negative</code> feedback submitted by
     * the user about whether the recommendation is useful or not.</p>
     */
    inline UserFeedback& WithType(FeedbackType&& value) { SetType(std::move(value)); return *this;}

  private:

    FeedbackType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
