/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   */
  class UpdateAppInstanceUserRequest : public ChimeSDKIdentityRequest
  {
  public:
    AWS_CHIMESDKIDENTITY_API UpdateAppInstanceUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAppInstanceUser"; }

    AWS_CHIMESDKIDENTITY_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const{ return m_appInstanceUserArn; }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline bool AppInstanceUserArnHasBeenSet() const { return m_appInstanceUserArnHasBeenSet; }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetAppInstanceUserArn(const Aws::String& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = value; }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetAppInstanceUserArn(Aws::String&& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = std::move(value); }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetAppInstanceUserArn(const char* value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn.assign(value); }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline UpdateAppInstanceUserRequest& WithAppInstanceUserArn(const Aws::String& value) { SetAppInstanceUserArn(value); return *this;}

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline UpdateAppInstanceUserRequest& WithAppInstanceUserArn(Aws::String&& value) { SetAppInstanceUserArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline UpdateAppInstanceUserRequest& WithAppInstanceUserArn(const char* value) { SetAppInstanceUserArn(value); return *this;}


    /**
     * <p>The name of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <code>AppInstanceUser</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <code>AppInstanceUser</code>.</p>
     */
    inline UpdateAppInstanceUserRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <code>AppInstanceUser</code>.</p>
     */
    inline UpdateAppInstanceUserRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>AppInstanceUser</code>.</p>
     */
    inline UpdateAppInstanceUserRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The metadata of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata of the <code>AppInstanceUser</code>.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The metadata of the <code>AppInstanceUser</code>.</p>
     */
    inline UpdateAppInstanceUserRequest& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata of the <code>AppInstanceUser</code>.</p>
     */
    inline UpdateAppInstanceUserRequest& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata of the <code>AppInstanceUser</code>.</p>
     */
    inline UpdateAppInstanceUserRequest& WithMetadata(const char* value) { SetMetadata(value); return *this;}

  private:

    Aws::String m_appInstanceUserArn;
    bool m_appInstanceUserArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
