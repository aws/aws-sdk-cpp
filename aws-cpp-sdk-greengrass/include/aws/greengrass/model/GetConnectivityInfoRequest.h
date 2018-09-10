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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API GetConnectivityInfoRequest : public GreengrassRequest
  {
  public:
    GetConnectivityInfoRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnectivityInfo"; }

    Aws::String SerializePayload() const override;


    /**
     * The thing name.
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * The thing name.
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * The thing name.
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * The thing name.
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * The thing name.
     */
    inline GetConnectivityInfoRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * The thing name.
     */
    inline GetConnectivityInfoRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * The thing name.
     */
    inline GetConnectivityInfoRequest& WithThingName(const char* value) { SetThingName(value); return *this;}

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
