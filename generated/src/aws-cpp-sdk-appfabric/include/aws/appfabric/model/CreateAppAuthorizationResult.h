﻿/**
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
    AWS_APPFABRIC_API CreateAppAuthorizationResult();
    AWS_APPFABRIC_API CreateAppAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API CreateAppAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains information about an app authorization.</p>
     */
    inline const AppAuthorization& GetAppAuthorization() const{ return m_appAuthorization; }
    inline void SetAppAuthorization(const AppAuthorization& value) { m_appAuthorization = value; }
    inline void SetAppAuthorization(AppAuthorization&& value) { m_appAuthorization = std::move(value); }
    inline CreateAppAuthorizationResult& WithAppAuthorization(const AppAuthorization& value) { SetAppAuthorization(value); return *this;}
    inline CreateAppAuthorizationResult& WithAppAuthorization(AppAuthorization&& value) { SetAppAuthorization(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAppAuthorizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAppAuthorizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAppAuthorizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AppAuthorization m_appAuthorization;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
