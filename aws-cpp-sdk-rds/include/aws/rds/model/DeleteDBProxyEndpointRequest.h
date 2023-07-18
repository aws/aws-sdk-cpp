/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API DeleteDBProxyEndpointRequest : public RDSRequest
  {
  public:
    DeleteDBProxyEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBProxyEndpoint"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB proxy endpoint to delete.</p>
     */
    inline const Aws::String& GetDBProxyEndpointName() const{ return m_dBProxyEndpointName; }

    /**
     * <p>The name of the DB proxy endpoint to delete.</p>
     */
    inline bool DBProxyEndpointNameHasBeenSet() const { return m_dBProxyEndpointNameHasBeenSet; }

    /**
     * <p>The name of the DB proxy endpoint to delete.</p>
     */
    inline void SetDBProxyEndpointName(const Aws::String& value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName = value; }

    /**
     * <p>The name of the DB proxy endpoint to delete.</p>
     */
    inline void SetDBProxyEndpointName(Aws::String&& value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName = std::move(value); }

    /**
     * <p>The name of the DB proxy endpoint to delete.</p>
     */
    inline void SetDBProxyEndpointName(const char* value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName.assign(value); }

    /**
     * <p>The name of the DB proxy endpoint to delete.</p>
     */
    inline DeleteDBProxyEndpointRequest& WithDBProxyEndpointName(const Aws::String& value) { SetDBProxyEndpointName(value); return *this;}

    /**
     * <p>The name of the DB proxy endpoint to delete.</p>
     */
    inline DeleteDBProxyEndpointRequest& WithDBProxyEndpointName(Aws::String&& value) { SetDBProxyEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB proxy endpoint to delete.</p>
     */
    inline DeleteDBProxyEndpointRequest& WithDBProxyEndpointName(const char* value) { SetDBProxyEndpointName(value); return *this;}

  private:

    Aws::String m_dBProxyEndpointName;
    bool m_dBProxyEndpointNameHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
