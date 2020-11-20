/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class AWS_CHIME_API CreateAppInstanceUserRequest : public ChimeRequest
  {
  public:
    CreateAppInstanceUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAppInstanceUser"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the app instance request.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }

    /**
     * <p>The ARN of the app instance request.</p>
     */
    inline bool AppInstanceArnHasBeenSet() const { return m_appInstanceArnHasBeenSet; }

    /**
     * <p>The ARN of the app instance request.</p>
     */
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = value; }

    /**
     * <p>The ARN of the app instance request.</p>
     */
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::move(value); }

    /**
     * <p>The ARN of the app instance request.</p>
     */
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn.assign(value); }

    /**
     * <p>The ARN of the app instance request.</p>
     */
    inline CreateAppInstanceUserRequest& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the app instance request.</p>
     */
    inline CreateAppInstanceUserRequest& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the app instance request.</p>
     */
    inline CreateAppInstanceUserRequest& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}


    /**
     * <p>The user ID of the app instance.</p>
     */
    inline const Aws::String& GetAppInstanceUserId() const{ return m_appInstanceUserId; }

    /**
     * <p>The user ID of the app instance.</p>
     */
    inline bool AppInstanceUserIdHasBeenSet() const { return m_appInstanceUserIdHasBeenSet; }

    /**
     * <p>The user ID of the app instance.</p>
     */
    inline void SetAppInstanceUserId(const Aws::String& value) { m_appInstanceUserIdHasBeenSet = true; m_appInstanceUserId = value; }

    /**
     * <p>The user ID of the app instance.</p>
     */
    inline void SetAppInstanceUserId(Aws::String&& value) { m_appInstanceUserIdHasBeenSet = true; m_appInstanceUserId = std::move(value); }

    /**
     * <p>The user ID of the app instance.</p>
     */
    inline void SetAppInstanceUserId(const char* value) { m_appInstanceUserIdHasBeenSet = true; m_appInstanceUserId.assign(value); }

    /**
     * <p>The user ID of the app instance.</p>
     */
    inline CreateAppInstanceUserRequest& WithAppInstanceUserId(const Aws::String& value) { SetAppInstanceUserId(value); return *this;}

    /**
     * <p>The user ID of the app instance.</p>
     */
    inline CreateAppInstanceUserRequest& WithAppInstanceUserId(Aws::String&& value) { SetAppInstanceUserId(std::move(value)); return *this;}

    /**
     * <p>The user ID of the app instance.</p>
     */
    inline CreateAppInstanceUserRequest& WithAppInstanceUserId(const char* value) { SetAppInstanceUserId(value); return *this;}


    /**
     * <p>The user's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The user's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The user's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The user's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The user's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The user's name.</p>
     */
    inline CreateAppInstanceUserRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The user's name.</p>
     */
    inline CreateAppInstanceUserRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The user's name.</p>
     */
    inline CreateAppInstanceUserRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The request's metadata. Limited to a 1KB string in UTF-8.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The request's metadata. Limited to a 1KB string in UTF-8.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The request's metadata. Limited to a 1KB string in UTF-8.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The request's metadata. Limited to a 1KB string in UTF-8.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The request's metadata. Limited to a 1KB string in UTF-8.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The request's metadata. Limited to a 1KB string in UTF-8.</p>
     */
    inline CreateAppInstanceUserRequest& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The request's metadata. Limited to a 1KB string in UTF-8.</p>
     */
    inline CreateAppInstanceUserRequest& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The request's metadata. Limited to a 1KB string in UTF-8.</p>
     */
    inline CreateAppInstanceUserRequest& WithMetadata(const char* value) { SetMetadata(value); return *this;}


    /**
     * <p>The token assigned to the user requesting an app instance.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The token assigned to the user requesting an app instance.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The token assigned to the user requesting an app instance.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The token assigned to the user requesting an app instance.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The token assigned to the user requesting an app instance.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The token assigned to the user requesting an app instance.</p>
     */
    inline CreateAppInstanceUserRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The token assigned to the user requesting an app instance.</p>
     */
    inline CreateAppInstanceUserRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The token assigned to the user requesting an app instance.</p>
     */
    inline CreateAppInstanceUserRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet;

    Aws::String m_appInstanceUserId;
    bool m_appInstanceUserIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
