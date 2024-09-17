/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the ISP organization of the remote IP
   * address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Organization">AWS
   * API Reference</a></p>
   */
  class Organization
  {
  public:
    AWS_GUARDDUTY_API Organization();
    AWS_GUARDDUTY_API Organization(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Organization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Autonomous System Number (ASN) of the internet provider of the remote IP
     * address.</p>
     */
    inline const Aws::String& GetAsn() const{ return m_asn; }
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
    inline void SetAsn(const Aws::String& value) { m_asnHasBeenSet = true; m_asn = value; }
    inline void SetAsn(Aws::String&& value) { m_asnHasBeenSet = true; m_asn = std::move(value); }
    inline void SetAsn(const char* value) { m_asnHasBeenSet = true; m_asn.assign(value); }
    inline Organization& WithAsn(const Aws::String& value) { SetAsn(value); return *this;}
    inline Organization& WithAsn(Aws::String&& value) { SetAsn(std::move(value)); return *this;}
    inline Organization& WithAsn(const char* value) { SetAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The organization that registered this ASN.</p>
     */
    inline const Aws::String& GetAsnOrg() const{ return m_asnOrg; }
    inline bool AsnOrgHasBeenSet() const { return m_asnOrgHasBeenSet; }
    inline void SetAsnOrg(const Aws::String& value) { m_asnOrgHasBeenSet = true; m_asnOrg = value; }
    inline void SetAsnOrg(Aws::String&& value) { m_asnOrgHasBeenSet = true; m_asnOrg = std::move(value); }
    inline void SetAsnOrg(const char* value) { m_asnOrgHasBeenSet = true; m_asnOrg.assign(value); }
    inline Organization& WithAsnOrg(const Aws::String& value) { SetAsnOrg(value); return *this;}
    inline Organization& WithAsnOrg(Aws::String&& value) { SetAsnOrg(std::move(value)); return *this;}
    inline Organization& WithAsnOrg(const char* value) { SetAsnOrg(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISP information for the internet provider.</p>
     */
    inline const Aws::String& GetIsp() const{ return m_isp; }
    inline bool IspHasBeenSet() const { return m_ispHasBeenSet; }
    inline void SetIsp(const Aws::String& value) { m_ispHasBeenSet = true; m_isp = value; }
    inline void SetIsp(Aws::String&& value) { m_ispHasBeenSet = true; m_isp = std::move(value); }
    inline void SetIsp(const char* value) { m_ispHasBeenSet = true; m_isp.assign(value); }
    inline Organization& WithIsp(const Aws::String& value) { SetIsp(value); return *this;}
    inline Organization& WithIsp(Aws::String&& value) { SetIsp(std::move(value)); return *this;}
    inline Organization& WithIsp(const char* value) { SetIsp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the internet provider.</p>
     */
    inline const Aws::String& GetOrg() const{ return m_org; }
    inline bool OrgHasBeenSet() const { return m_orgHasBeenSet; }
    inline void SetOrg(const Aws::String& value) { m_orgHasBeenSet = true; m_org = value; }
    inline void SetOrg(Aws::String&& value) { m_orgHasBeenSet = true; m_org = std::move(value); }
    inline void SetOrg(const char* value) { m_orgHasBeenSet = true; m_org.assign(value); }
    inline Organization& WithOrg(const Aws::String& value) { SetOrg(value); return *this;}
    inline Organization& WithOrg(Aws::String&& value) { SetOrg(std::move(value)); return *this;}
    inline Organization& WithOrg(const char* value) { SetOrg(value); return *this;}
    ///@}
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
} // namespace GuardDuty
} // namespace Aws
