/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticfilesystem/model/Destination.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>Describes the replication configuration for a specific file
   * system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/ReplicationConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class ReplicationConfigurationDescription
  {
  public:
    AWS_EFS_API ReplicationConfigurationDescription() = default;
    AWS_EFS_API ReplicationConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API ReplicationConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the source Amazon EFS file system that is being replicated.</p>
     */
    inline const Aws::String& GetSourceFileSystemId() const { return m_sourceFileSystemId; }
    inline bool SourceFileSystemIdHasBeenSet() const { return m_sourceFileSystemIdHasBeenSet; }
    template<typename SourceFileSystemIdT = Aws::String>
    void SetSourceFileSystemId(SourceFileSystemIdT&& value) { m_sourceFileSystemIdHasBeenSet = true; m_sourceFileSystemId = std::forward<SourceFileSystemIdT>(value); }
    template<typename SourceFileSystemIdT = Aws::String>
    ReplicationConfigurationDescription& WithSourceFileSystemId(SourceFileSystemIdT&& value) { SetSourceFileSystemId(std::forward<SourceFileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region in which the source EFS file system is
     * located.</p>
     */
    inline const Aws::String& GetSourceFileSystemRegion() const { return m_sourceFileSystemRegion; }
    inline bool SourceFileSystemRegionHasBeenSet() const { return m_sourceFileSystemRegionHasBeenSet; }
    template<typename SourceFileSystemRegionT = Aws::String>
    void SetSourceFileSystemRegion(SourceFileSystemRegionT&& value) { m_sourceFileSystemRegionHasBeenSet = true; m_sourceFileSystemRegion = std::forward<SourceFileSystemRegionT>(value); }
    template<typename SourceFileSystemRegionT = Aws::String>
    ReplicationConfigurationDescription& WithSourceFileSystemRegion(SourceFileSystemRegionT&& value) { SetSourceFileSystemRegion(std::forward<SourceFileSystemRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the current source file system in the
     * replication configuration.</p>
     */
    inline const Aws::String& GetSourceFileSystemArn() const { return m_sourceFileSystemArn; }
    inline bool SourceFileSystemArnHasBeenSet() const { return m_sourceFileSystemArnHasBeenSet; }
    template<typename SourceFileSystemArnT = Aws::String>
    void SetSourceFileSystemArn(SourceFileSystemArnT&& value) { m_sourceFileSystemArnHasBeenSet = true; m_sourceFileSystemArn = std::forward<SourceFileSystemArnT>(value); }
    template<typename SourceFileSystemArnT = Aws::String>
    ReplicationConfigurationDescription& WithSourceFileSystemArn(SourceFileSystemArnT&& value) { SetSourceFileSystemArn(std::forward<SourceFileSystemArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the original source EFS file system in the
     * replication configuration.</p>
     */
    inline const Aws::String& GetOriginalSourceFileSystemArn() const { return m_originalSourceFileSystemArn; }
    inline bool OriginalSourceFileSystemArnHasBeenSet() const { return m_originalSourceFileSystemArnHasBeenSet; }
    template<typename OriginalSourceFileSystemArnT = Aws::String>
    void SetOriginalSourceFileSystemArn(OriginalSourceFileSystemArnT&& value) { m_originalSourceFileSystemArnHasBeenSet = true; m_originalSourceFileSystemArn = std::forward<OriginalSourceFileSystemArnT>(value); }
    template<typename OriginalSourceFileSystemArnT = Aws::String>
    ReplicationConfigurationDescription& WithOriginalSourceFileSystemArn(OriginalSourceFileSystemArnT&& value) { SetOriginalSourceFileSystemArn(std::forward<OriginalSourceFileSystemArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes when the replication configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ReplicationConfigurationDescription& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of destination objects. Only one destination object is
     * supported.</p>
     */
    inline const Aws::Vector<Destination>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<Destination>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<Destination>>
    ReplicationConfigurationDescription& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = Destination>
    ReplicationConfigurationDescription& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>ID of the Amazon Web Services account in which the source file system
     * resides.</p>
     */
    inline const Aws::String& GetSourceFileSystemOwnerId() const { return m_sourceFileSystemOwnerId; }
    inline bool SourceFileSystemOwnerIdHasBeenSet() const { return m_sourceFileSystemOwnerIdHasBeenSet; }
    template<typename SourceFileSystemOwnerIdT = Aws::String>
    void SetSourceFileSystemOwnerId(SourceFileSystemOwnerIdT&& value) { m_sourceFileSystemOwnerIdHasBeenSet = true; m_sourceFileSystemOwnerId = std::forward<SourceFileSystemOwnerIdT>(value); }
    template<typename SourceFileSystemOwnerIdT = Aws::String>
    ReplicationConfigurationDescription& WithSourceFileSystemOwnerId(SourceFileSystemOwnerIdT&& value) { SetSourceFileSystemOwnerId(std::forward<SourceFileSystemOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ReplicationConfigurationDescription& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceFileSystemId;
    bool m_sourceFileSystemIdHasBeenSet = false;

    Aws::String m_sourceFileSystemRegion;
    bool m_sourceFileSystemRegionHasBeenSet = false;

    Aws::String m_sourceFileSystemArn;
    bool m_sourceFileSystemArnHasBeenSet = false;

    Aws::String m_originalSourceFileSystemArn;
    bool m_originalSourceFileSystemArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<Destination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::String m_sourceFileSystemOwnerId;
    bool m_sourceFileSystemOwnerIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
