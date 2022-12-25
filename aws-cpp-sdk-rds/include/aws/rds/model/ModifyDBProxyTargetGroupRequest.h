/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ConnectionPoolConfiguration.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class ModifyDBProxyTargetGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyDBProxyTargetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBProxyTargetGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the target group to modify.</p>
     */
    inline const Aws::String& GetTargetGroupName() const{ return m_targetGroupName; }

    /**
     * <p>The name of the target group to modify.</p>
     */
    inline bool TargetGroupNameHasBeenSet() const { return m_targetGroupNameHasBeenSet; }

    /**
     * <p>The name of the target group to modify.</p>
     */
    inline void SetTargetGroupName(const Aws::String& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = value; }

    /**
     * <p>The name of the target group to modify.</p>
     */
    inline void SetTargetGroupName(Aws::String&& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = std::move(value); }

    /**
     * <p>The name of the target group to modify.</p>
     */
    inline void SetTargetGroupName(const char* value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName.assign(value); }

    /**
     * <p>The name of the target group to modify.</p>
     */
    inline ModifyDBProxyTargetGroupRequest& WithTargetGroupName(const Aws::String& value) { SetTargetGroupName(value); return *this;}

    /**
     * <p>The name of the target group to modify.</p>
     */
    inline ModifyDBProxyTargetGroupRequest& WithTargetGroupName(Aws::String&& value) { SetTargetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the target group to modify.</p>
     */
    inline ModifyDBProxyTargetGroupRequest& WithTargetGroupName(const char* value) { SetTargetGroupName(value); return *this;}


    /**
     * <p>The name of the proxy.</p>
     */
    inline const Aws::String& GetDBProxyName() const{ return m_dBProxyName; }

    /**
     * <p>The name of the proxy.</p>
     */
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }

    /**
     * <p>The name of the proxy.</p>
     */
    inline void SetDBProxyName(const Aws::String& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = value; }

    /**
     * <p>The name of the proxy.</p>
     */
    inline void SetDBProxyName(Aws::String&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::move(value); }

    /**
     * <p>The name of the proxy.</p>
     */
    inline void SetDBProxyName(const char* value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName.assign(value); }

    /**
     * <p>The name of the proxy.</p>
     */
    inline ModifyDBProxyTargetGroupRequest& WithDBProxyName(const Aws::String& value) { SetDBProxyName(value); return *this;}

    /**
     * <p>The name of the proxy.</p>
     */
    inline ModifyDBProxyTargetGroupRequest& WithDBProxyName(Aws::String&& value) { SetDBProxyName(std::move(value)); return *this;}

    /**
     * <p>The name of the proxy.</p>
     */
    inline ModifyDBProxyTargetGroupRequest& WithDBProxyName(const char* value) { SetDBProxyName(value); return *this;}


    /**
     * <p>The settings that determine the size and behavior of the connection pool for
     * the target group.</p>
     */
    inline const ConnectionPoolConfiguration& GetConnectionPoolConfig() const{ return m_connectionPoolConfig; }

    /**
     * <p>The settings that determine the size and behavior of the connection pool for
     * the target group.</p>
     */
    inline bool ConnectionPoolConfigHasBeenSet() const { return m_connectionPoolConfigHasBeenSet; }

    /**
     * <p>The settings that determine the size and behavior of the connection pool for
     * the target group.</p>
     */
    inline void SetConnectionPoolConfig(const ConnectionPoolConfiguration& value) { m_connectionPoolConfigHasBeenSet = true; m_connectionPoolConfig = value; }

    /**
     * <p>The settings that determine the size and behavior of the connection pool for
     * the target group.</p>
     */
    inline void SetConnectionPoolConfig(ConnectionPoolConfiguration&& value) { m_connectionPoolConfigHasBeenSet = true; m_connectionPoolConfig = std::move(value); }

    /**
     * <p>The settings that determine the size and behavior of the connection pool for
     * the target group.</p>
     */
    inline ModifyDBProxyTargetGroupRequest& WithConnectionPoolConfig(const ConnectionPoolConfiguration& value) { SetConnectionPoolConfig(value); return *this;}

    /**
     * <p>The settings that determine the size and behavior of the connection pool for
     * the target group.</p>
     */
    inline ModifyDBProxyTargetGroupRequest& WithConnectionPoolConfig(ConnectionPoolConfiguration&& value) { SetConnectionPoolConfig(std::move(value)); return *this;}


    /**
     * <p>The new name for the modified <code>DBProxyTarget</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetNewName() const{ return m_newName; }

    /**
     * <p>The new name for the modified <code>DBProxyTarget</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline bool NewNameHasBeenSet() const { return m_newNameHasBeenSet; }

    /**
     * <p>The new name for the modified <code>DBProxyTarget</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline void SetNewName(const Aws::String& value) { m_newNameHasBeenSet = true; m_newName = value; }

    /**
     * <p>The new name for the modified <code>DBProxyTarget</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline void SetNewName(Aws::String&& value) { m_newNameHasBeenSet = true; m_newName = std::move(value); }

    /**
     * <p>The new name for the modified <code>DBProxyTarget</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline void SetNewName(const char* value) { m_newNameHasBeenSet = true; m_newName.assign(value); }

    /**
     * <p>The new name for the modified <code>DBProxyTarget</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline ModifyDBProxyTargetGroupRequest& WithNewName(const Aws::String& value) { SetNewName(value); return *this;}

    /**
     * <p>The new name for the modified <code>DBProxyTarget</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline ModifyDBProxyTargetGroupRequest& WithNewName(Aws::String&& value) { SetNewName(std::move(value)); return *this;}

    /**
     * <p>The new name for the modified <code>DBProxyTarget</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline ModifyDBProxyTargetGroupRequest& WithNewName(const char* value) { SetNewName(value); return *this;}

  private:

    Aws::String m_targetGroupName;
    bool m_targetGroupNameHasBeenSet = false;

    Aws::String m_dBProxyName;
    bool m_dBProxyNameHasBeenSet = false;

    ConnectionPoolConfiguration m_connectionPoolConfig;
    bool m_connectionPoolConfigHasBeenSet = false;

    Aws::String m_newName;
    bool m_newNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
