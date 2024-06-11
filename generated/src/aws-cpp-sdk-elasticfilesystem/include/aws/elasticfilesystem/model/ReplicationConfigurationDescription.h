﻿/**
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
    AWS_EFS_API ReplicationConfigurationDescription();
    AWS_EFS_API ReplicationConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API ReplicationConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the source Amazon EFS file system that is being replicated.</p>
     */
    inline const Aws::String& GetSourceFileSystemId() const{ return m_sourceFileSystemId; }
    inline bool SourceFileSystemIdHasBeenSet() const { return m_sourceFileSystemIdHasBeenSet; }
    inline void SetSourceFileSystemId(const Aws::String& value) { m_sourceFileSystemIdHasBeenSet = true; m_sourceFileSystemId = value; }
    inline void SetSourceFileSystemId(Aws::String&& value) { m_sourceFileSystemIdHasBeenSet = true; m_sourceFileSystemId = std::move(value); }
    inline void SetSourceFileSystemId(const char* value) { m_sourceFileSystemIdHasBeenSet = true; m_sourceFileSystemId.assign(value); }
    inline ReplicationConfigurationDescription& WithSourceFileSystemId(const Aws::String& value) { SetSourceFileSystemId(value); return *this;}
    inline ReplicationConfigurationDescription& WithSourceFileSystemId(Aws::String&& value) { SetSourceFileSystemId(std::move(value)); return *this;}
    inline ReplicationConfigurationDescription& WithSourceFileSystemId(const char* value) { SetSourceFileSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region in which the source EFS file system is
     * located.</p>
     */
    inline const Aws::String& GetSourceFileSystemRegion() const{ return m_sourceFileSystemRegion; }
    inline bool SourceFileSystemRegionHasBeenSet() const { return m_sourceFileSystemRegionHasBeenSet; }
    inline void SetSourceFileSystemRegion(const Aws::String& value) { m_sourceFileSystemRegionHasBeenSet = true; m_sourceFileSystemRegion = value; }
    inline void SetSourceFileSystemRegion(Aws::String&& value) { m_sourceFileSystemRegionHasBeenSet = true; m_sourceFileSystemRegion = std::move(value); }
    inline void SetSourceFileSystemRegion(const char* value) { m_sourceFileSystemRegionHasBeenSet = true; m_sourceFileSystemRegion.assign(value); }
    inline ReplicationConfigurationDescription& WithSourceFileSystemRegion(const Aws::String& value) { SetSourceFileSystemRegion(value); return *this;}
    inline ReplicationConfigurationDescription& WithSourceFileSystemRegion(Aws::String&& value) { SetSourceFileSystemRegion(std::move(value)); return *this;}
    inline ReplicationConfigurationDescription& WithSourceFileSystemRegion(const char* value) { SetSourceFileSystemRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the current source file system in the
     * replication configuration.</p>
     */
    inline const Aws::String& GetSourceFileSystemArn() const{ return m_sourceFileSystemArn; }
    inline bool SourceFileSystemArnHasBeenSet() const { return m_sourceFileSystemArnHasBeenSet; }
    inline void SetSourceFileSystemArn(const Aws::String& value) { m_sourceFileSystemArnHasBeenSet = true; m_sourceFileSystemArn = value; }
    inline void SetSourceFileSystemArn(Aws::String&& value) { m_sourceFileSystemArnHasBeenSet = true; m_sourceFileSystemArn = std::move(value); }
    inline void SetSourceFileSystemArn(const char* value) { m_sourceFileSystemArnHasBeenSet = true; m_sourceFileSystemArn.assign(value); }
    inline ReplicationConfigurationDescription& WithSourceFileSystemArn(const Aws::String& value) { SetSourceFileSystemArn(value); return *this;}
    inline ReplicationConfigurationDescription& WithSourceFileSystemArn(Aws::String&& value) { SetSourceFileSystemArn(std::move(value)); return *this;}
    inline ReplicationConfigurationDescription& WithSourceFileSystemArn(const char* value) { SetSourceFileSystemArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the original source EFS file system in the
     * replication configuration.</p>
     */
    inline const Aws::String& GetOriginalSourceFileSystemArn() const{ return m_originalSourceFileSystemArn; }
    inline bool OriginalSourceFileSystemArnHasBeenSet() const { return m_originalSourceFileSystemArnHasBeenSet; }
    inline void SetOriginalSourceFileSystemArn(const Aws::String& value) { m_originalSourceFileSystemArnHasBeenSet = true; m_originalSourceFileSystemArn = value; }
    inline void SetOriginalSourceFileSystemArn(Aws::String&& value) { m_originalSourceFileSystemArnHasBeenSet = true; m_originalSourceFileSystemArn = std::move(value); }
    inline void SetOriginalSourceFileSystemArn(const char* value) { m_originalSourceFileSystemArnHasBeenSet = true; m_originalSourceFileSystemArn.assign(value); }
    inline ReplicationConfigurationDescription& WithOriginalSourceFileSystemArn(const Aws::String& value) { SetOriginalSourceFileSystemArn(value); return *this;}
    inline ReplicationConfigurationDescription& WithOriginalSourceFileSystemArn(Aws::String&& value) { SetOriginalSourceFileSystemArn(std::move(value)); return *this;}
    inline ReplicationConfigurationDescription& WithOriginalSourceFileSystemArn(const char* value) { SetOriginalSourceFileSystemArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes when the replication configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ReplicationConfigurationDescription& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ReplicationConfigurationDescription& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of destination objects. Only one destination object is
     * supported.</p>
     */
    inline const Aws::Vector<Destination>& GetDestinations() const{ return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    inline void SetDestinations(const Aws::Vector<Destination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }
    inline void SetDestinations(Aws::Vector<Destination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }
    inline ReplicationConfigurationDescription& WithDestinations(const Aws::Vector<Destination>& value) { SetDestinations(value); return *this;}
    inline ReplicationConfigurationDescription& WithDestinations(Aws::Vector<Destination>&& value) { SetDestinations(std::move(value)); return *this;}
    inline ReplicationConfigurationDescription& AddDestinations(const Destination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    inline ReplicationConfigurationDescription& AddDestinations(Destination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline ReplicationConfigurationDescription& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ReplicationConfigurationDescription& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ReplicationConfigurationDescription& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<Destination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
