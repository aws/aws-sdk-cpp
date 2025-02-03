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
    AWS_MAILMANAGER_API AddressFilter();
    AWS_MAILMANAGER_API AddressFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API AddressFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter to limit the results to addresses having the provided prefix.</p>
     */
    inline const Aws::String& GetAddressPrefix() const{ return m_addressPrefix; }
    inline bool AddressPrefixHasBeenSet() const { return m_addressPrefixHasBeenSet; }
    inline void SetAddressPrefix(const Aws::String& value) { m_addressPrefixHasBeenSet = true; m_addressPrefix = value; }
    inline void SetAddressPrefix(Aws::String&& value) { m_addressPrefixHasBeenSet = true; m_addressPrefix = std::move(value); }
    inline void SetAddressPrefix(const char* value) { m_addressPrefixHasBeenSet = true; m_addressPrefix.assign(value); }
    inline AddressFilter& WithAddressPrefix(const Aws::String& value) { SetAddressPrefix(value); return *this;}
    inline AddressFilter& WithAddressPrefix(Aws::String&& value) { SetAddressPrefix(std::move(value)); return *this;}
    inline AddressFilter& WithAddressPrefix(const char* value) { SetAddressPrefix(value); return *this;}
    ///@}
  private:

    Aws::String m_addressPrefix;
    bool m_addressPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
