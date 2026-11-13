/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lightsail {
namespace Model {

/**
 * <p>Describes a Lightsail resource that a subdomain is associated with, or is
 * being associated with.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/SubdomainAttachableResource">AWS
 * API Reference</a></p>
 */
class SubdomainAttachableResource {
 public:
  AWS_LIGHTSAIL_API SubdomainAttachableResource() = default;
  AWS_LIGHTSAIL_API SubdomainAttachableResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API SubdomainAttachableResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  SubdomainAttachableResource& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the resource.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SubdomainAttachableResource& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the subdomain was associated with the resource.</p>
   */
  inline const Aws::Utils::DateTime& GetAttachedAt() const { return m_attachedAt; }
  inline bool AttachedAtHasBeenSet() const { return m_attachedAtHasBeenSet; }
  template <typename AttachedAtT = Aws::Utils::DateTime>
  void SetAttachedAt(AttachedAtT&& value) {
    m_attachedAtHasBeenSet = true;
    m_attachedAt = std::forward<AttachedAtT>(value);
  }
  template <typename AttachedAtT = Aws::Utils::DateTime>
  SubdomainAttachableResource& WithAttachedAt(AttachedAtT&& value) {
    SetAttachedAt(std::forward<AttachedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  Aws::Utils::DateTime m_attachedAt{};
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_attachedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
