/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/EntityResolution_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EntityResolution {
namespace Model {

/**
 * <p>Specifies the configuration for integrating with Customer Profiles. This
 * configuration enables Entity Resolution to send matched output directly to
 * Customer Profiles instead of Amazon S3, creating a unified customer view by
 * automatically updating customer profiles based on match clusters.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/CustomerProfilesIntegrationConfig">AWS
 * API Reference</a></p>
 */
class CustomerProfilesIntegrationConfig {
 public:
  AWS_ENTITYRESOLUTION_API CustomerProfilesIntegrationConfig() = default;
  AWS_ENTITYRESOLUTION_API CustomerProfilesIntegrationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENTITYRESOLUTION_API CustomerProfilesIntegrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Customer Profiles domain where the
   * matched output will be sent.</p>
   */
  inline const Aws::String& GetDomainArn() const { return m_domainArn; }
  inline bool DomainArnHasBeenSet() const { return m_domainArnHasBeenSet; }
  template <typename DomainArnT = Aws::String>
  void SetDomainArn(DomainArnT&& value) {
    m_domainArnHasBeenSet = true;
    m_domainArn = std::forward<DomainArnT>(value);
  }
  template <typename DomainArnT = Aws::String>
  CustomerProfilesIntegrationConfig& WithDomainArn(DomainArnT&& value) {
    SetDomainArn(std::forward<DomainArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Customer Profiles object type that
   * defines the structure for the matched customer data.</p>
   */
  inline const Aws::String& GetObjectTypeArn() const { return m_objectTypeArn; }
  inline bool ObjectTypeArnHasBeenSet() const { return m_objectTypeArnHasBeenSet; }
  template <typename ObjectTypeArnT = Aws::String>
  void SetObjectTypeArn(ObjectTypeArnT&& value) {
    m_objectTypeArnHasBeenSet = true;
    m_objectTypeArn = std::forward<ObjectTypeArnT>(value);
  }
  template <typename ObjectTypeArnT = Aws::String>
  CustomerProfilesIntegrationConfig& WithObjectTypeArn(ObjectTypeArnT&& value) {
    SetObjectTypeArn(std::forward<ObjectTypeArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainArn;

  Aws::String m_objectTypeArn;
  bool m_domainArnHasBeenSet = false;
  bool m_objectTypeArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace EntityResolution
}  // namespace Aws
