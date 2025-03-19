/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticfilesystem/model/DestinationToCreate.h>
#include <utility>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class CreateReplicationConfigurationRequest : public EFSRequest
  {
  public:
    AWS_EFS_API CreateReplicationConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationConfiguration"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the Amazon EFS file system that you want to replicate. This file
     * system cannot already be a source or destination file system in another
     * replication configuration.</p>
     */
    inline const Aws::String& GetSourceFileSystemId() const { return m_sourceFileSystemId; }
    inline bool SourceFileSystemIdHasBeenSet() const { return m_sourceFileSystemIdHasBeenSet; }
    template<typename SourceFileSystemIdT = Aws::String>
    void SetSourceFileSystemId(SourceFileSystemIdT&& value) { m_sourceFileSystemIdHasBeenSet = true; m_sourceFileSystemId = std::forward<SourceFileSystemIdT>(value); }
    template<typename SourceFileSystemIdT = Aws::String>
    CreateReplicationConfigurationRequest& WithSourceFileSystemId(SourceFileSystemIdT&& value) { SetSourceFileSystemId(std::forward<SourceFileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of destination configuration objects. Only one destination
     * configuration object is supported.</p>
     */
    inline const Aws::Vector<DestinationToCreate>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<DestinationToCreate>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<DestinationToCreate>>
    CreateReplicationConfigurationRequest& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = DestinationToCreate>
    CreateReplicationConfigurationRequest& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceFileSystemId;
    bool m_sourceFileSystemIdHasBeenSet = false;

    Aws::Vector<DestinationToCreate> m_destinations;
    bool m_destinationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
