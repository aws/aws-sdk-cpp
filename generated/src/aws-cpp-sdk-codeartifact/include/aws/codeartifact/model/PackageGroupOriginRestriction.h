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
    AWS_CODEARTIFACT_API PackageGroupOriginRestriction() = default;
    AWS_CODEARTIFACT_API PackageGroupOriginRestriction(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageGroupOriginRestriction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The package group origin restriction setting. If the value of
     * <code>mode</code> is <code>ALLOW</code>,
     * <code>ALLOW_SPECIFIC_REPOSITORIES</code>, or <code>BLOCK</code>, then the value
     * of <code>effectiveMode</code> is the same. Otherwise, when the value is
     * <code>INHERIT</code>, then the value of <code>effectiveMode</code> is the value
     * of <code>mode</code> of the first parent group which does not have a value of
     * <code>INHERIT</code>.</p>
     */
    inline PackageGroupOriginRestrictionMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(PackageGroupOriginRestrictionMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline PackageGroupOriginRestriction& WithMode(PackageGroupOriginRestrictionMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective package group origin restriction setting. If the value of
     * <code>mode</code> is <code>ALLOW</code>,
     * <code>ALLOW_SPECIFIC_REPOSITORIES</code>, or <code>BLOCK</code>, then the value
     * of <code>effectiveMode</code> is the same. Otherwise, when the value of
     * <code>mode</code> is <code>INHERIT</code>, then the value of
     * <code>effectiveMode</code> is the value of <code>mode</code> of the first parent
     * group which does not have a value of <code>INHERIT</code>.</p>
     */
    inline PackageGroupOriginRestrictionMode GetEffectiveMode() const { return m_effectiveMode; }
    inline bool EffectiveModeHasBeenSet() const { return m_effectiveModeHasBeenSet; }
    inline void SetEffectiveMode(PackageGroupOriginRestrictionMode value) { m_effectiveModeHasBeenSet = true; m_effectiveMode = value; }
    inline PackageGroupOriginRestriction& WithEffectiveMode(PackageGroupOriginRestrictionMode value) { SetEffectiveMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent package group that the package group origin restrictions are
     * inherited from.</p>
     */
    inline const PackageGroupReference& GetInheritedFrom() const { return m_inheritedFrom; }
    inline bool InheritedFromHasBeenSet() const { return m_inheritedFromHasBeenSet; }
    template<typename InheritedFromT = PackageGroupReference>
    void SetInheritedFrom(InheritedFromT&& value) { m_inheritedFromHasBeenSet = true; m_inheritedFrom = std::forward<InheritedFromT>(value); }
    template<typename InheritedFromT = PackageGroupReference>
    PackageGroupOriginRestriction& WithInheritedFrom(InheritedFromT&& value) { SetInheritedFrom(std::forward<InheritedFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of repositories in the allowed repository list.</p>
     */
    inline long long GetRepositoriesCount() const { return m_repositoriesCount; }
    inline bool RepositoriesCountHasBeenSet() const { return m_repositoriesCountHasBeenSet; }
    inline void SetRepositoriesCount(long long value) { m_repositoriesCountHasBeenSet = true; m_repositoriesCount = value; }
    inline PackageGroupOriginRestriction& WithRepositoriesCount(long long value) { SetRepositoriesCount(value); return *this;}
    ///@}
  private:

    PackageGroupOriginRestrictionMode m_mode{PackageGroupOriginRestrictionMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    PackageGroupOriginRestrictionMode m_effectiveMode{PackageGroupOriginRestrictionMode::NOT_SET};
    bool m_effectiveModeHasBeenSet = false;

    PackageGroupReference m_inheritedFrom;
    bool m_inheritedFromHasBeenSet = false;

    long long m_repositoriesCount{0};
    bool m_repositoriesCountHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
