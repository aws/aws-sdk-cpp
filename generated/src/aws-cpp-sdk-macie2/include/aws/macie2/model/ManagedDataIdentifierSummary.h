/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/SensitiveDataItemCategory.h>
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
   * <p>Provides information about a managed data identifier. For additional
   * information, see <a
   * href="https://docs.aws.amazon.com/macie/latest/user/managed-data-identifiers.html">Using
   * managed data identifiers</a> in the <i>Amazon Macie User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ManagedDataIdentifierSummary">AWS
   * API Reference</a></p>
   */
  class ManagedDataIdentifierSummary
  {
  public:
    AWS_MACIE2_API ManagedDataIdentifierSummary();
    AWS_MACIE2_API ManagedDataIdentifierSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ManagedDataIdentifierSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The category of sensitive data that the managed data identifier detects:
     * CREDENTIALS, for credentials data such as private keys or Amazon Web Services
     * secret access keys; FINANCIAL_INFORMATION, for financial data such as credit
     * card numbers; or, PERSONAL_INFORMATION, for personal health information, such as
     * health insurance identification numbers, or personally identifiable information,
     * such as passport numbers.</p>
     */
    inline const SensitiveDataItemCategory& GetCategory() const{ return m_category; }

    /**
     * <p>The category of sensitive data that the managed data identifier detects:
     * CREDENTIALS, for credentials data such as private keys or Amazon Web Services
     * secret access keys; FINANCIAL_INFORMATION, for financial data such as credit
     * card numbers; or, PERSONAL_INFORMATION, for personal health information, such as
     * health insurance identification numbers, or personally identifiable information,
     * such as passport numbers.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of sensitive data that the managed data identifier detects:
     * CREDENTIALS, for credentials data such as private keys or Amazon Web Services
     * secret access keys; FINANCIAL_INFORMATION, for financial data such as credit
     * card numbers; or, PERSONAL_INFORMATION, for personal health information, such as
     * health insurance identification numbers, or personally identifiable information,
     * such as passport numbers.</p>
     */
    inline void SetCategory(const SensitiveDataItemCategory& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of sensitive data that the managed data identifier detects:
     * CREDENTIALS, for credentials data such as private keys or Amazon Web Services
     * secret access keys; FINANCIAL_INFORMATION, for financial data such as credit
     * card numbers; or, PERSONAL_INFORMATION, for personal health information, such as
     * health insurance identification numbers, or personally identifiable information,
     * such as passport numbers.</p>
     */
    inline void SetCategory(SensitiveDataItemCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of sensitive data that the managed data identifier detects:
     * CREDENTIALS, for credentials data such as private keys or Amazon Web Services
     * secret access keys; FINANCIAL_INFORMATION, for financial data such as credit
     * card numbers; or, PERSONAL_INFORMATION, for personal health information, such as
     * health insurance identification numbers, or personally identifiable information,
     * such as passport numbers.</p>
     */
    inline ManagedDataIdentifierSummary& WithCategory(const SensitiveDataItemCategory& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of sensitive data that the managed data identifier detects:
     * CREDENTIALS, for credentials data such as private keys or Amazon Web Services
     * secret access keys; FINANCIAL_INFORMATION, for financial data such as credit
     * card numbers; or, PERSONAL_INFORMATION, for personal health information, such as
     * health insurance identification numbers, or personally identifiable information,
     * such as passport numbers.</p>
     */
    inline ManagedDataIdentifierSummary& WithCategory(SensitiveDataItemCategory&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the managed data identifier. This is a string that
     * describes the type of sensitive data that the managed data identifier detects.
     * For example: OPENSSH_PRIVATE_KEY for OpenSSH private keys, CREDIT_CARD_NUMBER
     * for credit card numbers, or USA_PASSPORT_NUMBER for US passport numbers.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the managed data identifier. This is a string that
     * describes the type of sensitive data that the managed data identifier detects.
     * For example: OPENSSH_PRIVATE_KEY for OpenSSH private keys, CREDIT_CARD_NUMBER
     * for credit card numbers, or USA_PASSPORT_NUMBER for US passport numbers.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the managed data identifier. This is a string that
     * describes the type of sensitive data that the managed data identifier detects.
     * For example: OPENSSH_PRIVATE_KEY for OpenSSH private keys, CREDIT_CARD_NUMBER
     * for credit card numbers, or USA_PASSPORT_NUMBER for US passport numbers.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the managed data identifier. This is a string that
     * describes the type of sensitive data that the managed data identifier detects.
     * For example: OPENSSH_PRIVATE_KEY for OpenSSH private keys, CREDIT_CARD_NUMBER
     * for credit card numbers, or USA_PASSPORT_NUMBER for US passport numbers.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the managed data identifier. This is a string that
     * describes the type of sensitive data that the managed data identifier detects.
     * For example: OPENSSH_PRIVATE_KEY for OpenSSH private keys, CREDIT_CARD_NUMBER
     * for credit card numbers, or USA_PASSPORT_NUMBER for US passport numbers.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the managed data identifier. This is a string that
     * describes the type of sensitive data that the managed data identifier detects.
     * For example: OPENSSH_PRIVATE_KEY for OpenSSH private keys, CREDIT_CARD_NUMBER
     * for credit card numbers, or USA_PASSPORT_NUMBER for US passport numbers.</p>
     */
    inline ManagedDataIdentifierSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the managed data identifier. This is a string that
     * describes the type of sensitive data that the managed data identifier detects.
     * For example: OPENSSH_PRIVATE_KEY for OpenSSH private keys, CREDIT_CARD_NUMBER
     * for credit card numbers, or USA_PASSPORT_NUMBER for US passport numbers.</p>
     */
    inline ManagedDataIdentifierSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the managed data identifier. This is a string that
     * describes the type of sensitive data that the managed data identifier detects.
     * For example: OPENSSH_PRIVATE_KEY for OpenSSH private keys, CREDIT_CARD_NUMBER
     * for credit card numbers, or USA_PASSPORT_NUMBER for US passport numbers.</p>
     */
    inline ManagedDataIdentifierSummary& WithId(const char* value) { SetId(value); return *this;}

  private:

    SensitiveDataItemCategory m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
