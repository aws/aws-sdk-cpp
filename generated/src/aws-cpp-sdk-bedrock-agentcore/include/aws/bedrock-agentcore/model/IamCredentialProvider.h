/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>An IAM credential provider for authenticating requests. This structure
 * contains the configuration for authenticating with a target endpoint using IAM
 * credentials and SigV4 signing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/IamCredentialProvider">AWS
 * API Reference</a></p>
 */
class IamCredentialProvider {
 public:
  AWS_BEDROCKAGENTCORE_API IamCredentialProvider() = default;
  AWS_BEDROCKAGENTCORE_API IamCredentialProvider(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API IamCredentialProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the Amazon Web Services service used for SigV4 signing. This
   * value identifies the service to authenticate with when sending requests to the
   * target endpoint.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  IamCredentialProvider& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region used for SigV4 signing. If not specified,
   * defaults to the Region of the resource that makes the request.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  IamCredentialProvider& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_service;

  Aws::String m_region;
  bool m_serviceHasBeenSet = false;
  bool m_regionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
