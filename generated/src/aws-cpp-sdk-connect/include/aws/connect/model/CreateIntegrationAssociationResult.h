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
    AWS_CONNECT_API CreateIntegrationAssociationResult() = default;
    AWS_CONNECT_API CreateIntegrationAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateIntegrationAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the integration association.</p>
     */
    inline const Aws::String& GetIntegrationAssociationId() const { return m_integrationAssociationId; }
    template<typename IntegrationAssociationIdT = Aws::String>
    void SetIntegrationAssociationId(IntegrationAssociationIdT&& value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId = std::forward<IntegrationAssociationIdT>(value); }
    template<typename IntegrationAssociationIdT = Aws::String>
    CreateIntegrationAssociationResult& WithIntegrationAssociationId(IntegrationAssociationIdT&& value) { SetIntegrationAssociationId(std::forward<IntegrationAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the association.</p>
     */
    inline const Aws::String& GetIntegrationAssociationArn() const { return m_integrationAssociationArn; }
    template<typename IntegrationAssociationArnT = Aws::String>
    void SetIntegrationAssociationArn(IntegrationAssociationArnT&& value) { m_integrationAssociationArnHasBeenSet = true; m_integrationAssociationArn = std::forward<IntegrationAssociationArnT>(value); }
    template<typename IntegrationAssociationArnT = Aws::String>
    CreateIntegrationAssociationResult& WithIntegrationAssociationArn(IntegrationAssociationArnT&& value) { SetIntegrationAssociationArn(std::forward<IntegrationAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateIntegrationAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_integrationAssociationId;
    bool m_integrationAssociationIdHasBeenSet = false;

    Aws::String m_integrationAssociationArn;
    bool m_integrationAssociationArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
