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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/StandardsSubscriptionRequest.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AWS_SECURITYHUB_API BatchEnableStandardsRequest : public SecurityHubRequest
  {
  public:
    BatchEnableStandardsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchEnableStandards"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The list of standards compliance checks to enable.</p> <important> <p>In this
     * release, Security Hub supports only the CIS AWS Foundations standard.</p> <p>The
     * ARN for the standard is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline const Aws::Vector<StandardsSubscriptionRequest>& GetStandardsSubscriptionRequests() const{ return m_standardsSubscriptionRequests; }

    /**
     * <p>The list of standards compliance checks to enable.</p> <important> <p>In this
     * release, Security Hub supports only the CIS AWS Foundations standard.</p> <p>The
     * ARN for the standard is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline bool StandardsSubscriptionRequestsHasBeenSet() const { return m_standardsSubscriptionRequestsHasBeenSet; }

    /**
     * <p>The list of standards compliance checks to enable.</p> <important> <p>In this
     * release, Security Hub supports only the CIS AWS Foundations standard.</p> <p>The
     * ARN for the standard is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline void SetStandardsSubscriptionRequests(const Aws::Vector<StandardsSubscriptionRequest>& value) { m_standardsSubscriptionRequestsHasBeenSet = true; m_standardsSubscriptionRequests = value; }

    /**
     * <p>The list of standards compliance checks to enable.</p> <important> <p>In this
     * release, Security Hub supports only the CIS AWS Foundations standard.</p> <p>The
     * ARN for the standard is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline void SetStandardsSubscriptionRequests(Aws::Vector<StandardsSubscriptionRequest>&& value) { m_standardsSubscriptionRequestsHasBeenSet = true; m_standardsSubscriptionRequests = std::move(value); }

    /**
     * <p>The list of standards compliance checks to enable.</p> <important> <p>In this
     * release, Security Hub supports only the CIS AWS Foundations standard.</p> <p>The
     * ARN for the standard is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline BatchEnableStandardsRequest& WithStandardsSubscriptionRequests(const Aws::Vector<StandardsSubscriptionRequest>& value) { SetStandardsSubscriptionRequests(value); return *this;}

    /**
     * <p>The list of standards compliance checks to enable.</p> <important> <p>In this
     * release, Security Hub supports only the CIS AWS Foundations standard.</p> <p>The
     * ARN for the standard is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline BatchEnableStandardsRequest& WithStandardsSubscriptionRequests(Aws::Vector<StandardsSubscriptionRequest>&& value) { SetStandardsSubscriptionRequests(std::move(value)); return *this;}

    /**
     * <p>The list of standards compliance checks to enable.</p> <important> <p>In this
     * release, Security Hub supports only the CIS AWS Foundations standard.</p> <p>The
     * ARN for the standard is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline BatchEnableStandardsRequest& AddStandardsSubscriptionRequests(const StandardsSubscriptionRequest& value) { m_standardsSubscriptionRequestsHasBeenSet = true; m_standardsSubscriptionRequests.push_back(value); return *this; }

    /**
     * <p>The list of standards compliance checks to enable.</p> <important> <p>In this
     * release, Security Hub supports only the CIS AWS Foundations standard.</p> <p>The
     * ARN for the standard is
     * <code>arn:aws:securityhub:::ruleset/cis-aws-foundations-benchmark/v/1.2.0</code>.</p>
     * </important>
     */
    inline BatchEnableStandardsRequest& AddStandardsSubscriptionRequests(StandardsSubscriptionRequest&& value) { m_standardsSubscriptionRequestsHasBeenSet = true; m_standardsSubscriptionRequests.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<StandardsSubscriptionRequest> m_standardsSubscriptionRequests;
    bool m_standardsSubscriptionRequestsHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
