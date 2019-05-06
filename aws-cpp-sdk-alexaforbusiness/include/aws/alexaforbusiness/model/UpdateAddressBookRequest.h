/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API UpdateAddressBookRequest : public AlexaForBusinessRequest
  {
  public:
    UpdateAddressBookRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAddressBook"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the room to update.</p>
     */
    inline const Aws::String& GetAddressBookArn() const{ return m_addressBookArn; }

    /**
     * <p>The ARN of the room to update.</p>
     */
    inline bool AddressBookArnHasBeenSet() const { return m_addressBookArnHasBeenSet; }

    /**
     * <p>The ARN of the room to update.</p>
     */
    inline void SetAddressBookArn(const Aws::String& value) { m_addressBookArnHasBeenSet = true; m_addressBookArn = value; }

    /**
     * <p>The ARN of the room to update.</p>
     */
    inline void SetAddressBookArn(Aws::String&& value) { m_addressBookArnHasBeenSet = true; m_addressBookArn = std::move(value); }

    /**
     * <p>The ARN of the room to update.</p>
     */
    inline void SetAddressBookArn(const char* value) { m_addressBookArnHasBeenSet = true; m_addressBookArn.assign(value); }

    /**
     * <p>The ARN of the room to update.</p>
     */
    inline UpdateAddressBookRequest& WithAddressBookArn(const Aws::String& value) { SetAddressBookArn(value); return *this;}

    /**
     * <p>The ARN of the room to update.</p>
     */
    inline UpdateAddressBookRequest& WithAddressBookArn(Aws::String&& value) { SetAddressBookArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the room to update.</p>
     */
    inline UpdateAddressBookRequest& WithAddressBookArn(const char* value) { SetAddressBookArn(value); return *this;}


    /**
     * <p>The updated name of the room.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The updated name of the room.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The updated name of the room.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The updated name of the room.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The updated name of the room.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The updated name of the room.</p>
     */
    inline UpdateAddressBookRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The updated name of the room.</p>
     */
    inline UpdateAddressBookRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The updated name of the room.</p>
     */
    inline UpdateAddressBookRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The updated description of the room.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated description of the room.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The updated description of the room.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated description of the room.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The updated description of the room.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The updated description of the room.</p>
     */
    inline UpdateAddressBookRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated description of the room.</p>
     */
    inline UpdateAddressBookRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated description of the room.</p>
     */
    inline UpdateAddressBookRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_addressBookArn;
    bool m_addressBookArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
