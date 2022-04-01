﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class AWS_SNOWBALL_API DescribeAddressRequest : public SnowballRequest
  {
  public:
    DescribeAddressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAddress"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline const Aws::String& GetAddressId() const{ return m_addressId; }

    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline bool AddressIdHasBeenSet() const { return m_addressIdHasBeenSet; }

    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline void SetAddressId(const Aws::String& value) { m_addressIdHasBeenSet = true; m_addressId = value; }

    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline void SetAddressId(Aws::String&& value) { m_addressIdHasBeenSet = true; m_addressId = std::move(value); }

    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline void SetAddressId(const char* value) { m_addressIdHasBeenSet = true; m_addressId.assign(value); }

    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline DescribeAddressRequest& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}

    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline DescribeAddressRequest& WithAddressId(Aws::String&& value) { SetAddressId(std::move(value)); return *this;}

    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline DescribeAddressRequest& WithAddressId(const char* value) { SetAddressId(value); return *this;}

  private:

    Aws::String m_addressId;
    bool m_addressIdHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
