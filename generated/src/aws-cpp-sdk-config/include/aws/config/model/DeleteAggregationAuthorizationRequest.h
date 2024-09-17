/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class DeleteAggregationAuthorizationRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DeleteAggregationAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAggregationAuthorization"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline const Aws::String& GetAuthorizedAccountId() const{ return m_authorizedAccountId; }
    inline bool AuthorizedAccountIdHasBeenSet() const { return m_authorizedAccountIdHasBeenSet; }
    inline void SetAuthorizedAccountId(const Aws::String& value) { m_authorizedAccountIdHasBeenSet = true; m_authorizedAccountId = value; }
    inline void SetAuthorizedAccountId(Aws::String&& value) { m_authorizedAccountIdHasBeenSet = true; m_authorizedAccountId = std::move(value); }
    inline void SetAuthorizedAccountId(const char* value) { m_authorizedAccountIdHasBeenSet = true; m_authorizedAccountId.assign(value); }
    inline DeleteAggregationAuthorizationRequest& WithAuthorizedAccountId(const Aws::String& value) { SetAuthorizedAccountId(value); return *this;}
    inline DeleteAggregationAuthorizationRequest& WithAuthorizedAccountId(Aws::String&& value) { SetAuthorizedAccountId(std::move(value)); return *this;}
    inline DeleteAggregationAuthorizationRequest& WithAuthorizedAccountId(const char* value) { SetAuthorizedAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline const Aws::String& GetAuthorizedAwsRegion() const{ return m_authorizedAwsRegion; }
    inline bool AuthorizedAwsRegionHasBeenSet() const { return m_authorizedAwsRegionHasBeenSet; }
    inline void SetAuthorizedAwsRegion(const Aws::String& value) { m_authorizedAwsRegionHasBeenSet = true; m_authorizedAwsRegion = value; }
    inline void SetAuthorizedAwsRegion(Aws::String&& value) { m_authorizedAwsRegionHasBeenSet = true; m_authorizedAwsRegion = std::move(value); }
    inline void SetAuthorizedAwsRegion(const char* value) { m_authorizedAwsRegionHasBeenSet = true; m_authorizedAwsRegion.assign(value); }
    inline DeleteAggregationAuthorizationRequest& WithAuthorizedAwsRegion(const Aws::String& value) { SetAuthorizedAwsRegion(value); return *this;}
    inline DeleteAggregationAuthorizationRequest& WithAuthorizedAwsRegion(Aws::String&& value) { SetAuthorizedAwsRegion(std::move(value)); return *this;}
    inline DeleteAggregationAuthorizationRequest& WithAuthorizedAwsRegion(const char* value) { SetAuthorizedAwsRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_authorizedAccountId;
    bool m_authorizedAccountIdHasBeenSet = false;

    Aws::String m_authorizedAwsRegion;
    bool m_authorizedAwsRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
