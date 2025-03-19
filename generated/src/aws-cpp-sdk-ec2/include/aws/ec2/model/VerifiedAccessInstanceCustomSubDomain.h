/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a custom subdomain for a network CIDR endpoint for Verified
   * Access.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessInstanceCustomSubDomain">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessInstanceCustomSubDomain
  {
  public:
    AWS_EC2_API VerifiedAccessInstanceCustomSubDomain() = default;
    AWS_EC2_API VerifiedAccessInstanceCustomSubDomain(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessInstanceCustomSubDomain& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The subdomain.</p>
     */
    inline const Aws::String& GetSubDomain() const { return m_subDomain; }
    inline bool SubDomainHasBeenSet() const { return m_subDomainHasBeenSet; }
    template<typename SubDomainT = Aws::String>
    void SetSubDomain(SubDomainT&& value) { m_subDomainHasBeenSet = true; m_subDomain = std::forward<SubDomainT>(value); }
    template<typename SubDomainT = Aws::String>
    VerifiedAccessInstanceCustomSubDomain& WithSubDomain(SubDomainT&& value) { SetSubDomain(std::forward<SubDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name servers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNameservers() const { return m_nameservers; }
    inline bool NameserversHasBeenSet() const { return m_nameserversHasBeenSet; }
    template<typename NameserversT = Aws::Vector<Aws::String>>
    void SetNameservers(NameserversT&& value) { m_nameserversHasBeenSet = true; m_nameservers = std::forward<NameserversT>(value); }
    template<typename NameserversT = Aws::Vector<Aws::String>>
    VerifiedAccessInstanceCustomSubDomain& WithNameservers(NameserversT&& value) { SetNameservers(std::forward<NameserversT>(value)); return *this;}
    template<typename NameserversT = Aws::String>
    VerifiedAccessInstanceCustomSubDomain& AddNameservers(NameserversT&& value) { m_nameserversHasBeenSet = true; m_nameservers.emplace_back(std::forward<NameserversT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_subDomain;
    bool m_subDomainHasBeenSet = false;

    Aws::Vector<Aws::String> m_nameservers;
    bool m_nameserversHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
