/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>If your IPAM is integrated with Amazon Web Services Organizations and you add
   * an organizational unit (OU) exclusion, IPAM will not manage the IP addresses in
   * accounts in that OU exclusion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamOrganizationalUnitExclusion">AWS
   * API Reference</a></p>
   */
  class IpamOrganizationalUnitExclusion
  {
  public:
    AWS_EC2_API IpamOrganizationalUnitExclusion() = default;
    AWS_EC2_API IpamOrganizationalUnitExclusion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamOrganizationalUnitExclusion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>An Amazon Web Services Organizations entity path. For more information on the
     * entity path, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_last-accessed-view-data-orgs.html#access_policies_access-advisor-viewing-orgs-entity-path">Understand
     * the Amazon Web Services Organizations entity path</a> in the <i>Amazon Web
     * Services Identity and Access Management User Guide</i>.</p>
     */
    inline const Aws::String& GetOrganizationsEntityPath() const { return m_organizationsEntityPath; }
    inline bool OrganizationsEntityPathHasBeenSet() const { return m_organizationsEntityPathHasBeenSet; }
    template<typename OrganizationsEntityPathT = Aws::String>
    void SetOrganizationsEntityPath(OrganizationsEntityPathT&& value) { m_organizationsEntityPathHasBeenSet = true; m_organizationsEntityPath = std::forward<OrganizationsEntityPathT>(value); }
    template<typename OrganizationsEntityPathT = Aws::String>
    IpamOrganizationalUnitExclusion& WithOrganizationsEntityPath(OrganizationsEntityPathT&& value) { SetOrganizationsEntityPath(std::forward<OrganizationsEntityPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationsEntityPath;
    bool m_organizationsEntityPathHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
