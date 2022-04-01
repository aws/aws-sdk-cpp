﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsSecurityFinding.h>
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
namespace SecurityHub
{
namespace Model
{
  class AWS_SECURITYHUB_API GetFindingsResult
  {
  public:
    GetFindingsResult();
    GetFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The findings that matched the filters specified in the request.</p>
     */
    inline const Aws::Vector<AwsSecurityFinding>& GetFindings() const{ return m_findings; }

    /**
     * <p>The findings that matched the filters specified in the request.</p>
     */
    inline void SetFindings(const Aws::Vector<AwsSecurityFinding>& value) { m_findings = value; }

    /**
     * <p>The findings that matched the filters specified in the request.</p>
     */
    inline void SetFindings(Aws::Vector<AwsSecurityFinding>&& value) { m_findings = std::move(value); }

    /**
     * <p>The findings that matched the filters specified in the request.</p>
     */
    inline GetFindingsResult& WithFindings(const Aws::Vector<AwsSecurityFinding>& value) { SetFindings(value); return *this;}

    /**
     * <p>The findings that matched the filters specified in the request.</p>
     */
    inline GetFindingsResult& WithFindings(Aws::Vector<AwsSecurityFinding>&& value) { SetFindings(std::move(value)); return *this;}

    /**
     * <p>The findings that matched the filters specified in the request.</p>
     */
    inline GetFindingsResult& AddFindings(const AwsSecurityFinding& value) { m_findings.push_back(value); return *this; }

    /**
     * <p>The findings that matched the filters specified in the request.</p>
     */
    inline GetFindingsResult& AddFindings(AwsSecurityFinding&& value) { m_findings.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline GetFindingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline GetFindingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline GetFindingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AwsSecurityFinding> m_findings;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
