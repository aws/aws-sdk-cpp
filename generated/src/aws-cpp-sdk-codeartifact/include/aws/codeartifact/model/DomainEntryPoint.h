/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about how a package originally entered the CodeArtifact domain.
   * For packages published directly to CodeArtifact, the entry point is the
   * repository it was published to. For packages ingested from an external
   * repository, the entry point is the external connection that it was ingested
   * from. An external connection is a CodeArtifact repository that is connected to
   * an external repository such as the npm registry or NuGet gallery.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DomainEntryPoint">AWS
   * API Reference</a></p>
   */
  class DomainEntryPoint
  {
  public:
    AWS_CODEARTIFACT_API DomainEntryPoint();
    AWS_CODEARTIFACT_API DomainEntryPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API DomainEntryPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the repository that a package was originally published to.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that a package was originally published to.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that a package was originally published to.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that a package was originally published to.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that a package was originally published to.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that a package was originally published to.</p>
     */
    inline DomainEntryPoint& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that a package was originally published to.</p>
     */
    inline DomainEntryPoint& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that a package was originally published to.</p>
     */
    inline DomainEntryPoint& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The name of the external connection that a package was ingested from.</p>
     */
    inline const Aws::String& GetExternalConnectionName() const{ return m_externalConnectionName; }

    /**
     * <p>The name of the external connection that a package was ingested from.</p>
     */
    inline bool ExternalConnectionNameHasBeenSet() const { return m_externalConnectionNameHasBeenSet; }

    /**
     * <p>The name of the external connection that a package was ingested from.</p>
     */
    inline void SetExternalConnectionName(const Aws::String& value) { m_externalConnectionNameHasBeenSet = true; m_externalConnectionName = value; }

    /**
     * <p>The name of the external connection that a package was ingested from.</p>
     */
    inline void SetExternalConnectionName(Aws::String&& value) { m_externalConnectionNameHasBeenSet = true; m_externalConnectionName = std::move(value); }

    /**
     * <p>The name of the external connection that a package was ingested from.</p>
     */
    inline void SetExternalConnectionName(const char* value) { m_externalConnectionNameHasBeenSet = true; m_externalConnectionName.assign(value); }

    /**
     * <p>The name of the external connection that a package was ingested from.</p>
     */
    inline DomainEntryPoint& WithExternalConnectionName(const Aws::String& value) { SetExternalConnectionName(value); return *this;}

    /**
     * <p>The name of the external connection that a package was ingested from.</p>
     */
    inline DomainEntryPoint& WithExternalConnectionName(Aws::String&& value) { SetExternalConnectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the external connection that a package was ingested from.</p>
     */
    inline DomainEntryPoint& WithExternalConnectionName(const char* value) { SetExternalConnectionName(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_externalConnectionName;
    bool m_externalConnectionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
