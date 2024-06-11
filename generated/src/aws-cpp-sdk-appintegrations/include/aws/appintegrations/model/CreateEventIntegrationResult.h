﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
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
namespace AppIntegrationsService
{
namespace Model
{
  class CreateEventIntegrationResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API CreateEventIntegrationResult();
    AWS_APPINTEGRATIONSSERVICE_API CreateEventIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API CreateEventIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the event integration. </p>
     */
    inline const Aws::String& GetEventIntegrationArn() const{ return m_eventIntegrationArn; }
    inline void SetEventIntegrationArn(const Aws::String& value) { m_eventIntegrationArn = value; }
    inline void SetEventIntegrationArn(Aws::String&& value) { m_eventIntegrationArn = std::move(value); }
    inline void SetEventIntegrationArn(const char* value) { m_eventIntegrationArn.assign(value); }
    inline CreateEventIntegrationResult& WithEventIntegrationArn(const Aws::String& value) { SetEventIntegrationArn(value); return *this;}
    inline CreateEventIntegrationResult& WithEventIntegrationArn(Aws::String&& value) { SetEventIntegrationArn(std::move(value)); return *this;}
    inline CreateEventIntegrationResult& WithEventIntegrationArn(const char* value) { SetEventIntegrationArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateEventIntegrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateEventIntegrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateEventIntegrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_eventIntegrationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
