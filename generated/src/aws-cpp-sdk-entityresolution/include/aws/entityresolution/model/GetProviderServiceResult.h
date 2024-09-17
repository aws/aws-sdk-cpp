/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/ProviderComponentSchema.h>
#include <aws/core/utils/Document.h>
#include <aws/entityresolution/model/ProviderEndpointConfiguration.h>
#include <aws/entityresolution/model/ProviderIdNameSpaceConfiguration.h>
#include <aws/entityresolution/model/ProviderIntermediateDataAccessConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/ServiceType.h>
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
namespace EntityResolution
{
namespace Model
{
  class GetProviderServiceResult
  {
  public:
    AWS_ENTITYRESOLUTION_API GetProviderServiceResult();
    AWS_ENTITYRESOLUTION_API GetProviderServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API GetProviderServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies whether output data from the provider is anonymized. A value of
     * <code>TRUE</code> means the output will be anonymized and you can't relate the
     * data that comes back from the provider to the identifying input. A value of
     * <code>FALSE</code> means the output won't be anonymized and you can relate the
     * data that comes back from the provider to your source data. </p>
     */
    inline bool GetAnonymizedOutput() const{ return m_anonymizedOutput; }
    inline void SetAnonymizedOutput(bool value) { m_anonymizedOutput = value; }
    inline GetProviderServiceResult& WithAnonymizedOutput(bool value) { SetAnonymizedOutput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input schema for the provider service.</p>
     */
    inline const ProviderComponentSchema& GetProviderComponentSchema() const{ return m_providerComponentSchema; }
    inline void SetProviderComponentSchema(const ProviderComponentSchema& value) { m_providerComponentSchema = value; }
    inline void SetProviderComponentSchema(ProviderComponentSchema&& value) { m_providerComponentSchema = std::move(value); }
    inline GetProviderServiceResult& WithProviderComponentSchema(const ProviderComponentSchema& value) { SetProviderComponentSchema(value); return *this;}
    inline GetProviderServiceResult& WithProviderComponentSchema(ProviderComponentSchema&& value) { SetProviderComponentSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the provider configuration.</p>
     */
    inline Aws::Utils::DocumentView GetProviderConfigurationDefinition() const{ return m_providerConfigurationDefinition; }
    inline void SetProviderConfigurationDefinition(const Aws::Utils::Document& value) { m_providerConfigurationDefinition = value; }
    inline void SetProviderConfigurationDefinition(Aws::Utils::Document&& value) { m_providerConfigurationDefinition = std::move(value); }
    inline GetProviderServiceResult& WithProviderConfigurationDefinition(const Aws::Utils::Document& value) { SetProviderConfigurationDefinition(value); return *this;}
    inline GetProviderServiceResult& WithProviderConfigurationDefinition(Aws::Utils::Document&& value) { SetProviderConfigurationDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required configuration fields to use with the provider service.</p>
     */
    inline const ProviderEndpointConfiguration& GetProviderEndpointConfiguration() const{ return m_providerEndpointConfiguration; }
    inline void SetProviderEndpointConfiguration(const ProviderEndpointConfiguration& value) { m_providerEndpointConfiguration = value; }
    inline void SetProviderEndpointConfiguration(ProviderEndpointConfiguration&& value) { m_providerEndpointConfiguration = std::move(value); }
    inline GetProviderServiceResult& WithProviderEndpointConfiguration(const ProviderEndpointConfiguration& value) { SetProviderEndpointConfiguration(value); return *this;}
    inline GetProviderServiceResult& WithProviderEndpointConfiguration(ProviderEndpointConfiguration&& value) { SetProviderEndpointConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the provider entity output.</p>
     */
    inline Aws::Utils::DocumentView GetProviderEntityOutputDefinition() const{ return m_providerEntityOutputDefinition; }
    inline void SetProviderEntityOutputDefinition(const Aws::Utils::Document& value) { m_providerEntityOutputDefinition = value; }
    inline void SetProviderEntityOutputDefinition(Aws::Utils::Document&& value) { m_providerEntityOutputDefinition = std::move(value); }
    inline GetProviderServiceResult& WithProviderEntityOutputDefinition(const Aws::Utils::Document& value) { SetProviderEntityOutputDefinition(value); return *this;}
    inline GetProviderServiceResult& WithProviderEntityOutputDefinition(Aws::Utils::Document&& value) { SetProviderEntityOutputDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider configuration required for different ID namespace types.</p>
     */
    inline const ProviderIdNameSpaceConfiguration& GetProviderIdNameSpaceConfiguration() const{ return m_providerIdNameSpaceConfiguration; }
    inline void SetProviderIdNameSpaceConfiguration(const ProviderIdNameSpaceConfiguration& value) { m_providerIdNameSpaceConfiguration = value; }
    inline void SetProviderIdNameSpaceConfiguration(ProviderIdNameSpaceConfiguration&& value) { m_providerIdNameSpaceConfiguration = std::move(value); }
    inline GetProviderServiceResult& WithProviderIdNameSpaceConfiguration(const ProviderIdNameSpaceConfiguration& value) { SetProviderIdNameSpaceConfiguration(value); return *this;}
    inline GetProviderServiceResult& WithProviderIdNameSpaceConfiguration(ProviderIdNameSpaceConfiguration&& value) { SetProviderIdNameSpaceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services accounts and the S3 permissions that are required by
     * some providers to create an S3 bucket for intermediate data storage.</p>
     */
    inline const ProviderIntermediateDataAccessConfiguration& GetProviderIntermediateDataAccessConfiguration() const{ return m_providerIntermediateDataAccessConfiguration; }
    inline void SetProviderIntermediateDataAccessConfiguration(const ProviderIntermediateDataAccessConfiguration& value) { m_providerIntermediateDataAccessConfiguration = value; }
    inline void SetProviderIntermediateDataAccessConfiguration(ProviderIntermediateDataAccessConfiguration&& value) { m_providerIntermediateDataAccessConfiguration = std::move(value); }
    inline GetProviderServiceResult& WithProviderIntermediateDataAccessConfiguration(const ProviderIntermediateDataAccessConfiguration& value) { SetProviderIntermediateDataAccessConfiguration(value); return *this;}
    inline GetProviderServiceResult& WithProviderIntermediateDataAccessConfiguration(ProviderIntermediateDataAccessConfiguration&& value) { SetProviderIntermediateDataAccessConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provider service job configurations.</p>
     */
    inline Aws::Utils::DocumentView GetProviderJobConfiguration() const{ return m_providerJobConfiguration; }
    inline void SetProviderJobConfiguration(const Aws::Utils::Document& value) { m_providerJobConfiguration = value; }
    inline void SetProviderJobConfiguration(Aws::Utils::Document&& value) { m_providerJobConfiguration = std::move(value); }
    inline GetProviderServiceResult& WithProviderJobConfiguration(const Aws::Utils::Document& value) { SetProviderJobConfiguration(value); return *this;}
    inline GetProviderServiceResult& WithProviderJobConfiguration(Aws::Utils::Document&& value) { SetProviderJobConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provider. This name is typically the company name.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }
    inline void SetProviderName(const Aws::String& value) { m_providerName = value; }
    inline void SetProviderName(Aws::String&& value) { m_providerName = std::move(value); }
    inline void SetProviderName(const char* value) { m_providerName.assign(value); }
    inline GetProviderServiceResult& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}
    inline GetProviderServiceResult& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}
    inline GetProviderServiceResult& WithProviderName(const char* value) { SetProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * provider service.</p>
     */
    inline const Aws::String& GetProviderServiceArn() const{ return m_providerServiceArn; }
    inline void SetProviderServiceArn(const Aws::String& value) { m_providerServiceArn = value; }
    inline void SetProviderServiceArn(Aws::String&& value) { m_providerServiceArn = std::move(value); }
    inline void SetProviderServiceArn(const char* value) { m_providerServiceArn.assign(value); }
    inline GetProviderServiceResult& WithProviderServiceArn(const Aws::String& value) { SetProviderServiceArn(value); return *this;}
    inline GetProviderServiceResult& WithProviderServiceArn(Aws::String&& value) { SetProviderServiceArn(std::move(value)); return *this;}
    inline GetProviderServiceResult& WithProviderServiceArn(const char* value) { SetProviderServiceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the provider service.</p>
     */
    inline const Aws::String& GetProviderServiceDisplayName() const{ return m_providerServiceDisplayName; }
    inline void SetProviderServiceDisplayName(const Aws::String& value) { m_providerServiceDisplayName = value; }
    inline void SetProviderServiceDisplayName(Aws::String&& value) { m_providerServiceDisplayName = std::move(value); }
    inline void SetProviderServiceDisplayName(const char* value) { m_providerServiceDisplayName.assign(value); }
    inline GetProviderServiceResult& WithProviderServiceDisplayName(const Aws::String& value) { SetProviderServiceDisplayName(value); return *this;}
    inline GetProviderServiceResult& WithProviderServiceDisplayName(Aws::String&& value) { SetProviderServiceDisplayName(std::move(value)); return *this;}
    inline GetProviderServiceResult& WithProviderServiceDisplayName(const char* value) { SetProviderServiceDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the product that the provider service provides. </p>
     */
    inline const Aws::String& GetProviderServiceName() const{ return m_providerServiceName; }
    inline void SetProviderServiceName(const Aws::String& value) { m_providerServiceName = value; }
    inline void SetProviderServiceName(Aws::String&& value) { m_providerServiceName = std::move(value); }
    inline void SetProviderServiceName(const char* value) { m_providerServiceName.assign(value); }
    inline GetProviderServiceResult& WithProviderServiceName(const Aws::String& value) { SetProviderServiceName(value); return *this;}
    inline GetProviderServiceResult& WithProviderServiceName(Aws::String&& value) { SetProviderServiceName(std::move(value)); return *this;}
    inline GetProviderServiceResult& WithProviderServiceName(const char* value) { SetProviderServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of provider service.</p>
     */
    inline const ServiceType& GetProviderServiceType() const{ return m_providerServiceType; }
    inline void SetProviderServiceType(const ServiceType& value) { m_providerServiceType = value; }
    inline void SetProviderServiceType(ServiceType&& value) { m_providerServiceType = std::move(value); }
    inline GetProviderServiceResult& WithProviderServiceType(const ServiceType& value) { SetProviderServiceType(value); return *this;}
    inline GetProviderServiceResult& WithProviderServiceType(ServiceType&& value) { SetProviderServiceType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetProviderServiceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetProviderServiceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetProviderServiceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_anonymizedOutput;

    ProviderComponentSchema m_providerComponentSchema;

    Aws::Utils::Document m_providerConfigurationDefinition;

    ProviderEndpointConfiguration m_providerEndpointConfiguration;

    Aws::Utils::Document m_providerEntityOutputDefinition;

    ProviderIdNameSpaceConfiguration m_providerIdNameSpaceConfiguration;

    ProviderIntermediateDataAccessConfiguration m_providerIntermediateDataAccessConfiguration;

    Aws::Utils::Document m_providerJobConfiguration;

    Aws::String m_providerName;

    Aws::String m_providerServiceArn;

    Aws::String m_providerServiceDisplayName;

    Aws::String m_providerServiceName;

    ServiceType m_providerServiceType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
