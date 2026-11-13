/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/Tag.h>

#include <utility>

namespace Aws {
namespace Lightsail {
namespace Model {

/**
 */
class CreateSubdomainRequest : public LightsailRequest {
 public:
  AWS_LIGHTSAIL_API CreateSubdomainRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateSubdomain"; }

  AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

  AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The subdomain to create (for example, <code>mysite</code> or
   * <code>blog.mysite</code>).</p> <p>A subdomain can contain one or two labels
   * separated by a period (<code>.</code>). Each label must start and end with a
   * lowercase letter or a number, and can contain only lowercase letters, numbers,
   * and hyphens (<code>-</code>). The name can be up to 39 characters long,
   * including periods. Labels that start with <code>xn--</code> aren't supported,
   * and some names are reserved.</p> <p>Specify only the subdomain. A web address,
   * such as <code>mysite.amazonlightsail.com</code>, isn't accepted.</p> <p>To
   * create a nested subdomain, you must own the top-level subdomain or be able to
   * create it.</p>
   */
  inline const Aws::String& GetSubdomainName() const { return m_subdomainName; }
  inline bool SubdomainNameHasBeenSet() const { return m_subdomainNameHasBeenSet; }
  template <typename SubdomainNameT = Aws::String>
  void SetSubdomainName(SubdomainNameT&& value) {
    m_subdomainNameHasBeenSet = true;
    m_subdomainName = std::forward<SubdomainNameT>(value);
  }
  template <typename SubdomainNameT = Aws::String>
  CreateSubdomainRequest& WithSubdomainName(SubdomainNameT&& value) {
    SetSubdomainName(std::forward<SubdomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tag keys and optional values to add to the subdomain during create.</p>
   * <p>Use the <code>TagResource</code> action to tag a resource after it's
   * created.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateSubdomainRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateSubdomainRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subdomainName;

  Aws::Vector<Tag> m_tags;
  bool m_subdomainNameHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
