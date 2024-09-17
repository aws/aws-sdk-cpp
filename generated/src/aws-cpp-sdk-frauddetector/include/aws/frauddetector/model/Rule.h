/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>A rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/Rule">AWS
   * API Reference</a></p>
   */
  class Rule
  {
  public:
    AWS_FRAUDDETECTOR_API Rule();
    AWS_FRAUDDETECTOR_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The detector for which the rule is associated.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }
    inline Rule& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}
    inline Rule& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}
    inline Rule& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule ID.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }
    inline Rule& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}
    inline Rule& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}
    inline Rule& WithRuleId(const char* value) { SetRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule version.</p>
     */
    inline const Aws::String& GetRuleVersion() const{ return m_ruleVersion; }
    inline bool RuleVersionHasBeenSet() const { return m_ruleVersionHasBeenSet; }
    inline void SetRuleVersion(const Aws::String& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = value; }
    inline void SetRuleVersion(Aws::String&& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = std::move(value); }
    inline void SetRuleVersion(const char* value) { m_ruleVersionHasBeenSet = true; m_ruleVersion.assign(value); }
    inline Rule& WithRuleVersion(const Aws::String& value) { SetRuleVersion(value); return *this;}
    inline Rule& WithRuleVersion(Aws::String&& value) { SetRuleVersion(std::move(value)); return *this;}
    inline Rule& WithRuleVersion(const char* value) { SetRuleVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_ruleVersion;
    bool m_ruleVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
