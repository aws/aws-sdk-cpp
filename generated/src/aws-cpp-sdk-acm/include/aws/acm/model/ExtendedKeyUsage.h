﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ExtendedKeyUsage
  {
  public:
    AWS_ACM_API ExtendedKeyUsage() = default;
    AWS_ACM_API ExtendedKeyUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API ExtendedKeyUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an Extended Key Usage value.</p>
     */
    inline ExtendedKeyUsageName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ExtendedKeyUsageName value) { m_nameHasBeenSet = true; m_name = value; }
    inline ExtendedKeyUsage& WithName(ExtendedKeyUsageName value) { SetName(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetOID() const { return m_oID; }
    inline bool OIDHasBeenSet() const { return m_oIDHasBeenSet; }
    template<typename OIDT = Aws::String>
    void SetOID(OIDT&& value) { m_oIDHasBeenSet = true; m_oID = std::forward<OIDT>(value); }
    template<typename OIDT = Aws::String>
    ExtendedKeyUsage& WithOID(OIDT&& value) { SetOID(std::forward<OIDT>(value)); return *this;}
    ///@}
  private:

    ExtendedKeyUsageName m_name{ExtendedKeyUsageName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_oID;
    bool m_oIDHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
