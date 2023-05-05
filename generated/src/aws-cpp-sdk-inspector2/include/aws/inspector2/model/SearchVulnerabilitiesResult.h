/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/Vulnerability.h>
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
namespace Inspector2
{
namespace Model
{
  class SearchVulnerabilitiesResult
  {
  public:
    AWS_INSPECTOR2_API SearchVulnerabilitiesResult();
    AWS_INSPECTOR2_API SearchVulnerabilitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API SearchVulnerabilitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline SearchVulnerabilitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline SearchVulnerabilitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline SearchVulnerabilitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Details about the listed vulnerability.</p>
     */
    inline const Aws::Vector<Vulnerability>& GetVulnerabilities() const{ return m_vulnerabilities; }

    /**
     * <p>Details about the listed vulnerability.</p>
     */
    inline void SetVulnerabilities(const Aws::Vector<Vulnerability>& value) { m_vulnerabilities = value; }

    /**
     * <p>Details about the listed vulnerability.</p>
     */
    inline void SetVulnerabilities(Aws::Vector<Vulnerability>&& value) { m_vulnerabilities = std::move(value); }

    /**
     * <p>Details about the listed vulnerability.</p>
     */
    inline SearchVulnerabilitiesResult& WithVulnerabilities(const Aws::Vector<Vulnerability>& value) { SetVulnerabilities(value); return *this;}

    /**
     * <p>Details about the listed vulnerability.</p>
     */
    inline SearchVulnerabilitiesResult& WithVulnerabilities(Aws::Vector<Vulnerability>&& value) { SetVulnerabilities(std::move(value)); return *this;}

    /**
     * <p>Details about the listed vulnerability.</p>
     */
    inline SearchVulnerabilitiesResult& AddVulnerabilities(const Vulnerability& value) { m_vulnerabilities.push_back(value); return *this; }

    /**
     * <p>Details about the listed vulnerability.</p>
     */
    inline SearchVulnerabilitiesResult& AddVulnerabilities(Vulnerability&& value) { m_vulnerabilities.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchVulnerabilitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchVulnerabilitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchVulnerabilitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<Vulnerability> m_vulnerabilities;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
