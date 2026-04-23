/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p> Subdomain for the Domain Association. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/SubDomain">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API SubDomain
  {
  public:
    SubDomain();
    SubDomain(Aws::Utils::Json::JsonView jsonValue);
    SubDomain& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Setting structure for the Subdomain. </p>
     */
    inline const SubDomainSetting& GetSubDomainSetting() const{ return m_subDomainSetting; }

    /**
     * <p> Setting structure for the Subdomain. </p>
     */
    inline bool SubDomainSettingHasBeenSet() const { return m_subDomainSettingHasBeenSet; }

    /**
     * <p> Setting structure for the Subdomain. </p>
     */
    inline void SetSubDomainSetting(const SubDomainSetting& value) { m_subDomainSettingHasBeenSet = true; m_subDomainSetting = value; }

    /**
     * <p> Setting structure for the Subdomain. </p>
     */
    inline void SetSubDomainSetting(SubDomainSetting&& value) { m_subDomainSettingHasBeenSet = true; m_subDomainSetting = std::move(value); }

    /**
     * <p> Setting structure for the Subdomain. </p>
     */
    inline SubDomain& WithSubDomainSetting(const SubDomainSetting& value) { SetSubDomainSetting(value); return *this;}

    /**
     * <p> Setting structure for the Subdomain. </p>
     */
    inline SubDomain& WithSubDomainSetting(SubDomainSetting&& value) { SetSubDomainSetting(std::move(value)); return *this;}


    /**
     * <p> Verified status of the Subdomain </p>
     */
    inline bool GetVerified() const{ return m_verified; }

    /**
     * <p> Verified status of the Subdomain </p>
     */
    inline bool VerifiedHasBeenSet() const { return m_verifiedHasBeenSet; }

    /**
     * <p> Verified status of the Subdomain </p>
     */
    inline void SetVerified(bool value) { m_verifiedHasBeenSet = true; m_verified = value; }

    /**
     * <p> Verified status of the Subdomain </p>
     */
    inline SubDomain& WithVerified(bool value) { SetVerified(value); return *this;}


    /**
     * <p> DNS record for the Subdomain. </p>
     */
    inline const Aws::String& GetDnsRecord() const{ return m_dnsRecord; }

    /**
     * <p> DNS record for the Subdomain. </p>
     */
    inline bool DnsRecordHasBeenSet() const { return m_dnsRecordHasBeenSet; }

    /**
     * <p> DNS record for the Subdomain. </p>
     */
    inline void SetDnsRecord(const Aws::String& value) { m_dnsRecordHasBeenSet = true; m_dnsRecord = value; }

    /**
     * <p> DNS record for the Subdomain. </p>
     */
    inline void SetDnsRecord(Aws::String&& value) { m_dnsRecordHasBeenSet = true; m_dnsRecord = std::move(value); }

    /**
     * <p> DNS record for the Subdomain. </p>
     */
    inline void SetDnsRecord(const char* value) { m_dnsRecordHasBeenSet = true; m_dnsRecord.assign(value); }

    /**
     * <p> DNS record for the Subdomain. </p>
     */
    inline SubDomain& WithDnsRecord(const Aws::String& value) { SetDnsRecord(value); return *this;}

    /**
     * <p> DNS record for the Subdomain. </p>
     */
    inline SubDomain& WithDnsRecord(Aws::String&& value) { SetDnsRecord(std::move(value)); return *this;}

    /**
     * <p> DNS record for the Subdomain. </p>
     */
    inline SubDomain& WithDnsRecord(const char* value) { SetDnsRecord(value); return *this;}

  private:

    SubDomainSetting m_subDomainSetting;
    bool m_subDomainSettingHasBeenSet;

    bool m_verified;
    bool m_verifiedHasBeenSet;

    Aws::String m_dnsRecord;
    bool m_dnsRecordHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
