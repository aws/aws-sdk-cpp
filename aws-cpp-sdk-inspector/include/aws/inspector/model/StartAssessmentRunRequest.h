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
  class StartAssessmentRunRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API StartAssessmentRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAssessmentRun"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the assessment template of the assessment run that you want to
     * start.</p>
     */
    inline const Aws::String& GetAssessmentTemplateArn() const{ return m_assessmentTemplateArn; }

    /**
     * <p>The ARN of the assessment template of the assessment run that you want to
     * start.</p>
     */
    inline bool AssessmentTemplateArnHasBeenSet() const { return m_assessmentTemplateArnHasBeenSet; }

    /**
     * <p>The ARN of the assessment template of the assessment run that you want to
     * start.</p>
     */
    inline void SetAssessmentTemplateArn(const Aws::String& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = value; }

    /**
     * <p>The ARN of the assessment template of the assessment run that you want to
     * start.</p>
     */
    inline void SetAssessmentTemplateArn(Aws::String&& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = std::move(value); }

    /**
     * <p>The ARN of the assessment template of the assessment run that you want to
     * start.</p>
     */
    inline void SetAssessmentTemplateArn(const char* value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn.assign(value); }

    /**
     * <p>The ARN of the assessment template of the assessment run that you want to
     * start.</p>
     */
    inline StartAssessmentRunRequest& WithAssessmentTemplateArn(const Aws::String& value) { SetAssessmentTemplateArn(value); return *this;}

    /**
     * <p>The ARN of the assessment template of the assessment run that you want to
     * start.</p>
     */
    inline StartAssessmentRunRequest& WithAssessmentTemplateArn(Aws::String&& value) { SetAssessmentTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the assessment template of the assessment run that you want to
     * start.</p>
     */
    inline StartAssessmentRunRequest& WithAssessmentTemplateArn(const char* value) { SetAssessmentTemplateArn(value); return *this;}


    /**
     * <p>You can specify the name for the assessment run. The name must be unique for
     * the assessment template whose ARN is used to start the assessment run.</p>
     */
    inline const Aws::String& GetAssessmentRunName() const{ return m_assessmentRunName; }

    /**
     * <p>You can specify the name for the assessment run. The name must be unique for
     * the assessment template whose ARN is used to start the assessment run.</p>
     */
    inline bool AssessmentRunNameHasBeenSet() const { return m_assessmentRunNameHasBeenSet; }

    /**
     * <p>You can specify the name for the assessment run. The name must be unique for
     * the assessment template whose ARN is used to start the assessment run.</p>
     */
    inline void SetAssessmentRunName(const Aws::String& value) { m_assessmentRunNameHasBeenSet = true; m_assessmentRunName = value; }

    /**
     * <p>You can specify the name for the assessment run. The name must be unique for
     * the assessment template whose ARN is used to start the assessment run.</p>
     */
    inline void SetAssessmentRunName(Aws::String&& value) { m_assessmentRunNameHasBeenSet = true; m_assessmentRunName = std::move(value); }

    /**
     * <p>You can specify the name for the assessment run. The name must be unique for
     * the assessment template whose ARN is used to start the assessment run.</p>
     */
    inline void SetAssessmentRunName(const char* value) { m_assessmentRunNameHasBeenSet = true; m_assessmentRunName.assign(value); }

    /**
     * <p>You can specify the name for the assessment run. The name must be unique for
     * the assessment template whose ARN is used to start the assessment run.</p>
     */
    inline StartAssessmentRunRequest& WithAssessmentRunName(const Aws::String& value) { SetAssessmentRunName(value); return *this;}

    /**
     * <p>You can specify the name for the assessment run. The name must be unique for
     * the assessment template whose ARN is used to start the assessment run.</p>
     */
    inline StartAssessmentRunRequest& WithAssessmentRunName(Aws::String&& value) { SetAssessmentRunName(std::move(value)); return *this;}

    /**
     * <p>You can specify the name for the assessment run. The name must be unique for
     * the assessment template whose ARN is used to start the assessment run.</p>
     */
    inline StartAssessmentRunRequest& WithAssessmentRunName(const char* value) { SetAssessmentRunName(value); return *this;}

  private:

    Aws::String m_assessmentTemplateArn;
    bool m_assessmentTemplateArnHasBeenSet = false;

    Aws::String m_assessmentRunName;
    bool m_assessmentRunNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
