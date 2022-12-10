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


    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline DescribedExecution& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline DescribedExecution& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline DescribedExecution& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>A structure that describes the Amazon S3 or EFS file location. This is the
     * file location when the execution begins: if the file is being copied, this is
     * the initial (as opposed to destination) file location.</p>
     */
    inline const FileLocation& GetInitialFileLocation() const{ return m_initialFileLocation; }

    /**
     * <p>A structure that describes the Amazon S3 or EFS file location. This is the
     * file location when the execution begins: if the file is being copied, this is
     * the initial (as opposed to destination) file location.</p>
     */
    inline bool InitialFileLocationHasBeenSet() const { return m_initialFileLocationHasBeenSet; }

    /**
     * <p>A structure that describes the Amazon S3 or EFS file location. This is the
     * file location when the execution begins: if the file is being copied, this is
     * the initial (as opposed to destination) file location.</p>
     */
    inline void SetInitialFileLocation(const FileLocation& value) { m_initialFileLocationHasBeenSet = true; m_initialFileLocation = value; }

    /**
     * <p>A structure that describes the Amazon S3 or EFS file location. This is the
     * file location when the execution begins: if the file is being copied, this is
     * the initial (as opposed to destination) file location.</p>
     */
    inline void SetInitialFileLocation(FileLocation&& value) { m_initialFileLocationHasBeenSet = true; m_initialFileLocation = std::move(value); }

    /**
     * <p>A structure that describes the Amazon S3 or EFS file location. This is the
     * file location when the execution begins: if the file is being copied, this is
     * the initial (as opposed to destination) file location.</p>
     */
    inline DescribedExecution& WithInitialFileLocation(const FileLocation& value) { SetInitialFileLocation(value); return *this;}

    /**
     * <p>A structure that describes the Amazon S3 or EFS file location. This is the
     * file location when the execution begins: if the file is being copied, this is
     * the initial (as opposed to destination) file location.</p>
     */
    inline DescribedExecution& WithInitialFileLocation(FileLocation&& value) { SetInitialFileLocation(std::move(value)); return *this;}


    /**
     * <p>A container object for the session details that are associated with a
     * workflow.</p>
     */
    inline const ServiceMetadata& GetServiceMetadata() const{ return m_serviceMetadata; }

    /**
     * <p>A container object for the session details that are associated with a
     * workflow.</p>
     */
    inline bool ServiceMetadataHasBeenSet() const { return m_serviceMetadataHasBeenSet; }

    /**
     * <p>A container object for the session details that are associated with a
     * workflow.</p>
     */
    inline void SetServiceMetadata(const ServiceMetadata& value) { m_serviceMetadataHasBeenSet = true; m_serviceMetadata = value; }

    /**
     * <p>A container object for the session details that are associated with a
     * workflow.</p>
     */
    inline void SetServiceMetadata(ServiceMetadata&& value) { m_serviceMetadataHasBeenSet = true; m_serviceMetadata = std::move(value); }

    /**
     * <p>A container object for the session details that are associated with a
     * workflow.</p>
     */
    inline DescribedExecution& WithServiceMetadata(const ServiceMetadata& value) { SetServiceMetadata(value); return *this;}

    /**
     * <p>A container object for the session details that are associated with a
     * workflow.</p>
     */
    inline DescribedExecution& WithServiceMetadata(ServiceMetadata&& value) { SetServiceMetadata(std::move(value)); return *this;}


    /**
     * <p>The IAM role associated with the execution.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }

    /**
     * <p>The IAM role associated with the execution.</p>
     */
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }

    /**
     * <p>The IAM role associated with the execution.</p>
     */
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }

    /**
     * <p>The IAM role associated with the execution.</p>
     */
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }

    /**
     * <p>The IAM role associated with the execution.</p>
     */
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }

    /**
     * <p>The IAM role associated with the execution.</p>
     */
    inline DescribedExecution& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}

    /**
     * <p>The IAM role associated with the execution.</p>
     */
    inline DescribedExecution& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role associated with the execution.</p>
     */
    inline DescribedExecution& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}


    /**
     * <p>The IAM logging role associated with the execution.</p>
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>The IAM logging role associated with the execution.</p>
     */
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }

    /**
     * <p>The IAM logging role associated with the execution.</p>
     */
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = value; }

    /**
     * <p>The IAM logging role associated with the execution.</p>
     */
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::move(value); }

    /**
     * <p>The IAM logging role associated with the execution.</p>
     */
    inline DescribedExecution& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>The IAM logging role associated with the execution.</p>
     */
    inline DescribedExecution& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}


    
    inline const PosixProfile& GetPosixProfile() const{ return m_posixProfile; }

    
    inline bool PosixProfileHasBeenSet() const { return m_posixProfileHasBeenSet; }

    
    inline void SetPosixProfile(const PosixProfile& value) { m_posixProfileHasBeenSet = true; m_posixProfile = value; }

    
    inline void SetPosixProfile(PosixProfile&& value) { m_posixProfileHasBeenSet = true; m_posixProfile = std::move(value); }

    
    inline DescribedExecution& WithPosixProfile(const PosixProfile& value) { SetPosixProfile(value); return *this;}

    
    inline DescribedExecution& WithPosixProfile(PosixProfile&& value) { SetPosixProfile(std::move(value)); return *this;}


    /**
     * <p>The status is one of the execution. Can be in progress, completed, exception
     * encountered, or handling the exception. </p>
     */
    inline const ExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status is one of the execution. Can be in progress, completed, exception
     * encountered, or handling the exception. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status is one of the execution. Can be in progress, completed, exception
     * encountered, or handling the exception. </p>
     */
    inline void SetStatus(const ExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status is one of the execution. Can be in progress, completed, exception
     * encountered, or handling the exception. </p>
     */
    inline void SetStatus(ExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status is one of the execution. Can be in progress, completed, exception
     * encountered, or handling the exception. </p>
     */
    inline DescribedExecution& WithStatus(const ExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status is one of the execution. Can be in progress, completed, exception
     * encountered, or handling the exception. </p>
     */
    inline DescribedExecution& WithStatus(ExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A structure that describes the execution results. This includes a list of the
     * steps along with the details of each step, error type and message (if any), and
     * the <code>OnExceptionSteps</code> structure.</p>
     */
    inline const ExecutionResults& GetResults() const{ return m_results; }

    /**
     * <p>A structure that describes the execution results. This includes a list of the
     * steps along with the details of each step, error type and message (if any), and
     * the <code>OnExceptionSteps</code> structure.</p>
     */
    inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }

    /**
     * <p>A structure that describes the execution results. This includes a list of the
     * steps along with the details of each step, error type and message (if any), and
     * the <code>OnExceptionSteps</code> structure.</p>
     */
    inline void SetResults(const ExecutionResults& value) { m_resultsHasBeenSet = true; m_results = value; }

    /**
     * <p>A structure that describes the execution results. This includes a list of the
     * steps along with the details of each step, error type and message (if any), and
     * the <code>OnExceptionSteps</code> structure.</p>
     */
    inline void SetResults(ExecutionResults&& value) { m_resultsHasBeenSet = true; m_results = std::move(value); }

    /**
     * <p>A structure that describes the execution results. This includes a list of the
     * steps along with the details of each step, error type and message (if any), and
     * the <code>OnExceptionSteps</code> structure.</p>
     */
    inline DescribedExecution& WithResults(const ExecutionResults& value) { SetResults(value); return *this;}

    /**
     * <p>A structure that describes the execution results. This includes a list of the
     * steps along with the details of each step, error type and message (if any), and
     * the <code>OnExceptionSteps</code> structure.</p>
     */
    inline DescribedExecution& WithResults(ExecutionResults&& value) { SetResults(std::move(value)); return *this;}

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
