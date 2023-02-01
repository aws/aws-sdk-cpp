/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageOriginRestrictions.h>
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
   * <p>Details about the package origin configuration of a package.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageOriginConfiguration">AWS
   * API Reference</a></p>
   */
  class PackageOriginConfiguration
  {
  public:
    AWS_CODEARTIFACT_API PackageOriginConfiguration();
    AWS_CODEARTIFACT_API PackageOriginConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageOriginConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>PackageOriginRestrictions</code> object that contains information
     * about the upstream and publish package origin configuration for the package.</p>
     */
    inline const PackageOriginRestrictions& GetRestrictions() const{ return m_restrictions; }

    /**
     * <p>A <code>PackageOriginRestrictions</code> object that contains information
     * about the upstream and publish package origin configuration for the package.</p>
     */
    inline bool RestrictionsHasBeenSet() const { return m_restrictionsHasBeenSet; }

    /**
     * <p>A <code>PackageOriginRestrictions</code> object that contains information
     * about the upstream and publish package origin configuration for the package.</p>
     */
    inline void SetRestrictions(const PackageOriginRestrictions& value) { m_restrictionsHasBeenSet = true; m_restrictions = value; }

    /**
     * <p>A <code>PackageOriginRestrictions</code> object that contains information
     * about the upstream and publish package origin configuration for the package.</p>
     */
    inline void SetRestrictions(PackageOriginRestrictions&& value) { m_restrictionsHasBeenSet = true; m_restrictions = std::move(value); }

    /**
     * <p>A <code>PackageOriginRestrictions</code> object that contains information
     * about the upstream and publish package origin configuration for the package.</p>
     */
    inline PackageOriginConfiguration& WithRestrictions(const PackageOriginRestrictions& value) { SetRestrictions(value); return *this;}

    /**
     * <p>A <code>PackageOriginRestrictions</code> object that contains information
     * about the upstream and publish package origin configuration for the package.</p>
     */
    inline PackageOriginConfiguration& WithRestrictions(PackageOriginRestrictions&& value) { SetRestrictions(std::move(value)); return *this;}

  private:

    PackageOriginRestrictions m_restrictions;
    bool m_restrictionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
