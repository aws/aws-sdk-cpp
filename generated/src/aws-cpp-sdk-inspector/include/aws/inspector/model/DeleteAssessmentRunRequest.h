/**
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
  class DeleteAssessmentRunRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API DeleteAssessmentRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAssessmentRun"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN that specifies the assessment run that you want to delete.</p>
     */
    inline const Aws::String& GetAssessmentRunArn() const{ return m_assessmentRunArn; }

    /**
     * <p>The ARN that specifies the assessment run that you want to delete.</p>
     */
    inline bool AssessmentRunArnHasBeenSet() const { return m_assessmentRunArnHasBeenSet; }

    /**
     * <p>The ARN that specifies the assessment run that you want to delete.</p>
     */
    inline void SetAssessmentRunArn(const Aws::String& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = value; }

    /**
     * <p>The ARN that specifies the assessment run that you want to delete.</p>
     */
    inline void SetAssessmentRunArn(Aws::String&& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = std::move(value); }

    /**
     * <p>The ARN that specifies the assessment run that you want to delete.</p>
     */
    inline void SetAssessmentRunArn(const char* value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn.assign(value); }

    /**
     * <p>The ARN that specifies the assessment run that you want to delete.</p>
     */
    inline DeleteAssessmentRunRequest& WithAssessmentRunArn(const Aws::String& value) { SetAssessmentRunArn(value); return *this;}

    /**
     * <p>The ARN that specifies the assessment run that you want to delete.</p>
     */
    inline DeleteAssessmentRunRequest& WithAssessmentRunArn(Aws::String&& value) { SetAssessmentRunArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the assessment run that you want to delete.</p>
     */
    inline DeleteAssessmentRunRequest& WithAssessmentRunArn(const char* value) { SetAssessmentRunArn(value); return *this;}

  private:

    Aws::String m_assessmentRunArn;
    bool m_assessmentRunArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
