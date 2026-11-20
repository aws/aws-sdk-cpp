/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ApiSignature.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace APIPortal {
namespace Model {

/**
 */
class CreateManagedApiRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API CreateManagedApiRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateManagedApi"; }

  AWS_APIPORTAL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The resource, method, host, port, and path that identify the API.</p>
   */
  inline const ApiSignature& GetApiSignature() const { return m_apiSignature; }
  inline bool ApiSignatureHasBeenSet() const { return m_apiSignatureHasBeenSet; }
  template <typename ApiSignatureT = ApiSignature>
  void SetApiSignature(ApiSignatureT&& value) {
    m_apiSignatureHasBeenSet = true;
    m_apiSignature = std::forward<ApiSignatureT>(value);
  }
  template <typename ApiSignatureT = ApiSignature>
  CreateManagedApiRequest& WithApiSignature(ApiSignatureT&& value) {
    SetApiSignature(std::forward<ApiSignatureT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateManagedApiRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateManagedApiRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  ApiSignature m_apiSignature;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_apiSignatureHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
