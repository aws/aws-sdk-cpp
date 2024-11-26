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
   * <p>Contains information about an email address for a contact
   * center.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EmailAddressMetadata">AWS
   * API Reference</a></p>
   */
  class EmailAddressMetadata
  {
  public:
    AWS_CONNECT_API EmailAddressMetadata();
    AWS_CONNECT_API EmailAddressMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EmailAddressMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the email address.</p>
     */
    inline const Aws::String& GetEmailAddressId() const{ return m_emailAddressId; }
    inline bool EmailAddressIdHasBeenSet() const { return m_emailAddressIdHasBeenSet; }
    inline void SetEmailAddressId(const Aws::String& value) { m_emailAddressIdHasBeenSet = true; m_emailAddressId = value; }
    inline void SetEmailAddressId(Aws::String&& value) { m_emailAddressIdHasBeenSet = true; m_emailAddressId = std::move(value); }
    inline void SetEmailAddressId(const char* value) { m_emailAddressIdHasBeenSet = true; m_emailAddressId.assign(value); }
    inline EmailAddressMetadata& WithEmailAddressId(const Aws::String& value) { SetEmailAddressId(value); return *this;}
    inline EmailAddressMetadata& WithEmailAddressId(Aws::String&& value) { SetEmailAddressId(std::move(value)); return *this;}
    inline EmailAddressMetadata& WithEmailAddressId(const char* value) { SetEmailAddressId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the email address.</p>
     */
    inline const Aws::String& GetEmailAddressArn() const{ return m_emailAddressArn; }
    inline bool EmailAddressArnHasBeenSet() const { return m_emailAddressArnHasBeenSet; }
    inline void SetEmailAddressArn(const Aws::String& value) { m_emailAddressArnHasBeenSet = true; m_emailAddressArn = value; }
    inline void SetEmailAddressArn(Aws::String&& value) { m_emailAddressArnHasBeenSet = true; m_emailAddressArn = std::move(value); }
    inline void SetEmailAddressArn(const char* value) { m_emailAddressArnHasBeenSet = true; m_emailAddressArn.assign(value); }
    inline EmailAddressMetadata& WithEmailAddressArn(const Aws::String& value) { SetEmailAddressArn(value); return *this;}
    inline EmailAddressMetadata& WithEmailAddressArn(Aws::String&& value) { SetEmailAddressArn(std::move(value)); return *this;}
    inline EmailAddressMetadata& WithEmailAddressArn(const char* value) { SetEmailAddressArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address with the instance, in [^\s@]+@[^\s@]+\.[^\s@]+ format.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }
    inline EmailAddressMetadata& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline EmailAddressMetadata& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline EmailAddressMetadata& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the email address.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline EmailAddressMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline EmailAddressMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline EmailAddressMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of email address.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline EmailAddressMetadata& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline EmailAddressMetadata& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline EmailAddressMetadata& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}
  private:

    Aws::String m_emailAddressId;
    bool m_emailAddressIdHasBeenSet = false;

    Aws::String m_emailAddressArn;
    bool m_emailAddressArnHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
