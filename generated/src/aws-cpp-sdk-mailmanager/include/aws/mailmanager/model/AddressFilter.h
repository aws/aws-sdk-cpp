/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
   * <p>Filtering options for ListMembersOfAddressList operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/AddressFilter">AWS
   * API Reference</a></p>
   */
  class AddressFilter
  {
  public:
    AWS_MAILMANAGER_API AddressFilter() = default;
    AWS_MAILMANAGER_API AddressFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API AddressFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter to limit the results to addresses having the provided prefix.</p>
     */
    inline const Aws::String& GetAddressPrefix() const { return m_addressPrefix; }
    inline bool AddressPrefixHasBeenSet() const { return m_addressPrefixHasBeenSet; }
    template<typename AddressPrefixT = Aws::String>
    void SetAddressPrefix(AddressPrefixT&& value) { m_addressPrefixHasBeenSet = true; m_addressPrefix = std::forward<AddressPrefixT>(value); }
    template<typename AddressPrefixT = Aws::String>
    AddressFilter& WithAddressPrefix(AddressPrefixT&& value) { SetAddressPrefix(std::forward<AddressPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addressPrefix;
    bool m_addressPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
