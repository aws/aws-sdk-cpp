/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/Finding.h>
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
namespace Macie2
{
namespace Model
{
  class GetFindingsResult
  {
  public:
    AWS_MACIE2_API GetFindingsResult();
    AWS_MACIE2_API GetFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects, one for each finding that matches the criteria specified
     * in the request.</p>
     */
    inline const Aws::Vector<Finding>& GetFindings() const{ return m_findings; }

    /**
     * <p>An array of objects, one for each finding that matches the criteria specified
     * in the request.</p>
     */
    inline void SetFindings(const Aws::Vector<Finding>& value) { m_findings = value; }

    /**
     * <p>An array of objects, one for each finding that matches the criteria specified
     * in the request.</p>
     */
    inline void SetFindings(Aws::Vector<Finding>&& value) { m_findings = std::move(value); }

    /**
     * <p>An array of objects, one for each finding that matches the criteria specified
     * in the request.</p>
     */
    inline GetFindingsResult& WithFindings(const Aws::Vector<Finding>& value) { SetFindings(value); return *this;}

    /**
     * <p>An array of objects, one for each finding that matches the criteria specified
     * in the request.</p>
     */
    inline GetFindingsResult& WithFindings(Aws::Vector<Finding>&& value) { SetFindings(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each finding that matches the criteria specified
     * in the request.</p>
     */
    inline GetFindingsResult& AddFindings(const Finding& value) { m_findings.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each finding that matches the criteria specified
     * in the request.</p>
     */
    inline GetFindingsResult& AddFindings(Finding&& value) { m_findings.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Finding> m_findings;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
