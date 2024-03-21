/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageGroupOriginRestrictionMode.h>
#include <aws/codeartifact/model/PackageGroupReference.h>
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
   * <p>Contains information about the configured restrictions of the origin controls
   * of a package group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageGroupOriginRestriction">AWS
   * API Reference</a></p>
   */
  class PackageGroupOriginRestriction
  {
  public:
    AWS_CODEARTIFACT_API PackageGroupOriginRestriction();
    AWS_CODEARTIFACT_API PackageGroupOriginRestriction(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageGroupOriginRestriction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The package group origin restriction setting. If the value of
     * <code>mode</code> is <code>ALLOW</code>,
     * <code>ALLOW_SPECIFIC_REPOSITORIES</code>, or <code>BLOCK</code>, then the value
     * of <code>effectiveMode</code> is the same. Otherwise, when the value is
     * <code>INHERIT</code>, then the value of <code>effectiveMode</code> is the value
     * of <code>mode</code> of the first parent group which does not have a value of
     * <code>INHERIT</code>.</p>
     */
    inline const PackageGroupOriginRestrictionMode& GetMode() const{ return m_mode; }

    /**
     * <p>The package group origin restriction setting. If the value of
     * <code>mode</code> is <code>ALLOW</code>,
     * <code>ALLOW_SPECIFIC_REPOSITORIES</code>, or <code>BLOCK</code>, then the value
     * of <code>effectiveMode</code> is the same. Otherwise, when the value is
     * <code>INHERIT</code>, then the value of <code>effectiveMode</code> is the value
     * of <code>mode</code> of the first parent group which does not have a value of
     * <code>INHERIT</code>.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The package group origin restriction setting. If the value of
     * <code>mode</code> is <code>ALLOW</code>,
     * <code>ALLOW_SPECIFIC_REPOSITORIES</code>, or <code>BLOCK</code>, then the value
     * of <code>effectiveMode</code> is the same. Otherwise, when the value is
     * <code>INHERIT</code>, then the value of <code>effectiveMode</code> is the value
     * of <code>mode</code> of the first parent group which does not have a value of
     * <code>INHERIT</code>.</p>
     */
    inline void SetMode(const PackageGroupOriginRestrictionMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The package group origin restriction setting. If the value of
     * <code>mode</code> is <code>ALLOW</code>,
     * <code>ALLOW_SPECIFIC_REPOSITORIES</code>, or <code>BLOCK</code>, then the value
     * of <code>effectiveMode</code> is the same. Otherwise, when the value is
     * <code>INHERIT</code>, then the value of <code>effectiveMode</code> is the value
     * of <code>mode</code> of the first parent group which does not have a value of
     * <code>INHERIT</code>.</p>
     */
    inline void SetMode(PackageGroupOriginRestrictionMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The package group origin restriction setting. If the value of
     * <code>mode</code> is <code>ALLOW</code>,
     * <code>ALLOW_SPECIFIC_REPOSITORIES</code>, or <code>BLOCK</code>, then the value
     * of <code>effectiveMode</code> is the same. Otherwise, when the value is
     * <code>INHERIT</code>, then the value of <code>effectiveMode</code> is the value
     * of <code>mode</code> of the first parent group which does not have a value of
     * <code>INHERIT</code>.</p>
     */
    inline PackageGroupOriginRestriction& WithMode(const PackageGroupOriginRestrictionMode& value) { SetMode(value); return *this;}

    /**
     * <p>The package group origin restriction setting. If the value of
     * <code>mode</code> is <code>ALLOW</code>,
     * <code>ALLOW_SPECIFIC_REPOSITORIES</code>, or <code>BLOCK</code>, then the value
     * of <code>effectiveMode</code> is the same. Otherwise, when the value is
     * <code>INHERIT</code>, then the value of <code>effectiveMode</code> is the value
     * of <code>mode</code> of the first parent group which does not have a value of
     * <code>INHERIT</code>.</p>
     */
    inline PackageGroupOriginRestriction& WithMode(PackageGroupOriginRestrictionMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The effective package group origin restriction setting. If the value of
     * <code>mode</code> is <code>ALLOW</code>,
     * <code>ALLOW_SPECIFIC_REPOSITORIES</code>, or <code>BLOCK</code>, then the value
     * of <code>effectiveMode</code> is the same. Otherwise, when the value of
     * <code>mode</code> is <code>INHERIT</code>, then the value of
     * <code>effectiveMode</code> is the value of <code>mode</code> of the first parent
     * group which does not have a value of <code>INHERIT</code>.</p>
     */
    inline const PackageGroupOriginRestrictionMode& GetEffectiveMode() const{ return m_effectiveMode; }

    /**
     * <p>The effective package group origin restriction setting. If the value of
     * <code>mode</code> is <code>ALLOW</code>,
     * <code>ALLOW_SPECIFIC_REPOSITORIES</code>, or <code>BLOCK</code>, then the value
     * of <code>effectiveMode</code> is the same. Otherwise, when the value of
     * <code>mode</code> is <code>INHERIT</code>, then the value of
     * <code>effectiveMode</code> is the value of <code>mode</code> of the first parent
     * group which does not have a value of <code>INHERIT</code>.</p>
     */
    inline bool EffectiveModeHasBeenSet() const { return m_effectiveModeHasBeenSet; }

    /**
     * <p>The effective package group origin restriction setting. If the value of
     * <code>mode</code> is <code>ALLOW</code>,
     * <code>ALLOW_SPECIFIC_REPOSITORIES</code>, or <code>BLOCK</code>, then the value
     * of <code>effectiveMode</code> is the same. Otherwise, when the value of
     * <code>mode</code> is <code>INHERIT</code>, then the value of
     * <code>effectiveMode</code> is the value of <code>mode</code> of the first parent
     * group which does not have a value of <code>INHERIT</code>.</p>
     */
    inline void SetEffectiveMode(const PackageGroupOriginRestrictionMode& value) { m_effectiveModeHasBeenSet = true; m_effectiveMode = value; }

    /**
     * <p>The effective package group origin restriction setting. If the value of
     * <code>mode</code> is <code>ALLOW</code>,
     * <code>ALLOW_SPECIFIC_REPOSITORIES</code>, or <code>BLOCK</code>, then the value
     * of <code>effectiveMode</code> is the same. Otherwise, when the value of
     * <code>mode</code> is <code>INHERIT</code>, then the value of
     * <code>effectiveMode</code> is the value of <code>mode</code> of the first parent
     * group which does not have a value of <code>INHERIT</code>.</p>
     */
    inline void SetEffectiveMode(PackageGroupOriginRestrictionMode&& value) { m_effectiveModeHasBeenSet = true; m_effectiveMode = std::move(value); }

    /**
     * <p>The effective package group origin restriction setting. If the value of
     * <code>mode</code> is <code>ALLOW</code>,
     * <code>ALLOW_SPECIFIC_REPOSITORIES</code>, or <code>BLOCK</code>, then the value
     * of <code>effectiveMode</code> is the same. Otherwise, when the value of
     * <code>mode</code> is <code>INHERIT</code>, then the value of
     * <code>effectiveMode</code> is the value of <code>mode</code> of the first parent
     * group which does not have a value of <code>INHERIT</code>.</p>
     */
    inline PackageGroupOriginRestriction& WithEffectiveMode(const PackageGroupOriginRestrictionMode& value) { SetEffectiveMode(value); return *this;}

    /**
     * <p>The effective package group origin restriction setting. If the value of
     * <code>mode</code> is <code>ALLOW</code>,
     * <code>ALLOW_SPECIFIC_REPOSITORIES</code>, or <code>BLOCK</code>, then the value
     * of <code>effectiveMode</code> is the same. Otherwise, when the value of
     * <code>mode</code> is <code>INHERIT</code>, then the value of
     * <code>effectiveMode</code> is the value of <code>mode</code> of the first parent
     * group which does not have a value of <code>INHERIT</code>.</p>
     */
    inline PackageGroupOriginRestriction& WithEffectiveMode(PackageGroupOriginRestrictionMode&& value) { SetEffectiveMode(std::move(value)); return *this;}


    /**
     * <p>The parent package group that the package group origin restrictions are
     * inherited from.</p>
     */
    inline const PackageGroupReference& GetInheritedFrom() const{ return m_inheritedFrom; }

    /**
     * <p>The parent package group that the package group origin restrictions are
     * inherited from.</p>
     */
    inline bool InheritedFromHasBeenSet() const { return m_inheritedFromHasBeenSet; }

    /**
     * <p>The parent package group that the package group origin restrictions are
     * inherited from.</p>
     */
    inline void SetInheritedFrom(const PackageGroupReference& value) { m_inheritedFromHasBeenSet = true; m_inheritedFrom = value; }

    /**
     * <p>The parent package group that the package group origin restrictions are
     * inherited from.</p>
     */
    inline void SetInheritedFrom(PackageGroupReference&& value) { m_inheritedFromHasBeenSet = true; m_inheritedFrom = std::move(value); }

    /**
     * <p>The parent package group that the package group origin restrictions are
     * inherited from.</p>
     */
    inline PackageGroupOriginRestriction& WithInheritedFrom(const PackageGroupReference& value) { SetInheritedFrom(value); return *this;}

    /**
     * <p>The parent package group that the package group origin restrictions are
     * inherited from.</p>
     */
    inline PackageGroupOriginRestriction& WithInheritedFrom(PackageGroupReference&& value) { SetInheritedFrom(std::move(value)); return *this;}


    /**
     * <p>The number of repositories in the allowed repository list.</p>
     */
    inline long long GetRepositoriesCount() const{ return m_repositoriesCount; }

    /**
     * <p>The number of repositories in the allowed repository list.</p>
     */
    inline bool RepositoriesCountHasBeenSet() const { return m_repositoriesCountHasBeenSet; }

    /**
     * <p>The number of repositories in the allowed repository list.</p>
     */
    inline void SetRepositoriesCount(long long value) { m_repositoriesCountHasBeenSet = true; m_repositoriesCount = value; }

    /**
     * <p>The number of repositories in the allowed repository list.</p>
     */
    inline PackageGroupOriginRestriction& WithRepositoriesCount(long long value) { SetRepositoriesCount(value); return *this;}

  private:

    PackageGroupOriginRestrictionMode m_mode;
    bool m_modeHasBeenSet = false;

    PackageGroupOriginRestrictionMode m_effectiveMode;
    bool m_effectiveModeHasBeenSet = false;

    PackageGroupReference m_inheritedFrom;
    bool m_inheritedFromHasBeenSet = false;

    long long m_repositoriesCount;
    bool m_repositoriesCountHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
