/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamScopeExternalAuthorityType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>The configuration that links an Amazon VPC IPAM scope to an external
 * authority system. It specifies the type of external system and the external
 * resource identifier that identifies your account or instance in that system.</p>
 * <p>For more information, see <a
 * href="https://docs.aws.amazon.com/vpc/latest/ipam/integrate-infoblox-ipam.html">Integrate
 * VPC IPAM with Infoblox infrastructure</a> in the <i>Amazon VPC IPAM User
 * Guide</i>..</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ExternalAuthorityConfiguration">AWS
 * API Reference</a></p>
 */
class ExternalAuthorityConfiguration {
 public:
  AWS_EC2_API ExternalAuthorityConfiguration() = default;
  AWS_EC2_API ExternalAuthorityConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ExternalAuthorityConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The type of external authority.</p>
   */
  inline IpamScopeExternalAuthorityType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(IpamScopeExternalAuthorityType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ExternalAuthorityConfiguration& WithType(IpamScopeExternalAuthorityType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for the external resource managing this scope. For Infoblox
   * integrations, this is the Infoblox resource identifier in the format
   * <code>&lt;version&gt;.identity.account.&lt;entity_realm&gt;.&lt;entity_id&gt;</code>.</p>
   */
  inline const Aws::String& GetExternalResourceIdentifier() const { return m_externalResourceIdentifier; }
  inline bool ExternalResourceIdentifierHasBeenSet() const { return m_externalResourceIdentifierHasBeenSet; }
  template <typename ExternalResourceIdentifierT = Aws::String>
  void SetExternalResourceIdentifier(ExternalResourceIdentifierT&& value) {
    m_externalResourceIdentifierHasBeenSet = true;
    m_externalResourceIdentifier = std::forward<ExternalResourceIdentifierT>(value);
  }
  template <typename ExternalResourceIdentifierT = Aws::String>
  ExternalAuthorityConfiguration& WithExternalResourceIdentifier(ExternalResourceIdentifierT&& value) {
    SetExternalResourceIdentifier(std::forward<ExternalResourceIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  IpamScopeExternalAuthorityType m_type{IpamScopeExternalAuthorityType::NOT_SET};
  bool m_typeHasBeenSet = false;

  Aws::String m_externalResourceIdentifier;
  bool m_externalResourceIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
