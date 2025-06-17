/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CodeScanStatus.h>
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
  class StartCodeSecurityScanResult
  {
  public:
    AWS_INSPECTOR2_API StartCodeSecurityScanResult() = default;
    AWS_INSPECTOR2_API StartCodeSecurityScanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API StartCodeSecurityScanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the initiated scan.</p>
     */
    inline const Aws::String& GetScanId() const { return m_scanId; }
    template<typename ScanIdT = Aws::String>
    void SetScanId(ScanIdT&& value) { m_scanIdHasBeenSet = true; m_scanId = std::forward<ScanIdT>(value); }
    template<typename ScanIdT = Aws::String>
    StartCodeSecurityScanResult& WithScanId(ScanIdT&& value) { SetScanId(std::forward<ScanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the initiated scan.</p>
     */
    inline CodeScanStatus GetStatus() const { return m_status; }
    inline void SetStatus(CodeScanStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StartCodeSecurityScanResult& WithStatus(CodeScanStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartCodeSecurityScanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scanId;
    bool m_scanIdHasBeenSet = false;

    CodeScanStatus m_status{CodeScanStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
