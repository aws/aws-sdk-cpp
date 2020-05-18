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
   * <p>Reserved for future use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/IpOwner">AWS API
   * Reference</a></p>
   */
  class AWS_MACIE2_API IpOwner
  {
  public:
    IpOwner();
    IpOwner(Aws::Utils::Json::JsonView jsonValue);
    IpOwner& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetAsn() const{ return m_asn; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAsn(const Aws::String& value) { m_asnHasBeenSet = true; m_asn = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAsn(Aws::String&& value) { m_asnHasBeenSet = true; m_asn = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAsn(const char* value) { m_asnHasBeenSet = true; m_asn.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpOwner& WithAsn(const Aws::String& value) { SetAsn(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpOwner& WithAsn(Aws::String&& value) { SetAsn(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpOwner& WithAsn(const char* value) { SetAsn(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetAsnOrg() const{ return m_asnOrg; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool AsnOrgHasBeenSet() const { return m_asnOrgHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAsnOrg(const Aws::String& value) { m_asnOrgHasBeenSet = true; m_asnOrg = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAsnOrg(Aws::String&& value) { m_asnOrgHasBeenSet = true; m_asnOrg = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAsnOrg(const char* value) { m_asnOrgHasBeenSet = true; m_asnOrg.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpOwner& WithAsnOrg(const Aws::String& value) { SetAsnOrg(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpOwner& WithAsnOrg(Aws::String&& value) { SetAsnOrg(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpOwner& WithAsnOrg(const char* value) { SetAsnOrg(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetIsp() const{ return m_isp; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool IspHasBeenSet() const { return m_ispHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIsp(const Aws::String& value) { m_ispHasBeenSet = true; m_isp = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIsp(Aws::String&& value) { m_ispHasBeenSet = true; m_isp = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIsp(const char* value) { m_ispHasBeenSet = true; m_isp.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpOwner& WithIsp(const Aws::String& value) { SetIsp(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpOwner& WithIsp(Aws::String&& value) { SetIsp(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpOwner& WithIsp(const char* value) { SetIsp(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetOrg() const{ return m_org; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool OrgHasBeenSet() const { return m_orgHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetOrg(const Aws::String& value) { m_orgHasBeenSet = true; m_org = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetOrg(Aws::String&& value) { m_orgHasBeenSet = true; m_org = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetOrg(const char* value) { m_orgHasBeenSet = true; m_org.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpOwner& WithOrg(const Aws::String& value) { SetOrg(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpOwner& WithOrg(Aws::String&& value) { SetOrg(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline IpOwner& WithOrg(const char* value) { SetOrg(value); return *this;}

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
} // namespace Macie2
} // namespace Aws
