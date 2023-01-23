/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/Finding.h>
#include <utility>

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
namespace GuardDuty
{
namespace Model
{
  class GetFindingsResult
  {
  public:
    AWS_GUARDDUTY_API GetFindingsResult();
    AWS_GUARDDUTY_API GetFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of findings.</p>
     */
    inline const Aws::Vector<Finding>& GetFindings() const{ return m_findings; }

    /**
     * <p>A list of findings.</p>
     */
    inline void SetFindings(const Aws::Vector<Finding>& value) { m_findings = value; }

    /**
     * <p>A list of findings.</p>
     */
    inline void SetFindings(Aws::Vector<Finding>&& value) { m_findings = std::move(value); }

    /**
     * <p>A list of findings.</p>
     */
    inline GetFindingsResult& WithFindings(const Aws::Vector<Finding>& value) { SetFindings(value); return *this;}

    /**
     * <p>A list of findings.</p>
     */
    inline GetFindingsResult& WithFindings(Aws::Vector<Finding>&& value) { SetFindings(std::move(value)); return *this;}

    /**
     * <p>A list of findings.</p>
     */
    inline GetFindingsResult& AddFindings(const Finding& value) { m_findings.push_back(value); return *this; }

    /**
     * <p>A list of findings.</p>
     */
    inline GetFindingsResult& AddFindings(Finding&& value) { m_findings.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Finding> m_findings;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
