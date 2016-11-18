/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/TrustedAdvisorCheckDescription.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Support
{
namespace Model
{
  /**
   * <p>Information about the Trusted Advisor checks returned by the
   * <a>DescribeTrustedAdvisorChecks</a> operation.</p>
   */
  class AWS_SUPPORT_API DescribeTrustedAdvisorChecksResult
  {
  public:
    DescribeTrustedAdvisorChecksResult();
    DescribeTrustedAdvisorChecksResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTrustedAdvisorChecksResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about all available Trusted Advisor checks.</p>
     */
    inline const Aws::Vector<TrustedAdvisorCheckDescription>& GetChecks() const{ return m_checks; }

    /**
     * <p>Information about all available Trusted Advisor checks.</p>
     */
    inline void SetChecks(const Aws::Vector<TrustedAdvisorCheckDescription>& value) { m_checks = value; }

    /**
     * <p>Information about all available Trusted Advisor checks.</p>
     */
    inline void SetChecks(Aws::Vector<TrustedAdvisorCheckDescription>&& value) { m_checks = value; }

    /**
     * <p>Information about all available Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorChecksResult& WithChecks(const Aws::Vector<TrustedAdvisorCheckDescription>& value) { SetChecks(value); return *this;}

    /**
     * <p>Information about all available Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorChecksResult& WithChecks(Aws::Vector<TrustedAdvisorCheckDescription>&& value) { SetChecks(value); return *this;}

    /**
     * <p>Information about all available Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorChecksResult& AddChecks(const TrustedAdvisorCheckDescription& value) { m_checks.push_back(value); return *this; }

    /**
     * <p>Information about all available Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorChecksResult& AddChecks(TrustedAdvisorCheckDescription&& value) { m_checks.push_back(value); return *this; }

  private:
    Aws::Vector<TrustedAdvisorCheckDescription> m_checks;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
