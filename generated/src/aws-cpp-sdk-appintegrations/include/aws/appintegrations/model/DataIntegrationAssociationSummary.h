/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/LastExecutionStatus.h>
#include <aws/appintegrations/model/ExecutionConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppIntegrationsService
{
namespace Model
{

  /**
   * <p>Summary information about the DataIntegration association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/DataIntegrationAssociationSummary">AWS
   * API Reference</a></p>
   */
  class DataIntegrationAssociationSummary
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API DataIntegrationAssociationSummary() = default;
    AWS_APPINTEGRATIONSSERVICE_API DataIntegrationAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API DataIntegrationAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the DataIntegration association.</p>
     */
    inline const Aws::String& GetDataIntegrationAssociationArn() const { return m_dataIntegrationAssociationArn; }
    inline bool DataIntegrationAssociationArnHasBeenSet() const { return m_dataIntegrationAssociationArnHasBeenSet; }
    template<typename DataIntegrationAssociationArnT = Aws::String>
    void SetDataIntegrationAssociationArn(DataIntegrationAssociationArnT&& value) { m_dataIntegrationAssociationArnHasBeenSet = true; m_dataIntegrationAssociationArn = std::forward<DataIntegrationAssociationArnT>(value); }
    template<typename DataIntegrationAssociationArnT = Aws::String>
    DataIntegrationAssociationSummary& WithDataIntegrationAssociationArn(DataIntegrationAssociationArnT&& value) { SetDataIntegrationAssociationArn(std::forward<DataIntegrationAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the DataIntegration.</p>
     */
    inline const Aws::String& GetDataIntegrationArn() const { return m_dataIntegrationArn; }
    inline bool DataIntegrationArnHasBeenSet() const { return m_dataIntegrationArnHasBeenSet; }
    template<typename DataIntegrationArnT = Aws::String>
    void SetDataIntegrationArn(DataIntegrationArnT&& value) { m_dataIntegrationArnHasBeenSet = true; m_dataIntegrationArn = std::forward<DataIntegrationArnT>(value); }
    template<typename DataIntegrationArnT = Aws::String>
    DataIntegrationAssociationSummary& WithDataIntegrationArn(DataIntegrationArnT&& value) { SetDataIntegrationArn(std::forward<DataIntegrationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the client that is associated with the DataIntegration
     * association.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    DataIntegrationAssociationSummary& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the data destination.</p>
     */
    inline const Aws::String& GetDestinationURI() const { return m_destinationURI; }
    inline bool DestinationURIHasBeenSet() const { return m_destinationURIHasBeenSet; }
    template<typename DestinationURIT = Aws::String>
    void SetDestinationURI(DestinationURIT&& value) { m_destinationURIHasBeenSet = true; m_destinationURI = std::forward<DestinationURIT>(value); }
    template<typename DestinationURIT = Aws::String>
    DataIntegrationAssociationSummary& WithDestinationURI(DestinationURIT&& value) { SetDestinationURI(std::forward<DestinationURIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution status of the last job.</p>
     */
    inline const LastExecutionStatus& GetLastExecutionStatus() const { return m_lastExecutionStatus; }
    inline bool LastExecutionStatusHasBeenSet() const { return m_lastExecutionStatusHasBeenSet; }
    template<typename LastExecutionStatusT = LastExecutionStatus>
    void SetLastExecutionStatus(LastExecutionStatusT&& value) { m_lastExecutionStatusHasBeenSet = true; m_lastExecutionStatus = std::forward<LastExecutionStatusT>(value); }
    template<typename LastExecutionStatusT = LastExecutionStatus>
    DataIntegrationAssociationSummary& WithLastExecutionStatus(LastExecutionStatusT&& value) { SetLastExecutionStatus(std::forward<LastExecutionStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionConfiguration& GetExecutionConfiguration() const { return m_executionConfiguration; }
    inline bool ExecutionConfigurationHasBeenSet() const { return m_executionConfigurationHasBeenSet; }
    template<typename ExecutionConfigurationT = ExecutionConfiguration>
    void SetExecutionConfiguration(ExecutionConfigurationT&& value) { m_executionConfigurationHasBeenSet = true; m_executionConfiguration = std::forward<ExecutionConfigurationT>(value); }
    template<typename ExecutionConfigurationT = ExecutionConfiguration>
    DataIntegrationAssociationSummary& WithExecutionConfiguration(ExecutionConfigurationT&& value) { SetExecutionConfiguration(std::forward<ExecutionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataIntegrationAssociationArn;
    bool m_dataIntegrationAssociationArnHasBeenSet = false;

    Aws::String m_dataIntegrationArn;
    bool m_dataIntegrationArnHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_destinationURI;
    bool m_destinationURIHasBeenSet = false;

    LastExecutionStatus m_lastExecutionStatus;
    bool m_lastExecutionStatusHasBeenSet = false;

    ExecutionConfiguration m_executionConfiguration;
    bool m_executionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
