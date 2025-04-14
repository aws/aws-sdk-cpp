/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/ServiceType.h>
#include <aws/core/utils/Document.h>
#include <aws/entityresolution/model/ProviderIdNameSpaceConfiguration.h>
#include <aws/entityresolution/model/ProviderEndpointConfiguration.h>
#include <aws/entityresolution/model/ProviderIntermediateDataAccessConfiguration.h>
#include <aws/entityresolution/model/ProviderComponentSchema.h>
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
    AWS_ENTITYRESOLUTION_API GetProviderServiceResult() = default;
    AWS_ENTITYRESOLUTION_API GetProviderServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API GetProviderServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the provider. This name is typically the company name.</p>
     */
    inline const Aws::String& GetProviderName() const { return m_providerName; }
    template<typename ProviderNameT = Aws::String>
    void SetProviderName(ProviderNameT&& value) { m_providerNameHasBeenSet = true; m_providerName = std::forward<ProviderNameT>(value); }
    template<typename ProviderNameT = Aws::String>
    GetProviderServiceResult& WithProviderName(ProviderNameT&& value) { SetProviderName(std::forward<ProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the product that the provider service provides. </p>
     */
    inline const Aws::String& GetProviderServiceName() const { return m_providerServiceName; }
    template<typename ProviderServiceNameT = Aws::String>
    void SetProviderServiceName(ProviderServiceNameT&& value) { m_providerServiceNameHasBeenSet = true; m_providerServiceName = std::forward<ProviderServiceNameT>(value); }
    template<typename ProviderServiceNameT = Aws::String>
    GetProviderServiceResult& WithProviderServiceName(ProviderServiceNameT&& value) { SetProviderServiceName(std::forward<ProviderServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the provider service.</p>
     */
    inline const Aws::String& GetProviderServiceDisplayName() const { return m_providerServiceDisplayName; }
    template<typename ProviderServiceDisplayNameT = Aws::String>
    void SetProviderServiceDisplayName(ProviderServiceDisplayNameT&& value) { m_providerServiceDisplayNameHasBeenSet = true; m_providerServiceDisplayName = std::forward<ProviderServiceDisplayNameT>(value); }
    template<typename ProviderServiceDisplayNameT = Aws::String>
    GetProviderServiceResult& WithProviderServiceDisplayName(ProviderServiceDisplayNameT&& value) { SetProviderServiceDisplayName(std::forward<ProviderServiceDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of provider service.</p>
     */
    inline ServiceType GetProviderServiceType() const { return m_providerServiceType; }
    inline void SetProviderServiceType(ServiceType value) { m_providerServiceTypeHasBeenSet = true; m_providerServiceType = value; }
    inline GetProviderServiceResult& WithProviderServiceType(ServiceType value) { SetProviderServiceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * provider service.</p>
     */
    inline const Aws::String& GetProviderServiceArn() const { return m_providerServiceArn; }
    template<typename ProviderServiceArnT = Aws::String>
    void SetProviderServiceArn(ProviderServiceArnT&& value) { m_providerServiceArnHasBeenSet = true; m_providerServiceArn = std::forward<ProviderServiceArnT>(value); }
    template<typename ProviderServiceArnT = Aws::String>
    GetProviderServiceResult& WithProviderServiceArn(ProviderServiceArnT&& value) { SetProviderServiceArn(std::forward<ProviderServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the provider configuration.</p>
     */
    inline Aws::Utils::DocumentView GetProviderConfigurationDefinition() const { return m_providerConfigurationDefinition; }
    template<typename ProviderConfigurationDefinitionT = Aws::Utils::Document>
    void SetProviderConfigurationDefinition(ProviderConfigurationDefinitionT&& value) { m_providerConfigurationDefinitionHasBeenSet = true; m_providerConfigurationDefinition = std::forward<ProviderConfigurationDefinitionT>(value); }
    template<typename ProviderConfigurationDefinitionT = Aws::Utils::Document>
    GetProviderServiceResult& WithProviderConfigurationDefinition(ProviderConfigurationDefinitionT&& value) { SetProviderConfigurationDefinition(std::forward<ProviderConfigurationDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider configuration required for different ID namespace types.</p>
     */
    inline const ProviderIdNameSpaceConfiguration& GetProviderIdNameSpaceConfiguration() const { return m_providerIdNameSpaceConfiguration; }
    template<typename ProviderIdNameSpaceConfigurationT = ProviderIdNameSpaceConfiguration>
    void SetProviderIdNameSpaceConfiguration(ProviderIdNameSpaceConfigurationT&& value) { m_providerIdNameSpaceConfigurationHasBeenSet = true; m_providerIdNameSpaceConfiguration = std::forward<ProviderIdNameSpaceConfigurationT>(value); }
    template<typename ProviderIdNameSpaceConfigurationT = ProviderIdNameSpaceConfiguration>
    GetProviderServiceResult& WithProviderIdNameSpaceConfiguration(ProviderIdNameSpaceConfigurationT&& value) { SetProviderIdNameSpaceConfiguration(std::forward<ProviderIdNameSpaceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provider service job configurations.</p>
     */
    inline Aws::Utils::DocumentView GetProviderJobConfiguration() const { return m_providerJobConfiguration; }
    template<typename ProviderJobConfigurationT = Aws::Utils::Document>
    void SetProviderJobConfiguration(ProviderJobConfigurationT&& value) { m_providerJobConfigurationHasBeenSet = true; m_providerJobConfiguration = std::forward<ProviderJobConfigurationT>(value); }
    template<typename ProviderJobConfigurationT = Aws::Utils::Document>
    GetProviderServiceResult& WithProviderJobConfiguration(ProviderJobConfigurationT&& value) { SetProviderJobConfiguration(std::forward<ProviderJobConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required configuration fields to use with the provider service.</p>
     */
    inline const ProviderEndpointConfiguration& GetProviderEndpointConfiguration() const { return m_providerEndpointConfiguration; }
    template<typename ProviderEndpointConfigurationT = ProviderEndpointConfiguration>
    void SetProviderEndpointConfiguration(ProviderEndpointConfigurationT&& value) { m_providerEndpointConfigurationHasBeenSet = true; m_providerEndpointConfiguration = std::forward<ProviderEndpointConfigurationT>(value); }
    template<typename ProviderEndpointConfigurationT = ProviderEndpointConfiguration>
    GetProviderServiceResult& WithProviderEndpointConfiguration(ProviderEndpointConfigurationT&& value) { SetProviderEndpointConfiguration(std::forward<ProviderEndpointConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether output data from the provider is anonymized. A value of
     * <code>TRUE</code> means the output will be anonymized and you can't relate the
     * data that comes back from the provider to the identifying input. A value of
     * <code>FALSE</code> means the output won't be anonymized and you can relate the
     * data that comes back from the provider to your source data. </p>
     */
    inline bool GetAnonymizedOutput() const { return m_anonymizedOutput; }
    inline void SetAnonymizedOutput(bool value) { m_anonymizedOutputHasBeenSet = true; m_anonymizedOutput = value; }
    inline GetProviderServiceResult& WithAnonymizedOutput(bool value) { SetAnonymizedOutput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the provider entity output.</p>
     */
    inline Aws::Utils::DocumentView GetProviderEntityOutputDefinition() const { return m_providerEntityOutputDefinition; }
    template<typename ProviderEntityOutputDefinitionT = Aws::Utils::Document>
    void SetProviderEntityOutputDefinition(ProviderEntityOutputDefinitionT&& value) { m_providerEntityOutputDefinitionHasBeenSet = true; m_providerEntityOutputDefinition = std::forward<ProviderEntityOutputDefinitionT>(value); }
    template<typename ProviderEntityOutputDefinitionT = Aws::Utils::Document>
    GetProviderServiceResult& WithProviderEntityOutputDefinition(ProviderEntityOutputDefinitionT&& value) { SetProviderEntityOutputDefinition(std::forward<ProviderEntityOutputDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services accounts and the S3 permissions that are required by
     * some providers to create an S3 bucket for intermediate data storage.</p>
     */
    inline const ProviderIntermediateDataAccessConfiguration& GetProviderIntermediateDataAccessConfiguration() const { return m_providerIntermediateDataAccessConfiguration; }
    template<typename ProviderIntermediateDataAccessConfigurationT = ProviderIntermediateDataAccessConfiguration>
    void SetProviderIntermediateDataAccessConfiguration(ProviderIntermediateDataAccessConfigurationT&& value) { m_providerIntermediateDataAccessConfigurationHasBeenSet = true; m_providerIntermediateDataAccessConfiguration = std::forward<ProviderIntermediateDataAccessConfigurationT>(value); }
    template<typename ProviderIntermediateDataAccessConfigurationT = ProviderIntermediateDataAccessConfiguration>
    GetProviderServiceResult& WithProviderIntermediateDataAccessConfiguration(ProviderIntermediateDataAccessConfigurationT&& value) { SetProviderIntermediateDataAccessConfiguration(std::forward<ProviderIntermediateDataAccessConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input schema for the provider service.</p>
     */
    inline const ProviderComponentSchema& GetProviderComponentSchema() const { return m_providerComponentSchema; }
    template<typename ProviderComponentSchemaT = ProviderComponentSchema>
    void SetProviderComponentSchema(ProviderComponentSchemaT&& value) { m_providerComponentSchemaHasBeenSet = true; m_providerComponentSchema = std::forward<ProviderComponentSchemaT>(value); }
    template<typename ProviderComponentSchemaT = ProviderComponentSchema>
    GetProviderServiceResult& WithProviderComponentSchema(ProviderComponentSchemaT&& value) { SetProviderComponentSchema(std::forward<ProviderComponentSchemaT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetProviderServiceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    Aws::String m_providerServiceName;
    bool m_providerServiceNameHasBeenSet = false;

    Aws::String m_providerServiceDisplayName;
    bool m_providerServiceDisplayNameHasBeenSet = false;

    ServiceType m_providerServiceType{ServiceType::NOT_SET};
    bool m_providerServiceTypeHasBeenSet = false;

    Aws::String m_providerServiceArn;
    bool m_providerServiceArnHasBeenSet = false;

    Aws::Utils::Document m_providerConfigurationDefinition;
    bool m_providerConfigurationDefinitionHasBeenSet = false;

    ProviderIdNameSpaceConfiguration m_providerIdNameSpaceConfiguration;
    bool m_providerIdNameSpaceConfigurationHasBeenSet = false;

    Aws::Utils::Document m_providerJobConfiguration;
    bool m_providerJobConfigurationHasBeenSet = false;

    ProviderEndpointConfiguration m_providerEndpointConfiguration;
    bool m_providerEndpointConfigurationHasBeenSet = false;

    bool m_anonymizedOutput{false};
    bool m_anonymizedOutputHasBeenSet = false;

    Aws::Utils::Document m_providerEntityOutputDefinition;
    bool m_providerEntityOutputDefinitionHasBeenSet = false;

    ProviderIntermediateDataAccessConfiguration m_providerIntermediateDataAccessConfiguration;
    bool m_providerIntermediateDataAccessConfigurationHasBeenSet = false;

    ProviderComponentSchema m_providerComponentSchema;
    bool m_providerComponentSchemaHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
