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
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/ProviderType.h>
#include <aws/codestar-connections/model/ConnectionStatus.h>
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
namespace CodeStarconnections
{
namespace Model
{

  /**
   * <p>The configuration that allows a service such as CodePipeline to connect to a
   * third-party code repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/Connection">AWS
   * API Reference</a></p>
   */
  class AWS_CODESTARCONNECTIONS_API Connection
  {
  public:
    Connection();
    Connection(Aws::Utils::Json::JsonView jsonValue);
    Connection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the connection. Connection names must be unique in an AWS user
     * account.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The name of the connection. Connection names must be unique in an AWS user
     * account.</p>
     */
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }

    /**
     * <p>The name of the connection. Connection names must be unique in an AWS user
     * account.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The name of the connection. Connection names must be unique in an AWS user
     * account.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    /**
     * <p>The name of the connection. Connection names must be unique in an AWS user
     * account.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>The name of the connection. Connection names must be unique in an AWS user
     * account.</p>
     */
    inline Connection& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The name of the connection. Connection names must be unique in an AWS user
     * account.</p>
     */
    inline Connection& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection. Connection names must be unique in an AWS user
     * account.</p>
     */
    inline Connection& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the connection. The ARN is used as the
     * connection reference when the connection is shared between AWS services.</p>
     * <note> <p>The ARN is never reused if the connection is deleted.</p> </note>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection. The ARN is used as the
     * connection reference when the connection is shared between AWS services.</p>
     * <note> <p>The ARN is never reused if the connection is deleted.</p> </note>
     */
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection. The ARN is used as the
     * connection reference when the connection is shared between AWS services.</p>
     * <note> <p>The ARN is never reused if the connection is deleted.</p> </note>
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection. The ARN is used as the
     * connection reference when the connection is shared between AWS services.</p>
     * <note> <p>The ARN is never reused if the connection is deleted.</p> </note>
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection. The ARN is used as the
     * connection reference when the connection is shared between AWS services.</p>
     * <note> <p>The ARN is never reused if the connection is deleted.</p> </note>
     */
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection. The ARN is used as the
     * connection reference when the connection is shared between AWS services.</p>
     * <note> <p>The ARN is never reused if the connection is deleted.</p> </note>
     */
    inline Connection& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connection. The ARN is used as the
     * connection reference when the connection is shared between AWS services.</p>
     * <note> <p>The ARN is never reused if the connection is deleted.</p> </note>
     */
    inline Connection& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connection. The ARN is used as the
     * connection reference when the connection is shared between AWS services.</p>
     * <note> <p>The ARN is never reused if the connection is deleted.</p> </note>
     */
    inline Connection& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}


    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. Currently, the valid provider type is Bitbucket.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. Currently, the valid provider type is Bitbucket.</p>
     */
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. Currently, the valid provider type is Bitbucket.</p>
     */
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. Currently, the valid provider type is Bitbucket.</p>
     */
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. Currently, the valid provider type is Bitbucket.</p>
     */
    inline Connection& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. Currently, the valid provider type is Bitbucket.</p>
     */
    inline Connection& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}


    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. For Bitbucket, this is the account ID of the owner of the Bitbucket
     * repository.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. For Bitbucket, this is the account ID of the owner of the Bitbucket
     * repository.</p>
     */
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. For Bitbucket, this is the account ID of the owner of the Bitbucket
     * repository.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. For Bitbucket, this is the account ID of the owner of the Bitbucket
     * repository.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. For Bitbucket, this is the account ID of the owner of the Bitbucket
     * repository.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. For Bitbucket, this is the account ID of the owner of the Bitbucket
     * repository.</p>
     */
    inline Connection& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. For Bitbucket, this is the account ID of the owner of the Bitbucket
     * repository.</p>
     */
    inline Connection& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured. For Bitbucket, this is the account ID of the owner of the Bitbucket
     * repository.</p>
     */
    inline Connection& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>The current status of the connection. </p>
     */
    inline const ConnectionStatus& GetConnectionStatus() const{ return m_connectionStatus; }

    /**
     * <p>The current status of the connection. </p>
     */
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }

    /**
     * <p>The current status of the connection. </p>
     */
    inline void SetConnectionStatus(const ConnectionStatus& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }

    /**
     * <p>The current status of the connection. </p>
     */
    inline void SetConnectionStatus(ConnectionStatus&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::move(value); }

    /**
     * <p>The current status of the connection. </p>
     */
    inline Connection& WithConnectionStatus(const ConnectionStatus& value) { SetConnectionStatus(value); return *this;}

    /**
     * <p>The current status of the connection. </p>
     */
    inline Connection& WithConnectionStatus(ConnectionStatus&& value) { SetConnectionStatus(std::move(value)); return *this;}

  private:

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet;

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet;

    ProviderType m_providerType;
    bool m_providerTypeHasBeenSet;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet;

    ConnectionStatus m_connectionStatus;
    bool m_connectionStatusHasBeenSet;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
