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
  class AWS_INSPECTOR_API StartAssessmentRunRequest : public InspectorRequest
  {
  public:
    StartAssessmentRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAssessmentRun"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_assessmentTemplateArnHasBeenSet;

    Aws::String m_assessmentRunName;
    bool m_assessmentRunNameHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
