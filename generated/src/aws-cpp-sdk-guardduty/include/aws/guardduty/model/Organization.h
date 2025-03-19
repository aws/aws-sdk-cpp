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
    AWS_GUARDDUTY_API Organization() = default;
    AWS_GUARDDUTY_API Organization(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Organization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Autonomous System Number (ASN) of the internet provider of the remote IP
     * address.</p>
     */
    inline const Aws::String& GetAsn() const { return m_asn; }
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
    template<typename AsnT = Aws::String>
    void SetAsn(AsnT&& value) { m_asnHasBeenSet = true; m_asn = std::forward<AsnT>(value); }
    template<typename AsnT = Aws::String>
    Organization& WithAsn(AsnT&& value) { SetAsn(std::forward<AsnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The organization that registered this ASN.</p>
     */
    inline const Aws::String& GetAsnOrg() const { return m_asnOrg; }
    inline bool AsnOrgHasBeenSet() const { return m_asnOrgHasBeenSet; }
    template<typename AsnOrgT = Aws::String>
    void SetAsnOrg(AsnOrgT&& value) { m_asnOrgHasBeenSet = true; m_asnOrg = std::forward<AsnOrgT>(value); }
    template<typename AsnOrgT = Aws::String>
    Organization& WithAsnOrg(AsnOrgT&& value) { SetAsnOrg(std::forward<AsnOrgT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISP information for the internet provider.</p>
     */
    inline const Aws::String& GetIsp() const { return m_isp; }
    inline bool IspHasBeenSet() const { return m_ispHasBeenSet; }
    template<typename IspT = Aws::String>
    void SetIsp(IspT&& value) { m_ispHasBeenSet = true; m_isp = std::forward<IspT>(value); }
    template<typename IspT = Aws::String>
    Organization& WithIsp(IspT&& value) { SetIsp(std::forward<IspT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the internet provider.</p>
     */
    inline const Aws::String& GetOrg() const { return m_org; }
    inline bool OrgHasBeenSet() const { return m_orgHasBeenSet; }
    template<typename OrgT = Aws::String>
    void SetOrg(OrgT&& value) { m_orgHasBeenSet = true; m_org = std::forward<OrgT>(value); }
    template<typename OrgT = Aws::String>
    Organization& WithOrg(OrgT&& value) { SetOrg(std::forward<OrgT>(value)); return *this;}
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
