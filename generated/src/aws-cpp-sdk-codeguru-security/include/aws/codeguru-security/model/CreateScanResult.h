/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-security/model/ResourceId.h>
#include <aws/codeguru-security/model/ScanState.h>
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
namespace CodeGuruSecurity
{
namespace Model
{
  class CreateScanResult
  {
  public:
    AWS_CODEGURUSECURITY_API CreateScanResult() = default;
    AWS_CODEGURUSECURITY_API CreateScanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API CreateScanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the scan.</p>
     */
    inline const Aws::String& GetScanName() const { return m_scanName; }
    template<typename ScanNameT = Aws::String>
    void SetScanName(ScanNameT&& value) { m_scanNameHasBeenSet = true; m_scanName = std::forward<ScanNameT>(value); }
    template<typename ScanNameT = Aws::String>
    CreateScanResult& WithScanName(ScanNameT&& value) { SetScanName(std::forward<ScanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID that identifies the individual scan run.</p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    CreateScanResult& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the resource object that contains resources that were
     * scanned.</p>
     */
    inline const ResourceId& GetResourceId() const { return m_resourceId; }
    template<typename ResourceIdT = ResourceId>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = ResourceId>
    CreateScanResult& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the scan. Returns either <code>InProgress</code>,
     * <code>Successful</code>, or <code>Failed</code>.</p>
     */
    inline ScanState GetScanState() const { return m_scanState; }
    inline void SetScanState(ScanState value) { m_scanStateHasBeenSet = true; m_scanState = value; }
    inline CreateScanResult& WithScanState(ScanState value) { SetScanState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the scan name.</p>
     */
    inline const Aws::String& GetScanNameArn() const { return m_scanNameArn; }
    template<typename ScanNameArnT = Aws::String>
    void SetScanNameArn(ScanNameArnT&& value) { m_scanNameArnHasBeenSet = true; m_scanNameArn = std::forward<ScanNameArnT>(value); }
    template<typename ScanNameArnT = Aws::String>
    CreateScanResult& WithScanNameArn(ScanNameArnT&& value) { SetScanNameArn(std::forward<ScanNameArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateScanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    ResourceId m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ScanState m_scanState{ScanState::NOT_SET};
    bool m_scanStateHasBeenSet = false;

    Aws::String m_scanNameArn;
    bool m_scanNameArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
