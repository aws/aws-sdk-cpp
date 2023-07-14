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
  class AWS_INSPECTOR_API DescribeAssessmentTemplatesRequest : public InspectorRequest
  {
  public:
    DescribeAssessmentTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAssessmentTemplates"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::Vector<Aws::String>& GetAssessmentTemplateArns() const{ return m_assessmentTemplateArns; }

    
    inline bool AssessmentTemplateArnsHasBeenSet() const { return m_assessmentTemplateArnsHasBeenSet; }

    
    inline void SetAssessmentTemplateArns(const Aws::Vector<Aws::String>& value) { m_assessmentTemplateArnsHasBeenSet = true; m_assessmentTemplateArns = value; }

    
    inline void SetAssessmentTemplateArns(Aws::Vector<Aws::String>&& value) { m_assessmentTemplateArnsHasBeenSet = true; m_assessmentTemplateArns = std::move(value); }

    
    inline DescribeAssessmentTemplatesRequest& WithAssessmentTemplateArns(const Aws::Vector<Aws::String>& value) { SetAssessmentTemplateArns(value); return *this;}

    
    inline DescribeAssessmentTemplatesRequest& WithAssessmentTemplateArns(Aws::Vector<Aws::String>&& value) { SetAssessmentTemplateArns(std::move(value)); return *this;}

    
    inline DescribeAssessmentTemplatesRequest& AddAssessmentTemplateArns(const Aws::String& value) { m_assessmentTemplateArnsHasBeenSet = true; m_assessmentTemplateArns.push_back(value); return *this; }

    
    inline DescribeAssessmentTemplatesRequest& AddAssessmentTemplateArns(Aws::String&& value) { m_assessmentTemplateArnsHasBeenSet = true; m_assessmentTemplateArns.push_back(std::move(value)); return *this; }

    
    inline DescribeAssessmentTemplatesRequest& AddAssessmentTemplateArns(const char* value) { m_assessmentTemplateArnsHasBeenSet = true; m_assessmentTemplateArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_assessmentTemplateArns;
    bool m_assessmentTemplateArnsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
