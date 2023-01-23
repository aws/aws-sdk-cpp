/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector-specific profile credentials required by Infor Nexus.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/InforNexusConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class InforNexusConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API InforNexusConnectorProfileCredentials();
    AWS_APPFLOW_API InforNexusConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API InforNexusConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Access Key portion of the credentials. </p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p> The Access Key portion of the credentials. </p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p> The Access Key portion of the credentials. </p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p> The Access Key portion of the credentials. </p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p> The Access Key portion of the credentials. </p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p> The Access Key portion of the credentials. </p>
     */
    inline InforNexusConnectorProfileCredentials& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p> The Access Key portion of the credentials. </p>
     */
    inline InforNexusConnectorProfileCredentials& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p> The Access Key portion of the credentials. </p>
     */
    inline InforNexusConnectorProfileCredentials& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p> The identifier for the user. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p> The identifier for the user. </p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p> The identifier for the user. </p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p> The identifier for the user. </p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p> The identifier for the user. </p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p> The identifier for the user. </p>
     */
    inline InforNexusConnectorProfileCredentials& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p> The identifier for the user. </p>
     */
    inline InforNexusConnectorProfileCredentials& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the user. </p>
     */
    inline InforNexusConnectorProfileCredentials& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p> The secret key used to sign requests. </p>
     */
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }

    /**
     * <p> The secret key used to sign requests. </p>
     */
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }

    /**
     * <p> The secret key used to sign requests. </p>
     */
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = value; }

    /**
     * <p> The secret key used to sign requests. </p>
     */
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::move(value); }

    /**
     * <p> The secret key used to sign requests. </p>
     */
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey.assign(value); }

    /**
     * <p> The secret key used to sign requests. </p>
     */
    inline InforNexusConnectorProfileCredentials& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}

    /**
     * <p> The secret key used to sign requests. </p>
     */
    inline InforNexusConnectorProfileCredentials& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(std::move(value)); return *this;}

    /**
     * <p> The secret key used to sign requests. </p>
     */
    inline InforNexusConnectorProfileCredentials& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}


    /**
     * <p> The encryption keys used to encrypt data. </p>
     */
    inline const Aws::String& GetDatakey() const{ return m_datakey; }

    /**
     * <p> The encryption keys used to encrypt data. </p>
     */
    inline bool DatakeyHasBeenSet() const { return m_datakeyHasBeenSet; }

    /**
     * <p> The encryption keys used to encrypt data. </p>
     */
    inline void SetDatakey(const Aws::String& value) { m_datakeyHasBeenSet = true; m_datakey = value; }

    /**
     * <p> The encryption keys used to encrypt data. </p>
     */
    inline void SetDatakey(Aws::String&& value) { m_datakeyHasBeenSet = true; m_datakey = std::move(value); }

    /**
     * <p> The encryption keys used to encrypt data. </p>
     */
    inline void SetDatakey(const char* value) { m_datakeyHasBeenSet = true; m_datakey.assign(value); }

    /**
     * <p> The encryption keys used to encrypt data. </p>
     */
    inline InforNexusConnectorProfileCredentials& WithDatakey(const Aws::String& value) { SetDatakey(value); return *this;}

    /**
     * <p> The encryption keys used to encrypt data. </p>
     */
    inline InforNexusConnectorProfileCredentials& WithDatakey(Aws::String&& value) { SetDatakey(std::move(value)); return *this;}

    /**
     * <p> The encryption keys used to encrypt data. </p>
     */
    inline InforNexusConnectorProfileCredentials& WithDatakey(const char* value) { SetDatakey(value); return *this;}

  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet = false;

    Aws::String m_datakey;
    bool m_datakeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
