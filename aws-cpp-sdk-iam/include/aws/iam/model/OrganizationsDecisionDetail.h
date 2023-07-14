﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains information about the effect that Organizations has on a policy
   * simulation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/OrganizationsDecisionDetail">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API OrganizationsDecisionDetail
  {
  public:
    OrganizationsDecisionDetail();
    OrganizationsDecisionDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    OrganizationsDecisionDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specifies whether the simulated operation is allowed by the Organizations
     * service control policies that impact the simulated user's account.</p>
     */
    inline bool GetAllowedByOrganizations() const{ return m_allowedByOrganizations; }

    /**
     * <p>Specifies whether the simulated operation is allowed by the Organizations
     * service control policies that impact the simulated user's account.</p>
     */
    inline bool AllowedByOrganizationsHasBeenSet() const { return m_allowedByOrganizationsHasBeenSet; }

    /**
     * <p>Specifies whether the simulated operation is allowed by the Organizations
     * service control policies that impact the simulated user's account.</p>
     */
    inline void SetAllowedByOrganizations(bool value) { m_allowedByOrganizationsHasBeenSet = true; m_allowedByOrganizations = value; }

    /**
     * <p>Specifies whether the simulated operation is allowed by the Organizations
     * service control policies that impact the simulated user's account.</p>
     */
    inline OrganizationsDecisionDetail& WithAllowedByOrganizations(bool value) { SetAllowedByOrganizations(value); return *this;}

  private:

    bool m_allowedByOrganizations;
    bool m_allowedByOrganizationsHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
