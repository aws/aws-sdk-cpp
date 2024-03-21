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
    AWS_CODEARTIFACT_API PackageGroupAllowedRepository();
    AWS_CODEARTIFACT_API PackageGroupAllowedRepository(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageGroupAllowedRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the allowed repository. </p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p> The name of the allowed repository. </p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p> The name of the allowed repository. </p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p> The name of the allowed repository. </p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p> The name of the allowed repository. </p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p> The name of the allowed repository. </p>
     */
    inline PackageGroupAllowedRepository& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p> The name of the allowed repository. </p>
     */
    inline PackageGroupAllowedRepository& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p> The name of the allowed repository. </p>
     */
    inline PackageGroupAllowedRepository& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The origin configuration restriction type of the allowed repository.</p>
     */
    inline const PackageGroupOriginRestrictionType& GetOriginRestrictionType() const{ return m_originRestrictionType; }

    /**
     * <p>The origin configuration restriction type of the allowed repository.</p>
     */
    inline bool OriginRestrictionTypeHasBeenSet() const { return m_originRestrictionTypeHasBeenSet; }

    /**
     * <p>The origin configuration restriction type of the allowed repository.</p>
     */
    inline void SetOriginRestrictionType(const PackageGroupOriginRestrictionType& value) { m_originRestrictionTypeHasBeenSet = true; m_originRestrictionType = value; }

    /**
     * <p>The origin configuration restriction type of the allowed repository.</p>
     */
    inline void SetOriginRestrictionType(PackageGroupOriginRestrictionType&& value) { m_originRestrictionTypeHasBeenSet = true; m_originRestrictionType = std::move(value); }

    /**
     * <p>The origin configuration restriction type of the allowed repository.</p>
     */
    inline PackageGroupAllowedRepository& WithOriginRestrictionType(const PackageGroupOriginRestrictionType& value) { SetOriginRestrictionType(value); return *this;}

    /**
     * <p>The origin configuration restriction type of the allowed repository.</p>
     */
    inline PackageGroupAllowedRepository& WithOriginRestrictionType(PackageGroupOriginRestrictionType&& value) { SetOriginRestrictionType(std::move(value)); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    PackageGroupOriginRestrictionType m_originRestrictionType;
    bool m_originRestrictionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
