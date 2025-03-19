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
    AWS_APPRUNNER_API CodeRepository() = default;
    AWS_APPRUNNER_API CodeRepository(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API CodeRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location of the repository that contains the source code.</p>
     */
    inline const Aws::String& GetRepositoryUrl() const { return m_repositoryUrl; }
    inline bool RepositoryUrlHasBeenSet() const { return m_repositoryUrlHasBeenSet; }
    template<typename RepositoryUrlT = Aws::String>
    void SetRepositoryUrl(RepositoryUrlT&& value) { m_repositoryUrlHasBeenSet = true; m_repositoryUrl = std::forward<RepositoryUrlT>(value); }
    template<typename RepositoryUrlT = Aws::String>
    CodeRepository& WithRepositoryUrl(RepositoryUrlT&& value) { SetRepositoryUrl(std::forward<RepositoryUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version that should be used within the source code repository.</p>
     */
    inline const SourceCodeVersion& GetSourceCodeVersion() const { return m_sourceCodeVersion; }
    inline bool SourceCodeVersionHasBeenSet() const { return m_sourceCodeVersionHasBeenSet; }
    template<typename SourceCodeVersionT = SourceCodeVersion>
    void SetSourceCodeVersion(SourceCodeVersionT&& value) { m_sourceCodeVersionHasBeenSet = true; m_sourceCodeVersion = std::forward<SourceCodeVersionT>(value); }
    template<typename SourceCodeVersionT = SourceCodeVersion>
    CodeRepository& WithSourceCodeVersion(SourceCodeVersionT&& value) { SetSourceCodeVersion(std::forward<SourceCodeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for building and running the service from a source code
     * repository.</p>  <p> <code>CodeConfiguration</code> is required only for
     * <code>CreateService</code> request.</p> 
     */
    inline const CodeConfiguration& GetCodeConfiguration() const { return m_codeConfiguration; }
    inline bool CodeConfigurationHasBeenSet() const { return m_codeConfigurationHasBeenSet; }
    template<typename CodeConfigurationT = CodeConfiguration>
    void SetCodeConfiguration(CodeConfigurationT&& value) { m_codeConfigurationHasBeenSet = true; m_codeConfiguration = std::forward<CodeConfigurationT>(value); }
    template<typename CodeConfigurationT = CodeConfiguration>
    CodeRepository& WithCodeConfiguration(CodeConfigurationT&& value) { SetCodeConfiguration(std::forward<CodeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the directory that stores source code and configuration files.
     * The build and start commands also execute from here. The path is absolute from
     * root and, if not specified, defaults to the repository root.</p>
     */
    inline const Aws::String& GetSourceDirectory() const { return m_sourceDirectory; }
    inline bool SourceDirectoryHasBeenSet() const { return m_sourceDirectoryHasBeenSet; }
    template<typename SourceDirectoryT = Aws::String>
    void SetSourceDirectory(SourceDirectoryT&& value) { m_sourceDirectoryHasBeenSet = true; m_sourceDirectory = std::forward<SourceDirectoryT>(value); }
    template<typename SourceDirectoryT = Aws::String>
    CodeRepository& WithSourceDirectory(SourceDirectoryT&& value) { SetSourceDirectory(std::forward<SourceDirectoryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryUrl;
    bool m_repositoryUrlHasBeenSet = false;

    SourceCodeVersion m_sourceCodeVersion;
    bool m_sourceCodeVersionHasBeenSet = false;

    CodeConfiguration m_codeConfiguration;
    bool m_codeConfigurationHasBeenSet = false;

    Aws::String m_sourceDirectory;
    bool m_sourceDirectoryHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
