/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeleteRoleAliasRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DeleteRoleAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRoleAlias"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The role alias to delete.</p>
     */
    inline const Aws::String& GetRoleAlias() const{ return m_roleAlias; }

    /**
     * <p>The role alias to delete.</p>
     */
    inline bool RoleAliasHasBeenSet() const { return m_roleAliasHasBeenSet; }

    /**
     * <p>The role alias to delete.</p>
     */
    inline void SetRoleAlias(const Aws::String& value) { m_roleAliasHasBeenSet = true; m_roleAlias = value; }

    /**
     * <p>The role alias to delete.</p>
     */
    inline void SetRoleAlias(Aws::String&& value) { m_roleAliasHasBeenSet = true; m_roleAlias = std::move(value); }

    /**
     * <p>The role alias to delete.</p>
     */
    inline void SetRoleAlias(const char* value) { m_roleAliasHasBeenSet = true; m_roleAlias.assign(value); }

    /**
     * <p>The role alias to delete.</p>
     */
    inline DeleteRoleAliasRequest& WithRoleAlias(const Aws::String& value) { SetRoleAlias(value); return *this;}

    /**
     * <p>The role alias to delete.</p>
     */
    inline DeleteRoleAliasRequest& WithRoleAlias(Aws::String&& value) { SetRoleAlias(std::move(value)); return *this;}

    /**
     * <p>The role alias to delete.</p>
     */
    inline DeleteRoleAliasRequest& WithRoleAlias(const char* value) { SetRoleAlias(value); return *this;}

  private:

    Aws::String m_roleAlias;
    bool m_roleAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
