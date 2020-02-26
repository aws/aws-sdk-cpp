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
#include <aws/securityhub/model/ComplianceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Exclusive to findings that are generated as the result of a check run against
   * a specific rule in a supported security standard, such as CIS AWS Foundations.
   * Contains security standard-related finding details.</p> <p>Values include the
   * following:</p> <ul> <li> <p>Allowed values are the following:</p> <ul> <li> <p>
   * <code>PASSED</code> - Standards check passed for all evaluated resources.</p>
   * </li> <li> <p> <code>WARNING</code> - Some information is missing or this check
   * is not supported given your configuration.</p> </li> <li> <p>
   * <code>FAILED</code> - Standards check failed for at least one evaluated
   * resource.</p> </li> <li> <p> <code>NOT_AVAILABLE</code> - Check could not be
   * performed due to a service outage, API error, or because the result of the AWS
   * Config evaluation was <code>NOT_APPLICABLE</code>. If the AWS Config evaluation
   * result was <code> NOT_APPLICABLE</code>, then after 3 days, Security Hub
   * automatically archives the finding.</p> </li> </ul> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Compliance">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API Compliance
  {
  public:
    Compliance();
    Compliance(Aws::Utils::Json::JsonView jsonValue);
    Compliance& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The result of a standards check.</p>
     */
    inline const ComplianceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The result of a standards check.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The result of a standards check.</p>
     */
    inline void SetStatus(const ComplianceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The result of a standards check.</p>
     */
    inline void SetStatus(ComplianceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The result of a standards check.</p>
     */
    inline Compliance& WithStatus(const ComplianceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The result of a standards check.</p>
     */
    inline Compliance& WithStatus(ComplianceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>List of requirements that are related to a standards control.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRelatedRequirements() const{ return m_relatedRequirements; }

    /**
     * <p>List of requirements that are related to a standards control.</p>
     */
    inline bool RelatedRequirementsHasBeenSet() const { return m_relatedRequirementsHasBeenSet; }

    /**
     * <p>List of requirements that are related to a standards control.</p>
     */
    inline void SetRelatedRequirements(const Aws::Vector<Aws::String>& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements = value; }

    /**
     * <p>List of requirements that are related to a standards control.</p>
     */
    inline void SetRelatedRequirements(Aws::Vector<Aws::String>&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements = std::move(value); }

    /**
     * <p>List of requirements that are related to a standards control.</p>
     */
    inline Compliance& WithRelatedRequirements(const Aws::Vector<Aws::String>& value) { SetRelatedRequirements(value); return *this;}

    /**
     * <p>List of requirements that are related to a standards control.</p>
     */
    inline Compliance& WithRelatedRequirements(Aws::Vector<Aws::String>&& value) { SetRelatedRequirements(std::move(value)); return *this;}

    /**
     * <p>List of requirements that are related to a standards control.</p>
     */
    inline Compliance& AddRelatedRequirements(const Aws::String& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.push_back(value); return *this; }

    /**
     * <p>List of requirements that are related to a standards control.</p>
     */
    inline Compliance& AddRelatedRequirements(Aws::String&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.push_back(std::move(value)); return *this; }

    /**
     * <p>List of requirements that are related to a standards control.</p>
     */
    inline Compliance& AddRelatedRequirements(const char* value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.push_back(value); return *this; }

  private:

    ComplianceStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<Aws::String> m_relatedRequirements;
    bool m_relatedRequirementsHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
