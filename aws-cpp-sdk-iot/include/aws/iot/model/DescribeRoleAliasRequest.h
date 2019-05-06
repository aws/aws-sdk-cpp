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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API DescribeRoleAliasRequest : public IoTRequest
  {
  public:
    DescribeRoleAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRoleAlias"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The role alias to describe.</p>
     */
    inline const Aws::String& GetRoleAlias() const{ return m_roleAlias; }

    /**
     * <p>The role alias to describe.</p>
     */
    inline bool RoleAliasHasBeenSet() const { return m_roleAliasHasBeenSet; }

    /**
     * <p>The role alias to describe.</p>
     */
    inline void SetRoleAlias(const Aws::String& value) { m_roleAliasHasBeenSet = true; m_roleAlias = value; }

    /**
     * <p>The role alias to describe.</p>
     */
    inline void SetRoleAlias(Aws::String&& value) { m_roleAliasHasBeenSet = true; m_roleAlias = std::move(value); }

    /**
     * <p>The role alias to describe.</p>
     */
    inline void SetRoleAlias(const char* value) { m_roleAliasHasBeenSet = true; m_roleAlias.assign(value); }

    /**
     * <p>The role alias to describe.</p>
     */
    inline DescribeRoleAliasRequest& WithRoleAlias(const Aws::String& value) { SetRoleAlias(value); return *this;}

    /**
     * <p>The role alias to describe.</p>
     */
    inline DescribeRoleAliasRequest& WithRoleAlias(Aws::String&& value) { SetRoleAlias(std::move(value)); return *this;}

    /**
     * <p>The role alias to describe.</p>
     */
    inline DescribeRoleAliasRequest& WithRoleAlias(const char* value) { SetRoleAlias(value); return *this;}

  private:

    Aws::String m_roleAlias;
    bool m_roleAliasHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
