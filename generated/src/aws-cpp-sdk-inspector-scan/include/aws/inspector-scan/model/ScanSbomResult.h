/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector-scan/Inspectorscan_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace inspectorscan
{
namespace Model
{
  class ScanSbomResult
  {
  public:
    AWS_INSPECTORSCAN_API ScanSbomResult() = default;
    AWS_INSPECTORSCAN_API ScanSbomResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTORSCAN_API ScanSbomResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The vulnerability report for the scanned SBOM.</p>
     */
    inline Aws::Utils::DocumentView GetSbom() const { return m_sbom; }
    template<typename SbomT = Aws::Utils::Document>
    void SetSbom(SbomT&& value) { m_sbomHasBeenSet = true; m_sbom = std::forward<SbomT>(value); }
    template<typename SbomT = Aws::Utils::Document>
    ScanSbomResult& WithSbom(SbomT&& value) { SetSbom(std::forward<SbomT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ScanSbomResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_sbom;
    bool m_sbomHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace inspectorscan
} // namespace Aws
