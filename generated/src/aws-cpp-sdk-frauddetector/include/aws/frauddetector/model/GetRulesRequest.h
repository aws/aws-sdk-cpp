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


    /**
     * <p>The rule ID.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The rule ID.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The rule ID.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The rule ID.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The rule ID.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The rule ID.</p>
     */
    inline GetRulesRequest& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The rule ID.</p>
     */
    inline GetRulesRequest& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The rule ID.</p>
     */
    inline GetRulesRequest& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>The detector ID.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The detector ID.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The detector ID.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The detector ID.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The detector ID.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The detector ID.</p>
     */
    inline GetRulesRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The detector ID.</p>
     */
    inline GetRulesRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The detector ID.</p>
     */
    inline GetRulesRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The rule version.</p>
     */
    inline const Aws::String& GetRuleVersion() const{ return m_ruleVersion; }

    /**
     * <p>The rule version.</p>
     */
    inline bool RuleVersionHasBeenSet() const { return m_ruleVersionHasBeenSet; }

    /**
     * <p>The rule version.</p>
     */
    inline void SetRuleVersion(const Aws::String& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = value; }

    /**
     * <p>The rule version.</p>
     */
    inline void SetRuleVersion(Aws::String&& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = std::move(value); }

    /**
     * <p>The rule version.</p>
     */
    inline void SetRuleVersion(const char* value) { m_ruleVersionHasBeenSet = true; m_ruleVersion.assign(value); }

    /**
     * <p>The rule version.</p>
     */
    inline GetRulesRequest& WithRuleVersion(const Aws::String& value) { SetRuleVersion(value); return *this;}

    /**
     * <p>The rule version.</p>
     */
    inline GetRulesRequest& WithRuleVersion(Aws::String&& value) { SetRuleVersion(std::move(value)); return *this;}

    /**
     * <p>The rule version.</p>
     */
    inline GetRulesRequest& WithRuleVersion(const char* value) { SetRuleVersion(value); return *this;}


    /**
     * <p>The next page token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next page token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The next page token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The next page token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The next page token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The next page token.</p>
     */
    inline GetRulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next page token.</p>
     */
    inline GetRulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next page token.</p>
     */
    inline GetRulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of rules to return for the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of rules to return for the request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of rules to return for the request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of rules to return for the request.</p>
     */
    inline GetRulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

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
