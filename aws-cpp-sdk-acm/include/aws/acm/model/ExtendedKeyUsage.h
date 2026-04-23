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
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/ExtendedKeyUsageName.h>
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
namespace ACM
{
namespace Model
{

  /**
   * <p>The Extended Key Usage X.509 v3 extension defines one or more purposes for
   * which the public key can be used. This is in addition to or in place of the
   * basic purposes specified by the Key Usage extension. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ExtendedKeyUsage">AWS
   * API Reference</a></p>
   */
  class AWS_ACM_API ExtendedKeyUsage
  {
  public:
    ExtendedKeyUsage();
    ExtendedKeyUsage(Aws::Utils::Json::JsonView jsonValue);
    ExtendedKeyUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an Extended Key Usage value.</p>
     */
    inline const ExtendedKeyUsageName& GetName() const{ return m_name; }

    /**
     * <p>The name of an Extended Key Usage value.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of an Extended Key Usage value.</p>
     */
    inline void SetName(const ExtendedKeyUsageName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of an Extended Key Usage value.</p>
     */
    inline void SetName(ExtendedKeyUsageName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of an Extended Key Usage value.</p>
     */
    inline ExtendedKeyUsage& WithName(const ExtendedKeyUsageName& value) { SetName(value); return *this;}

    /**
     * <p>The name of an Extended Key Usage value.</p>
     */
    inline ExtendedKeyUsage& WithName(ExtendedKeyUsageName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>An object identifier (OID) for the extension value. OIDs are strings of
     * numbers separated by periods. The following OIDs are defined in RFC 3280 and RFC
     * 5280. </p> <ul> <li> <p> <code>1.3.6.1.5.5.7.3.1
     * (TLS_WEB_SERVER_AUTHENTICATION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.2 (TLS_WEB_CLIENT_AUTHENTICATION)</code> </p> </li> <li>
     * <p> <code>1.3.6.1.5.5.7.3.3 (CODE_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.4 (EMAIL_PROTECTION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.8 (TIME_STAMPING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.9 (OCSP_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.5 (IPSEC_END_SYSTEM)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.6 (IPSEC_TUNNEL)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.7 (IPSEC_USER)</code> </p> </li> </ul>
     */
    inline const Aws::String& GetOID() const{ return m_oID; }

    /**
     * <p>An object identifier (OID) for the extension value. OIDs are strings of
     * numbers separated by periods. The following OIDs are defined in RFC 3280 and RFC
     * 5280. </p> <ul> <li> <p> <code>1.3.6.1.5.5.7.3.1
     * (TLS_WEB_SERVER_AUTHENTICATION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.2 (TLS_WEB_CLIENT_AUTHENTICATION)</code> </p> </li> <li>
     * <p> <code>1.3.6.1.5.5.7.3.3 (CODE_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.4 (EMAIL_PROTECTION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.8 (TIME_STAMPING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.9 (OCSP_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.5 (IPSEC_END_SYSTEM)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.6 (IPSEC_TUNNEL)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.7 (IPSEC_USER)</code> </p> </li> </ul>
     */
    inline bool OIDHasBeenSet() const { return m_oIDHasBeenSet; }

    /**
     * <p>An object identifier (OID) for the extension value. OIDs are strings of
     * numbers separated by periods. The following OIDs are defined in RFC 3280 and RFC
     * 5280. </p> <ul> <li> <p> <code>1.3.6.1.5.5.7.3.1
     * (TLS_WEB_SERVER_AUTHENTICATION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.2 (TLS_WEB_CLIENT_AUTHENTICATION)</code> </p> </li> <li>
     * <p> <code>1.3.6.1.5.5.7.3.3 (CODE_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.4 (EMAIL_PROTECTION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.8 (TIME_STAMPING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.9 (OCSP_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.5 (IPSEC_END_SYSTEM)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.6 (IPSEC_TUNNEL)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.7 (IPSEC_USER)</code> </p> </li> </ul>
     */
    inline void SetOID(const Aws::String& value) { m_oIDHasBeenSet = true; m_oID = value; }

    /**
     * <p>An object identifier (OID) for the extension value. OIDs are strings of
     * numbers separated by periods. The following OIDs are defined in RFC 3280 and RFC
     * 5280. </p> <ul> <li> <p> <code>1.3.6.1.5.5.7.3.1
     * (TLS_WEB_SERVER_AUTHENTICATION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.2 (TLS_WEB_CLIENT_AUTHENTICATION)</code> </p> </li> <li>
     * <p> <code>1.3.6.1.5.5.7.3.3 (CODE_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.4 (EMAIL_PROTECTION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.8 (TIME_STAMPING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.9 (OCSP_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.5 (IPSEC_END_SYSTEM)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.6 (IPSEC_TUNNEL)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.7 (IPSEC_USER)</code> </p> </li> </ul>
     */
    inline void SetOID(Aws::String&& value) { m_oIDHasBeenSet = true; m_oID = std::move(value); }

    /**
     * <p>An object identifier (OID) for the extension value. OIDs are strings of
     * numbers separated by periods. The following OIDs are defined in RFC 3280 and RFC
     * 5280. </p> <ul> <li> <p> <code>1.3.6.1.5.5.7.3.1
     * (TLS_WEB_SERVER_AUTHENTICATION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.2 (TLS_WEB_CLIENT_AUTHENTICATION)</code> </p> </li> <li>
     * <p> <code>1.3.6.1.5.5.7.3.3 (CODE_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.4 (EMAIL_PROTECTION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.8 (TIME_STAMPING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.9 (OCSP_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.5 (IPSEC_END_SYSTEM)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.6 (IPSEC_TUNNEL)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.7 (IPSEC_USER)</code> </p> </li> </ul>
     */
    inline void SetOID(const char* value) { m_oIDHasBeenSet = true; m_oID.assign(value); }

    /**
     * <p>An object identifier (OID) for the extension value. OIDs are strings of
     * numbers separated by periods. The following OIDs are defined in RFC 3280 and RFC
     * 5280. </p> <ul> <li> <p> <code>1.3.6.1.5.5.7.3.1
     * (TLS_WEB_SERVER_AUTHENTICATION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.2 (TLS_WEB_CLIENT_AUTHENTICATION)</code> </p> </li> <li>
     * <p> <code>1.3.6.1.5.5.7.3.3 (CODE_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.4 (EMAIL_PROTECTION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.8 (TIME_STAMPING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.9 (OCSP_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.5 (IPSEC_END_SYSTEM)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.6 (IPSEC_TUNNEL)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.7 (IPSEC_USER)</code> </p> </li> </ul>
     */
    inline ExtendedKeyUsage& WithOID(const Aws::String& value) { SetOID(value); return *this;}

    /**
     * <p>An object identifier (OID) for the extension value. OIDs are strings of
     * numbers separated by periods. The following OIDs are defined in RFC 3280 and RFC
     * 5280. </p> <ul> <li> <p> <code>1.3.6.1.5.5.7.3.1
     * (TLS_WEB_SERVER_AUTHENTICATION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.2 (TLS_WEB_CLIENT_AUTHENTICATION)</code> </p> </li> <li>
     * <p> <code>1.3.6.1.5.5.7.3.3 (CODE_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.4 (EMAIL_PROTECTION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.8 (TIME_STAMPING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.9 (OCSP_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.5 (IPSEC_END_SYSTEM)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.6 (IPSEC_TUNNEL)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.7 (IPSEC_USER)</code> </p> </li> </ul>
     */
    inline ExtendedKeyUsage& WithOID(Aws::String&& value) { SetOID(std::move(value)); return *this;}

    /**
     * <p>An object identifier (OID) for the extension value. OIDs are strings of
     * numbers separated by periods. The following OIDs are defined in RFC 3280 and RFC
     * 5280. </p> <ul> <li> <p> <code>1.3.6.1.5.5.7.3.1
     * (TLS_WEB_SERVER_AUTHENTICATION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.2 (TLS_WEB_CLIENT_AUTHENTICATION)</code> </p> </li> <li>
     * <p> <code>1.3.6.1.5.5.7.3.3 (CODE_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.4 (EMAIL_PROTECTION)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.8 (TIME_STAMPING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.9 (OCSP_SIGNING)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.5 (IPSEC_END_SYSTEM)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.6 (IPSEC_TUNNEL)</code> </p> </li> <li> <p>
     * <code>1.3.6.1.5.5.7.3.7 (IPSEC_USER)</code> </p> </li> </ul>
     */
    inline ExtendedKeyUsage& WithOID(const char* value) { SetOID(value); return *this;}

  private:

    ExtendedKeyUsageName m_name;
    bool m_nameHasBeenSet;

    Aws::String m_oID;
    bool m_oIDHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
