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
#include <aws/securityhub/model/AwsSecurityFinding.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AWS_SECURITYHUB_API BatchImportFindingsRequest : public SecurityHubRequest
  {
  public:
    BatchImportFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchImportFindings"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A list of findings to import. To successfully import a finding, it must
     * follow the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">AWS
     * Security Finding Format</a>.</p>
     */
    inline const Aws::Vector<AwsSecurityFinding>& GetFindings() const{ return m_findings; }

    /**
     * <p>A list of findings to import. To successfully import a finding, it must
     * follow the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">AWS
     * Security Finding Format</a>.</p>
     */
    inline bool FindingsHasBeenSet() const { return m_findingsHasBeenSet; }

    /**
     * <p>A list of findings to import. To successfully import a finding, it must
     * follow the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">AWS
     * Security Finding Format</a>.</p>
     */
    inline void SetFindings(const Aws::Vector<AwsSecurityFinding>& value) { m_findingsHasBeenSet = true; m_findings = value; }

    /**
     * <p>A list of findings to import. To successfully import a finding, it must
     * follow the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">AWS
     * Security Finding Format</a>.</p>
     */
    inline void SetFindings(Aws::Vector<AwsSecurityFinding>&& value) { m_findingsHasBeenSet = true; m_findings = std::move(value); }

    /**
     * <p>A list of findings to import. To successfully import a finding, it must
     * follow the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">AWS
     * Security Finding Format</a>.</p>
     */
    inline BatchImportFindingsRequest& WithFindings(const Aws::Vector<AwsSecurityFinding>& value) { SetFindings(value); return *this;}

    /**
     * <p>A list of findings to import. To successfully import a finding, it must
     * follow the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">AWS
     * Security Finding Format</a>.</p>
     */
    inline BatchImportFindingsRequest& WithFindings(Aws::Vector<AwsSecurityFinding>&& value) { SetFindings(std::move(value)); return *this;}

    /**
     * <p>A list of findings to import. To successfully import a finding, it must
     * follow the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">AWS
     * Security Finding Format</a>.</p>
     */
    inline BatchImportFindingsRequest& AddFindings(const AwsSecurityFinding& value) { m_findingsHasBeenSet = true; m_findings.push_back(value); return *this; }

    /**
     * <p>A list of findings to import. To successfully import a finding, it must
     * follow the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">AWS
     * Security Finding Format</a>.</p>
     */
    inline BatchImportFindingsRequest& AddFindings(AwsSecurityFinding&& value) { m_findingsHasBeenSet = true; m_findings.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AwsSecurityFinding> m_findings;
    bool m_findingsHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
