/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RuleAddressListEmailAttribute.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The structure type for a boolean condition that provides the address lists
   * and address list attribute to evaluate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleIsInAddressList">AWS
   * API Reference</a></p>
   */
  class RuleIsInAddressList
  {
  public:
    AWS_MAILMANAGER_API RuleIsInAddressList() = default;
    AWS_MAILMANAGER_API RuleIsInAddressList(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleIsInAddressList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email attribute that needs to be evaluated against the address list.</p>
     */
    inline RuleAddressListEmailAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(RuleAddressListEmailAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline RuleIsInAddressList& WithAttribute(RuleAddressListEmailAttribute value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address lists that will be used for evaluation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddressLists() const { return m_addressLists; }
    inline bool AddressListsHasBeenSet() const { return m_addressListsHasBeenSet; }
    template<typename AddressListsT = Aws::Vector<Aws::String>>
    void SetAddressLists(AddressListsT&& value) { m_addressListsHasBeenSet = true; m_addressLists = std::forward<AddressListsT>(value); }
    template<typename AddressListsT = Aws::Vector<Aws::String>>
    RuleIsInAddressList& WithAddressLists(AddressListsT&& value) { SetAddressLists(std::forward<AddressListsT>(value)); return *this;}
    template<typename AddressListsT = Aws::String>
    RuleIsInAddressList& AddAddressLists(AddressListsT&& value) { m_addressListsHasBeenSet = true; m_addressLists.emplace_back(std::forward<AddressListsT>(value)); return *this; }
    ///@}
  private:

    RuleAddressListEmailAttribute m_attribute{RuleAddressListEmailAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;

    Aws::Vector<Aws::String> m_addressLists;
    bool m_addressListsHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
