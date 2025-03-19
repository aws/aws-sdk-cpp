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
    AWS_MACIE2_API ManagedDataIdentifierSummary() = default;
    AWS_MACIE2_API ManagedDataIdentifierSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ManagedDataIdentifierSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category of sensitive data that the managed data identifier detects:
     * CREDENTIALS, for credentials data such as private keys or Amazon Web Services
     * secret access keys; FINANCIAL_INFORMATION, for financial data such as credit
     * card numbers; or, PERSONAL_INFORMATION, for personal health information, such as
     * health insurance identification numbers, or personally identifiable information,
     * such as passport numbers.</p>
     */
    inline SensitiveDataItemCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(SensitiveDataItemCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline ManagedDataIdentifierSummary& WithCategory(SensitiveDataItemCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the managed data identifier. This is a string that
     * describes the type of sensitive data that the managed data identifier detects.
     * For example: OPENSSH_PRIVATE_KEY for OpenSSH private keys, CREDIT_CARD_NUMBER
     * for credit card numbers, or USA_PASSPORT_NUMBER for US passport numbers.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ManagedDataIdentifierSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    SensitiveDataItemCategory m_category{SensitiveDataItemCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
