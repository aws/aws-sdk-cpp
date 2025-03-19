/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
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
   * <p>Contains information about the domain names that you want ACM to use to send
   * you emails that enable you to validate domain ownership.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DomainValidationOption">AWS
   * API Reference</a></p>
   */
  class DomainValidationOption
  {
  public:
    AWS_ACM_API DomainValidationOption() = default;
    AWS_ACM_API DomainValidationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API DomainValidationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A fully qualified domain name (FQDN) in the certificate request.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DomainValidationOption& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name that you want ACM to use to send you validation emails. This
     * domain name is the suffix of the email addresses that you want ACM to use. This
     * must be the same as the <code>DomainName</code> value or a superdomain of the
     * <code>DomainName</code> value. For example, if you request a certificate for
     * <code>testing.example.com</code>, you can specify <code>example.com</code> for
     * this value. In that case, ACM sends domain validation emails to the following
     * five addresses:</p> <ul> <li> <p>admin@example.com</p> </li> <li>
     * <p>administrator@example.com</p> </li> <li> <p>hostmaster@example.com</p> </li>
     * <li> <p>postmaster@example.com</p> </li> <li> <p>webmaster@example.com</p> </li>
     * </ul>
     */
    inline const Aws::String& GetValidationDomain() const { return m_validationDomain; }
    inline bool ValidationDomainHasBeenSet() const { return m_validationDomainHasBeenSet; }
    template<typename ValidationDomainT = Aws::String>
    void SetValidationDomain(ValidationDomainT&& value) { m_validationDomainHasBeenSet = true; m_validationDomain = std::forward<ValidationDomainT>(value); }
    template<typename ValidationDomainT = Aws::String>
    DomainValidationOption& WithValidationDomain(ValidationDomainT&& value) { SetValidationDomain(std::forward<ValidationDomainT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_validationDomain;
    bool m_validationDomainHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
