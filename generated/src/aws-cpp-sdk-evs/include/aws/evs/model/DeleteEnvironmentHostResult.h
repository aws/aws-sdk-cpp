/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/EnvironmentSummary.h>
#include <aws/evs/model/Host.h>
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
namespace EVS
{
namespace Model
{
  class DeleteEnvironmentHostResult
  {
  public:
    AWS_EVS_API DeleteEnvironmentHostResult() = default;
    AWS_EVS_API DeleteEnvironmentHostResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVS_API DeleteEnvironmentHostResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A summary of the environment that the host was deleted from.</p>
     */
    inline const EnvironmentSummary& GetEnvironmentSummary() const { return m_environmentSummary; }
    template<typename EnvironmentSummaryT = EnvironmentSummary>
    void SetEnvironmentSummary(EnvironmentSummaryT&& value) { m_environmentSummaryHasBeenSet = true; m_environmentSummary = std::forward<EnvironmentSummaryT>(value); }
    template<typename EnvironmentSummaryT = EnvironmentSummary>
    DeleteEnvironmentHostResult& WithEnvironmentSummary(EnvironmentSummaryT&& value) { SetEnvironmentSummary(std::forward<EnvironmentSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the deleted host.</p>
     */
    inline const Host& GetHost() const { return m_host; }
    template<typename HostT = Host>
    void SetHost(HostT&& value) { m_hostHasBeenSet = true; m_host = std::forward<HostT>(value); }
    template<typename HostT = Host>
    DeleteEnvironmentHostResult& WithHost(HostT&& value) { SetHost(std::forward<HostT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteEnvironmentHostResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EnvironmentSummary m_environmentSummary;
    bool m_environmentSummaryHasBeenSet = false;

    Host m_host;
    bool m_hostHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
