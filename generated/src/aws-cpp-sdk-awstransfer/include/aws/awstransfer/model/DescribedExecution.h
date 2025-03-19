/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/FileLocation.h>
#include <aws/awstransfer/model/ServiceMetadata.h>
#include <aws/awstransfer/model/LoggingConfiguration.h>
#include <aws/awstransfer/model/PosixProfile.h>
#include <aws/awstransfer/model/ExecutionStatus.h>
#include <aws/awstransfer/model/ExecutionResults.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>The details for an execution object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedExecution">AWS
   * API Reference</a></p>
   */
  class DescribedExecution
  {
  public:
    AWS_TRANSFER_API DescribedExecution() = default;
    AWS_TRANSFER_API DescribedExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    DescribedExecution& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the Amazon S3 or EFS file location. This is the
     * file location when the execution begins: if the file is being copied, this is
     * the initial (as opposed to destination) file location.</p>
     */
    inline const FileLocation& GetInitialFileLocation() const { return m_initialFileLocation; }
    inline bool InitialFileLocationHasBeenSet() const { return m_initialFileLocationHasBeenSet; }
    template<typename InitialFileLocationT = FileLocation>
    void SetInitialFileLocation(InitialFileLocationT&& value) { m_initialFileLocationHasBeenSet = true; m_initialFileLocation = std::forward<InitialFileLocationT>(value); }
    template<typename InitialFileLocationT = FileLocation>
    DescribedExecution& WithInitialFileLocation(InitialFileLocationT&& value) { SetInitialFileLocation(std::forward<InitialFileLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container object for the session details that are associated with a
     * workflow.</p>
     */
    inline const ServiceMetadata& GetServiceMetadata() const { return m_serviceMetadata; }
    inline bool ServiceMetadataHasBeenSet() const { return m_serviceMetadataHasBeenSet; }
    template<typename ServiceMetadataT = ServiceMetadata>
    void SetServiceMetadata(ServiceMetadataT&& value) { m_serviceMetadataHasBeenSet = true; m_serviceMetadata = std::forward<ServiceMetadataT>(value); }
    template<typename ServiceMetadataT = ServiceMetadata>
    DescribedExecution& WithServiceMetadata(ServiceMetadataT&& value) { SetServiceMetadata(std::forward<ServiceMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role associated with the execution.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    DescribedExecution& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM logging role associated with the execution.</p>
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const { return m_loggingConfiguration; }
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
    template<typename LoggingConfigurationT = LoggingConfiguration>
    void SetLoggingConfiguration(LoggingConfigurationT&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::forward<LoggingConfigurationT>(value); }
    template<typename LoggingConfigurationT = LoggingConfiguration>
    DescribedExecution& WithLoggingConfiguration(LoggingConfigurationT&& value) { SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PosixProfile& GetPosixProfile() const { return m_posixProfile; }
    inline bool PosixProfileHasBeenSet() const { return m_posixProfileHasBeenSet; }
    template<typename PosixProfileT = PosixProfile>
    void SetPosixProfile(PosixProfileT&& value) { m_posixProfileHasBeenSet = true; m_posixProfile = std::forward<PosixProfileT>(value); }
    template<typename PosixProfileT = PosixProfile>
    DescribedExecution& WithPosixProfile(PosixProfileT&& value) { SetPosixProfile(std::forward<PosixProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status is one of the execution. Can be in progress, completed, exception
     * encountered, or handling the exception. </p>
     */
    inline ExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribedExecution& WithStatus(ExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the execution results. This includes a list of the
     * steps along with the details of each step, error type and message (if any), and
     * the <code>OnExceptionSteps</code> structure.</p>
     */
    inline const ExecutionResults& GetResults() const { return m_results; }
    inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }
    template<typename ResultsT = ExecutionResults>
    void SetResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results = std::forward<ResultsT>(value); }
    template<typename ResultsT = ExecutionResults>
    DescribedExecution& WithResults(ResultsT&& value) { SetResults(std::forward<ResultsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    FileLocation m_initialFileLocation;
    bool m_initialFileLocationHasBeenSet = false;

    ServiceMetadata m_serviceMetadata;
    bool m_serviceMetadataHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    LoggingConfiguration m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet = false;

    PosixProfile m_posixProfile;
    bool m_posixProfileHasBeenSet = false;

    ExecutionStatus m_status{ExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ExecutionResults m_results;
    bool m_resultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
