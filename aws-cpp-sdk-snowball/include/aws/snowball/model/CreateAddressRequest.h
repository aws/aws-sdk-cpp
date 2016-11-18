﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/snowball/model/Address.h>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class AWS_SNOWBALL_API CreateAddressRequest : public SnowballRequest
  {
  public:
    CreateAddressRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The address that you want the Snowball shipped to.</p>
     */
    inline const Address& GetAddress() const{ return m_address; }

    /**
     * <p>The address that you want the Snowball shipped to.</p>
     */
    inline void SetAddress(const Address& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The address that you want the Snowball shipped to.</p>
     */
    inline void SetAddress(Address&& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The address that you want the Snowball shipped to.</p>
     */
    inline CreateAddressRequest& WithAddress(const Address& value) { SetAddress(value); return *this;}

    /**
     * <p>The address that you want the Snowball shipped to.</p>
     */
    inline CreateAddressRequest& WithAddress(Address&& value) { SetAddress(value); return *this;}

  private:
    Address m_address;
    bool m_addressHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
