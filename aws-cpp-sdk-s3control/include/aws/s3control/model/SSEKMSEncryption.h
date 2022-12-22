/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Configuration for the use of SSE-KMS to encrypt generated manifest
   * objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/SSEKMSEncryption">AWS
   * API Reference</a></p>
   */
  class SSEKMSEncryption
  {
  public:
    AWS_S3CONTROL_API SSEKMSEncryption();
    AWS_S3CONTROL_API SSEKMSEncryption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API SSEKMSEncryption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies the ID of the Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) symmetric encryption customer managed key to use for
     * encrypting generated manifest objects.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Specifies the ID of the Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) symmetric encryption customer managed key to use for
     * encrypting generated manifest objects.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) symmetric encryption customer managed key to use for
     * encrypting generated manifest objects.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>Specifies the ID of the Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) symmetric encryption customer managed key to use for
     * encrypting generated manifest objects.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>Specifies the ID of the Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) symmetric encryption customer managed key to use for
     * encrypting generated manifest objects.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>Specifies the ID of the Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) symmetric encryption customer managed key to use for
     * encrypting generated manifest objects.</p>
     */
    inline SSEKMSEncryption& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Specifies the ID of the Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) symmetric encryption customer managed key to use for
     * encrypting generated manifest objects.</p>
     */
    inline SSEKMSEncryption& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) symmetric encryption customer managed key to use for
     * encrypting generated manifest objects.</p>
     */
    inline SSEKMSEncryption& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
