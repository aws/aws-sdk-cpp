/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageGroupDescription.h>
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
  class CreatePackageGroupResult
  {
  public:
    AWS_CODEARTIFACT_API CreatePackageGroupResult() = default;
    AWS_CODEARTIFACT_API CreatePackageGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API CreatePackageGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Information about the created package group after processing the request.
     * </p>
     */
    inline const PackageGroupDescription& GetPackageGroup() const { return m_packageGroup; }
    template<typename PackageGroupT = PackageGroupDescription>
    void SetPackageGroup(PackageGroupT&& value) { m_packageGroupHasBeenSet = true; m_packageGroup = std::forward<PackageGroupT>(value); }
    template<typename PackageGroupT = PackageGroupDescription>
    CreatePackageGroupResult& WithPackageGroup(PackageGroupT&& value) { SetPackageGroup(std::forward<PackageGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePackageGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PackageGroupDescription m_packageGroup;
    bool m_packageGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
