/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class DescribeKeyRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API DescribeKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeKey"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the API key resource.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the API key resource.</p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p>The name of the API key resource.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>The name of the API key resource.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>The name of the API key resource.</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>The name of the API key resource.</p>
     */
    inline DescribeKeyRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the API key resource.</p>
     */
    inline DescribeKeyRequest& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the API key resource.</p>
     */
    inline DescribeKeyRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}

  private:

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
