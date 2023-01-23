/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the registered owner of an IP
   * address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/IpOwner">AWS API
   * Reference</a></p>
   */
  class IpOwner
  {
  public:
    AWS_MACIE2_API IpOwner();
    AWS_MACIE2_API IpOwner(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API IpOwner& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The autonomous system number (ASN) for the autonomous system that included
     * the IP address.</p>
     */
    inline const Aws::String& GetAsn() const{ return m_asn; }

    /**
     * <p>The autonomous system number (ASN) for the autonomous system that included
     * the IP address.</p>
     */
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }

    /**
     * <p>The autonomous system number (ASN) for the autonomous system that included
     * the IP address.</p>
     */
    inline void SetAsn(const Aws::String& value) { m_asnHasBeenSet = true; m_asn = value; }

    /**
     * <p>The autonomous system number (ASN) for the autonomous system that included
     * the IP address.</p>
     */
    inline void SetAsn(Aws::String&& value) { m_asnHasBeenSet = true; m_asn = std::move(value); }

    /**
     * <p>The autonomous system number (ASN) for the autonomous system that included
     * the IP address.</p>
     */
    inline void SetAsn(const char* value) { m_asnHasBeenSet = true; m_asn.assign(value); }

    /**
     * <p>The autonomous system number (ASN) for the autonomous system that included
     * the IP address.</p>
     */
    inline IpOwner& WithAsn(const Aws::String& value) { SetAsn(value); return *this;}

    /**
     * <p>The autonomous system number (ASN) for the autonomous system that included
     * the IP address.</p>
     */
    inline IpOwner& WithAsn(Aws::String&& value) { SetAsn(std::move(value)); return *this;}

    /**
     * <p>The autonomous system number (ASN) for the autonomous system that included
     * the IP address.</p>
     */
    inline IpOwner& WithAsn(const char* value) { SetAsn(value); return *this;}


    /**
     * <p>The organization identifier that's associated with the autonomous system
     * number (ASN) for the autonomous system that included the IP address.</p>
     */
    inline const Aws::String& GetAsnOrg() const{ return m_asnOrg; }

    /**
     * <p>The organization identifier that's associated with the autonomous system
     * number (ASN) for the autonomous system that included the IP address.</p>
     */
    inline bool AsnOrgHasBeenSet() const { return m_asnOrgHasBeenSet; }

    /**
     * <p>The organization identifier that's associated with the autonomous system
     * number (ASN) for the autonomous system that included the IP address.</p>
     */
    inline void SetAsnOrg(const Aws::String& value) { m_asnOrgHasBeenSet = true; m_asnOrg = value; }

    /**
     * <p>The organization identifier that's associated with the autonomous system
     * number (ASN) for the autonomous system that included the IP address.</p>
     */
    inline void SetAsnOrg(Aws::String&& value) { m_asnOrgHasBeenSet = true; m_asnOrg = std::move(value); }

    /**
     * <p>The organization identifier that's associated with the autonomous system
     * number (ASN) for the autonomous system that included the IP address.</p>
     */
    inline void SetAsnOrg(const char* value) { m_asnOrgHasBeenSet = true; m_asnOrg.assign(value); }

    /**
     * <p>The organization identifier that's associated with the autonomous system
     * number (ASN) for the autonomous system that included the IP address.</p>
     */
    inline IpOwner& WithAsnOrg(const Aws::String& value) { SetAsnOrg(value); return *this;}

    /**
     * <p>The organization identifier that's associated with the autonomous system
     * number (ASN) for the autonomous system that included the IP address.</p>
     */
    inline IpOwner& WithAsnOrg(Aws::String&& value) { SetAsnOrg(std::move(value)); return *this;}

    /**
     * <p>The organization identifier that's associated with the autonomous system
     * number (ASN) for the autonomous system that included the IP address.</p>
     */
    inline IpOwner& WithAsnOrg(const char* value) { SetAsnOrg(value); return *this;}


    /**
     * <p>The name of the internet service provider (ISP) that owned the IP
     * address.</p>
     */
    inline const Aws::String& GetIsp() const{ return m_isp; }

    /**
     * <p>The name of the internet service provider (ISP) that owned the IP
     * address.</p>
     */
    inline bool IspHasBeenSet() const { return m_ispHasBeenSet; }

    /**
     * <p>The name of the internet service provider (ISP) that owned the IP
     * address.</p>
     */
    inline void SetIsp(const Aws::String& value) { m_ispHasBeenSet = true; m_isp = value; }

    /**
     * <p>The name of the internet service provider (ISP) that owned the IP
     * address.</p>
     */
    inline void SetIsp(Aws::String&& value) { m_ispHasBeenSet = true; m_isp = std::move(value); }

    /**
     * <p>The name of the internet service provider (ISP) that owned the IP
     * address.</p>
     */
    inline void SetIsp(const char* value) { m_ispHasBeenSet = true; m_isp.assign(value); }

    /**
     * <p>The name of the internet service provider (ISP) that owned the IP
     * address.</p>
     */
    inline IpOwner& WithIsp(const Aws::String& value) { SetIsp(value); return *this;}

    /**
     * <p>The name of the internet service provider (ISP) that owned the IP
     * address.</p>
     */
    inline IpOwner& WithIsp(Aws::String&& value) { SetIsp(std::move(value)); return *this;}

    /**
     * <p>The name of the internet service provider (ISP) that owned the IP
     * address.</p>
     */
    inline IpOwner& WithIsp(const char* value) { SetIsp(value); return *this;}


    /**
     * <p>The name of the organization that owned the IP address.</p>
     */
    inline const Aws::String& GetOrg() const{ return m_org; }

    /**
     * <p>The name of the organization that owned the IP address.</p>
     */
    inline bool OrgHasBeenSet() const { return m_orgHasBeenSet; }

    /**
     * <p>The name of the organization that owned the IP address.</p>
     */
    inline void SetOrg(const Aws::String& value) { m_orgHasBeenSet = true; m_org = value; }

    /**
     * <p>The name of the organization that owned the IP address.</p>
     */
    inline void SetOrg(Aws::String&& value) { m_orgHasBeenSet = true; m_org = std::move(value); }

    /**
     * <p>The name of the organization that owned the IP address.</p>
     */
    inline void SetOrg(const char* value) { m_orgHasBeenSet = true; m_org.assign(value); }

    /**
     * <p>The name of the organization that owned the IP address.</p>
     */
    inline IpOwner& WithOrg(const Aws::String& value) { SetOrg(value); return *this;}

    /**
     * <p>The name of the organization that owned the IP address.</p>
     */
    inline IpOwner& WithOrg(Aws::String&& value) { SetOrg(std::move(value)); return *this;}

    /**
     * <p>The name of the organization that owned the IP address.</p>
     */
    inline IpOwner& WithOrg(const char* value) { SetOrg(value); return *this;}

  private:

    Aws::String m_asn;
    bool m_asnHasBeenSet = false;

    Aws::String m_asnOrg;
    bool m_asnOrgHasBeenSet = false;

    Aws::String m_isp;
    bool m_ispHasBeenSet = false;

    Aws::String m_org;
    bool m_orgHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
