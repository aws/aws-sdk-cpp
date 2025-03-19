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
   * <p>Remove an Organizational Unit (OU) exclusion to your IPAM. If your IPAM is
   * integrated with Amazon Web Services Organizations and you add an organizational
   * unit (OU) exclusion, IPAM will not manage the IP addresses in accounts in that
   * OU exclusion. There is a limit on the number of exclusions you can create. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/vpc/latest/ipam/quotas-ipam.html">Quotas for
   * your IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RemoveIpamOrganizationalUnitExclusion">AWS
   * API Reference</a></p>
   */
  class RemoveIpamOrganizationalUnitExclusion
  {
  public:
    AWS_EC2_API RemoveIpamOrganizationalUnitExclusion() = default;
    AWS_EC2_API RemoveIpamOrganizationalUnitExclusion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RemoveIpamOrganizationalUnitExclusion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>An Amazon Web Services Organizations entity path. Build the path for the
     * OU(s) using Amazon Web Services Organizations IDs separated by a <code>/</code>.
     * Include all child OUs by ending the path with <code>/ *</code>.</p> <ul> <li>
     * <p>Example 1</p> <ul> <li> <p>Path to a child OU:
     * <code>o-a1b2c3d4e5/r-f6g7h8i9j0example/ou-ghi0-awsccccc/ou-jkl0-awsddddd/</code>
     * </p> </li> <li> <p>In this example, <code>o-a1b2c3d4e5</code> is the
     * organization ID, <code>r-f6g7h8i9j0example</code> is the root ID ,
     * <code>ou-ghi0-awsccccc</code> is an OU ID, and <code>ou-jkl0-awsddddd</code> is
     * a child OU ID.</p> </li> <li> <p>IPAM will not manage the IP addresses in
     * accounts in the child OU.</p> </li> </ul> </li> <li> <p>Example 2</p> <ul> <li>
     * <p>Path where all child OUs will be part of the exclusion:
     * <code>o-a1b2c3d4e5/r-f6g7h8i9j0example/ou-ghi0-awsccccc/ *</code> </p> </li> <li>
     * <p>In this example, IPAM will not manage the IP addresses in accounts in the OU
     * (<code>ou-ghi0-awsccccc</code>) or in accounts in any OUs that are children of
     * the OU.</p> </li> </ul> </li> </ul> <p>For more information on how to construct
     * an entity path, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_last-accessed-view-data-orgs.html#access_policies_access-advisor-viewing-orgs-entity-path">Understand
     * the Amazon Web Services Organizations entity path</a> in the <i>Amazon Web
     * Services Identity and Access Management User Guide</i>.</p>
     */
    inline const Aws::String& GetOrganizationsEntityPath() const { return m_organizationsEntityPath; }
    inline bool OrganizationsEntityPathHasBeenSet() const { return m_organizationsEntityPathHasBeenSet; }
    template<typename OrganizationsEntityPathT = Aws::String>
    void SetOrganizationsEntityPath(OrganizationsEntityPathT&& value) { m_organizationsEntityPathHasBeenSet = true; m_organizationsEntityPath = std::forward<OrganizationsEntityPathT>(value); }
    template<typename OrganizationsEntityPathT = Aws::String>
    RemoveIpamOrganizationalUnitExclusion& WithOrganizationsEntityPath(OrganizationsEntityPathT&& value) { SetOrganizationsEntityPath(std::forward<OrganizationsEntityPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationsEntityPath;
    bool m_organizationsEntityPathHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
