/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/appsync/model/RdsDataApiConfig.h>
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class StartDataSourceIntrospectionRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API StartDataSourceIntrospectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDataSourceIntrospection"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>rdsDataApiConfig</code> object data.</p>
     */
    inline const RdsDataApiConfig& GetRdsDataApiConfig() const { return m_rdsDataApiConfig; }
    inline bool RdsDataApiConfigHasBeenSet() const { return m_rdsDataApiConfigHasBeenSet; }
    template<typename RdsDataApiConfigT = RdsDataApiConfig>
    void SetRdsDataApiConfig(RdsDataApiConfigT&& value) { m_rdsDataApiConfigHasBeenSet = true; m_rdsDataApiConfig = std::forward<RdsDataApiConfigT>(value); }
    template<typename RdsDataApiConfigT = RdsDataApiConfig>
    StartDataSourceIntrospectionRequest& WithRdsDataApiConfig(RdsDataApiConfigT&& value) { SetRdsDataApiConfig(std::forward<RdsDataApiConfigT>(value)); return *this;}
    ///@}
  private:

    RdsDataApiConfig m_rdsDataApiConfig;
    bool m_rdsDataApiConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
