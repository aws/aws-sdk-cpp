/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageGroupDescription.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageGroupOriginRestrictionType.h>
#include <aws/codeartifact/model/PackageGroupAllowedRepositoryUpdateType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeArtifact
{
namespace Model
{
  class UpdatePackageGroupOriginConfigurationResult
  {
  public:
    AWS_CODEARTIFACT_API UpdatePackageGroupOriginConfigurationResult();
    AWS_CODEARTIFACT_API UpdatePackageGroupOriginConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API UpdatePackageGroupOriginConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The package group and information about it after processing the request.
     * </p>
     */
    inline const PackageGroupDescription& GetPackageGroup() const{ return m_packageGroup; }

    /**
     * <p> The package group and information about it after processing the request.
     * </p>
     */
    inline void SetPackageGroup(const PackageGroupDescription& value) { m_packageGroup = value; }

    /**
     * <p> The package group and information about it after processing the request.
     * </p>
     */
    inline void SetPackageGroup(PackageGroupDescription&& value) { m_packageGroup = std::move(value); }

    /**
     * <p> The package group and information about it after processing the request.
     * </p>
     */
    inline UpdatePackageGroupOriginConfigurationResult& WithPackageGroup(const PackageGroupDescription& value) { SetPackageGroup(value); return *this;}

    /**
     * <p> The package group and information about it after processing the request.
     * </p>
     */
    inline UpdatePackageGroupOriginConfigurationResult& WithPackageGroup(PackageGroupDescription&& value) { SetPackageGroup(std::move(value)); return *this;}


    /**
     * <p>Information about the updated allowed repositories after processing the
     * request.</p>
     */
    inline const Aws::Map<PackageGroupOriginRestrictionType, Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>>>& GetAllowedRepositoryUpdates() const{ return m_allowedRepositoryUpdates; }

    /**
     * <p>Information about the updated allowed repositories after processing the
     * request.</p>
     */
    inline void SetAllowedRepositoryUpdates(const Aws::Map<PackageGroupOriginRestrictionType, Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>>>& value) { m_allowedRepositoryUpdates = value; }

    /**
     * <p>Information about the updated allowed repositories after processing the
     * request.</p>
     */
    inline void SetAllowedRepositoryUpdates(Aws::Map<PackageGroupOriginRestrictionType, Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>>>&& value) { m_allowedRepositoryUpdates = std::move(value); }

    /**
     * <p>Information about the updated allowed repositories after processing the
     * request.</p>
     */
    inline UpdatePackageGroupOriginConfigurationResult& WithAllowedRepositoryUpdates(const Aws::Map<PackageGroupOriginRestrictionType, Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>>>& value) { SetAllowedRepositoryUpdates(value); return *this;}

    /**
     * <p>Information about the updated allowed repositories after processing the
     * request.</p>
     */
    inline UpdatePackageGroupOriginConfigurationResult& WithAllowedRepositoryUpdates(Aws::Map<PackageGroupOriginRestrictionType, Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>>>&& value) { SetAllowedRepositoryUpdates(std::move(value)); return *this;}

    /**
     * <p>Information about the updated allowed repositories after processing the
     * request.</p>
     */
    inline UpdatePackageGroupOriginConfigurationResult& AddAllowedRepositoryUpdates(const PackageGroupOriginRestrictionType& key, const Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>>& value) { m_allowedRepositoryUpdates.emplace(key, value); return *this; }

    /**
     * <p>Information about the updated allowed repositories after processing the
     * request.</p>
     */
    inline UpdatePackageGroupOriginConfigurationResult& AddAllowedRepositoryUpdates(PackageGroupOriginRestrictionType&& key, const Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>>& value) { m_allowedRepositoryUpdates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Information about the updated allowed repositories after processing the
     * request.</p>
     */
    inline UpdatePackageGroupOriginConfigurationResult& AddAllowedRepositoryUpdates(const PackageGroupOriginRestrictionType& key, Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>>&& value) { m_allowedRepositoryUpdates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information about the updated allowed repositories after processing the
     * request.</p>
     */
    inline UpdatePackageGroupOriginConfigurationResult& AddAllowedRepositoryUpdates(PackageGroupOriginRestrictionType&& key, Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>>&& value) { m_allowedRepositoryUpdates.emplace(std::move(key), std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdatePackageGroupOriginConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdatePackageGroupOriginConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdatePackageGroupOriginConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PackageGroupDescription m_packageGroup;

    Aws::Map<PackageGroupOriginRestrictionType, Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>>> m_allowedRepositoryUpdates;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
