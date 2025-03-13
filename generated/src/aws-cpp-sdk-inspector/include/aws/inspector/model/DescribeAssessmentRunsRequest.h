/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class DescribeAssessmentRunsRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API DescribeAssessmentRunsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAssessmentRuns"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN that specifies the assessment run that you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssessmentRunArns() const { return m_assessmentRunArns; }
    inline bool AssessmentRunArnsHasBeenSet() const { return m_assessmentRunArnsHasBeenSet; }
    template<typename AssessmentRunArnsT = Aws::Vector<Aws::String>>
    void SetAssessmentRunArns(AssessmentRunArnsT&& value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns = std::forward<AssessmentRunArnsT>(value); }
    template<typename AssessmentRunArnsT = Aws::Vector<Aws::String>>
    DescribeAssessmentRunsRequest& WithAssessmentRunArns(AssessmentRunArnsT&& value) { SetAssessmentRunArns(std::forward<AssessmentRunArnsT>(value)); return *this;}
    template<typename AssessmentRunArnsT = Aws::String>
    DescribeAssessmentRunsRequest& AddAssessmentRunArns(AssessmentRunArnsT&& value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns.emplace_back(std::forward<AssessmentRunArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_assessmentRunArns;
    bool m_assessmentRunArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
