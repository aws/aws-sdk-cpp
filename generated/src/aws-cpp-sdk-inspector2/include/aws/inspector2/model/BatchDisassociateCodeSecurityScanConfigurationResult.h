/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/FailedAssociationResult.h>
#include <aws/inspector2/model/SuccessfulAssociationResult.h>
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
  class BatchDisassociateCodeSecurityScanConfigurationResult
  {
  public:
    AWS_INSPECTOR2_API BatchDisassociateCodeSecurityScanConfigurationResult() = default;
    AWS_INSPECTOR2_API BatchDisassociateCodeSecurityScanConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API BatchDisassociateCodeSecurityScanConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details of any code repositories that failed to be disassociated from the
     * scan configuration.</p>
     */
    inline const Aws::Vector<FailedAssociationResult>& GetFailedAssociations() const { return m_failedAssociations; }
    template<typename FailedAssociationsT = Aws::Vector<FailedAssociationResult>>
    void SetFailedAssociations(FailedAssociationsT&& value) { m_failedAssociationsHasBeenSet = true; m_failedAssociations = std::forward<FailedAssociationsT>(value); }
    template<typename FailedAssociationsT = Aws::Vector<FailedAssociationResult>>
    BatchDisassociateCodeSecurityScanConfigurationResult& WithFailedAssociations(FailedAssociationsT&& value) { SetFailedAssociations(std::forward<FailedAssociationsT>(value)); return *this;}
    template<typename FailedAssociationsT = FailedAssociationResult>
    BatchDisassociateCodeSecurityScanConfigurationResult& AddFailedAssociations(FailedAssociationsT&& value) { m_failedAssociationsHasBeenSet = true; m_failedAssociations.emplace_back(std::forward<FailedAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details of code repositories that were successfully disassociated from the
     * scan configuration.</p>
     */
    inline const Aws::Vector<SuccessfulAssociationResult>& GetSuccessfulAssociations() const { return m_successfulAssociations; }
    template<typename SuccessfulAssociationsT = Aws::Vector<SuccessfulAssociationResult>>
    void SetSuccessfulAssociations(SuccessfulAssociationsT&& value) { m_successfulAssociationsHasBeenSet = true; m_successfulAssociations = std::forward<SuccessfulAssociationsT>(value); }
    template<typename SuccessfulAssociationsT = Aws::Vector<SuccessfulAssociationResult>>
    BatchDisassociateCodeSecurityScanConfigurationResult& WithSuccessfulAssociations(SuccessfulAssociationsT&& value) { SetSuccessfulAssociations(std::forward<SuccessfulAssociationsT>(value)); return *this;}
    template<typename SuccessfulAssociationsT = SuccessfulAssociationResult>
    BatchDisassociateCodeSecurityScanConfigurationResult& AddSuccessfulAssociations(SuccessfulAssociationsT&& value) { m_successfulAssociationsHasBeenSet = true; m_successfulAssociations.emplace_back(std::forward<SuccessfulAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDisassociateCodeSecurityScanConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FailedAssociationResult> m_failedAssociations;
    bool m_failedAssociationsHasBeenSet = false;

    Aws::Vector<SuccessfulAssociationResult> m_successfulAssociations;
    bool m_successfulAssociationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
