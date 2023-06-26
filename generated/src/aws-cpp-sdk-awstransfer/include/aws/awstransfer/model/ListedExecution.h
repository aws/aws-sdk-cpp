/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/FileLocation.h>
#include <aws/awstransfer/model/ServiceMetadata.h>
#include <aws/awstransfer/model/ExecutionStatus.h>
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
   * <p>Returns properties of the execution that is specified.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListedExecution">AWS
   * API Reference</a></p>
   */
  class ListedExecution
  {
  public:
    AWS_TRANSFER_API ListedExecution();
    AWS_TRANSFER_API ListedExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ListedExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ListedExecution& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline ListedExecution& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline ListedExecution& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


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
    inline ListedExecution& WithInitialFileLocation(const FileLocation& value) { SetInitialFileLocation(value); return *this;}

    /**
     * <p>A structure that describes the Amazon S3 or EFS file location. This is the
     * file location when the execution begins: if the file is being copied, this is
     * the initial (as opposed to destination) file location.</p>
     */
    inline ListedExecution& WithInitialFileLocation(FileLocation&& value) { SetInitialFileLocation(std::move(value)); return *this;}


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
    inline ListedExecution& WithServiceMetadata(const ServiceMetadata& value) { SetServiceMetadata(value); return *this;}

    /**
     * <p>A container object for the session details that are associated with a
     * workflow.</p>
     */
    inline ListedExecution& WithServiceMetadata(ServiceMetadata&& value) { SetServiceMetadata(std::move(value)); return *this;}


    /**
     * <p>The status is one of the execution. Can be in progress, completed, exception
     * encountered, or handling the exception.</p>
     */
    inline const ExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status is one of the execution. Can be in progress, completed, exception
     * encountered, or handling the exception.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status is one of the execution. Can be in progress, completed, exception
     * encountered, or handling the exception.</p>
     */
    inline void SetStatus(const ExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status is one of the execution. Can be in progress, completed, exception
     * encountered, or handling the exception.</p>
     */
    inline void SetStatus(ExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status is one of the execution. Can be in progress, completed, exception
     * encountered, or handling the exception.</p>
     */
    inline ListedExecution& WithStatus(const ExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status is one of the execution. Can be in progress, completed, exception
     * encountered, or handling the exception.</p>
     */
    inline ListedExecution& WithStatus(ExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    FileLocation m_initialFileLocation;
    bool m_initialFileLocationHasBeenSet = false;

    ServiceMetadata m_serviceMetadata;
    bool m_serviceMetadataHasBeenSet = false;

    ExecutionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
