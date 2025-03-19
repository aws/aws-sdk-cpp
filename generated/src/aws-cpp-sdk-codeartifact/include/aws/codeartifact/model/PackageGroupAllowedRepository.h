/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageGroupOriginRestrictionType.h>
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
namespace CodeArtifact
{
namespace Model
{

  /**
   * <p> Details about an allowed repository for a package group, including its name
   * and origin configuration. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageGroupAllowedRepository">AWS
   * API Reference</a></p>
   */
  class PackageGroupAllowedRepository
  {
  public:
    AWS_CODEARTIFACT_API PackageGroupAllowedRepository() = default;
    AWS_CODEARTIFACT_API PackageGroupAllowedRepository(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageGroupAllowedRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the allowed repository. </p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    PackageGroupAllowedRepository& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin configuration restriction type of the allowed repository.</p>
     */
    inline PackageGroupOriginRestrictionType GetOriginRestrictionType() const { return m_originRestrictionType; }
    inline bool OriginRestrictionTypeHasBeenSet() const { return m_originRestrictionTypeHasBeenSet; }
    inline void SetOriginRestrictionType(PackageGroupOriginRestrictionType value) { m_originRestrictionTypeHasBeenSet = true; m_originRestrictionType = value; }
    inline PackageGroupAllowedRepository& WithOriginRestrictionType(PackageGroupOriginRestrictionType value) { SetOriginRestrictionType(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    PackageGroupOriginRestrictionType m_originRestrictionType{PackageGroupOriginRestrictionType::NOT_SET};
    bool m_originRestrictionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
