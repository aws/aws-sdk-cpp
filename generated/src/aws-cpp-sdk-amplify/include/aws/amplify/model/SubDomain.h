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
    AWS_AMPLIFY_API SubDomain();
    AWS_AMPLIFY_API SubDomain(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API SubDomain& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline const SubDomainSetting& GetSubDomainSetting() const{ return m_subDomainSetting; }

    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline bool SubDomainSettingHasBeenSet() const { return m_subDomainSettingHasBeenSet; }

    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline void SetSubDomainSetting(const SubDomainSetting& value) { m_subDomainSettingHasBeenSet = true; m_subDomainSetting = value; }

    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline void SetSubDomainSetting(SubDomainSetting&& value) { m_subDomainSettingHasBeenSet = true; m_subDomainSetting = std::move(value); }

    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline SubDomain& WithSubDomainSetting(const SubDomainSetting& value) { SetSubDomainSetting(value); return *this;}

    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline SubDomain& WithSubDomainSetting(SubDomainSetting&& value) { SetSubDomainSetting(std::move(value)); return *this;}


    /**
     * <p> The verified status of the subdomain </p>
     */
    inline bool GetVerified() const{ return m_verified; }

    /**
     * <p> The verified status of the subdomain </p>
     */
    inline bool VerifiedHasBeenSet() const { return m_verifiedHasBeenSet; }

    /**
     * <p> The verified status of the subdomain </p>
     */
    inline void SetVerified(bool value) { m_verifiedHasBeenSet = true; m_verified = value; }

    /**
     * <p> The verified status of the subdomain </p>
     */
    inline SubDomain& WithVerified(bool value) { SetVerified(value); return *this;}


    /**
     * <p> The DNS record for the subdomain. </p>
     */
    inline const Aws::String& GetDnsRecord() const{ return m_dnsRecord; }

    /**
     * <p> The DNS record for the subdomain. </p>
     */
    inline bool DnsRecordHasBeenSet() const { return m_dnsRecordHasBeenSet; }

    /**
     * <p> The DNS record for the subdomain. </p>
     */
    inline void SetDnsRecord(const Aws::String& value) { m_dnsRecordHasBeenSet = true; m_dnsRecord = value; }

    /**
     * <p> The DNS record for the subdomain. </p>
     */
    inline void SetDnsRecord(Aws::String&& value) { m_dnsRecordHasBeenSet = true; m_dnsRecord = std::move(value); }

    /**
     * <p> The DNS record for the subdomain. </p>
     */
    inline void SetDnsRecord(const char* value) { m_dnsRecordHasBeenSet = true; m_dnsRecord.assign(value); }

    /**
     * <p> The DNS record for the subdomain. </p>
     */
    inline SubDomain& WithDnsRecord(const Aws::String& value) { SetDnsRecord(value); return *this;}

    /**
     * <p> The DNS record for the subdomain. </p>
     */
    inline SubDomain& WithDnsRecord(Aws::String&& value) { SetDnsRecord(std::move(value)); return *this;}

    /**
     * <p> The DNS record for the subdomain. </p>
     */
    inline SubDomain& WithDnsRecord(const char* value) { SetDnsRecord(value); return *this;}

  private:

    SubDomainSetting m_subDomainSetting;
    bool m_subDomainSettingHasBeenSet = false;

    bool m_verified;
    bool m_verifiedHasBeenSet = false;

    Aws::String m_dnsRecord;
    bool m_dnsRecordHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
