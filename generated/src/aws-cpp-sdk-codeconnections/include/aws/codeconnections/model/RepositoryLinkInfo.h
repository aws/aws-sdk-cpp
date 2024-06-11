﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/ProviderType.h>
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
namespace CodeConnections
{
namespace Model
{

  /**
   * <p>Information about the repository link resource, such as the repository link
   * ARN, the associated connection ARN, encryption key ARN, and owner
   * ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/RepositoryLinkInfo">AWS
   * API Reference</a></p>
   */
  class RepositoryLinkInfo
  {
  public:
    AWS_CODECONNECTIONS_API RepositoryLinkInfo();
    AWS_CODECONNECTIONS_API RepositoryLinkInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API RepositoryLinkInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connection associated with the
     * repository link.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }
    inline RepositoryLinkInfo& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}
    inline RepositoryLinkInfo& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}
    inline RepositoryLinkInfo& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key for the repository
     * associated with the repository link.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }
    inline RepositoryLinkInfo& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}
    inline RepositoryLinkInfo& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}
    inline RepositoryLinkInfo& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner ID for the repository associated with the repository link, such as
     * the owner ID in GitHub.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline RepositoryLinkInfo& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline RepositoryLinkInfo& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline RepositoryLinkInfo& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider type for the connection, such as GitHub, associated with the
     * repository link.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }
    inline RepositoryLinkInfo& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}
    inline RepositoryLinkInfo& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the repository link.</p>
     */
    inline const Aws::String& GetRepositoryLinkArn() const{ return m_repositoryLinkArn; }
    inline bool RepositoryLinkArnHasBeenSet() const { return m_repositoryLinkArnHasBeenSet; }
    inline void SetRepositoryLinkArn(const Aws::String& value) { m_repositoryLinkArnHasBeenSet = true; m_repositoryLinkArn = value; }
    inline void SetRepositoryLinkArn(Aws::String&& value) { m_repositoryLinkArnHasBeenSet = true; m_repositoryLinkArn = std::move(value); }
    inline void SetRepositoryLinkArn(const char* value) { m_repositoryLinkArnHasBeenSet = true; m_repositoryLinkArn.assign(value); }
    inline RepositoryLinkInfo& WithRepositoryLinkArn(const Aws::String& value) { SetRepositoryLinkArn(value); return *this;}
    inline RepositoryLinkInfo& WithRepositoryLinkArn(Aws::String&& value) { SetRepositoryLinkArn(std::move(value)); return *this;}
    inline RepositoryLinkInfo& WithRepositoryLinkArn(const char* value) { SetRepositoryLinkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the repository link.</p>
     */
    inline const Aws::String& GetRepositoryLinkId() const{ return m_repositoryLinkId; }
    inline bool RepositoryLinkIdHasBeenSet() const { return m_repositoryLinkIdHasBeenSet; }
    inline void SetRepositoryLinkId(const Aws::String& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = value; }
    inline void SetRepositoryLinkId(Aws::String&& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = std::move(value); }
    inline void SetRepositoryLinkId(const char* value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId.assign(value); }
    inline RepositoryLinkInfo& WithRepositoryLinkId(const Aws::String& value) { SetRepositoryLinkId(value); return *this;}
    inline RepositoryLinkInfo& WithRepositoryLinkId(Aws::String&& value) { SetRepositoryLinkId(std::move(value)); return *this;}
    inline RepositoryLinkInfo& WithRepositoryLinkId(const char* value) { SetRepositoryLinkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository associated with the repository link.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline RepositoryLinkInfo& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline RepositoryLinkInfo& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline RepositoryLinkInfo& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    ProviderType m_providerType;
    bool m_providerTypeHasBeenSet = false;

    Aws::String m_repositoryLinkArn;
    bool m_repositoryLinkArnHasBeenSet = false;

    Aws::String m_repositoryLinkId;
    bool m_repositoryLinkIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
