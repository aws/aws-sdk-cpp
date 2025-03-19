/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/SubDomainSetting.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p> The subdomain for the domain association. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/SubDomain">AWS
   * API Reference</a></p>
   */
  class SubDomain
  {
  public:
    AWS_AMPLIFY_API SubDomain() = default;
    AWS_AMPLIFY_API SubDomain(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API SubDomain& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline const SubDomainSetting& GetSubDomainSetting() const { return m_subDomainSetting; }
    inline bool SubDomainSettingHasBeenSet() const { return m_subDomainSettingHasBeenSet; }
    template<typename SubDomainSettingT = SubDomainSetting>
    void SetSubDomainSetting(SubDomainSettingT&& value) { m_subDomainSettingHasBeenSet = true; m_subDomainSetting = std::forward<SubDomainSettingT>(value); }
    template<typename SubDomainSettingT = SubDomainSetting>
    SubDomain& WithSubDomainSetting(SubDomainSettingT&& value) { SetSubDomainSetting(std::forward<SubDomainSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The verified status of the subdomain </p>
     */
    inline bool GetVerified() const { return m_verified; }
    inline bool VerifiedHasBeenSet() const { return m_verifiedHasBeenSet; }
    inline void SetVerified(bool value) { m_verifiedHasBeenSet = true; m_verified = value; }
    inline SubDomain& WithVerified(bool value) { SetVerified(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The DNS record for the subdomain. </p>
     */
    inline const Aws::String& GetDnsRecord() const { return m_dnsRecord; }
    inline bool DnsRecordHasBeenSet() const { return m_dnsRecordHasBeenSet; }
    template<typename DnsRecordT = Aws::String>
    void SetDnsRecord(DnsRecordT&& value) { m_dnsRecordHasBeenSet = true; m_dnsRecord = std::forward<DnsRecordT>(value); }
    template<typename DnsRecordT = Aws::String>
    SubDomain& WithDnsRecord(DnsRecordT&& value) { SetDnsRecord(std::forward<DnsRecordT>(value)); return *this;}
    ///@}
  private:

    SubDomainSetting m_subDomainSetting;
    bool m_subDomainSettingHasBeenSet = false;

    bool m_verified{false};
    bool m_verifiedHasBeenSet = false;

    Aws::String m_dnsRecord;
    bool m_dnsRecordHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
