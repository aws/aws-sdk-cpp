/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/AppAuthorization.h>
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
  class CreateAppAuthorizationResult
  {
  public:
    AWS_APPFABRIC_API CreateAppAuthorizationResult() = default;
    AWS_APPFABRIC_API CreateAppAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API CreateAppAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains information about an app authorization.</p>
     */
    inline const AppAuthorization& GetAppAuthorization() const { return m_appAuthorization; }
    template<typename AppAuthorizationT = AppAuthorization>
    void SetAppAuthorization(AppAuthorizationT&& value) { m_appAuthorizationHasBeenSet = true; m_appAuthorization = std::forward<AppAuthorizationT>(value); }
    template<typename AppAuthorizationT = AppAuthorization>
    CreateAppAuthorizationResult& WithAppAuthorization(AppAuthorizationT&& value) { SetAppAuthorization(std::forward<AppAuthorizationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAppAuthorizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AppAuthorization m_appAuthorization;
    bool m_appAuthorizationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
