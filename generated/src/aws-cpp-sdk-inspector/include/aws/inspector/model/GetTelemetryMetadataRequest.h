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
  class GetTelemetryMetadataRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API GetTelemetryMetadataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTelemetryMetadata"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN that specifies the assessment run that has the telemetry data that
     * you want to obtain.</p>
     */
    inline const Aws::String& GetAssessmentRunArn() const { return m_assessmentRunArn; }
    inline bool AssessmentRunArnHasBeenSet() const { return m_assessmentRunArnHasBeenSet; }
    template<typename AssessmentRunArnT = Aws::String>
    void SetAssessmentRunArn(AssessmentRunArnT&& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = std::forward<AssessmentRunArnT>(value); }
    template<typename AssessmentRunArnT = Aws::String>
    GetTelemetryMetadataRequest& WithAssessmentRunArn(AssessmentRunArnT&& value) { SetAssessmentRunArn(std::forward<AssessmentRunArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentRunArn;
    bool m_assessmentRunArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
