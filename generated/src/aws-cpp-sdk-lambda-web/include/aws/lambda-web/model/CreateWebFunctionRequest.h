/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWebRequest.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/EndpointConfig.h>
#include <aws/lambda-web/model/RevisionConfig.h>

#include <utility>

namespace Aws {
namespace LambdaWeb {
namespace Model {

/**
 * <p>The request to create a web function.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/CreateWebFunctionRequest">AWS
 * API Reference</a></p>
 */
class CreateWebFunctionRequest : public LambdaWebRequest {
 public:
  AWS_LAMBDAWEB_API CreateWebFunctionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateWebFunction"; }

  AWS_LAMBDAWEB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the web function. The name can contain letters, numbers, hyphens
   * (-), and underscores (_), and can't begin or end with a hyphen or an underscore.
   * The length constraint applies only to the full ARN. If you specify only the
   * function name, it is limited to 64 characters in length.</p>
   */
  inline const Aws::String& GetFunctionName() const { return m_functionName; }
  inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
  template <typename FunctionNameT = Aws::String>
  void SetFunctionName(FunctionNameT&& value) {
    m_functionNameHasBeenSet = true;
    m_functionName = std::forward<FunctionNameT>(value);
  }
  template <typename FunctionNameT = Aws::String>
  CreateWebFunctionRequest& WithFunctionName(FunctionNameT&& value) {
    SetFunctionName(std::forward<FunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the initial revision of the web function, including
   * code and service settings.</p>
   */
  inline const RevisionConfig& GetRevisionConfig() const { return m_revisionConfig; }
  inline bool RevisionConfigHasBeenSet() const { return m_revisionConfigHasBeenSet; }
  template <typename RevisionConfigT = RevisionConfig>
  void SetRevisionConfig(RevisionConfigT&& value) {
    m_revisionConfigHasBeenSet = true;
    m_revisionConfig = std::forward<RevisionConfigT>(value);
  }
  template <typename RevisionConfigT = RevisionConfig>
  CreateWebFunctionRequest& WithRevisionConfig(RevisionConfigT&& value) {
    SetRevisionConfig(std::forward<RevisionConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the initial endpoint of the web function.</p>
   */
  inline const EndpointConfig& GetEndpointConfig() const { return m_endpointConfig; }
  inline bool EndpointConfigHasBeenSet() const { return m_endpointConfigHasBeenSet; }
  template <typename EndpointConfigT = EndpointConfig>
  void SetEndpointConfig(EndpointConfigT&& value) {
    m_endpointConfigHasBeenSet = true;
    m_endpointConfig = std::forward<EndpointConfigT>(value);
  }
  template <typename EndpointConfigT = EndpointConfig>
  CreateWebFunctionRequest& WithEndpointConfig(EndpointConfigT&& value) {
    SetEndpointConfig(std::forward<EndpointConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of tag keys and values to apply to the web function.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateWebFunctionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateWebFunctionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionName;

  RevisionConfig m_revisionConfig;

  EndpointConfig m_endpointConfig;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_functionNameHasBeenSet = false;
  bool m_revisionConfigHasBeenSet = false;
  bool m_endpointConfigHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
