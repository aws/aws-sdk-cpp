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
    AWS_TRANSFER_API ListedExecution() = default;
    AWS_TRANSFER_API ListedExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ListedExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ListedExecution& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
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
    ListedExecution& WithInitialFileLocation(InitialFileLocationT&& value) { SetInitialFileLocation(std::forward<InitialFileLocationT>(value)); return *this;}
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
    ListedExecution& WithServiceMetadata(ServiceMetadataT&& value) { SetServiceMetadata(std::forward<ServiceMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status is one of the execution. Can be in progress, completed, exception
     * encountered, or handling the exception.</p>
     */
    inline ExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListedExecution& WithStatus(ExecutionStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    FileLocation m_initialFileLocation;
    bool m_initialFileLocationHasBeenSet = false;

    ServiceMetadata m_serviceMetadata;
    bool m_serviceMetadataHasBeenSet = false;

    ExecutionStatus m_status{ExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
