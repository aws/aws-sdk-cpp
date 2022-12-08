/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreateIntegrationAssociationResult
  {
  public:
    AWS_CONNECT_API CreateIntegrationAssociationResult();
    AWS_CONNECT_API CreateIntegrationAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateIntegrationAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the integration association.</p>
     */
    inline const Aws::String& GetIntegrationAssociationId() const{ return m_integrationAssociationId; }

    /**
     * <p>The identifier for the integration association.</p>
     */
    inline void SetIntegrationAssociationId(const Aws::String& value) { m_integrationAssociationId = value; }

    /**
     * <p>The identifier for the integration association.</p>
     */
    inline void SetIntegrationAssociationId(Aws::String&& value) { m_integrationAssociationId = std::move(value); }

    /**
     * <p>The identifier for the integration association.</p>
     */
    inline void SetIntegrationAssociationId(const char* value) { m_integrationAssociationId.assign(value); }

    /**
     * <p>The identifier for the integration association.</p>
     */
    inline CreateIntegrationAssociationResult& WithIntegrationAssociationId(const Aws::String& value) { SetIntegrationAssociationId(value); return *this;}

    /**
     * <p>The identifier for the integration association.</p>
     */
    inline CreateIntegrationAssociationResult& WithIntegrationAssociationId(Aws::String&& value) { SetIntegrationAssociationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the integration association.</p>
     */
    inline CreateIntegrationAssociationResult& WithIntegrationAssociationId(const char* value) { SetIntegrationAssociationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the association.</p>
     */
    inline const Aws::String& GetIntegrationAssociationArn() const{ return m_integrationAssociationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the association.</p>
     */
    inline void SetIntegrationAssociationArn(const Aws::String& value) { m_integrationAssociationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the association.</p>
     */
    inline void SetIntegrationAssociationArn(Aws::String&& value) { m_integrationAssociationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the association.</p>
     */
    inline void SetIntegrationAssociationArn(const char* value) { m_integrationAssociationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the association.</p>
     */
    inline CreateIntegrationAssociationResult& WithIntegrationAssociationArn(const Aws::String& value) { SetIntegrationAssociationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the association.</p>
     */
    inline CreateIntegrationAssociationResult& WithIntegrationAssociationArn(Aws::String&& value) { SetIntegrationAssociationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the association.</p>
     */
    inline CreateIntegrationAssociationResult& WithIntegrationAssociationArn(const char* value) { SetIntegrationAssociationArn(value); return *this;}

  private:

    Aws::String m_integrationAssociationId;

    Aws::String m_integrationAssociationArn;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
