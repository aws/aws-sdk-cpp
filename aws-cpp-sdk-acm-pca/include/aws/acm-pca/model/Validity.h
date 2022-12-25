/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/model/ValidityPeriodType.h>
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
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Validity specifies the period of time during which a certificate is valid.
   * Validity can be expressed as an explicit date and time when the validity of a
   * certificate starts or expires, or as a span of time after issuance, stated in
   * days, months, or years. For more information, see <a
   * href="https://tools.ietf.org/html/rfc5280#section-4.1.2.5">Validity</a> in RFC
   * 5280.</p> <p>ACM Private CA API consumes the <code>Validity</code> data type
   * differently in two distinct parameters of the <code>IssueCertificate</code>
   * action. The required parameter
   * <code>IssueCertificate</code>:<code>Validity</code> specifies the end of a
   * certificate's validity period. The optional parameter
   * <code>IssueCertificate</code>:<code>ValidityNotBefore</code> specifies a
   * customized starting time for the validity period.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/Validity">AWS
   * API Reference</a></p>
   */
  class Validity
  {
  public:
    AWS_ACMPCA_API Validity();
    AWS_ACMPCA_API Validity(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Validity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A long integer interpreted according to the value of <code>Type</code>,
     * below.</p>
     */
    inline long long GetValue() const{ return m_value; }

    /**
     * <p>A long integer interpreted according to the value of <code>Type</code>,
     * below.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A long integer interpreted according to the value of <code>Type</code>,
     * below.</p>
     */
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A long integer interpreted according to the value of <code>Type</code>,
     * below.</p>
     */
    inline Validity& WithValue(long long value) { SetValue(value); return *this;}


    /**
     * <p>Determines how <i>ACM Private CA</i> interprets the <code>Value</code>
     * parameter, an integer. Supported validity types include those listed below. Type
     * definitions with values include a sample input value and the resulting output.
     * </p> <p> <code>END_DATE</code>: The specific date and time when the certificate
     * will expire, expressed using UTCTime (YYMMDDHHMMSS) or GeneralizedTime
     * (YYYYMMDDHHMMSS) format. When UTCTime is used, if the year field (YY) is greater
     * than or equal to 50, the year is interpreted as 19YY. If the year field is less
     * than 50, the year is interpreted as 20YY.</p> <ul> <li> <p>Sample input value:
     * 491231235959 (UTCTime format)</p> </li> <li> <p>Output expiration date/time:
     * 12/31/2049 23:59:59</p> </li> </ul> <p> <code>ABSOLUTE</code>: The specific date
     * and time when the validity of a certificate will start or expire, expressed in
     * seconds since the Unix Epoch. </p> <ul> <li> <p>Sample input value:
     * 2524608000</p> </li> <li> <p>Output expiration date/time: 01/01/2050
     * 00:00:00</p> </li> </ul> <p> <code>DAYS</code>, <code>MONTHS</code>,
     * <code>YEARS</code>: The relative time from the moment of issuance until the
     * certificate will expire, expressed in days, months, or years. </p> <p>Example if
     * <code>DAYS</code>, issued on 10/12/2020 at 12:34:54 UTC:</p> <ul> <li> <p>Sample
     * input value: 90</p> </li> <li> <p>Output expiration date: 01/10/2020 12:34:54
     * UTC</p> </li> </ul> <p>The minimum validity duration for a certificate using
     * relative time (<code>DAYS</code>) is one day. The minimum validity for a
     * certificate using absolute time (<code>ABSOLUTE</code> or <code>END_DATE</code>)
     * is one second.</p>
     */
    inline const ValidityPeriodType& GetType() const{ return m_type; }

    /**
     * <p>Determines how <i>ACM Private CA</i> interprets the <code>Value</code>
     * parameter, an integer. Supported validity types include those listed below. Type
     * definitions with values include a sample input value and the resulting output.
     * </p> <p> <code>END_DATE</code>: The specific date and time when the certificate
     * will expire, expressed using UTCTime (YYMMDDHHMMSS) or GeneralizedTime
     * (YYYYMMDDHHMMSS) format. When UTCTime is used, if the year field (YY) is greater
     * than or equal to 50, the year is interpreted as 19YY. If the year field is less
     * than 50, the year is interpreted as 20YY.</p> <ul> <li> <p>Sample input value:
     * 491231235959 (UTCTime format)</p> </li> <li> <p>Output expiration date/time:
     * 12/31/2049 23:59:59</p> </li> </ul> <p> <code>ABSOLUTE</code>: The specific date
     * and time when the validity of a certificate will start or expire, expressed in
     * seconds since the Unix Epoch. </p> <ul> <li> <p>Sample input value:
     * 2524608000</p> </li> <li> <p>Output expiration date/time: 01/01/2050
     * 00:00:00</p> </li> </ul> <p> <code>DAYS</code>, <code>MONTHS</code>,
     * <code>YEARS</code>: The relative time from the moment of issuance until the
     * certificate will expire, expressed in days, months, or years. </p> <p>Example if
     * <code>DAYS</code>, issued on 10/12/2020 at 12:34:54 UTC:</p> <ul> <li> <p>Sample
     * input value: 90</p> </li> <li> <p>Output expiration date: 01/10/2020 12:34:54
     * UTC</p> </li> </ul> <p>The minimum validity duration for a certificate using
     * relative time (<code>DAYS</code>) is one day. The minimum validity for a
     * certificate using absolute time (<code>ABSOLUTE</code> or <code>END_DATE</code>)
     * is one second.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Determines how <i>ACM Private CA</i> interprets the <code>Value</code>
     * parameter, an integer. Supported validity types include those listed below. Type
     * definitions with values include a sample input value and the resulting output.
     * </p> <p> <code>END_DATE</code>: The specific date and time when the certificate
     * will expire, expressed using UTCTime (YYMMDDHHMMSS) or GeneralizedTime
     * (YYYYMMDDHHMMSS) format. When UTCTime is used, if the year field (YY) is greater
     * than or equal to 50, the year is interpreted as 19YY. If the year field is less
     * than 50, the year is interpreted as 20YY.</p> <ul> <li> <p>Sample input value:
     * 491231235959 (UTCTime format)</p> </li> <li> <p>Output expiration date/time:
     * 12/31/2049 23:59:59</p> </li> </ul> <p> <code>ABSOLUTE</code>: The specific date
     * and time when the validity of a certificate will start or expire, expressed in
     * seconds since the Unix Epoch. </p> <ul> <li> <p>Sample input value:
     * 2524608000</p> </li> <li> <p>Output expiration date/time: 01/01/2050
     * 00:00:00</p> </li> </ul> <p> <code>DAYS</code>, <code>MONTHS</code>,
     * <code>YEARS</code>: The relative time from the moment of issuance until the
     * certificate will expire, expressed in days, months, or years. </p> <p>Example if
     * <code>DAYS</code>, issued on 10/12/2020 at 12:34:54 UTC:</p> <ul> <li> <p>Sample
     * input value: 90</p> </li> <li> <p>Output expiration date: 01/10/2020 12:34:54
     * UTC</p> </li> </ul> <p>The minimum validity duration for a certificate using
     * relative time (<code>DAYS</code>) is one day. The minimum validity for a
     * certificate using absolute time (<code>ABSOLUTE</code> or <code>END_DATE</code>)
     * is one second.</p>
     */
    inline void SetType(const ValidityPeriodType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Determines how <i>ACM Private CA</i> interprets the <code>Value</code>
     * parameter, an integer. Supported validity types include those listed below. Type
     * definitions with values include a sample input value and the resulting output.
     * </p> <p> <code>END_DATE</code>: The specific date and time when the certificate
     * will expire, expressed using UTCTime (YYMMDDHHMMSS) or GeneralizedTime
     * (YYYYMMDDHHMMSS) format. When UTCTime is used, if the year field (YY) is greater
     * than or equal to 50, the year is interpreted as 19YY. If the year field is less
     * than 50, the year is interpreted as 20YY.</p> <ul> <li> <p>Sample input value:
     * 491231235959 (UTCTime format)</p> </li> <li> <p>Output expiration date/time:
     * 12/31/2049 23:59:59</p> </li> </ul> <p> <code>ABSOLUTE</code>: The specific date
     * and time when the validity of a certificate will start or expire, expressed in
     * seconds since the Unix Epoch. </p> <ul> <li> <p>Sample input value:
     * 2524608000</p> </li> <li> <p>Output expiration date/time: 01/01/2050
     * 00:00:00</p> </li> </ul> <p> <code>DAYS</code>, <code>MONTHS</code>,
     * <code>YEARS</code>: The relative time from the moment of issuance until the
     * certificate will expire, expressed in days, months, or years. </p> <p>Example if
     * <code>DAYS</code>, issued on 10/12/2020 at 12:34:54 UTC:</p> <ul> <li> <p>Sample
     * input value: 90</p> </li> <li> <p>Output expiration date: 01/10/2020 12:34:54
     * UTC</p> </li> </ul> <p>The minimum validity duration for a certificate using
     * relative time (<code>DAYS</code>) is one day. The minimum validity for a
     * certificate using absolute time (<code>ABSOLUTE</code> or <code>END_DATE</code>)
     * is one second.</p>
     */
    inline void SetType(ValidityPeriodType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Determines how <i>ACM Private CA</i> interprets the <code>Value</code>
     * parameter, an integer. Supported validity types include those listed below. Type
     * definitions with values include a sample input value and the resulting output.
     * </p> <p> <code>END_DATE</code>: The specific date and time when the certificate
     * will expire, expressed using UTCTime (YYMMDDHHMMSS) or GeneralizedTime
     * (YYYYMMDDHHMMSS) format. When UTCTime is used, if the year field (YY) is greater
     * than or equal to 50, the year is interpreted as 19YY. If the year field is less
     * than 50, the year is interpreted as 20YY.</p> <ul> <li> <p>Sample input value:
     * 491231235959 (UTCTime format)</p> </li> <li> <p>Output expiration date/time:
     * 12/31/2049 23:59:59</p> </li> </ul> <p> <code>ABSOLUTE</code>: The specific date
     * and time when the validity of a certificate will start or expire, expressed in
     * seconds since the Unix Epoch. </p> <ul> <li> <p>Sample input value:
     * 2524608000</p> </li> <li> <p>Output expiration date/time: 01/01/2050
     * 00:00:00</p> </li> </ul> <p> <code>DAYS</code>, <code>MONTHS</code>,
     * <code>YEARS</code>: The relative time from the moment of issuance until the
     * certificate will expire, expressed in days, months, or years. </p> <p>Example if
     * <code>DAYS</code>, issued on 10/12/2020 at 12:34:54 UTC:</p> <ul> <li> <p>Sample
     * input value: 90</p> </li> <li> <p>Output expiration date: 01/10/2020 12:34:54
     * UTC</p> </li> </ul> <p>The minimum validity duration for a certificate using
     * relative time (<code>DAYS</code>) is one day. The minimum validity for a
     * certificate using absolute time (<code>ABSOLUTE</code> or <code>END_DATE</code>)
     * is one second.</p>
     */
    inline Validity& WithType(const ValidityPeriodType& value) { SetType(value); return *this;}

    /**
     * <p>Determines how <i>ACM Private CA</i> interprets the <code>Value</code>
     * parameter, an integer. Supported validity types include those listed below. Type
     * definitions with values include a sample input value and the resulting output.
     * </p> <p> <code>END_DATE</code>: The specific date and time when the certificate
     * will expire, expressed using UTCTime (YYMMDDHHMMSS) or GeneralizedTime
     * (YYYYMMDDHHMMSS) format. When UTCTime is used, if the year field (YY) is greater
     * than or equal to 50, the year is interpreted as 19YY. If the year field is less
     * than 50, the year is interpreted as 20YY.</p> <ul> <li> <p>Sample input value:
     * 491231235959 (UTCTime format)</p> </li> <li> <p>Output expiration date/time:
     * 12/31/2049 23:59:59</p> </li> </ul> <p> <code>ABSOLUTE</code>: The specific date
     * and time when the validity of a certificate will start or expire, expressed in
     * seconds since the Unix Epoch. </p> <ul> <li> <p>Sample input value:
     * 2524608000</p> </li> <li> <p>Output expiration date/time: 01/01/2050
     * 00:00:00</p> </li> </ul> <p> <code>DAYS</code>, <code>MONTHS</code>,
     * <code>YEARS</code>: The relative time from the moment of issuance until the
     * certificate will expire, expressed in days, months, or years. </p> <p>Example if
     * <code>DAYS</code>, issued on 10/12/2020 at 12:34:54 UTC:</p> <ul> <li> <p>Sample
     * input value: 90</p> </li> <li> <p>Output expiration date: 01/10/2020 12:34:54
     * UTC</p> </li> </ul> <p>The minimum validity duration for a certificate using
     * relative time (<code>DAYS</code>) is one day. The minimum validity for a
     * certificate using absolute time (<code>ABSOLUTE</code> or <code>END_DATE</code>)
     * is one second.</p>
     */
    inline Validity& WithType(ValidityPeriodType&& value) { SetType(std::move(value)); return *this;}

  private:

    long long m_value;
    bool m_valueHasBeenSet = false;

    ValidityPeriodType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
