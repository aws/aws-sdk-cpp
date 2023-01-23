/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ImportKeyPairRequest : public EC2Request
  {
  public:
    AWS_EC2_API ImportKeyPairRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportKeyPair"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline ImportKeyPairRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>A unique name for the key pair.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>A unique name for the key pair.</p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p>A unique name for the key pair.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>A unique name for the key pair.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>A unique name for the key pair.</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>A unique name for the key pair.</p>
     */
    inline ImportKeyPairRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>A unique name for the key pair.</p>
     */
    inline ImportKeyPairRequest& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the key pair.</p>
     */
    inline ImportKeyPairRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>The public key. For API calls, the text must be base64-encoded. For command
     * line tools, base64 encoding is performed for you.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPublicKeyMaterial() const{ return m_publicKeyMaterial; }

    /**
     * <p>The public key. For API calls, the text must be base64-encoded. For command
     * line tools, base64 encoding is performed for you.</p>
     */
    inline bool PublicKeyMaterialHasBeenSet() const { return m_publicKeyMaterialHasBeenSet; }

    /**
     * <p>The public key. For API calls, the text must be base64-encoded. For command
     * line tools, base64 encoding is performed for you.</p>
     */
    inline void SetPublicKeyMaterial(const Aws::Utils::ByteBuffer& value) { m_publicKeyMaterialHasBeenSet = true; m_publicKeyMaterial = value; }

    /**
     * <p>The public key. For API calls, the text must be base64-encoded. For command
     * line tools, base64 encoding is performed for you.</p>
     */
    inline void SetPublicKeyMaterial(Aws::Utils::ByteBuffer&& value) { m_publicKeyMaterialHasBeenSet = true; m_publicKeyMaterial = std::move(value); }

    /**
     * <p>The public key. For API calls, the text must be base64-encoded. For command
     * line tools, base64 encoding is performed for you.</p>
     */
    inline ImportKeyPairRequest& WithPublicKeyMaterial(const Aws::Utils::ByteBuffer& value) { SetPublicKeyMaterial(value); return *this;}

    /**
     * <p>The public key. For API calls, the text must be base64-encoded. For command
     * line tools, base64 encoding is performed for you.</p>
     */
    inline ImportKeyPairRequest& WithPublicKeyMaterial(Aws::Utils::ByteBuffer&& value) { SetPublicKeyMaterial(std::move(value)); return *this;}


    /**
     * <p>The tags to apply to the imported key pair.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the imported key pair.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the imported key pair.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the imported key pair.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the imported key pair.</p>
     */
    inline ImportKeyPairRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the imported key pair.</p>
     */
    inline ImportKeyPairRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the imported key pair.</p>
     */
    inline ImportKeyPairRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the imported key pair.</p>
     */
    inline ImportKeyPairRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::Utils::ByteBuffer m_publicKeyMaterial;
    bool m_publicKeyMaterialHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
