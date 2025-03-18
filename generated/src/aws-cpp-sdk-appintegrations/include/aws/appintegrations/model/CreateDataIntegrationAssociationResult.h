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
  class CreateDataIntegrationAssociationResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API CreateDataIntegrationAssociationResult() = default;
    AWS_APPINTEGRATIONSSERVICE_API CreateDataIntegrationAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API CreateDataIntegrationAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier. for the DataIntegrationAssociation.</p>
     */
    inline const Aws::String& GetDataIntegrationAssociationId() const { return m_dataIntegrationAssociationId; }
    template<typename DataIntegrationAssociationIdT = Aws::String>
    void SetDataIntegrationAssociationId(DataIntegrationAssociationIdT&& value) { m_dataIntegrationAssociationIdHasBeenSet = true; m_dataIntegrationAssociationId = std::forward<DataIntegrationAssociationIdT>(value); }
    template<typename DataIntegrationAssociationIdT = Aws::String>
    CreateDataIntegrationAssociationResult& WithDataIntegrationAssociationId(DataIntegrationAssociationIdT&& value) { SetDataIntegrationAssociationId(std::forward<DataIntegrationAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DataIntegration.</p>
     */
    inline const Aws::String& GetDataIntegrationArn() const { return m_dataIntegrationArn; }
    template<typename DataIntegrationArnT = Aws::String>
    void SetDataIntegrationArn(DataIntegrationArnT&& value) { m_dataIntegrationArnHasBeenSet = true; m_dataIntegrationArn = std::forward<DataIntegrationArnT>(value); }
    template<typename DataIntegrationArnT = Aws::String>
    CreateDataIntegrationAssociationResult& WithDataIntegrationArn(DataIntegrationArnT&& value) { SetDataIntegrationArn(std::forward<DataIntegrationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDataIntegrationAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataIntegrationAssociationId;
    bool m_dataIntegrationAssociationIdHasBeenSet = false;

    Aws::String m_dataIntegrationArn;
    bool m_dataIntegrationArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
