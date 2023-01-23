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
  class DescribeAssessmentTargetsRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API DescribeAssessmentTargetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAssessmentTargets"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssessmentTargetArns() const{ return m_assessmentTargetArns; }

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline bool AssessmentTargetArnsHasBeenSet() const { return m_assessmentTargetArnsHasBeenSet; }

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline void SetAssessmentTargetArns(const Aws::Vector<Aws::String>& value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns = value; }

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline void SetAssessmentTargetArns(Aws::Vector<Aws::String>&& value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns = std::move(value); }

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline DescribeAssessmentTargetsRequest& WithAssessmentTargetArns(const Aws::Vector<Aws::String>& value) { SetAssessmentTargetArns(value); return *this;}

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline DescribeAssessmentTargetsRequest& WithAssessmentTargetArns(Aws::Vector<Aws::String>&& value) { SetAssessmentTargetArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline DescribeAssessmentTargetsRequest& AddAssessmentTargetArns(const Aws::String& value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns.push_back(value); return *this; }

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline DescribeAssessmentTargetsRequest& AddAssessmentTargetArns(Aws::String&& value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline DescribeAssessmentTargetsRequest& AddAssessmentTargetArns(const char* value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_assessmentTargetArns;
    bool m_assessmentTargetArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
