/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Details specific to a registered SigV4-authenticated MCP
 * server.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RegisteredMCPServerSigV4Details">AWS
 * API Reference</a></p>
 */
class RegisteredMCPServerSigV4Details {
 public:
  AWS_DEVOPSAGENT_API RegisteredMCPServerSigV4Details() = default;
  AWS_DEVOPSAGENT_API RegisteredMCPServerSigV4Details(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API RegisteredMCPServerSigV4Details& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>MCP server name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RegisteredMCPServerSigV4Details& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>MCP server endpoint URL.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  RegisteredMCPServerSigV4Details& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional description for the MCP server.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RegisteredMCPServerSigV4Details& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS region for SigV4 signing. Use '*' for SigV4a multi-region signing.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  RegisteredMCPServerSigV4Details& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS service name for SigV4 signing.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  RegisteredMCPServerSigV4Details& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>IAM role ARN to assume for SigV4 signing.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  RegisteredMCPServerSigV4Details& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom headers for the SigV4 MCP server.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetCustomHeaders() const { return m_customHeaders; }
  inline bool CustomHeadersHasBeenSet() const { return m_customHeadersHasBeenSet; }
  template <typename CustomHeadersT = Aws::Map<Aws::String, Aws::String>>
  void SetCustomHeaders(CustomHeadersT&& value) {
    m_customHeadersHasBeenSet = true;
    m_customHeaders = std::forward<CustomHeadersT>(value);
  }
  template <typename CustomHeadersT = Aws::Map<Aws::String, Aws::String>>
  RegisteredMCPServerSigV4Details& WithCustomHeaders(CustomHeadersT&& value) {
    SetCustomHeaders(std::forward<CustomHeadersT>(value));
    return *this;
  }
  template <typename CustomHeadersKeyT = Aws::String, typename CustomHeadersValueT = Aws::String>
  RegisteredMCPServerSigV4Details& AddCustomHeaders(CustomHeadersKeyT&& key, CustomHeadersValueT&& value) {
    m_customHeadersHasBeenSet = true;
    m_customHeaders.emplace(std::forward<CustomHeadersKeyT>(key), std::forward<CustomHeadersValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_endpoint;

  Aws::String m_description;

  Aws::String m_region;

  Aws::String m_service;

  Aws::String m_roleArn;

  Aws::Map<Aws::String, Aws::String> m_customHeaders;
  bool m_nameHasBeenSet = false;
  bool m_endpointHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_serviceHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_customHeadersHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
