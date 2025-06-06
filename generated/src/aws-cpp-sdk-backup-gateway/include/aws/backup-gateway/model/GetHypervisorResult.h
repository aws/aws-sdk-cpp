﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/model/HypervisorDetails.h>
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
namespace BackupGateway
{
namespace Model
{
  class GetHypervisorResult
  {
  public:
    AWS_BACKUPGATEWAY_API GetHypervisorResult() = default;
    AWS_BACKUPGATEWAY_API GetHypervisorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API GetHypervisorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the requested hypervisor.</p>
     */
    inline const HypervisorDetails& GetHypervisor() const { return m_hypervisor; }
    template<typename HypervisorT = HypervisorDetails>
    void SetHypervisor(HypervisorT&& value) { m_hypervisorHasBeenSet = true; m_hypervisor = std::forward<HypervisorT>(value); }
    template<typename HypervisorT = HypervisorDetails>
    GetHypervisorResult& WithHypervisor(HypervisorT&& value) { SetHypervisor(std::forward<HypervisorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetHypervisorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    HypervisorDetails m_hypervisor;
    bool m_hypervisorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
