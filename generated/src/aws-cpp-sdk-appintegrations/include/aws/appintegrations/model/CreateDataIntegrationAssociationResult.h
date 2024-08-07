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
    AWS_APPINTEGRATIONSSERVICE_API CreateDataIntegrationAssociationResult();
    AWS_APPINTEGRATIONSSERVICE_API CreateDataIntegrationAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API CreateDataIntegrationAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier. for the DataIntegrationAssociation.</p>
     */
    inline const Aws::String& GetDataIntegrationAssociationId() const{ return m_dataIntegrationAssociationId; }
    inline void SetDataIntegrationAssociationId(const Aws::String& value) { m_dataIntegrationAssociationId = value; }
    inline void SetDataIntegrationAssociationId(Aws::String&& value) { m_dataIntegrationAssociationId = std::move(value); }
    inline void SetDataIntegrationAssociationId(const char* value) { m_dataIntegrationAssociationId.assign(value); }
    inline CreateDataIntegrationAssociationResult& WithDataIntegrationAssociationId(const Aws::String& value) { SetDataIntegrationAssociationId(value); return *this;}
    inline CreateDataIntegrationAssociationResult& WithDataIntegrationAssociationId(Aws::String&& value) { SetDataIntegrationAssociationId(std::move(value)); return *this;}
    inline CreateDataIntegrationAssociationResult& WithDataIntegrationAssociationId(const char* value) { SetDataIntegrationAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DataIntegration.</p>
     */
    inline const Aws::String& GetDataIntegrationArn() const{ return m_dataIntegrationArn; }
    inline void SetDataIntegrationArn(const Aws::String& value) { m_dataIntegrationArn = value; }
    inline void SetDataIntegrationArn(Aws::String&& value) { m_dataIntegrationArn = std::move(value); }
    inline void SetDataIntegrationArn(const char* value) { m_dataIntegrationArn.assign(value); }
    inline CreateDataIntegrationAssociationResult& WithDataIntegrationArn(const Aws::String& value) { SetDataIntegrationArn(value); return *this;}
    inline CreateDataIntegrationAssociationResult& WithDataIntegrationArn(Aws::String&& value) { SetDataIntegrationArn(std::move(value)); return *this;}
    inline CreateDataIntegrationAssociationResult& WithDataIntegrationArn(const char* value) { SetDataIntegrationArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDataIntegrationAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDataIntegrationAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDataIntegrationAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_dataIntegrationAssociationId;

    Aws::String m_dataIntegrationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
