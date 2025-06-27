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
    AWS_CONNECT_API EmailAddressMetadata() = default;
    AWS_CONNECT_API EmailAddressMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EmailAddressMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the email address.</p>
     */
    inline const Aws::String& GetEmailAddressId() const { return m_emailAddressId; }
    inline bool EmailAddressIdHasBeenSet() const { return m_emailAddressIdHasBeenSet; }
    template<typename EmailAddressIdT = Aws::String>
    void SetEmailAddressId(EmailAddressIdT&& value) { m_emailAddressIdHasBeenSet = true; m_emailAddressId = std::forward<EmailAddressIdT>(value); }
    template<typename EmailAddressIdT = Aws::String>
    EmailAddressMetadata& WithEmailAddressId(EmailAddressIdT&& value) { SetEmailAddressId(std::forward<EmailAddressIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the email address.</p>
     */
    inline const Aws::String& GetEmailAddressArn() const { return m_emailAddressArn; }
    inline bool EmailAddressArnHasBeenSet() const { return m_emailAddressArnHasBeenSet; }
    template<typename EmailAddressArnT = Aws::String>
    void SetEmailAddressArn(EmailAddressArnT&& value) { m_emailAddressArnHasBeenSet = true; m_emailAddressArn = std::forward<EmailAddressArnT>(value); }
    template<typename EmailAddressArnT = Aws::String>
    EmailAddressMetadata& WithEmailAddressArn(EmailAddressArnT&& value) { SetEmailAddressArn(std::forward<EmailAddressArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address, including the domain.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    EmailAddressMetadata& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the email address.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    EmailAddressMetadata& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of email address.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    EmailAddressMetadata& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
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
