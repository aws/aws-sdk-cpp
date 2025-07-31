/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_INSPECTOR2_API SearchVulnerabilitiesResult() = default;
    AWS_INSPECTOR2_API SearchVulnerabilitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API SearchVulnerabilitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the listed vulnerability.</p>
     */
    inline const Aws::Vector<Vulnerability>& GetVulnerabilities() const { return m_vulnerabilities; }
    template<typename VulnerabilitiesT = Aws::Vector<Vulnerability>>
    void SetVulnerabilities(VulnerabilitiesT&& value) { m_vulnerabilitiesHasBeenSet = true; m_vulnerabilities = std::forward<VulnerabilitiesT>(value); }
    template<typename VulnerabilitiesT = Aws::Vector<Vulnerability>>
    SearchVulnerabilitiesResult& WithVulnerabilities(VulnerabilitiesT&& value) { SetVulnerabilities(std::forward<VulnerabilitiesT>(value)); return *this;}
    template<typename VulnerabilitiesT = Vulnerability>
    SearchVulnerabilitiesResult& AddVulnerabilities(VulnerabilitiesT&& value) { m_vulnerabilitiesHasBeenSet = true; m_vulnerabilities.emplace_back(std::forward<VulnerabilitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchVulnerabilitiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchVulnerabilitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Vulnerability> m_vulnerabilities;
    bool m_vulnerabilitiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
