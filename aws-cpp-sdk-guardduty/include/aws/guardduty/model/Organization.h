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

  class AWS_GUARDDUTY_API Organization
  {
  public:
    Organization();
    Organization(Aws::Utils::Json::JsonView jsonValue);
    Organization& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Autonomous system number of the internet provider of the remote IP
     * address.</p>
     */
    inline const Aws::String& GetAsn() const{ return m_asn; }

    /**
     * <p>Autonomous system number of the internet provider of the remote IP
     * address.</p>
     */
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }

    /**
     * <p>Autonomous system number of the internet provider of the remote IP
     * address.</p>
     */
    inline void SetAsn(const Aws::String& value) { m_asnHasBeenSet = true; m_asn = value; }

    /**
     * <p>Autonomous system number of the internet provider of the remote IP
     * address.</p>
     */
    inline void SetAsn(Aws::String&& value) { m_asnHasBeenSet = true; m_asn = std::move(value); }

    /**
     * <p>Autonomous system number of the internet provider of the remote IP
     * address.</p>
     */
    inline void SetAsn(const char* value) { m_asnHasBeenSet = true; m_asn.assign(value); }

    /**
     * <p>Autonomous system number of the internet provider of the remote IP
     * address.</p>
     */
    inline Organization& WithAsn(const Aws::String& value) { SetAsn(value); return *this;}

    /**
     * <p>Autonomous system number of the internet provider of the remote IP
     * address.</p>
     */
    inline Organization& WithAsn(Aws::String&& value) { SetAsn(std::move(value)); return *this;}

    /**
     * <p>Autonomous system number of the internet provider of the remote IP
     * address.</p>
     */
    inline Organization& WithAsn(const char* value) { SetAsn(value); return *this;}


    /**
     * <p>Organization that registered this ASN.</p>
     */
    inline const Aws::String& GetAsnOrg() const{ return m_asnOrg; }

    /**
     * <p>Organization that registered this ASN.</p>
     */
    inline bool AsnOrgHasBeenSet() const { return m_asnOrgHasBeenSet; }

    /**
     * <p>Organization that registered this ASN.</p>
     */
    inline void SetAsnOrg(const Aws::String& value) { m_asnOrgHasBeenSet = true; m_asnOrg = value; }

    /**
     * <p>Organization that registered this ASN.</p>
     */
    inline void SetAsnOrg(Aws::String&& value) { m_asnOrgHasBeenSet = true; m_asnOrg = std::move(value); }

    /**
     * <p>Organization that registered this ASN.</p>
     */
    inline void SetAsnOrg(const char* value) { m_asnOrgHasBeenSet = true; m_asnOrg.assign(value); }

    /**
     * <p>Organization that registered this ASN.</p>
     */
    inline Organization& WithAsnOrg(const Aws::String& value) { SetAsnOrg(value); return *this;}

    /**
     * <p>Organization that registered this ASN.</p>
     */
    inline Organization& WithAsnOrg(Aws::String&& value) { SetAsnOrg(std::move(value)); return *this;}

    /**
     * <p>Organization that registered this ASN.</p>
     */
    inline Organization& WithAsnOrg(const char* value) { SetAsnOrg(value); return *this;}


    /**
     * <p>ISP information for the internet provider.</p>
     */
    inline const Aws::String& GetIsp() const{ return m_isp; }

    /**
     * <p>ISP information for the internet provider.</p>
     */
    inline bool IspHasBeenSet() const { return m_ispHasBeenSet; }

    /**
     * <p>ISP information for the internet provider.</p>
     */
    inline void SetIsp(const Aws::String& value) { m_ispHasBeenSet = true; m_isp = value; }

    /**
     * <p>ISP information for the internet provider.</p>
     */
    inline void SetIsp(Aws::String&& value) { m_ispHasBeenSet = true; m_isp = std::move(value); }

    /**
     * <p>ISP information for the internet provider.</p>
     */
    inline void SetIsp(const char* value) { m_ispHasBeenSet = true; m_isp.assign(value); }

    /**
     * <p>ISP information for the internet provider.</p>
     */
    inline Organization& WithIsp(const Aws::String& value) { SetIsp(value); return *this;}

    /**
     * <p>ISP information for the internet provider.</p>
     */
    inline Organization& WithIsp(Aws::String&& value) { SetIsp(std::move(value)); return *this;}

    /**
     * <p>ISP information for the internet provider.</p>
     */
    inline Organization& WithIsp(const char* value) { SetIsp(value); return *this;}


    /**
     * <p>Name of the internet provider.</p>
     */
    inline const Aws::String& GetOrg() const{ return m_org; }

    /**
     * <p>Name of the internet provider.</p>
     */
    inline bool OrgHasBeenSet() const { return m_orgHasBeenSet; }

    /**
     * <p>Name of the internet provider.</p>
     */
    inline void SetOrg(const Aws::String& value) { m_orgHasBeenSet = true; m_org = value; }

    /**
     * <p>Name of the internet provider.</p>
     */
    inline void SetOrg(Aws::String&& value) { m_orgHasBeenSet = true; m_org = std::move(value); }

    /**
     * <p>Name of the internet provider.</p>
     */
    inline void SetOrg(const char* value) { m_orgHasBeenSet = true; m_org.assign(value); }

    /**
     * <p>Name of the internet provider.</p>
     */
    inline Organization& WithOrg(const Aws::String& value) { SetOrg(value); return *this;}

    /**
     * <p>Name of the internet provider.</p>
     */
    inline Organization& WithOrg(Aws::String&& value) { SetOrg(std::move(value)); return *this;}

    /**
     * <p>Name of the internet provider.</p>
     */
    inline Organization& WithOrg(const char* value) { SetOrg(value); return *this;}

  private:

    Aws::String m_asn;
    bool m_asnHasBeenSet;

    Aws::String m_asnOrg;
    bool m_asnOrgHasBeenSet;

    Aws::String m_isp;
    bool m_ispHasBeenSet;

    Aws::String m_org;
    bool m_orgHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
