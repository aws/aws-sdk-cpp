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
  class DescribeAppInstanceAdminRequest : public ChimeSDKIdentityRequest
  {
  public:
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceAdminRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAppInstanceAdmin"; }

    AWS_CHIMESDKIDENTITY_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the <code>AppInstanceAdmin</code>.</p>
     */
    inline const Aws::String& GetAppInstanceAdminArn() const{ return m_appInstanceAdminArn; }

    /**
     * <p>The ARN of the <code>AppInstanceAdmin</code>.</p>
     */
    inline bool AppInstanceAdminArnHasBeenSet() const { return m_appInstanceAdminArnHasBeenSet; }

    /**
     * <p>The ARN of the <code>AppInstanceAdmin</code>.</p>
     */
    inline void SetAppInstanceAdminArn(const Aws::String& value) { m_appInstanceAdminArnHasBeenSet = true; m_appInstanceAdminArn = value; }

    /**
     * <p>The ARN of the <code>AppInstanceAdmin</code>.</p>
     */
    inline void SetAppInstanceAdminArn(Aws::String&& value) { m_appInstanceAdminArnHasBeenSet = true; m_appInstanceAdminArn = std::move(value); }

    /**
     * <p>The ARN of the <code>AppInstanceAdmin</code>.</p>
     */
    inline void SetAppInstanceAdminArn(const char* value) { m_appInstanceAdminArnHasBeenSet = true; m_appInstanceAdminArn.assign(value); }

    /**
     * <p>The ARN of the <code>AppInstanceAdmin</code>.</p>
     */
    inline DescribeAppInstanceAdminRequest& WithAppInstanceAdminArn(const Aws::String& value) { SetAppInstanceAdminArn(value); return *this;}

    /**
     * <p>The ARN of the <code>AppInstanceAdmin</code>.</p>
     */
    inline DescribeAppInstanceAdminRequest& WithAppInstanceAdminArn(Aws::String&& value) { SetAppInstanceAdminArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <code>AppInstanceAdmin</code>.</p>
     */
    inline DescribeAppInstanceAdminRequest& WithAppInstanceAdminArn(const char* value) { SetAppInstanceAdminArn(value); return *this;}


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
    inline DescribeAppInstanceAdminRequest& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline DescribeAppInstanceAdminRequest& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline DescribeAppInstanceAdminRequest& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}

  private:

    Aws::String m_appInstanceAdminArn;
    bool m_appInstanceAdminArnHasBeenSet = false;

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
