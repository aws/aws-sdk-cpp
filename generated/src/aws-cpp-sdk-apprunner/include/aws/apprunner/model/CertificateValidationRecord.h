/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/CertificateValidationRecordStatus.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes a certificate CNAME record to add to your DNS. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/apprunner/latest/api/API_AssociateCustomDomain.html">AssociateCustomDomain</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CertificateValidationRecord">AWS
   * API Reference</a></p>
   */
  class CertificateValidationRecord
  {
  public:
    AWS_APPRUNNER_API CertificateValidationRecord();
    AWS_APPRUNNER_API CertificateValidationRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API CertificateValidationRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The certificate CNAME record name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CertificateValidationRecord& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CertificateValidationRecord& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CertificateValidationRecord& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record type, always <code>CNAME</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline CertificateValidationRecord& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline CertificateValidationRecord& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline CertificateValidationRecord& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate CNAME record value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline CertificateValidationRecord& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline CertificateValidationRecord& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline CertificateValidationRecord& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the certificate CNAME record validation. It should
     * change to <code>SUCCESS</code> after App Runner completes validation with your
     * DNS.</p>
     */
    inline const CertificateValidationRecordStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CertificateValidationRecordStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CertificateValidationRecordStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CertificateValidationRecord& WithStatus(const CertificateValidationRecordStatus& value) { SetStatus(value); return *this;}
    inline CertificateValidationRecord& WithStatus(CertificateValidationRecordStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    CertificateValidationRecordStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
