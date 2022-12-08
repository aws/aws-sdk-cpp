/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/DomainEntryPoint.h>
#include <aws/codeartifact/model/PackageVersionOriginType.h>
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
   * <p>Information about how a package version was added to a
   * repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageVersionOrigin">AWS
   * API Reference</a></p>
   */
  class PackageVersionOrigin
  {
  public:
    AWS_CODEARTIFACT_API PackageVersionOrigin();
    AWS_CODEARTIFACT_API PackageVersionOrigin(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageVersionOrigin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DomainEntryPoint.html">DomainEntryPoint</a>
     * object that contains information about from which repository or external
     * connection the package version was added to the domain.</p>
     */
    inline const DomainEntryPoint& GetDomainEntryPoint() const{ return m_domainEntryPoint; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DomainEntryPoint.html">DomainEntryPoint</a>
     * object that contains information about from which repository or external
     * connection the package version was added to the domain.</p>
     */
    inline bool DomainEntryPointHasBeenSet() const { return m_domainEntryPointHasBeenSet; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DomainEntryPoint.html">DomainEntryPoint</a>
     * object that contains information about from which repository or external
     * connection the package version was added to the domain.</p>
     */
    inline void SetDomainEntryPoint(const DomainEntryPoint& value) { m_domainEntryPointHasBeenSet = true; m_domainEntryPoint = value; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DomainEntryPoint.html">DomainEntryPoint</a>
     * object that contains information about from which repository or external
     * connection the package version was added to the domain.</p>
     */
    inline void SetDomainEntryPoint(DomainEntryPoint&& value) { m_domainEntryPointHasBeenSet = true; m_domainEntryPoint = std::move(value); }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DomainEntryPoint.html">DomainEntryPoint</a>
     * object that contains information about from which repository or external
     * connection the package version was added to the domain.</p>
     */
    inline PackageVersionOrigin& WithDomainEntryPoint(const DomainEntryPoint& value) { SetDomainEntryPoint(value); return *this;}

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DomainEntryPoint.html">DomainEntryPoint</a>
     * object that contains information about from which repository or external
     * connection the package version was added to the domain.</p>
     */
    inline PackageVersionOrigin& WithDomainEntryPoint(DomainEntryPoint&& value) { SetDomainEntryPoint(std::move(value)); return *this;}


    /**
     * <p>Describes how the package version was originally added to the domain. An
     * <code>INTERNAL</code> origin type means the package version was published
     * directly to a repository in the domain. An <code>EXTERNAL</code> origin type
     * means the package version was ingested from an external connection.</p>
     */
    inline const PackageVersionOriginType& GetOriginType() const{ return m_originType; }

    /**
     * <p>Describes how the package version was originally added to the domain. An
     * <code>INTERNAL</code> origin type means the package version was published
     * directly to a repository in the domain. An <code>EXTERNAL</code> origin type
     * means the package version was ingested from an external connection.</p>
     */
    inline bool OriginTypeHasBeenSet() const { return m_originTypeHasBeenSet; }

    /**
     * <p>Describes how the package version was originally added to the domain. An
     * <code>INTERNAL</code> origin type means the package version was published
     * directly to a repository in the domain. An <code>EXTERNAL</code> origin type
     * means the package version was ingested from an external connection.</p>
     */
    inline void SetOriginType(const PackageVersionOriginType& value) { m_originTypeHasBeenSet = true; m_originType = value; }

    /**
     * <p>Describes how the package version was originally added to the domain. An
     * <code>INTERNAL</code> origin type means the package version was published
     * directly to a repository in the domain. An <code>EXTERNAL</code> origin type
     * means the package version was ingested from an external connection.</p>
     */
    inline void SetOriginType(PackageVersionOriginType&& value) { m_originTypeHasBeenSet = true; m_originType = std::move(value); }

    /**
     * <p>Describes how the package version was originally added to the domain. An
     * <code>INTERNAL</code> origin type means the package version was published
     * directly to a repository in the domain. An <code>EXTERNAL</code> origin type
     * means the package version was ingested from an external connection.</p>
     */
    inline PackageVersionOrigin& WithOriginType(const PackageVersionOriginType& value) { SetOriginType(value); return *this;}

    /**
     * <p>Describes how the package version was originally added to the domain. An
     * <code>INTERNAL</code> origin type means the package version was published
     * directly to a repository in the domain. An <code>EXTERNAL</code> origin type
     * means the package version was ingested from an external connection.</p>
     */
    inline PackageVersionOrigin& WithOriginType(PackageVersionOriginType&& value) { SetOriginType(std::move(value)); return *this;}

  private:

    DomainEntryPoint m_domainEntryPoint;
    bool m_domainEntryPointHasBeenSet = false;

    PackageVersionOriginType m_originType;
    bool m_originTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
