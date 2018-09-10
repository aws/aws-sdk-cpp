﻿/*
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
  class AWS_ALEXAFORBUSINESS_API DeleteAddressBookRequest : public AlexaForBusinessRequest
  {
  public:
    DeleteAddressBookRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAddressBook"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the address book to delete.</p>
     */
    inline const Aws::String& GetAddressBookArn() const{ return m_addressBookArn; }

    /**
     * <p>The ARN of the address book to delete.</p>
     */
    inline void SetAddressBookArn(const Aws::String& value) { m_addressBookArnHasBeenSet = true; m_addressBookArn = value; }

    /**
     * <p>The ARN of the address book to delete.</p>
     */
    inline void SetAddressBookArn(Aws::String&& value) { m_addressBookArnHasBeenSet = true; m_addressBookArn = std::move(value); }

    /**
     * <p>The ARN of the address book to delete.</p>
     */
    inline void SetAddressBookArn(const char* value) { m_addressBookArnHasBeenSet = true; m_addressBookArn.assign(value); }

    /**
     * <p>The ARN of the address book to delete.</p>
     */
    inline DeleteAddressBookRequest& WithAddressBookArn(const Aws::String& value) { SetAddressBookArn(value); return *this;}

    /**
     * <p>The ARN of the address book to delete.</p>
     */
    inline DeleteAddressBookRequest& WithAddressBookArn(Aws::String&& value) { SetAddressBookArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the address book to delete.</p>
     */
    inline DeleteAddressBookRequest& WithAddressBookArn(const char* value) { SetAddressBookArn(value); return *this;}

  private:

    Aws::String m_addressBookArn;
    bool m_addressBookArnHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
