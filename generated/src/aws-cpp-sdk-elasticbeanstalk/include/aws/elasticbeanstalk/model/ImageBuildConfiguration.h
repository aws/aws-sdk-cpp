/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/model/ArchitectureType.h>
#include <aws/elasticbeanstalk/model/ComputeType.h>
#include <aws/elasticbeanstalk/model/ImageBuildType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace ElasticBeanstalk {
namespace Model {

/**
 * <p>Settings that Elastic Beanstalk uses to build a container image from the
 * source bundle of an application version.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ImageBuildConfiguration">AWS
 * API Reference</a></p>
 */
class ImageBuildConfiguration {
 public:
  AWS_ELASTICBEANSTALK_API ImageBuildConfiguration() = default;
  AWS_ELASTICBEANSTALK_API ImageBuildConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICBEANSTALK_API ImageBuildConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index,
                                               const char* locationValue) const;
  AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>How Elastic Beanstalk builds the container image. Elastic Beanstalk rejects a
   * <code>Build</code> that doesn't specify it.</p> <p>Valid values:</p> <ul> <li>
   * <p> <code>docker</code> – Elastic Beanstalk builds the image from a Dockerfile
   * in your source bundle. Specify the Dockerfile with
   * <code>DockerfileLocation</code>.</p> </li> <li> <p> <code>buildpack</code> –
   * Elastic Beanstalk builds the image with a Cloud Native Buildpacks builder.
   * Specify the builder with <code>Buildpack</code>.</p> </li> </ul>
   */
  inline ImageBuildType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ImageBuildType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ImageBuildConfiguration& WithType(ImageBuildType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path to the Dockerfile within the source bundle, relative to the root of
   * the source bundle. For example, <code>backend/Dockerfile</code>.</p> <p>Elastic
   * Beanstalk uses this member only when <code>Type</code> is <code>docker</code>.
   * If you don't specify it, Elastic Beanstalk uses the Dockerfile at the root of
   * the source bundle.</p>
   */
  inline const Aws::String& GetDockerfileLocation() const { return m_dockerfileLocation; }
  inline bool DockerfileLocationHasBeenSet() const { return m_dockerfileLocationHasBeenSet; }
  template <typename DockerfileLocationT = Aws::String>
  void SetDockerfileLocation(DockerfileLocationT&& value) {
    m_dockerfileLocationHasBeenSet = true;
    m_dockerfileLocation = std::forward<DockerfileLocationT>(value);
  }
  template <typename DockerfileLocationT = Aws::String>
  ImageBuildConfiguration& WithDockerfileLocation(DockerfileLocationT&& value) {
    SetDockerfileLocation(std::forward<DockerfileLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Cloud Native Buildpacks builder image that Elastic Beanstalk uses to
   * build the container image. For example,
   * <code>paketobuildpacks/builder-jammy-base</code>.</p> <p>This member is required
   * when <code>Type</code> is <code>buildpack</code>. Elastic Beanstalk doesn't
   * provide a default builder.</p>
   */
  inline const Aws::String& GetBuildpack() const { return m_buildpack; }
  inline bool BuildpackHasBeenSet() const { return m_buildpackHasBeenSet; }
  template <typename BuildpackT = Aws::String>
  void SetBuildpack(BuildpackT&& value) {
    m_buildpackHasBeenSet = true;
    m_buildpack = std::forward<BuildpackT>(value);
  }
  template <typename BuildpackT = Aws::String>
  ImageBuildConfiguration& WithBuildpack(BuildpackT&& value) {
    SetBuildpack(std::forward<BuildpackT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The processor architecture that Elastic Beanstalk builds the container image
   * for. The architecture must match the architecture of the instances in the
   * environment that you deploy the application version to.</p> <p>Valid values:</p>
   * <ul> <li> <p> <code>amd64</code> – x86-64 instances. This is the default.</p>
   * </li> <li> <p> <code>arm64</code> – Amazon Web Services Graviton instances.</p>
   * </li> </ul>
   */
  inline ArchitectureType GetArchitecture() const { return m_architecture; }
  inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
  inline void SetArchitecture(ArchitectureType value) {
    m_architectureHasBeenSet = true;
    m_architecture = value;
  }
  inline ImageBuildConfiguration& WithArchitecture(ArchitectureType value) {
    SetArchitecture(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
   * role that CodeBuild assumes to run the build in your Amazon Web Services
   * account. Elastic Beanstalk rejects a <code>Build</code> that doesn't specify
   * this role.</p>
   */
  inline const Aws::String& GetCodeBuildServiceRole() const { return m_codeBuildServiceRole; }
  inline bool CodeBuildServiceRoleHasBeenSet() const { return m_codeBuildServiceRoleHasBeenSet; }
  template <typename CodeBuildServiceRoleT = Aws::String>
  void SetCodeBuildServiceRole(CodeBuildServiceRoleT&& value) {
    m_codeBuildServiceRoleHasBeenSet = true;
    m_codeBuildServiceRole = std::forward<CodeBuildServiceRoleT>(value);
  }
  template <typename CodeBuildServiceRoleT = Aws::String>
  ImageBuildConfiguration& WithCodeBuildServiceRole(CodeBuildServiceRoleT&& value) {
    SetCodeBuildServiceRole(std::forward<CodeBuildServiceRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the compute resources that run the build. If you don't specify
   * it, Elastic Beanstalk uses <code>BUILD_GENERAL1_MEDIUM</code>.</p> <p>Valid
   * values:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code> – Use up to 3 GB
   * memory and 2 vCPUs for builds.</p> </li> <li> <p>
   * <code>BUILD_GENERAL1_MEDIUM</code> – Use up to 7 GB memory and 4 vCPUs for
   * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code> – Use up to 15 GB
   * memory and 8 vCPUs for builds.</p> </li> </ul>
   */
  inline ComputeType GetComputeType() const { return m_computeType; }
  inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
  inline void SetComputeType(ComputeType value) {
    m_computeTypeHasBeenSet = true;
    m_computeType = value;
  }
  inline ImageBuildConfiguration& WithComputeType(ComputeType value) {
    SetComputeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How long, in minutes from 5 to 480 (8 hours), Elastic Beanstalk waits before
   * stopping a build that hasn't completed. The default is 60 minutes.</p>
   */
  inline int GetTimeoutInMinutes() const { return m_timeoutInMinutes; }
  inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
  inline void SetTimeoutInMinutes(int value) {
    m_timeoutInMinutesHasBeenSet = true;
    m_timeoutInMinutes = value;
  }
  inline ImageBuildConfiguration& WithTimeoutInMinutes(int value) {
    SetTimeoutInMinutes(value);
    return *this;
  }
  ///@}
 private:
  ImageBuildType m_type{ImageBuildType::NOT_SET};

  Aws::String m_dockerfileLocation;

  Aws::String m_buildpack;

  ArchitectureType m_architecture{ArchitectureType::NOT_SET};

  Aws::String m_codeBuildServiceRole;

  ComputeType m_computeType{ComputeType::NOT_SET};

  int m_timeoutInMinutes{0};
  bool m_typeHasBeenSet = false;
  bool m_dockerfileLocationHasBeenSet = false;
  bool m_buildpackHasBeenSet = false;
  bool m_architectureHasBeenSet = false;
  bool m_codeBuildServiceRoleHasBeenSet = false;
  bool m_computeTypeHasBeenSet = false;
  bool m_timeoutInMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
