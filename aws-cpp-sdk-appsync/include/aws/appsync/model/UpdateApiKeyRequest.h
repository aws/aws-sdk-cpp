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
  class AWS_APPSYNC_API UpdateApiKeyRequest : public AppSyncRequest
  {
  public:
    UpdateApiKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApiKey"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID for the GraphQL API.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The ID for the GraphQL API.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The ID for the GraphQL API.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The ID for the GraphQL API.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The ID for the GraphQL API.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The ID for the GraphQL API.</p>
     */
    inline UpdateApiKeyRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The ID for the GraphQL API.</p>
     */
    inline UpdateApiKeyRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The ID for the GraphQL API.</p>
     */
    inline UpdateApiKeyRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The API key ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The API key ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The API key ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The API key ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The API key ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The API key ID.</p>
     */
    inline UpdateApiKeyRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The API key ID.</p>
     */
    inline UpdateApiKeyRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The API key ID.</p>
     */
    inline UpdateApiKeyRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline UpdateApiKeyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline UpdateApiKeyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline UpdateApiKeyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The time from update time after which the API key expires. The date is
     * represented as seconds since the epoch. For more information, see .</p>
     */
    inline long long GetExpires() const{ return m_expires; }

    /**
     * <p>The time from update time after which the API key expires. The date is
     * represented as seconds since the epoch. For more information, see .</p>
     */
    inline bool ExpiresHasBeenSet() const { return m_expiresHasBeenSet; }

    /**
     * <p>The time from update time after which the API key expires. The date is
     * represented as seconds since the epoch. For more information, see .</p>
     */
    inline void SetExpires(long long value) { m_expiresHasBeenSet = true; m_expires = value; }

    /**
     * <p>The time from update time after which the API key expires. The date is
     * represented as seconds since the epoch. For more information, see .</p>
     */
    inline UpdateApiKeyRequest& WithExpires(long long value) { SetExpires(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    long long m_expires;
    bool m_expiresHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
