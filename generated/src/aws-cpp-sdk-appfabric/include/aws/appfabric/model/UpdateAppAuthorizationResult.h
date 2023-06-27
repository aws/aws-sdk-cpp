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
  class UpdateAppAuthorizationResult
  {
  public:
    AWS_APPFABRIC_API UpdateAppAuthorizationResult();
    AWS_APPFABRIC_API UpdateAppAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API UpdateAppAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains information about an app authorization.</p>
     */
    inline const AppAuthorization& GetAppAuthorization() const{ return m_appAuthorization; }

    /**
     * <p>Contains information about an app authorization.</p>
     */
    inline void SetAppAuthorization(const AppAuthorization& value) { m_appAuthorization = value; }

    /**
     * <p>Contains information about an app authorization.</p>
     */
    inline void SetAppAuthorization(AppAuthorization&& value) { m_appAuthorization = std::move(value); }

    /**
     * <p>Contains information about an app authorization.</p>
     */
    inline UpdateAppAuthorizationResult& WithAppAuthorization(const AppAuthorization& value) { SetAppAuthorization(value); return *this;}

    /**
     * <p>Contains information about an app authorization.</p>
     */
    inline UpdateAppAuthorizationResult& WithAppAuthorization(AppAuthorization&& value) { SetAppAuthorization(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAppAuthorizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAppAuthorizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAppAuthorizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AppAuthorization m_appAuthorization;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
