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
  class UpdateAppInstanceRequest : public ChimeSDKIdentityRequest
  {
  public:
    AWS_CHIMESDKIDENTITY_API UpdateAppInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAppInstance"; }

    AWS_CHIMESDKIDENTITY_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline bool AppInstanceArnHasBeenSet() const { return m_appInstanceArnHasBeenSet; }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = value; }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::move(value); }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn.assign(value); }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline UpdateAppInstanceRequest& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline UpdateAppInstanceRequest& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline UpdateAppInstanceRequest& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}


    /**
     * <p>The name that you want to change.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that you want to change.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name that you want to change.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that you want to change.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that you want to change.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that you want to change.</p>
     */
    inline UpdateAppInstanceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that you want to change.</p>
     */
    inline UpdateAppInstanceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that you want to change.</p>
     */
    inline UpdateAppInstanceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The metadata that you want to change.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata that you want to change.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata that you want to change.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata that you want to change.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata that you want to change.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The metadata that you want to change.</p>
     */
    inline UpdateAppInstanceRequest& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata that you want to change.</p>
     */
    inline UpdateAppInstanceRequest& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata that you want to change.</p>
     */
    inline UpdateAppInstanceRequest& WithMetadata(const char* value) { SetMetadata(value); return *this;}

  private:

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
