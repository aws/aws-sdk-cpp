/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the email recipient</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EmailRecipient">AWS
   * API Reference</a></p>
   */
  class EmailRecipient
  {
  public:
    AWS_CONNECT_API EmailRecipient();
    AWS_CONNECT_API EmailRecipient(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EmailRecipient& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Address of the email recipient.</p> <p>Type: String</p> <p>Length
     * Constraints: Minimum length of 1. Maximum length of 256.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline EmailRecipient& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline EmailRecipient& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline EmailRecipient& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Display name of the email recipient.</p> <p>Type: String</p> <p>Length
     * Constraints: Minimum length of 1. Maximum length of 256.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline EmailRecipient& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline EmailRecipient& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline EmailRecipient& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
