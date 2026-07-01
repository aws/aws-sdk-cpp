/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>Contains the configuration for mapping user identities to Snowflake users,
 * including the username attribute and optional prefix applied during the
 * mapping.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/IdentityMapping">AWS
 * API Reference</a></p>
 */
class IdentityMapping {
 public:
  AWS_DATAZONE_API IdentityMapping() = default;
  AWS_DATAZONE_API IdentityMapping(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API IdentityMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The username attribute used for the identity mapping.</p>
   */
  inline const Aws::String& GetUsernameAttribute() const { return m_usernameAttribute; }
  inline bool UsernameAttributeHasBeenSet() const { return m_usernameAttributeHasBeenSet; }
  template <typename UsernameAttributeT = Aws::String>
  void SetUsernameAttribute(UsernameAttributeT&& value) {
    m_usernameAttributeHasBeenSet = true;
    m_usernameAttribute = std::forward<UsernameAttributeT>(value);
  }
  template <typename UsernameAttributeT = Aws::String>
  IdentityMapping& WithUsernameAttribute(UsernameAttributeT&& value) {
    SetUsernameAttribute(std::forward<UsernameAttributeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The prefix used for the identity mapping.</p>
   */
  inline const Aws::String& GetPrefix() const { return m_prefix; }
  inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
  template <typename PrefixT = Aws::String>
  void SetPrefix(PrefixT&& value) {
    m_prefixHasBeenSet = true;
    m_prefix = std::forward<PrefixT>(value);
  }
  template <typename PrefixT = Aws::String>
  IdentityMapping& WithPrefix(PrefixT&& value) {
    SetPrefix(std::forward<PrefixT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_usernameAttribute;

  Aws::String m_prefix;
  bool m_usernameAttributeHasBeenSet = false;
  bool m_prefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
