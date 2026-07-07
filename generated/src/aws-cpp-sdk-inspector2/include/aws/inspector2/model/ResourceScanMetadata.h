/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CodeRepositoryMetadata.h>
#include <aws/inspector2/model/ContainerImageMetadata.h>
#include <aws/inspector2/model/ContainerRegistryMetadata.h>
#include <aws/inspector2/model/ContainerRepositoryMetadata.h>
#include <aws/inspector2/model/Ec2Metadata.h>
#include <aws/inspector2/model/EcrContainerImageMetadata.h>
#include <aws/inspector2/model/EcrRepositoryMetadata.h>
#include <aws/inspector2/model/LambdaFunctionMetadata.h>
#include <aws/inspector2/model/ServerlessFunctionMetadata.h>
#include <aws/inspector2/model/VmInstanceMetadata.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>An object that contains details about the metadata for an Amazon ECR
 * resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ResourceScanMetadata">AWS
 * API Reference</a></p>
 */
class ResourceScanMetadata {
 public:
  AWS_INSPECTOR2_API ResourceScanMetadata() = default;
  AWS_INSPECTOR2_API ResourceScanMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ResourceScanMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An object that contains details about the repository an Amazon ECR image
   * resides in.</p>
   */
  inline const EcrRepositoryMetadata& GetEcrRepository() const { return m_ecrRepository; }
  inline bool EcrRepositoryHasBeenSet() const { return m_ecrRepositoryHasBeenSet; }
  template <typename EcrRepositoryT = EcrRepositoryMetadata>
  void SetEcrRepository(EcrRepositoryT&& value) {
    m_ecrRepositoryHasBeenSet = true;
    m_ecrRepository = std::forward<EcrRepositoryT>(value);
  }
  template <typename EcrRepositoryT = EcrRepositoryMetadata>
  ResourceScanMetadata& WithEcrRepository(EcrRepositoryT&& value) {
    SetEcrRepository(std::forward<EcrRepositoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that contains details about the container metadata for an Amazon
   * ECR image.</p>
   */
  inline const EcrContainerImageMetadata& GetEcrImage() const { return m_ecrImage; }
  inline bool EcrImageHasBeenSet() const { return m_ecrImageHasBeenSet; }
  template <typename EcrImageT = EcrContainerImageMetadata>
  void SetEcrImage(EcrImageT&& value) {
    m_ecrImageHasBeenSet = true;
    m_ecrImage = std::forward<EcrImageT>(value);
  }
  template <typename EcrImageT = EcrContainerImageMetadata>
  ResourceScanMetadata& WithEcrImage(EcrImageT&& value) {
    SetEcrImage(std::forward<EcrImageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that contains metadata details for an Amazon EC2 instance.</p>
   */
  inline const Ec2Metadata& GetEc2() const { return m_ec2; }
  inline bool Ec2HasBeenSet() const { return m_ec2HasBeenSet; }
  template <typename Ec2T = Ec2Metadata>
  void SetEc2(Ec2T&& value) {
    m_ec2HasBeenSet = true;
    m_ec2 = std::forward<Ec2T>(value);
  }
  template <typename Ec2T = Ec2Metadata>
  ResourceScanMetadata& WithEc2(Ec2T&& value) {
    SetEc2(std::forward<Ec2T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that contains metadata details for an Amazon Web Services Lambda
   * function.</p>
   */
  inline const LambdaFunctionMetadata& GetLambdaFunction() const { return m_lambdaFunction; }
  inline bool LambdaFunctionHasBeenSet() const { return m_lambdaFunctionHasBeenSet; }
  template <typename LambdaFunctionT = LambdaFunctionMetadata>
  void SetLambdaFunction(LambdaFunctionT&& value) {
    m_lambdaFunctionHasBeenSet = true;
    m_lambdaFunction = std::forward<LambdaFunctionT>(value);
  }
  template <typename LambdaFunctionT = LambdaFunctionMetadata>
  ResourceScanMetadata& WithLambdaFunction(LambdaFunctionT&& value) {
    SetLambdaFunction(std::forward<LambdaFunctionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains metadata about scan coverage for a code repository resource.</p>
   */
  inline const CodeRepositoryMetadata& GetCodeRepository() const { return m_codeRepository; }
  inline bool CodeRepositoryHasBeenSet() const { return m_codeRepositoryHasBeenSet; }
  template <typename CodeRepositoryT = CodeRepositoryMetadata>
  void SetCodeRepository(CodeRepositoryT&& value) {
    m_codeRepositoryHasBeenSet = true;
    m_codeRepository = std::forward<CodeRepositoryT>(value);
  }
  template <typename CodeRepositoryT = CodeRepositoryMetadata>
  ResourceScanMetadata& WithCodeRepository(CodeRepositoryT&& value) {
    SetCodeRepository(std::forward<CodeRepositoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VM instance metadata associated with a covered resource.</p>
   */
  inline const VmInstanceMetadata& GetVmInstance() const { return m_vmInstance; }
  inline bool VmInstanceHasBeenSet() const { return m_vmInstanceHasBeenSet; }
  template <typename VmInstanceT = VmInstanceMetadata>
  void SetVmInstance(VmInstanceT&& value) {
    m_vmInstanceHasBeenSet = true;
    m_vmInstance = std::forward<VmInstanceT>(value);
  }
  template <typename VmInstanceT = VmInstanceMetadata>
  ResourceScanMetadata& WithVmInstance(VmInstanceT&& value) {
    SetVmInstance(std::forward<VmInstanceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The container image metadata associated with a covered resource.</p>
   */
  inline const ContainerImageMetadata& GetContainerImage() const { return m_containerImage; }
  inline bool ContainerImageHasBeenSet() const { return m_containerImageHasBeenSet; }
  template <typename ContainerImageT = ContainerImageMetadata>
  void SetContainerImage(ContainerImageT&& value) {
    m_containerImageHasBeenSet = true;
    m_containerImage = std::forward<ContainerImageT>(value);
  }
  template <typename ContainerImageT = ContainerImageMetadata>
  ResourceScanMetadata& WithContainerImage(ContainerImageT&& value) {
    SetContainerImage(std::forward<ContainerImageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The container repository metadata associated with a covered resource.</p>
   */
  inline const ContainerRepositoryMetadata& GetContainerRepository() const { return m_containerRepository; }
  inline bool ContainerRepositoryHasBeenSet() const { return m_containerRepositoryHasBeenSet; }
  template <typename ContainerRepositoryT = ContainerRepositoryMetadata>
  void SetContainerRepository(ContainerRepositoryT&& value) {
    m_containerRepositoryHasBeenSet = true;
    m_containerRepository = std::forward<ContainerRepositoryT>(value);
  }
  template <typename ContainerRepositoryT = ContainerRepositoryMetadata>
  ResourceScanMetadata& WithContainerRepository(ContainerRepositoryT&& value) {
    SetContainerRepository(std::forward<ContainerRepositoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The container registry metadata associated with a covered resource.</p>
   */
  inline const ContainerRegistryMetadata& GetContainerRegistry() const { return m_containerRegistry; }
  inline bool ContainerRegistryHasBeenSet() const { return m_containerRegistryHasBeenSet; }
  template <typename ContainerRegistryT = ContainerRegistryMetadata>
  void SetContainerRegistry(ContainerRegistryT&& value) {
    m_containerRegistryHasBeenSet = true;
    m_containerRegistry = std::forward<ContainerRegistryT>(value);
  }
  template <typename ContainerRegistryT = ContainerRegistryMetadata>
  ResourceScanMetadata& WithContainerRegistry(ContainerRegistryT&& value) {
    SetContainerRegistry(std::forward<ContainerRegistryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The serverless function metadata associated with a covered resource.</p>
   */
  inline const ServerlessFunctionMetadata& GetServerlessFunction() const { return m_serverlessFunction; }
  inline bool ServerlessFunctionHasBeenSet() const { return m_serverlessFunctionHasBeenSet; }
  template <typename ServerlessFunctionT = ServerlessFunctionMetadata>
  void SetServerlessFunction(ServerlessFunctionT&& value) {
    m_serverlessFunctionHasBeenSet = true;
    m_serverlessFunction = std::forward<ServerlessFunctionT>(value);
  }
  template <typename ServerlessFunctionT = ServerlessFunctionMetadata>
  ResourceScanMetadata& WithServerlessFunction(ServerlessFunctionT&& value) {
    SetServerlessFunction(std::forward<ServerlessFunctionT>(value));
    return *this;
  }
  ///@}
 private:
  EcrRepositoryMetadata m_ecrRepository;

  EcrContainerImageMetadata m_ecrImage;

  Ec2Metadata m_ec2;

  LambdaFunctionMetadata m_lambdaFunction;

  CodeRepositoryMetadata m_codeRepository;

  VmInstanceMetadata m_vmInstance;

  ContainerImageMetadata m_containerImage;

  ContainerRepositoryMetadata m_containerRepository;

  ContainerRegistryMetadata m_containerRegistry;

  ServerlessFunctionMetadata m_serverlessFunction;
  bool m_ecrRepositoryHasBeenSet = false;
  bool m_ecrImageHasBeenSet = false;
  bool m_ec2HasBeenSet = false;
  bool m_lambdaFunctionHasBeenSet = false;
  bool m_codeRepositoryHasBeenSet = false;
  bool m_vmInstanceHasBeenSet = false;
  bool m_containerImageHasBeenSet = false;
  bool m_containerRepositoryHasBeenSet = false;
  bool m_containerRegistryHasBeenSet = false;
  bool m_serverlessFunctionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
