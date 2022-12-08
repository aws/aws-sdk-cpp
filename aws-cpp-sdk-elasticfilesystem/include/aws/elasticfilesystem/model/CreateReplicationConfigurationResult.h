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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EFS
{
namespace Model
{
  class CreateReplicationConfigurationResult
  {
  public:
    AWS_EFS_API CreateReplicationConfigurationResult();
    AWS_EFS_API CreateReplicationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API CreateReplicationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the source Amazon EFS file system that is being replicated.</p>
     */
    inline const Aws::String& GetSourceFileSystemId() const{ return m_sourceFileSystemId; }

    /**
     * <p>The ID of the source Amazon EFS file system that is being replicated.</p>
     */
    inline void SetSourceFileSystemId(const Aws::String& value) { m_sourceFileSystemId = value; }

    /**
     * <p>The ID of the source Amazon EFS file system that is being replicated.</p>
     */
    inline void SetSourceFileSystemId(Aws::String&& value) { m_sourceFileSystemId = std::move(value); }

    /**
     * <p>The ID of the source Amazon EFS file system that is being replicated.</p>
     */
    inline void SetSourceFileSystemId(const char* value) { m_sourceFileSystemId.assign(value); }

    /**
     * <p>The ID of the source Amazon EFS file system that is being replicated.</p>
     */
    inline CreateReplicationConfigurationResult& WithSourceFileSystemId(const Aws::String& value) { SetSourceFileSystemId(value); return *this;}

    /**
     * <p>The ID of the source Amazon EFS file system that is being replicated.</p>
     */
    inline CreateReplicationConfigurationResult& WithSourceFileSystemId(Aws::String&& value) { SetSourceFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the source Amazon EFS file system that is being replicated.</p>
     */
    inline CreateReplicationConfigurationResult& WithSourceFileSystemId(const char* value) { SetSourceFileSystemId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region in which the source Amazon EFS file system is
     * located.</p>
     */
    inline const Aws::String& GetSourceFileSystemRegion() const{ return m_sourceFileSystemRegion; }

    /**
     * <p>The Amazon Web Services Region in which the source Amazon EFS file system is
     * located.</p>
     */
    inline void SetSourceFileSystemRegion(const Aws::String& value) { m_sourceFileSystemRegion = value; }

    /**
     * <p>The Amazon Web Services Region in which the source Amazon EFS file system is
     * located.</p>
     */
    inline void SetSourceFileSystemRegion(Aws::String&& value) { m_sourceFileSystemRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region in which the source Amazon EFS file system is
     * located.</p>
     */
    inline void SetSourceFileSystemRegion(const char* value) { m_sourceFileSystemRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region in which the source Amazon EFS file system is
     * located.</p>
     */
    inline CreateReplicationConfigurationResult& WithSourceFileSystemRegion(const Aws::String& value) { SetSourceFileSystemRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region in which the source Amazon EFS file system is
     * located.</p>
     */
    inline CreateReplicationConfigurationResult& WithSourceFileSystemRegion(Aws::String&& value) { SetSourceFileSystemRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region in which the source Amazon EFS file system is
     * located.</p>
     */
    inline CreateReplicationConfigurationResult& WithSourceFileSystemRegion(const char* value) { SetSourceFileSystemRegion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the current source file system in the
     * replication configuration.</p>
     */
    inline const Aws::String& GetSourceFileSystemArn() const{ return m_sourceFileSystemArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the current source file system in the
     * replication configuration.</p>
     */
    inline void SetSourceFileSystemArn(const Aws::String& value) { m_sourceFileSystemArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the current source file system in the
     * replication configuration.</p>
     */
    inline void SetSourceFileSystemArn(Aws::String&& value) { m_sourceFileSystemArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the current source file system in the
     * replication configuration.</p>
     */
    inline void SetSourceFileSystemArn(const char* value) { m_sourceFileSystemArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the current source file system in the
     * replication configuration.</p>
     */
    inline CreateReplicationConfigurationResult& WithSourceFileSystemArn(const Aws::String& value) { SetSourceFileSystemArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the current source file system in the
     * replication configuration.</p>
     */
    inline CreateReplicationConfigurationResult& WithSourceFileSystemArn(Aws::String&& value) { SetSourceFileSystemArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the current source file system in the
     * replication configuration.</p>
     */
    inline CreateReplicationConfigurationResult& WithSourceFileSystemArn(const char* value) { SetSourceFileSystemArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the original source Amazon EFS file system
     * in the replication configuration.</p>
     */
    inline const Aws::String& GetOriginalSourceFileSystemArn() const{ return m_originalSourceFileSystemArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the original source Amazon EFS file system
     * in the replication configuration.</p>
     */
    inline void SetOriginalSourceFileSystemArn(const Aws::String& value) { m_originalSourceFileSystemArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the original source Amazon EFS file system
     * in the replication configuration.</p>
     */
    inline void SetOriginalSourceFileSystemArn(Aws::String&& value) { m_originalSourceFileSystemArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the original source Amazon EFS file system
     * in the replication configuration.</p>
     */
    inline void SetOriginalSourceFileSystemArn(const char* value) { m_originalSourceFileSystemArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the original source Amazon EFS file system
     * in the replication configuration.</p>
     */
    inline CreateReplicationConfigurationResult& WithOriginalSourceFileSystemArn(const Aws::String& value) { SetOriginalSourceFileSystemArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the original source Amazon EFS file system
     * in the replication configuration.</p>
     */
    inline CreateReplicationConfigurationResult& WithOriginalSourceFileSystemArn(Aws::String&& value) { SetOriginalSourceFileSystemArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the original source Amazon EFS file system
     * in the replication configuration.</p>
     */
    inline CreateReplicationConfigurationResult& WithOriginalSourceFileSystemArn(const char* value) { SetOriginalSourceFileSystemArn(value); return *this;}


    /**
     * <p>Describes when the replication configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Describes when the replication configuration was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>Describes when the replication configuration was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>Describes when the replication configuration was created.</p>
     */
    inline CreateReplicationConfigurationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Describes when the replication configuration was created.</p>
     */
    inline CreateReplicationConfigurationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>An array of destination objects. Only one destination object is
     * supported.</p>
     */
    inline const Aws::Vector<Destination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>An array of destination objects. Only one destination object is
     * supported.</p>
     */
    inline void SetDestinations(const Aws::Vector<Destination>& value) { m_destinations = value; }

    /**
     * <p>An array of destination objects. Only one destination object is
     * supported.</p>
     */
    inline void SetDestinations(Aws::Vector<Destination>&& value) { m_destinations = std::move(value); }

    /**
     * <p>An array of destination objects. Only one destination object is
     * supported.</p>
     */
    inline CreateReplicationConfigurationResult& WithDestinations(const Aws::Vector<Destination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>An array of destination objects. Only one destination object is
     * supported.</p>
     */
    inline CreateReplicationConfigurationResult& WithDestinations(Aws::Vector<Destination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>An array of destination objects. Only one destination object is
     * supported.</p>
     */
    inline CreateReplicationConfigurationResult& AddDestinations(const Destination& value) { m_destinations.push_back(value); return *this; }

    /**
     * <p>An array of destination objects. Only one destination object is
     * supported.</p>
     */
    inline CreateReplicationConfigurationResult& AddDestinations(Destination&& value) { m_destinations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sourceFileSystemId;

    Aws::String m_sourceFileSystemRegion;

    Aws::String m_sourceFileSystemArn;

    Aws::String m_originalSourceFileSystemArn;

    Aws::Utils::DateTime m_creationTime;

    Aws::Vector<Destination> m_destinations;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
