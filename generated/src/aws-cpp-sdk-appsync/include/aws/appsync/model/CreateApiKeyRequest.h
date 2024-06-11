﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class CreateApiKeyRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API CreateApiKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApiKey"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID for your GraphQL API.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline CreateApiKeyRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline CreateApiKeyRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline CreateApiKeyRequest& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateApiKeyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateApiKeyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateApiKeyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>From the creation time, the time after which the API key expires. The date is
     * represented as seconds since the epoch, rounded down to the nearest hour. The
     * default value for this parameter is 7 days from creation time. For more
     * information, see .</p>
     */
    inline long long GetExpires() const{ return m_expires; }
    inline bool ExpiresHasBeenSet() const { return m_expiresHasBeenSet; }
    inline void SetExpires(long long value) { m_expiresHasBeenSet = true; m_expires = value; }
    inline CreateApiKeyRequest& WithExpires(long long value) { SetExpires(value); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    long long m_expires;
    bool m_expiresHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
