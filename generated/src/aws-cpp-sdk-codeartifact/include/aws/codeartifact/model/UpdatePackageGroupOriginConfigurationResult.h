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
    AWS_CODEARTIFACT_API UpdatePackageGroupOriginConfigurationResult() = default;
    AWS_CODEARTIFACT_API UpdatePackageGroupOriginConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API UpdatePackageGroupOriginConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The package group and information about it after processing the request.
     * </p>
     */
    inline const PackageGroupDescription& GetPackageGroup() const { return m_packageGroup; }
    template<typename PackageGroupT = PackageGroupDescription>
    void SetPackageGroup(PackageGroupT&& value) { m_packageGroupHasBeenSet = true; m_packageGroup = std::forward<PackageGroupT>(value); }
    template<typename PackageGroupT = PackageGroupDescription>
    UpdatePackageGroupOriginConfigurationResult& WithPackageGroup(PackageGroupT&& value) { SetPackageGroup(std::forward<PackageGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the updated allowed repositories after processing the
     * request.</p>
     */
    inline const Aws::Map<PackageGroupOriginRestrictionType, Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>>>& GetAllowedRepositoryUpdates() const { return m_allowedRepositoryUpdates; }
    template<typename AllowedRepositoryUpdatesT = Aws::Map<PackageGroupOriginRestrictionType, Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>>>>
    void SetAllowedRepositoryUpdates(AllowedRepositoryUpdatesT&& value) { m_allowedRepositoryUpdatesHasBeenSet = true; m_allowedRepositoryUpdates = std::forward<AllowedRepositoryUpdatesT>(value); }
    template<typename AllowedRepositoryUpdatesT = Aws::Map<PackageGroupOriginRestrictionType, Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>>>>
    UpdatePackageGroupOriginConfigurationResult& WithAllowedRepositoryUpdates(AllowedRepositoryUpdatesT&& value) { SetAllowedRepositoryUpdates(std::forward<AllowedRepositoryUpdatesT>(value)); return *this;}
    inline UpdatePackageGroupOriginConfigurationResult& AddAllowedRepositoryUpdates(PackageGroupOriginRestrictionType key, Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>> value) {
      m_allowedRepositoryUpdatesHasBeenSet = true; m_allowedRepositoryUpdates.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdatePackageGroupOriginConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PackageGroupDescription m_packageGroup;
    bool m_packageGroupHasBeenSet = false;

    Aws::Map<PackageGroupOriginRestrictionType, Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>>> m_allowedRepositoryUpdates;
    bool m_allowedRepositoryUpdatesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
