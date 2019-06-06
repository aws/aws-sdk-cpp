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
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Algorithm.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/KeyType.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * Information about the encryption of the flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Encryption">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API Encryption
  {
  public:
    Encryption();
    Encryption(Aws::Utils::Json::JsonView jsonValue);
    Encryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The type of algorithm that is used for the encryption (such as aes128, aes192,
     * or aes256).
     */
    inline const Algorithm& GetAlgorithm() const{ return m_algorithm; }

    /**
     * The type of algorithm that is used for the encryption (such as aes128, aes192,
     * or aes256).
     */
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }

    /**
     * The type of algorithm that is used for the encryption (such as aes128, aes192,
     * or aes256).
     */
    inline void SetAlgorithm(const Algorithm& value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    /**
     * The type of algorithm that is used for the encryption (such as aes128, aes192,
     * or aes256).
     */
    inline void SetAlgorithm(Algorithm&& value) { m_algorithmHasBeenSet = true; m_algorithm = std::move(value); }

    /**
     * The type of algorithm that is used for the encryption (such as aes128, aes192,
     * or aes256).
     */
    inline Encryption& WithAlgorithm(const Algorithm& value) { SetAlgorithm(value); return *this;}

    /**
     * The type of algorithm that is used for the encryption (such as aes128, aes192,
     * or aes256).
     */
    inline Encryption& WithAlgorithm(Algorithm&& value) { SetAlgorithm(std::move(value)); return *this;}


    /**
     * A 128-bit, 16-byte hex value represented by a 32-character string, to be used
     * with the key for encrypting content. This parameter is not valid for static key
     * encryption.
     */
    inline const Aws::String& GetConstantInitializationVector() const{ return m_constantInitializationVector; }

    /**
     * A 128-bit, 16-byte hex value represented by a 32-character string, to be used
     * with the key for encrypting content. This parameter is not valid for static key
     * encryption.
     */
    inline bool ConstantInitializationVectorHasBeenSet() const { return m_constantInitializationVectorHasBeenSet; }

    /**
     * A 128-bit, 16-byte hex value represented by a 32-character string, to be used
     * with the key for encrypting content. This parameter is not valid for static key
     * encryption.
     */
    inline void SetConstantInitializationVector(const Aws::String& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = value; }

    /**
     * A 128-bit, 16-byte hex value represented by a 32-character string, to be used
     * with the key for encrypting content. This parameter is not valid for static key
     * encryption.
     */
    inline void SetConstantInitializationVector(Aws::String&& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = std::move(value); }

    /**
     * A 128-bit, 16-byte hex value represented by a 32-character string, to be used
     * with the key for encrypting content. This parameter is not valid for static key
     * encryption.
     */
    inline void SetConstantInitializationVector(const char* value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector.assign(value); }

    /**
     * A 128-bit, 16-byte hex value represented by a 32-character string, to be used
     * with the key for encrypting content. This parameter is not valid for static key
     * encryption.
     */
    inline Encryption& WithConstantInitializationVector(const Aws::String& value) { SetConstantInitializationVector(value); return *this;}

    /**
     * A 128-bit, 16-byte hex value represented by a 32-character string, to be used
     * with the key for encrypting content. This parameter is not valid for static key
     * encryption.
     */
    inline Encryption& WithConstantInitializationVector(Aws::String&& value) { SetConstantInitializationVector(std::move(value)); return *this;}

    /**
     * A 128-bit, 16-byte hex value represented by a 32-character string, to be used
     * with the key for encrypting content. This parameter is not valid for static key
     * encryption.
     */
    inline Encryption& WithConstantInitializationVector(const char* value) { SetConstantInitializationVector(value); return *this;}


    /**
     * The value of one of the devices that you configured with your digital rights
     * management (DRM) platform key provider. This parameter is required for SPEKE
     * encryption and is not valid for static key encryption.
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * The value of one of the devices that you configured with your digital rights
     * management (DRM) platform key provider. This parameter is required for SPEKE
     * encryption and is not valid for static key encryption.
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * The value of one of the devices that you configured with your digital rights
     * management (DRM) platform key provider. This parameter is required for SPEKE
     * encryption and is not valid for static key encryption.
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * The value of one of the devices that you configured with your digital rights
     * management (DRM) platform key provider. This parameter is required for SPEKE
     * encryption and is not valid for static key encryption.
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * The value of one of the devices that you configured with your digital rights
     * management (DRM) platform key provider. This parameter is required for SPEKE
     * encryption and is not valid for static key encryption.
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * The value of one of the devices that you configured with your digital rights
     * management (DRM) platform key provider. This parameter is required for SPEKE
     * encryption and is not valid for static key encryption.
     */
    inline Encryption& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * The value of one of the devices that you configured with your digital rights
     * management (DRM) platform key provider. This parameter is required for SPEKE
     * encryption and is not valid for static key encryption.
     */
    inline Encryption& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * The value of one of the devices that you configured with your digital rights
     * management (DRM) platform key provider. This parameter is required for SPEKE
     * encryption and is not valid for static key encryption.
     */
    inline Encryption& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * The type of key that is used for the encryption. If no keyType is provided, the
     * service will use the default setting (static-key).
     */
    inline const KeyType& GetKeyType() const{ return m_keyType; }

    /**
     * The type of key that is used for the encryption. If no keyType is provided, the
     * service will use the default setting (static-key).
     */
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }

    /**
     * The type of key that is used for the encryption. If no keyType is provided, the
     * service will use the default setting (static-key).
     */
    inline void SetKeyType(const KeyType& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * The type of key that is used for the encryption. If no keyType is provided, the
     * service will use the default setting (static-key).
     */
    inline void SetKeyType(KeyType&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::move(value); }

    /**
     * The type of key that is used for the encryption. If no keyType is provided, the
     * service will use the default setting (static-key).
     */
    inline Encryption& WithKeyType(const KeyType& value) { SetKeyType(value); return *this;}

    /**
     * The type of key that is used for the encryption. If no keyType is provided, the
     * service will use the default setting (static-key).
     */
    inline Encryption& WithKeyType(KeyType&& value) { SetKeyType(std::move(value)); return *this;}


    /**
     * The AWS Region that the API Gateway proxy endpoint was created in. This
     * parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * The AWS Region that the API Gateway proxy endpoint was created in. This
     * parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * The AWS Region that the API Gateway proxy endpoint was created in. This
     * parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * The AWS Region that the API Gateway proxy endpoint was created in. This
     * parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * The AWS Region that the API Gateway proxy endpoint was created in. This
     * parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * The AWS Region that the API Gateway proxy endpoint was created in. This
     * parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline Encryption& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * The AWS Region that the API Gateway proxy endpoint was created in. This
     * parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline Encryption& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * The AWS Region that the API Gateway proxy endpoint was created in. This
     * parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline Encryption& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * An identifier for the content. The service sends this value to the key server to
     * identify the current endpoint. The resource ID is also known as the content ID.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * An identifier for the content. The service sends this value to the key server to
     * identify the current endpoint. The resource ID is also known as the content ID.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * An identifier for the content. The service sends this value to the key server to
     * identify the current endpoint. The resource ID is also known as the content ID.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * An identifier for the content. The service sends this value to the key server to
     * identify the current endpoint. The resource ID is also known as the content ID.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * An identifier for the content. The service sends this value to the key server to
     * identify the current endpoint. The resource ID is also known as the content ID.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * An identifier for the content. The service sends this value to the key server to
     * identify the current endpoint. The resource ID is also known as the content ID.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline Encryption& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * An identifier for the content. The service sends this value to the key server to
     * identify the current endpoint. The resource ID is also known as the content ID.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline Encryption& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * An identifier for the content. The service sends this value to the key server to
     * identify the current endpoint. The resource ID is also known as the content ID.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline Encryption& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline Encryption& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline Encryption& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline Encryption& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * The ARN of the secret that you created in AWS Secrets Manager to store the
     * encryption key. This parameter is required for static key encryption and is not
     * valid for SPEKE encryption.
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * The ARN of the secret that you created in AWS Secrets Manager to store the
     * encryption key. This parameter is required for static key encryption and is not
     * valid for SPEKE encryption.
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * The ARN of the secret that you created in AWS Secrets Manager to store the
     * encryption key. This parameter is required for static key encryption and is not
     * valid for SPEKE encryption.
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * The ARN of the secret that you created in AWS Secrets Manager to store the
     * encryption key. This parameter is required for static key encryption and is not
     * valid for SPEKE encryption.
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * The ARN of the secret that you created in AWS Secrets Manager to store the
     * encryption key. This parameter is required for static key encryption and is not
     * valid for SPEKE encryption.
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * The ARN of the secret that you created in AWS Secrets Manager to store the
     * encryption key. This parameter is required for static key encryption and is not
     * valid for SPEKE encryption.
     */
    inline Encryption& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * The ARN of the secret that you created in AWS Secrets Manager to store the
     * encryption key. This parameter is required for static key encryption and is not
     * valid for SPEKE encryption.
     */
    inline Encryption& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * The ARN of the secret that you created in AWS Secrets Manager to store the
     * encryption key. This parameter is required for static key encryption and is not
     * valid for SPEKE encryption.
     */
    inline Encryption& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * The URL from the API Gateway proxy that you set up to talk to your key server.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * The URL from the API Gateway proxy that you set up to talk to your key server.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * The URL from the API Gateway proxy that you set up to talk to your key server.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * The URL from the API Gateway proxy that you set up to talk to your key server.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * The URL from the API Gateway proxy that you set up to talk to your key server.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * The URL from the API Gateway proxy that you set up to talk to your key server.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline Encryption& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * The URL from the API Gateway proxy that you set up to talk to your key server.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline Encryption& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * The URL from the API Gateway proxy that you set up to talk to your key server.
     * This parameter is required for SPEKE encryption and is not valid for static key
     * encryption.
     */
    inline Encryption& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Algorithm m_algorithm;
    bool m_algorithmHasBeenSet;

    Aws::String m_constantInitializationVector;
    bool m_constantInitializationVectorHasBeenSet;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet;

    KeyType m_keyType;
    bool m_keyTypeHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
