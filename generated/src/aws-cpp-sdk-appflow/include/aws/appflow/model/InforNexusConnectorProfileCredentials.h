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
    AWS_APPFLOW_API InforNexusConnectorProfileCredentials() = default;
    AWS_APPFLOW_API InforNexusConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API InforNexusConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Access Key portion of the credentials. </p>
     */
    inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    template<typename AccessKeyIdT = Aws::String>
    void SetAccessKeyId(AccessKeyIdT&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::forward<AccessKeyIdT>(value); }
    template<typename AccessKeyIdT = Aws::String>
    InforNexusConnectorProfileCredentials& WithAccessKeyId(AccessKeyIdT&& value) { SetAccessKeyId(std::forward<AccessKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the user. </p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    InforNexusConnectorProfileCredentials& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The secret key used to sign requests. </p>
     */
    inline const Aws::String& GetSecretAccessKey() const { return m_secretAccessKey; }
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }
    template<typename SecretAccessKeyT = Aws::String>
    void SetSecretAccessKey(SecretAccessKeyT&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::forward<SecretAccessKeyT>(value); }
    template<typename SecretAccessKeyT = Aws::String>
    InforNexusConnectorProfileCredentials& WithSecretAccessKey(SecretAccessKeyT&& value) { SetSecretAccessKey(std::forward<SecretAccessKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The encryption keys used to encrypt data. </p>
     */
    inline const Aws::String& GetDatakey() const { return m_datakey; }
    inline bool DatakeyHasBeenSet() const { return m_datakeyHasBeenSet; }
    template<typename DatakeyT = Aws::String>
    void SetDatakey(DatakeyT&& value) { m_datakeyHasBeenSet = true; m_datakey = std::forward<DatakeyT>(value); }
    template<typename DatakeyT = Aws::String>
    InforNexusConnectorProfileCredentials& WithDatakey(DatakeyT&& value) { SetDatakey(std::forward<DatakeyT>(value)); return *this;}
    ///@}
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
