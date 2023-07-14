﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
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
  class AWS_INSPECTOR_API CreateExclusionsPreviewRequest : public InspectorRequest
  {
  public:
    CreateExclusionsPreviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExclusionsPreview"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN that specifies the assessment template for which you want to create
     * an exclusions preview.</p>
     */
    inline const Aws::String& GetAssessmentTemplateArn() const{ return m_assessmentTemplateArn; }

    /**
     * <p>The ARN that specifies the assessment template for which you want to create
     * an exclusions preview.</p>
     */
    inline bool AssessmentTemplateArnHasBeenSet() const { return m_assessmentTemplateArnHasBeenSet; }

    /**
     * <p>The ARN that specifies the assessment template for which you want to create
     * an exclusions preview.</p>
     */
    inline void SetAssessmentTemplateArn(const Aws::String& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = value; }

    /**
     * <p>The ARN that specifies the assessment template for which you want to create
     * an exclusions preview.</p>
     */
    inline void SetAssessmentTemplateArn(Aws::String&& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = std::move(value); }

    /**
     * <p>The ARN that specifies the assessment template for which you want to create
     * an exclusions preview.</p>
     */
    inline void SetAssessmentTemplateArn(const char* value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn.assign(value); }

    /**
     * <p>The ARN that specifies the assessment template for which you want to create
     * an exclusions preview.</p>
     */
    inline CreateExclusionsPreviewRequest& WithAssessmentTemplateArn(const Aws::String& value) { SetAssessmentTemplateArn(value); return *this;}

    /**
     * <p>The ARN that specifies the assessment template for which you want to create
     * an exclusions preview.</p>
     */
    inline CreateExclusionsPreviewRequest& WithAssessmentTemplateArn(Aws::String&& value) { SetAssessmentTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the assessment template for which you want to create
     * an exclusions preview.</p>
     */
    inline CreateExclusionsPreviewRequest& WithAssessmentTemplateArn(const char* value) { SetAssessmentTemplateArn(value); return *this;}

  private:

    Aws::String m_assessmentTemplateArn;
    bool m_assessmentTemplateArnHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
