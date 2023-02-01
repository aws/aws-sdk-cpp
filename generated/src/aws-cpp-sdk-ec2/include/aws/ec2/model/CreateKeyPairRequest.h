/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/KeyType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/KeyFormat.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateKeyPairRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateKeyPairRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKeyPair"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A unique name for the key pair.</p> <p>Constraints: Up to 255 ASCII
     * characters</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>A unique name for the key pair.</p> <p>Constraints: Up to 255 ASCII
     * characters</p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p>A unique name for the key pair.</p> <p>Constraints: Up to 255 ASCII
     * characters</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>A unique name for the key pair.</p> <p>Constraints: Up to 255 ASCII
     * characters</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>A unique name for the key pair.</p> <p>Constraints: Up to 255 ASCII
     * characters</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>A unique name for the key pair.</p> <p>Constraints: Up to 255 ASCII
     * characters</p>
     */
    inline CreateKeyPairRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>A unique name for the key pair.</p> <p>Constraints: Up to 255 ASCII
     * characters</p>
     */
    inline CreateKeyPairRequest& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the key pair.</p> <p>Constraints: Up to 255 ASCII
     * characters</p>
     */
    inline CreateKeyPairRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}


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
    inline CreateKeyPairRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The type of key pair. Note that ED25519 keys are not supported for Windows
     * instances.</p> <p>Default: <code>rsa</code> </p>
     */
    inline const KeyType& GetKeyType() const{ return m_keyType; }

    /**
     * <p>The type of key pair. Note that ED25519 keys are not supported for Windows
     * instances.</p> <p>Default: <code>rsa</code> </p>
     */
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }

    /**
     * <p>The type of key pair. Note that ED25519 keys are not supported for Windows
     * instances.</p> <p>Default: <code>rsa</code> </p>
     */
    inline void SetKeyType(const KeyType& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * <p>The type of key pair. Note that ED25519 keys are not supported for Windows
     * instances.</p> <p>Default: <code>rsa</code> </p>
     */
    inline void SetKeyType(KeyType&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::move(value); }

    /**
     * <p>The type of key pair. Note that ED25519 keys are not supported for Windows
     * instances.</p> <p>Default: <code>rsa</code> </p>
     */
    inline CreateKeyPairRequest& WithKeyType(const KeyType& value) { SetKeyType(value); return *this;}

    /**
     * <p>The type of key pair. Note that ED25519 keys are not supported for Windows
     * instances.</p> <p>Default: <code>rsa</code> </p>
     */
    inline CreateKeyPairRequest& WithKeyType(KeyType&& value) { SetKeyType(std::move(value)); return *this;}


    /**
     * <p>The tags to apply to the new key pair.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the new key pair.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the new key pair.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the new key pair.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the new key pair.</p>
     */
    inline CreateKeyPairRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the new key pair.</p>
     */
    inline CreateKeyPairRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the new key pair.</p>
     */
    inline CreateKeyPairRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the new key pair.</p>
     */
    inline CreateKeyPairRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The format of the key pair.</p> <p>Default: <code>pem</code> </p>
     */
    inline const KeyFormat& GetKeyFormat() const{ return m_keyFormat; }

    /**
     * <p>The format of the key pair.</p> <p>Default: <code>pem</code> </p>
     */
    inline bool KeyFormatHasBeenSet() const { return m_keyFormatHasBeenSet; }

    /**
     * <p>The format of the key pair.</p> <p>Default: <code>pem</code> </p>
     */
    inline void SetKeyFormat(const KeyFormat& value) { m_keyFormatHasBeenSet = true; m_keyFormat = value; }

    /**
     * <p>The format of the key pair.</p> <p>Default: <code>pem</code> </p>
     */
    inline void SetKeyFormat(KeyFormat&& value) { m_keyFormatHasBeenSet = true; m_keyFormat = std::move(value); }

    /**
     * <p>The format of the key pair.</p> <p>Default: <code>pem</code> </p>
     */
    inline CreateKeyPairRequest& WithKeyFormat(const KeyFormat& value) { SetKeyFormat(value); return *this;}

    /**
     * <p>The format of the key pair.</p> <p>Default: <code>pem</code> </p>
     */
    inline CreateKeyPairRequest& WithKeyFormat(KeyFormat&& value) { SetKeyFormat(std::move(value)); return *this;}

  private:

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    KeyType m_keyType;
    bool m_keyTypeHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    KeyFormat m_keyFormat;
    bool m_keyFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
