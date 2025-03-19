/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/AppAuthorizationSummary.h>
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
namespace AppFabric
{
namespace Model
{
  class ConnectAppAuthorizationResult
  {
  public:
    AWS_APPFABRIC_API ConnectAppAuthorizationResult() = default;
    AWS_APPFABRIC_API ConnectAppAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API ConnectAppAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a summary of the app authorization.</p>
     */
    inline const AppAuthorizationSummary& GetAppAuthorizationSummary() const { return m_appAuthorizationSummary; }
    template<typename AppAuthorizationSummaryT = AppAuthorizationSummary>
    void SetAppAuthorizationSummary(AppAuthorizationSummaryT&& value) { m_appAuthorizationSummaryHasBeenSet = true; m_appAuthorizationSummary = std::forward<AppAuthorizationSummaryT>(value); }
    template<typename AppAuthorizationSummaryT = AppAuthorizationSummary>
    ConnectAppAuthorizationResult& WithAppAuthorizationSummary(AppAuthorizationSummaryT&& value) { SetAppAuthorizationSummary(std::forward<AppAuthorizationSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ConnectAppAuthorizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AppAuthorizationSummary m_appAuthorizationSummary;
    bool m_appAuthorizationSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
