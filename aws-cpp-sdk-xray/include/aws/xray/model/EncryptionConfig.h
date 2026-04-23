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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/EncryptionStatus.h>
#include <aws/xray/model/EncryptionType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace XRay
{
namespace Model
{

  /**
   * <p>A configuration document that specifies encryption configuration
   * settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/EncryptionConfig">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API EncryptionConfig
  {
  public:
    EncryptionConfig();
    EncryptionConfig(Aws::Utils::Json::JsonView jsonValue);
    EncryptionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the customer master key (CMK) used for encryption, if
     * applicable.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The ID of the customer master key (CMK) used for encryption, if
     * applicable.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The ID of the customer master key (CMK) used for encryption, if
     * applicable.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The ID of the customer master key (CMK) used for encryption, if
     * applicable.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The ID of the customer master key (CMK) used for encryption, if
     * applicable.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The ID of the customer master key (CMK) used for encryption, if
     * applicable.</p>
     */
    inline EncryptionConfig& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The ID of the customer master key (CMK) used for encryption, if
     * applicable.</p>
     */
    inline EncryptionConfig& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the customer master key (CMK) used for encryption, if
     * applicable.</p>
     */
    inline EncryptionConfig& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The encryption status. While the status is <code>UPDATING</code>, X-Ray may
     * encrypt data with a combination of the new and old settings.</p>
     */
    inline const EncryptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The encryption status. While the status is <code>UPDATING</code>, X-Ray may
     * encrypt data with a combination of the new and old settings.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The encryption status. While the status is <code>UPDATING</code>, X-Ray may
     * encrypt data with a combination of the new and old settings.</p>
     */
    inline void SetStatus(const EncryptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The encryption status. While the status is <code>UPDATING</code>, X-Ray may
     * encrypt data with a combination of the new and old settings.</p>
     */
    inline void SetStatus(EncryptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The encryption status. While the status is <code>UPDATING</code>, X-Ray may
     * encrypt data with a combination of the new and old settings.</p>
     */
    inline EncryptionConfig& WithStatus(const EncryptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The encryption status. While the status is <code>UPDATING</code>, X-Ray may
     * encrypt data with a combination of the new and old settings.</p>
     */
    inline EncryptionConfig& WithStatus(EncryptionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The type of encryption. Set to <code>KMS</code> for encryption with CMKs. Set
     * to <code>NONE</code> for default encryption.</p>
     */
    inline const EncryptionType& GetType() const{ return m_type; }

    /**
     * <p>The type of encryption. Set to <code>KMS</code> for encryption with CMKs. Set
     * to <code>NONE</code> for default encryption.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of encryption. Set to <code>KMS</code> for encryption with CMKs. Set
     * to <code>NONE</code> for default encryption.</p>
     */
    inline void SetType(const EncryptionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of encryption. Set to <code>KMS</code> for encryption with CMKs. Set
     * to <code>NONE</code> for default encryption.</p>
     */
    inline void SetType(EncryptionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of encryption. Set to <code>KMS</code> for encryption with CMKs. Set
     * to <code>NONE</code> for default encryption.</p>
     */
    inline EncryptionConfig& WithType(const EncryptionType& value) { SetType(value); return *this;}

    /**
     * <p>The type of encryption. Set to <code>KMS</code> for encryption with CMKs. Set
     * to <code>NONE</code> for default encryption.</p>
     */
    inline EncryptionConfig& WithType(EncryptionType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;

    EncryptionStatus m_status;
    bool m_statusHasBeenSet;

    EncryptionType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
