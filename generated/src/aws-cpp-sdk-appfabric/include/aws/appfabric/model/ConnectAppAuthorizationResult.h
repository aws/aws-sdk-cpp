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
    AWS_APPFABRIC_API ConnectAppAuthorizationResult();
    AWS_APPFABRIC_API ConnectAppAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API ConnectAppAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains a summary of the app authorization.</p>
     */
    inline const AppAuthorizationSummary& GetAppAuthorizationSummary() const{ return m_appAuthorizationSummary; }

    /**
     * <p>Contains a summary of the app authorization.</p>
     */
    inline void SetAppAuthorizationSummary(const AppAuthorizationSummary& value) { m_appAuthorizationSummary = value; }

    /**
     * <p>Contains a summary of the app authorization.</p>
     */
    inline void SetAppAuthorizationSummary(AppAuthorizationSummary&& value) { m_appAuthorizationSummary = std::move(value); }

    /**
     * <p>Contains a summary of the app authorization.</p>
     */
    inline ConnectAppAuthorizationResult& WithAppAuthorizationSummary(const AppAuthorizationSummary& value) { SetAppAuthorizationSummary(value); return *this;}

    /**
     * <p>Contains a summary of the app authorization.</p>
     */
    inline ConnectAppAuthorizationResult& WithAppAuthorizationSummary(AppAuthorizationSummary&& value) { SetAppAuthorizationSummary(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ConnectAppAuthorizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ConnectAppAuthorizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ConnectAppAuthorizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AppAuthorizationSummary m_appAuthorizationSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
