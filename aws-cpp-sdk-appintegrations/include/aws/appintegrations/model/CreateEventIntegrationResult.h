/**
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


    /**
     * <p>The Amazon Resource Name (ARN) of the event integration. </p>
     */
    inline const Aws::String& GetEventIntegrationArn() const{ return m_eventIntegrationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event integration. </p>
     */
    inline void SetEventIntegrationArn(const Aws::String& value) { m_eventIntegrationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event integration. </p>
     */
    inline void SetEventIntegrationArn(Aws::String&& value) { m_eventIntegrationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event integration. </p>
     */
    inline void SetEventIntegrationArn(const char* value) { m_eventIntegrationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event integration. </p>
     */
    inline CreateEventIntegrationResult& WithEventIntegrationArn(const Aws::String& value) { SetEventIntegrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event integration. </p>
     */
    inline CreateEventIntegrationResult& WithEventIntegrationArn(Aws::String&& value) { SetEventIntegrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event integration. </p>
     */
    inline CreateEventIntegrationResult& WithEventIntegrationArn(const char* value) { SetEventIntegrationArn(value); return *this;}

  private:

    Aws::String m_eventIntegrationArn;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
