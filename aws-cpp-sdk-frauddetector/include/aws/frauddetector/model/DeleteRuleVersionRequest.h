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
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class AWS_FRAUDDETECTOR_API DeleteRuleVersionRequest : public FraudDetectorRequest
  {
  public:
    DeleteRuleVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRuleVersion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the detector that includes the rule version to delete.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The ID of the detector that includes the rule version to delete.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The ID of the detector that includes the rule version to delete.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The ID of the detector that includes the rule version to delete.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The ID of the detector that includes the rule version to delete.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The ID of the detector that includes the rule version to delete.</p>
     */
    inline DeleteRuleVersionRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The ID of the detector that includes the rule version to delete.</p>
     */
    inline DeleteRuleVersionRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the detector that includes the rule version to delete.</p>
     */
    inline DeleteRuleVersionRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The rule ID of the rule version to delete.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The rule ID of the rule version to delete.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The rule ID of the rule version to delete.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The rule ID of the rule version to delete.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The rule ID of the rule version to delete.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The rule ID of the rule version to delete.</p>
     */
    inline DeleteRuleVersionRequest& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The rule ID of the rule version to delete.</p>
     */
    inline DeleteRuleVersionRequest& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The rule ID of the rule version to delete.</p>
     */
    inline DeleteRuleVersionRequest& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>The rule version to delete.</p>
     */
    inline const Aws::String& GetRuleVersion() const{ return m_ruleVersion; }

    /**
     * <p>The rule version to delete.</p>
     */
    inline bool RuleVersionHasBeenSet() const { return m_ruleVersionHasBeenSet; }

    /**
     * <p>The rule version to delete.</p>
     */
    inline void SetRuleVersion(const Aws::String& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = value; }

    /**
     * <p>The rule version to delete.</p>
     */
    inline void SetRuleVersion(Aws::String&& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = std::move(value); }

    /**
     * <p>The rule version to delete.</p>
     */
    inline void SetRuleVersion(const char* value) { m_ruleVersionHasBeenSet = true; m_ruleVersion.assign(value); }

    /**
     * <p>The rule version to delete.</p>
     */
    inline DeleteRuleVersionRequest& WithRuleVersion(const Aws::String& value) { SetRuleVersion(value); return *this;}

    /**
     * <p>The rule version to delete.</p>
     */
    inline DeleteRuleVersionRequest& WithRuleVersion(Aws::String&& value) { SetRuleVersion(std::move(value)); return *this;}

    /**
     * <p>The rule version to delete.</p>
     */
    inline DeleteRuleVersionRequest& WithRuleVersion(const char* value) { SetRuleVersion(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;

    Aws::String m_ruleVersion;
    bool m_ruleVersionHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
