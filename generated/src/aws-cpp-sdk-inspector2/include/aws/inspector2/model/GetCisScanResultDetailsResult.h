/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisScanResultDetails.h>
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
  class GetCisScanResultDetailsResult
  {
  public:
    AWS_INSPECTOR2_API GetCisScanResultDetailsResult() = default;
    AWS_INSPECTOR2_API GetCisScanResultDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetCisScanResultDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The scan result details.</p>
     */
    inline const Aws::Vector<CisScanResultDetails>& GetScanResultDetails() const { return m_scanResultDetails; }
    template<typename ScanResultDetailsT = Aws::Vector<CisScanResultDetails>>
    void SetScanResultDetails(ScanResultDetailsT&& value) { m_scanResultDetailsHasBeenSet = true; m_scanResultDetails = std::forward<ScanResultDetailsT>(value); }
    template<typename ScanResultDetailsT = Aws::Vector<CisScanResultDetails>>
    GetCisScanResultDetailsResult& WithScanResultDetails(ScanResultDetailsT&& value) { SetScanResultDetails(std::forward<ScanResultDetailsT>(value)); return *this;}
    template<typename ScanResultDetailsT = CisScanResultDetails>
    GetCisScanResultDetailsResult& AddScanResultDetails(ScanResultDetailsT&& value) { m_scanResultDetailsHasBeenSet = true; m_scanResultDetails.emplace_back(std::forward<ScanResultDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCisScanResultDetailsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCisScanResultDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CisScanResultDetails> m_scanResultDetails;
    bool m_scanResultDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
