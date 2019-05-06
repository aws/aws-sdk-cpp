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
  class AWS_CONFIGSERVICE_API DeleteAggregationAuthorizationRequest : public ConfigServiceRequest
  {
  public:
    DeleteAggregationAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAggregationAuthorization"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline const Aws::String& GetAuthorizedAccountId() const{ return m_authorizedAccountId; }

    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline bool AuthorizedAccountIdHasBeenSet() const { return m_authorizedAccountIdHasBeenSet; }

    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline void SetAuthorizedAccountId(const Aws::String& value) { m_authorizedAccountIdHasBeenSet = true; m_authorizedAccountId = value; }

    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline void SetAuthorizedAccountId(Aws::String&& value) { m_authorizedAccountIdHasBeenSet = true; m_authorizedAccountId = std::move(value); }

    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline void SetAuthorizedAccountId(const char* value) { m_authorizedAccountIdHasBeenSet = true; m_authorizedAccountId.assign(value); }

    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline DeleteAggregationAuthorizationRequest& WithAuthorizedAccountId(const Aws::String& value) { SetAuthorizedAccountId(value); return *this;}

    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline DeleteAggregationAuthorizationRequest& WithAuthorizedAccountId(Aws::String&& value) { SetAuthorizedAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline DeleteAggregationAuthorizationRequest& WithAuthorizedAccountId(const char* value) { SetAuthorizedAccountId(value); return *this;}


    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline const Aws::String& GetAuthorizedAwsRegion() const{ return m_authorizedAwsRegion; }

    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline bool AuthorizedAwsRegionHasBeenSet() const { return m_authorizedAwsRegionHasBeenSet; }

    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline void SetAuthorizedAwsRegion(const Aws::String& value) { m_authorizedAwsRegionHasBeenSet = true; m_authorizedAwsRegion = value; }

    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline void SetAuthorizedAwsRegion(Aws::String&& value) { m_authorizedAwsRegionHasBeenSet = true; m_authorizedAwsRegion = std::move(value); }

    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline void SetAuthorizedAwsRegion(const char* value) { m_authorizedAwsRegionHasBeenSet = true; m_authorizedAwsRegion.assign(value); }

    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline DeleteAggregationAuthorizationRequest& WithAuthorizedAwsRegion(const Aws::String& value) { SetAuthorizedAwsRegion(value); return *this;}

    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline DeleteAggregationAuthorizationRequest& WithAuthorizedAwsRegion(Aws::String&& value) { SetAuthorizedAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline DeleteAggregationAuthorizationRequest& WithAuthorizedAwsRegion(const char* value) { SetAuthorizedAwsRegion(value); return *this;}

  private:

    Aws::String m_authorizedAccountId;
    bool m_authorizedAccountIdHasBeenSet;

    Aws::String m_authorizedAwsRegion;
    bool m_authorizedAwsRegionHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
