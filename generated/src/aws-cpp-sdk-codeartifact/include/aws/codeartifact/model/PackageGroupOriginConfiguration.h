/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/codeartifact/model/PackageGroupOriginRestrictionType.h>
#include <aws/codeartifact/model/PackageGroupOriginRestriction.h>
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
   * <p>The package group origin configuration that determines how package versions
   * can enter repositories.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageGroupOriginConfiguration">AWS
   * API Reference</a></p>
   */
  class PackageGroupOriginConfiguration
  {
  public:
    AWS_CODEARTIFACT_API PackageGroupOriginConfiguration() = default;
    AWS_CODEARTIFACT_API PackageGroupOriginConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageGroupOriginConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The origin configuration settings that determine how package versions can
     * enter repositories.</p>
     */
    inline const Aws::Map<PackageGroupOriginRestrictionType, PackageGroupOriginRestriction>& GetRestrictions() const { return m_restrictions; }
    inline bool RestrictionsHasBeenSet() const { return m_restrictionsHasBeenSet; }
    template<typename RestrictionsT = Aws::Map<PackageGroupOriginRestrictionType, PackageGroupOriginRestriction>>
    void SetRestrictions(RestrictionsT&& value) { m_restrictionsHasBeenSet = true; m_restrictions = std::forward<RestrictionsT>(value); }
    template<typename RestrictionsT = Aws::Map<PackageGroupOriginRestrictionType, PackageGroupOriginRestriction>>
    PackageGroupOriginConfiguration& WithRestrictions(RestrictionsT&& value) { SetRestrictions(std::forward<RestrictionsT>(value)); return *this;}
    inline PackageGroupOriginConfiguration& AddRestrictions(PackageGroupOriginRestrictionType key, PackageGroupOriginRestriction value) {
      m_restrictionsHasBeenSet = true; m_restrictions.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::Map<PackageGroupOriginRestrictionType, PackageGroupOriginRestriction> m_restrictions;
    bool m_restrictionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
