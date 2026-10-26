/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/EnvironmentRepositorySource.h>
#include <aws/continuum/model/EnvironmentS3IntegrationSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>GA source configuration for code and customer-authored context.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/EnvironmentSourceConfiguration">AWS
 * API Reference</a></p>
 */
class EnvironmentSourceConfiguration {
 public:
  AWS_CONTINUUM_API EnvironmentSourceConfiguration() = default;
  AWS_CONTINUUM_API EnvironmentSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API EnvironmentSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>S3 sources backed by previously-created S3 integrations.</p>
   */
  inline const Aws::Vector<EnvironmentS3IntegrationSource>& GetS3Sources() const { return m_s3Sources; }
  inline bool S3SourcesHasBeenSet() const { return m_s3SourcesHasBeenSet; }
  template <typename S3SourcesT = Aws::Vector<EnvironmentS3IntegrationSource>>
  void SetS3Sources(S3SourcesT&& value) {
    m_s3SourcesHasBeenSet = true;
    m_s3Sources = std::forward<S3SourcesT>(value);
  }
  template <typename S3SourcesT = Aws::Vector<EnvironmentS3IntegrationSource>>
  EnvironmentSourceConfiguration& WithS3Sources(S3SourcesT&& value) {
    SetS3Sources(std::forward<S3SourcesT>(value));
    return *this;
  }
  template <typename S3SourcesT = EnvironmentS3IntegrationSource>
  EnvironmentSourceConfiguration& AddS3Sources(S3SourcesT&& value) {
    m_s3SourcesHasBeenSet = true;
    m_s3Sources.emplace_back(std::forward<S3SourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Explicit repository selections from previously-created integrations.</p>
   */
  inline const Aws::Vector<EnvironmentRepositorySource>& GetRepositorySources() const { return m_repositorySources; }
  inline bool RepositorySourcesHasBeenSet() const { return m_repositorySourcesHasBeenSet; }
  template <typename RepositorySourcesT = Aws::Vector<EnvironmentRepositorySource>>
  void SetRepositorySources(RepositorySourcesT&& value) {
    m_repositorySourcesHasBeenSet = true;
    m_repositorySources = std::forward<RepositorySourcesT>(value);
  }
  template <typename RepositorySourcesT = Aws::Vector<EnvironmentRepositorySource>>
  EnvironmentSourceConfiguration& WithRepositorySources(RepositorySourcesT&& value) {
    SetRepositorySources(std::forward<RepositorySourcesT>(value));
    return *this;
  }
  template <typename RepositorySourcesT = EnvironmentRepositorySource>
  EnvironmentSourceConfiguration& AddRepositorySources(RepositorySourcesT&& value) {
    m_repositorySourcesHasBeenSet = true;
    m_repositorySources.emplace_back(std::forward<RepositorySourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EnvironmentS3IntegrationSource> m_s3Sources;

  Aws::Vector<EnvironmentRepositorySource> m_repositorySources;
  bool m_s3SourcesHasBeenSet = false;
  bool m_repositorySourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
