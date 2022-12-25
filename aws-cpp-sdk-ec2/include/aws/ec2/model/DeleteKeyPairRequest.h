/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DeleteKeyPairRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteKeyPairRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteKeyPair"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the key pair.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the key pair.</p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>The name of the key pair.</p>
     */
    inline DeleteKeyPairRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline DeleteKeyPairRequest& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline DeleteKeyPairRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>The ID of the key pair.</p>
     */
    inline const Aws::String& GetKeyPairId() const{ return m_keyPairId; }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline bool KeyPairIdHasBeenSet() const { return m_keyPairIdHasBeenSet; }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline void SetKeyPairId(const Aws::String& value) { m_keyPairIdHasBeenSet = true; m_keyPairId = value; }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline void SetKeyPairId(Aws::String&& value) { m_keyPairIdHasBeenSet = true; m_keyPairId = std::move(value); }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline void SetKeyPairId(const char* value) { m_keyPairIdHasBeenSet = true; m_keyPairId.assign(value); }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline DeleteKeyPairRequest& WithKeyPairId(const Aws::String& value) { SetKeyPairId(value); return *this;}

    /**
     * <p>The ID of the key pair.</p>
     */
    inline DeleteKeyPairRequest& WithKeyPairId(Aws::String&& value) { SetKeyPairId(std::move(value)); return *this;}

    /**
     * <p>The ID of the key pair.</p>
     */
    inline DeleteKeyPairRequest& WithKeyPairId(const char* value) { SetKeyPairId(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DeleteKeyPairRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::String m_keyPairId;
    bool m_keyPairIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
