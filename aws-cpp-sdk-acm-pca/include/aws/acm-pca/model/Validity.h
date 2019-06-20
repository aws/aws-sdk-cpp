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
   * <p>Length of time for which the certificate issued by your private certificate
   * authority (CA), or by the private CA itself, is valid in days, months, or years.
   * You can issue a certificate by calling the <a>IssueCertificate</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/Validity">AWS
   * API Reference</a></p>
   */
  class AWS_ACMPCA_API Validity
  {
  public:
    Validity();
    Validity(Aws::Utils::Json::JsonView jsonValue);
    Validity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Time period.</p>
     */
    inline long long GetValue() const{ return m_value; }

    /**
     * <p>Time period.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Time period.</p>
     */
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Time period.</p>
     */
    inline Validity& WithValue(long long value) { SetValue(value); return *this;}


    /**
     * <p>Specifies whether the <code>Value</code> parameter represents days, months,
     * or years.</p>
     */
    inline const ValidityPeriodType& GetType() const{ return m_type; }

    /**
     * <p>Specifies whether the <code>Value</code> parameter represents days, months,
     * or years.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies whether the <code>Value</code> parameter represents days, months,
     * or years.</p>
     */
    inline void SetType(const ValidityPeriodType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies whether the <code>Value</code> parameter represents days, months,
     * or years.</p>
     */
    inline void SetType(ValidityPeriodType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies whether the <code>Value</code> parameter represents days, months,
     * or years.</p>
     */
    inline Validity& WithType(const ValidityPeriodType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies whether the <code>Value</code> parameter represents days, months,
     * or years.</p>
     */
    inline Validity& WithType(ValidityPeriodType&& value) { SetType(std::move(value)); return *this;}

  private:

    long long m_value;
    bool m_valueHasBeenSet;

    ValidityPeriodType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
