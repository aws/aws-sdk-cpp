/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageGroupDescription.h>
#include <aws/codeartifact/model/PackageGroupAssociationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetAssociatedPackageGroupResult
  {
  public:
    AWS_CODEARTIFACT_API GetAssociatedPackageGroupResult() = default;
    AWS_CODEARTIFACT_API GetAssociatedPackageGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API GetAssociatedPackageGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The package group that is associated with the requested package.</p>
     */
    inline const PackageGroupDescription& GetPackageGroup() const { return m_packageGroup; }
    template<typename PackageGroupT = PackageGroupDescription>
    void SetPackageGroup(PackageGroupT&& value) { m_packageGroupHasBeenSet = true; m_packageGroup = std::forward<PackageGroupT>(value); }
    template<typename PackageGroupT = PackageGroupDescription>
    GetAssociatedPackageGroupResult& WithPackageGroup(PackageGroupT&& value) { SetPackageGroup(std::forward<PackageGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the strength of the association between the package and package
     * group. A strong match is also known as an exact match, and a weak match is known
     * as a relative match.</p>
     */
    inline PackageGroupAssociationType GetAssociationType() const { return m_associationType; }
    inline void SetAssociationType(PackageGroupAssociationType value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline GetAssociatedPackageGroupResult& WithAssociationType(PackageGroupAssociationType value) { SetAssociationType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAssociatedPackageGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PackageGroupDescription m_packageGroup;
    bool m_packageGroupHasBeenSet = false;

    PackageGroupAssociationType m_associationType{PackageGroupAssociationType::NOT_SET};
    bool m_associationTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
