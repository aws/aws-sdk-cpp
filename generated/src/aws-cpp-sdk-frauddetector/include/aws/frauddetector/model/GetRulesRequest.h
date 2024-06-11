/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetRulesRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API GetRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRules"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The rule ID.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }
    inline GetRulesRequest& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}
    inline GetRulesRequest& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}
    inline GetRulesRequest& WithRuleId(const char* value) { SetRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector ID.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }
    inline GetRulesRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}
    inline GetRulesRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}
    inline GetRulesRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}
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
    inline GetRulesRequest& WithRuleVersion(const Aws::String& value) { SetRuleVersion(value); return *this;}
    inline GetRulesRequest& WithRuleVersion(Aws::String&& value) { SetRuleVersion(std::move(value)); return *this;}
    inline GetRulesRequest& WithRuleVersion(const char* value) { SetRuleVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next page token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetRulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetRulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetRulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of rules to return for the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetRulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_ruleVersion;
    bool m_ruleVersionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
