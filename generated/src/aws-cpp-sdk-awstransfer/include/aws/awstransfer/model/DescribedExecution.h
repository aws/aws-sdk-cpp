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
    AWS_TRANSFER_API DescribedExecution();
    AWS_TRANSFER_API DescribedExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }
    inline DescribedExecution& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}
    inline DescribedExecution& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}
    inline DescribedExecution& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the Amazon S3 or EFS file location. This is the
     * file location when the execution begins: if the file is being copied, this is
     * the initial (as opposed to destination) file location.</p>
     */
    inline const FileLocation& GetInitialFileLocation() const{ return m_initialFileLocation; }
    inline bool InitialFileLocationHasBeenSet() const { return m_initialFileLocationHasBeenSet; }
    inline void SetInitialFileLocation(const FileLocation& value) { m_initialFileLocationHasBeenSet = true; m_initialFileLocation = value; }
    inline void SetInitialFileLocation(FileLocation&& value) { m_initialFileLocationHasBeenSet = true; m_initialFileLocation = std::move(value); }
    inline DescribedExecution& WithInitialFileLocation(const FileLocation& value) { SetInitialFileLocation(value); return *this;}
    inline DescribedExecution& WithInitialFileLocation(FileLocation&& value) { SetInitialFileLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container object for the session details that are associated with a
     * workflow.</p>
     */
    inline const ServiceMetadata& GetServiceMetadata() const{ return m_serviceMetadata; }
    inline bool ServiceMetadataHasBeenSet() const { return m_serviceMetadataHasBeenSet; }
    inline void SetServiceMetadata(const ServiceMetadata& value) { m_serviceMetadataHasBeenSet = true; m_serviceMetadata = value; }
    inline void SetServiceMetadata(ServiceMetadata&& value) { m_serviceMetadataHasBeenSet = true; m_serviceMetadata = std::move(value); }
    inline DescribedExecution& WithServiceMetadata(const ServiceMetadata& value) { SetServiceMetadata(value); return *this;}
    inline DescribedExecution& WithServiceMetadata(ServiceMetadata&& value) { SetServiceMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role associated with the execution.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }
    inline DescribedExecution& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}
    inline DescribedExecution& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}
    inline DescribedExecution& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM logging role associated with the execution.</p>
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = value; }
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::move(value); }
    inline DescribedExecution& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}
    inline DescribedExecution& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const PosixProfile& GetPosixProfile() const{ return m_posixProfile; }
    inline bool PosixProfileHasBeenSet() const { return m_posixProfileHasBeenSet; }
    inline void SetPosixProfile(const PosixProfile& value) { m_posixProfileHasBeenSet = true; m_posixProfile = value; }
    inline void SetPosixProfile(PosixProfile&& value) { m_posixProfileHasBeenSet = true; m_posixProfile = std::move(value); }
    inline DescribedExecution& WithPosixProfile(const PosixProfile& value) { SetPosixProfile(value); return *this;}
    inline DescribedExecution& WithPosixProfile(PosixProfile&& value) { SetPosixProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status is one of the execution. Can be in progress, completed, exception
     * encountered, or handling the exception. </p>
     */
    inline const ExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DescribedExecution& WithStatus(const ExecutionStatus& value) { SetStatus(value); return *this;}
    inline DescribedExecution& WithStatus(ExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the execution results. This includes a list of the
     * steps along with the details of each step, error type and message (if any), and
     * the <code>OnExceptionSteps</code> structure.</p>
     */
    inline const ExecutionResults& GetResults() const{ return m_results; }
    inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }
    inline void SetResults(const ExecutionResults& value) { m_resultsHasBeenSet = true; m_results = value; }
    inline void SetResults(ExecutionResults&& value) { m_resultsHasBeenSet = true; m_results = std::move(value); }
    inline DescribedExecution& WithResults(const ExecutionResults& value) { SetResults(value); return *this;}
    inline DescribedExecution& WithResults(ExecutionResults&& value) { SetResults(std::move(value)); return *this;}
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

    ExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    ExecutionResults m_results;
    bool m_resultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
