/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_INSPECTOR_API DescribeAssessmentRunsRequest : public InspectorRequest
  {
  public:
    DescribeAssessmentRunsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAssessmentRuns"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN that specifies the assessment run that you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssessmentRunArns() const{ return m_assessmentRunArns; }

    /**
     * <p>The ARN that specifies the assessment run that you want to describe.</p>
     */
    inline bool AssessmentRunArnsHasBeenSet() const { return m_assessmentRunArnsHasBeenSet; }

    /**
     * <p>The ARN that specifies the assessment run that you want to describe.</p>
     */
    inline void SetAssessmentRunArns(const Aws::Vector<Aws::String>& value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns = value; }

    /**
     * <p>The ARN that specifies the assessment run that you want to describe.</p>
     */
    inline void SetAssessmentRunArns(Aws::Vector<Aws::String>&& value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns = std::move(value); }

    /**
     * <p>The ARN that specifies the assessment run that you want to describe.</p>
     */
    inline DescribeAssessmentRunsRequest& WithAssessmentRunArns(const Aws::Vector<Aws::String>& value) { SetAssessmentRunArns(value); return *this;}

    /**
     * <p>The ARN that specifies the assessment run that you want to describe.</p>
     */
    inline DescribeAssessmentRunsRequest& WithAssessmentRunArns(Aws::Vector<Aws::String>&& value) { SetAssessmentRunArns(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the assessment run that you want to describe.</p>
     */
    inline DescribeAssessmentRunsRequest& AddAssessmentRunArns(const Aws::String& value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns.push_back(value); return *this; }

    /**
     * <p>The ARN that specifies the assessment run that you want to describe.</p>
     */
    inline DescribeAssessmentRunsRequest& AddAssessmentRunArns(Aws::String&& value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARN that specifies the assessment run that you want to describe.</p>
     */
    inline DescribeAssessmentRunsRequest& AddAssessmentRunArns(const char* value) { m_assessmentRunArnsHasBeenSet = true; m_assessmentRunArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_assessmentRunArns;
    bool m_assessmentRunArnsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
