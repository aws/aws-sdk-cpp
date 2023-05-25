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
    AWS_EFS_API CreateReplicationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationConfiguration"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the Amazon EFS file system that you want to replicate. This file
     * system cannot already be a source or destination file system in another
     * replication configuration.</p>
     */
    inline const Aws::String& GetSourceFileSystemId() const{ return m_sourceFileSystemId; }

    /**
     * <p>Specifies the Amazon EFS file system that you want to replicate. This file
     * system cannot already be a source or destination file system in another
     * replication configuration.</p>
     */
    inline bool SourceFileSystemIdHasBeenSet() const { return m_sourceFileSystemIdHasBeenSet; }

    /**
     * <p>Specifies the Amazon EFS file system that you want to replicate. This file
     * system cannot already be a source or destination file system in another
     * replication configuration.</p>
     */
    inline void SetSourceFileSystemId(const Aws::String& value) { m_sourceFileSystemIdHasBeenSet = true; m_sourceFileSystemId = value; }

    /**
     * <p>Specifies the Amazon EFS file system that you want to replicate. This file
     * system cannot already be a source or destination file system in another
     * replication configuration.</p>
     */
    inline void SetSourceFileSystemId(Aws::String&& value) { m_sourceFileSystemIdHasBeenSet = true; m_sourceFileSystemId = std::move(value); }

    /**
     * <p>Specifies the Amazon EFS file system that you want to replicate. This file
     * system cannot already be a source or destination file system in another
     * replication configuration.</p>
     */
    inline void SetSourceFileSystemId(const char* value) { m_sourceFileSystemIdHasBeenSet = true; m_sourceFileSystemId.assign(value); }

    /**
     * <p>Specifies the Amazon EFS file system that you want to replicate. This file
     * system cannot already be a source or destination file system in another
     * replication configuration.</p>
     */
    inline CreateReplicationConfigurationRequest& WithSourceFileSystemId(const Aws::String& value) { SetSourceFileSystemId(value); return *this;}

    /**
     * <p>Specifies the Amazon EFS file system that you want to replicate. This file
     * system cannot already be a source or destination file system in another
     * replication configuration.</p>
     */
    inline CreateReplicationConfigurationRequest& WithSourceFileSystemId(Aws::String&& value) { SetSourceFileSystemId(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon EFS file system that you want to replicate. This file
     * system cannot already be a source or destination file system in another
     * replication configuration.</p>
     */
    inline CreateReplicationConfigurationRequest& WithSourceFileSystemId(const char* value) { SetSourceFileSystemId(value); return *this;}


    /**
     * <p>An array of destination configuration objects. Only one destination
     * configuration object is supported.</p>
     */
    inline const Aws::Vector<DestinationToCreate>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>An array of destination configuration objects. Only one destination
     * configuration object is supported.</p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>An array of destination configuration objects. Only one destination
     * configuration object is supported.</p>
     */
    inline void SetDestinations(const Aws::Vector<DestinationToCreate>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>An array of destination configuration objects. Only one destination
     * configuration object is supported.</p>
     */
    inline void SetDestinations(Aws::Vector<DestinationToCreate>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>An array of destination configuration objects. Only one destination
     * configuration object is supported.</p>
     */
    inline CreateReplicationConfigurationRequest& WithDestinations(const Aws::Vector<DestinationToCreate>& value) { SetDestinations(value); return *this;}

    /**
     * <p>An array of destination configuration objects. Only one destination
     * configuration object is supported.</p>
     */
    inline CreateReplicationConfigurationRequest& WithDestinations(Aws::Vector<DestinationToCreate>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>An array of destination configuration objects. Only one destination
     * configuration object is supported.</p>
     */
    inline CreateReplicationConfigurationRequest& AddDestinations(const DestinationToCreate& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>An array of destination configuration objects. Only one destination
     * configuration object is supported.</p>
     */
    inline CreateReplicationConfigurationRequest& AddDestinations(DestinationToCreate&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sourceFileSystemId;
    bool m_sourceFileSystemIdHasBeenSet = false;

    Aws::Vector<DestinationToCreate> m_destinations;
    bool m_destinationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
