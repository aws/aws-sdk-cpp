/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/SourceCodeVersion.h>
#include <aws/apprunner/model/CodeConfiguration.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes a source code repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CodeRepository">AWS
   * API Reference</a></p>
   */
  class CodeRepository
  {
  public:
    AWS_APPRUNNER_API CodeRepository();
    AWS_APPRUNNER_API CodeRepository(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API CodeRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location of the repository that contains the source code.</p>
     */
    inline const Aws::String& GetRepositoryUrl() const{ return m_repositoryUrl; }

    /**
     * <p>The location of the repository that contains the source code.</p>
     */
    inline bool RepositoryUrlHasBeenSet() const { return m_repositoryUrlHasBeenSet; }

    /**
     * <p>The location of the repository that contains the source code.</p>
     */
    inline void SetRepositoryUrl(const Aws::String& value) { m_repositoryUrlHasBeenSet = true; m_repositoryUrl = value; }

    /**
     * <p>The location of the repository that contains the source code.</p>
     */
    inline void SetRepositoryUrl(Aws::String&& value) { m_repositoryUrlHasBeenSet = true; m_repositoryUrl = std::move(value); }

    /**
     * <p>The location of the repository that contains the source code.</p>
     */
    inline void SetRepositoryUrl(const char* value) { m_repositoryUrlHasBeenSet = true; m_repositoryUrl.assign(value); }

    /**
     * <p>The location of the repository that contains the source code.</p>
     */
    inline CodeRepository& WithRepositoryUrl(const Aws::String& value) { SetRepositoryUrl(value); return *this;}

    /**
     * <p>The location of the repository that contains the source code.</p>
     */
    inline CodeRepository& WithRepositoryUrl(Aws::String&& value) { SetRepositoryUrl(std::move(value)); return *this;}

    /**
     * <p>The location of the repository that contains the source code.</p>
     */
    inline CodeRepository& WithRepositoryUrl(const char* value) { SetRepositoryUrl(value); return *this;}


    /**
     * <p>The version that should be used within the source code repository.</p>
     */
    inline const SourceCodeVersion& GetSourceCodeVersion() const{ return m_sourceCodeVersion; }

    /**
     * <p>The version that should be used within the source code repository.</p>
     */
    inline bool SourceCodeVersionHasBeenSet() const { return m_sourceCodeVersionHasBeenSet; }

    /**
     * <p>The version that should be used within the source code repository.</p>
     */
    inline void SetSourceCodeVersion(const SourceCodeVersion& value) { m_sourceCodeVersionHasBeenSet = true; m_sourceCodeVersion = value; }

    /**
     * <p>The version that should be used within the source code repository.</p>
     */
    inline void SetSourceCodeVersion(SourceCodeVersion&& value) { m_sourceCodeVersionHasBeenSet = true; m_sourceCodeVersion = std::move(value); }

    /**
     * <p>The version that should be used within the source code repository.</p>
     */
    inline CodeRepository& WithSourceCodeVersion(const SourceCodeVersion& value) { SetSourceCodeVersion(value); return *this;}

    /**
     * <p>The version that should be used within the source code repository.</p>
     */
    inline CodeRepository& WithSourceCodeVersion(SourceCodeVersion&& value) { SetSourceCodeVersion(std::move(value)); return *this;}


    /**
     * <p>Configuration for building and running the service from a source code
     * repository.</p>  <p> <code>CodeConfiguration</code> is required only for
     * <code>CreateService</code> request.</p> 
     */
    inline const CodeConfiguration& GetCodeConfiguration() const{ return m_codeConfiguration; }

    /**
     * <p>Configuration for building and running the service from a source code
     * repository.</p>  <p> <code>CodeConfiguration</code> is required only for
     * <code>CreateService</code> request.</p> 
     */
    inline bool CodeConfigurationHasBeenSet() const { return m_codeConfigurationHasBeenSet; }

    /**
     * <p>Configuration for building and running the service from a source code
     * repository.</p>  <p> <code>CodeConfiguration</code> is required only for
     * <code>CreateService</code> request.</p> 
     */
    inline void SetCodeConfiguration(const CodeConfiguration& value) { m_codeConfigurationHasBeenSet = true; m_codeConfiguration = value; }

    /**
     * <p>Configuration for building and running the service from a source code
     * repository.</p>  <p> <code>CodeConfiguration</code> is required only for
     * <code>CreateService</code> request.</p> 
     */
    inline void SetCodeConfiguration(CodeConfiguration&& value) { m_codeConfigurationHasBeenSet = true; m_codeConfiguration = std::move(value); }

    /**
     * <p>Configuration for building and running the service from a source code
     * repository.</p>  <p> <code>CodeConfiguration</code> is required only for
     * <code>CreateService</code> request.</p> 
     */
    inline CodeRepository& WithCodeConfiguration(const CodeConfiguration& value) { SetCodeConfiguration(value); return *this;}

    /**
     * <p>Configuration for building and running the service from a source code
     * repository.</p>  <p> <code>CodeConfiguration</code> is required only for
     * <code>CreateService</code> request.</p> 
     */
    inline CodeRepository& WithCodeConfiguration(CodeConfiguration&& value) { SetCodeConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_repositoryUrl;
    bool m_repositoryUrlHasBeenSet = false;

    SourceCodeVersion m_sourceCodeVersion;
    bool m_sourceCodeVersionHasBeenSet = false;

    CodeConfiguration m_codeConfiguration;
    bool m_codeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
