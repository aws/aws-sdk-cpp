/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/docdb-elastic/DocDBElasticRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb-elastic/model/Auth.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DocDBElastic
{
namespace Model
{

  /**
   */
  class CreateClusterRequest : public DocDBElasticRequest
  {
  public:
    AWS_DOCDBELASTIC_API CreateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_DOCDBELASTIC_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p> <p>
     * <i>Constraints</i>:</p> <ul> <li> <p>Must be from 1 to 63 letters or
     * numbers.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word.</p> </li> </ul>
     */
    inline const Aws::String& GetAdminUserName() const{ return m_adminUserName; }

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p> <p>
     * <i>Constraints</i>:</p> <ul> <li> <p>Must be from 1 to 63 letters or
     * numbers.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word.</p> </li> </ul>
     */
    inline bool AdminUserNameHasBeenSet() const { return m_adminUserNameHasBeenSet; }

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p> <p>
     * <i>Constraints</i>:</p> <ul> <li> <p>Must be from 1 to 63 letters or
     * numbers.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word.</p> </li> </ul>
     */
    inline void SetAdminUserName(const Aws::String& value) { m_adminUserNameHasBeenSet = true; m_adminUserName = value; }

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p> <p>
     * <i>Constraints</i>:</p> <ul> <li> <p>Must be from 1 to 63 letters or
     * numbers.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word.</p> </li> </ul>
     */
    inline void SetAdminUserName(Aws::String&& value) { m_adminUserNameHasBeenSet = true; m_adminUserName = std::move(value); }

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p> <p>
     * <i>Constraints</i>:</p> <ul> <li> <p>Must be from 1 to 63 letters or
     * numbers.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word.</p> </li> </ul>
     */
    inline void SetAdminUserName(const char* value) { m_adminUserNameHasBeenSet = true; m_adminUserName.assign(value); }

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p> <p>
     * <i>Constraints</i>:</p> <ul> <li> <p>Must be from 1 to 63 letters or
     * numbers.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word.</p> </li> </ul>
     */
    inline CreateClusterRequest& WithAdminUserName(const Aws::String& value) { SetAdminUserName(value); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p> <p>
     * <i>Constraints</i>:</p> <ul> <li> <p>Must be from 1 to 63 letters or
     * numbers.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word.</p> </li> </ul>
     */
    inline CreateClusterRequest& WithAdminUserName(Aws::String&& value) { SetAdminUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p> <p>
     * <i>Constraints</i>:</p> <ul> <li> <p>Must be from 1 to 63 letters or
     * numbers.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word.</p> </li> </ul>
     */
    inline CreateClusterRequest& WithAdminUserName(const char* value) { SetAdminUserName(value); return *this;}


    /**
     * <p>The password for the Elastic DocumentDB cluster administrator and can contain
     * any printable ASCII characters.</p> <p> <i>Constraints</i>:</p> <ul> <li>
     * <p>Must contain from 8 to 100 characters.</p> </li> <li> <p>Cannot contain a
     * forward slash (/), double quote ("), or the "at" symbol (@).</p> </li> </ul>
     */
    inline const Aws::String& GetAdminUserPassword() const{ return m_adminUserPassword; }

    /**
     * <p>The password for the Elastic DocumentDB cluster administrator and can contain
     * any printable ASCII characters.</p> <p> <i>Constraints</i>:</p> <ul> <li>
     * <p>Must contain from 8 to 100 characters.</p> </li> <li> <p>Cannot contain a
     * forward slash (/), double quote ("), or the "at" symbol (@).</p> </li> </ul>
     */
    inline bool AdminUserPasswordHasBeenSet() const { return m_adminUserPasswordHasBeenSet; }

    /**
     * <p>The password for the Elastic DocumentDB cluster administrator and can contain
     * any printable ASCII characters.</p> <p> <i>Constraints</i>:</p> <ul> <li>
     * <p>Must contain from 8 to 100 characters.</p> </li> <li> <p>Cannot contain a
     * forward slash (/), double quote ("), or the "at" symbol (@).</p> </li> </ul>
     */
    inline void SetAdminUserPassword(const Aws::String& value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword = value; }

    /**
     * <p>The password for the Elastic DocumentDB cluster administrator and can contain
     * any printable ASCII characters.</p> <p> <i>Constraints</i>:</p> <ul> <li>
     * <p>Must contain from 8 to 100 characters.</p> </li> <li> <p>Cannot contain a
     * forward slash (/), double quote ("), or the "at" symbol (@).</p> </li> </ul>
     */
    inline void SetAdminUserPassword(Aws::String&& value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword = std::move(value); }

    /**
     * <p>The password for the Elastic DocumentDB cluster administrator and can contain
     * any printable ASCII characters.</p> <p> <i>Constraints</i>:</p> <ul> <li>
     * <p>Must contain from 8 to 100 characters.</p> </li> <li> <p>Cannot contain a
     * forward slash (/), double quote ("), or the "at" symbol (@).</p> </li> </ul>
     */
    inline void SetAdminUserPassword(const char* value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword.assign(value); }

    /**
     * <p>The password for the Elastic DocumentDB cluster administrator and can contain
     * any printable ASCII characters.</p> <p> <i>Constraints</i>:</p> <ul> <li>
     * <p>Must contain from 8 to 100 characters.</p> </li> <li> <p>Cannot contain a
     * forward slash (/), double quote ("), or the "at" symbol (@).</p> </li> </ul>
     */
    inline CreateClusterRequest& WithAdminUserPassword(const Aws::String& value) { SetAdminUserPassword(value); return *this;}

    /**
     * <p>The password for the Elastic DocumentDB cluster administrator and can contain
     * any printable ASCII characters.</p> <p> <i>Constraints</i>:</p> <ul> <li>
     * <p>Must contain from 8 to 100 characters.</p> </li> <li> <p>Cannot contain a
     * forward slash (/), double quote ("), or the "at" symbol (@).</p> </li> </ul>
     */
    inline CreateClusterRequest& WithAdminUserPassword(Aws::String&& value) { SetAdminUserPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the Elastic DocumentDB cluster administrator and can contain
     * any printable ASCII characters.</p> <p> <i>Constraints</i>:</p> <ul> <li>
     * <p>Must contain from 8 to 100 characters.</p> </li> <li> <p>Cannot contain a
     * forward slash (/), double quote ("), or the "at" symbol (@).</p> </li> </ul>
     */
    inline CreateClusterRequest& WithAdminUserPassword(const char* value) { SetAdminUserPassword(value); return *this;}


    /**
     * <p>The authentication type for the Elastic DocumentDB cluster.</p>
     */
    inline const Auth& GetAuthType() const{ return m_authType; }

    /**
     * <p>The authentication type for the Elastic DocumentDB cluster.</p>
     */
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }

    /**
     * <p>The authentication type for the Elastic DocumentDB cluster.</p>
     */
    inline void SetAuthType(const Auth& value) { m_authTypeHasBeenSet = true; m_authType = value; }

    /**
     * <p>The authentication type for the Elastic DocumentDB cluster.</p>
     */
    inline void SetAuthType(Auth&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }

    /**
     * <p>The authentication type for the Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& WithAuthType(const Auth& value) { SetAuthType(value); return *this;}

    /**
     * <p>The authentication type for the Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& WithAuthType(Auth&& value) { SetAuthType(std::move(value)); return *this;}


    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name of the new Elastic DocumentDB cluster. This parameter is stored as a
     * lowercase string.</p> <p> <i>Constraints</i>:</p> <ul> <li> <p>Must contain from
     * 1 to 63 letters, numbers, or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul> <p> <i>Example</i>: <code>my-cluster</code>
     * </p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the new Elastic DocumentDB cluster. This parameter is stored as a
     * lowercase string.</p> <p> <i>Constraints</i>:</p> <ul> <li> <p>Must contain from
     * 1 to 63 letters, numbers, or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul> <p> <i>Example</i>: <code>my-cluster</code>
     * </p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the new Elastic DocumentDB cluster. This parameter is stored as a
     * lowercase string.</p> <p> <i>Constraints</i>:</p> <ul> <li> <p>Must contain from
     * 1 to 63 letters, numbers, or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul> <p> <i>Example</i>: <code>my-cluster</code>
     * </p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the new Elastic DocumentDB cluster. This parameter is stored as a
     * lowercase string.</p> <p> <i>Constraints</i>:</p> <ul> <li> <p>Must contain from
     * 1 to 63 letters, numbers, or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul> <p> <i>Example</i>: <code>my-cluster</code>
     * </p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the new Elastic DocumentDB cluster. This parameter is stored as a
     * lowercase string.</p> <p> <i>Constraints</i>:</p> <ul> <li> <p>Must contain from
     * 1 to 63 letters, numbers, or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul> <p> <i>Example</i>: <code>my-cluster</code>
     * </p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the new Elastic DocumentDB cluster. This parameter is stored as a
     * lowercase string.</p> <p> <i>Constraints</i>:</p> <ul> <li> <p>Must contain from
     * 1 to 63 letters, numbers, or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul> <p> <i>Example</i>: <code>my-cluster</code>
     * </p>
     */
    inline CreateClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the new Elastic DocumentDB cluster. This parameter is stored as a
     * lowercase string.</p> <p> <i>Constraints</i>:</p> <ul> <li> <p>Must contain from
     * 1 to 63 letters, numbers, or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul> <p> <i>Example</i>: <code>my-cluster</code>
     * </p>
     */
    inline CreateClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the new Elastic DocumentDB cluster. This parameter is stored as a
     * lowercase string.</p> <p> <i>Constraints</i>:</p> <ul> <li> <p>Must contain from
     * 1 to 63 letters, numbers, or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul> <p> <i>Example</i>: <code>my-cluster</code>
     * </p>
     */
    inline CreateClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified,
     * Elastic DocumentDB uses the default encryption key that KMS creates for your
     * account. Your account has a different default encryption key for each Amazon
     * Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified,
     * Elastic DocumentDB uses the default encryption key that KMS creates for your
     * account. Your account has a different default encryption key for each Amazon
     * Region.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified,
     * Elastic DocumentDB uses the default encryption key that KMS creates for your
     * account. Your account has a different default encryption key for each Amazon
     * Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified,
     * Elastic DocumentDB uses the default encryption key that KMS creates for your
     * account. Your account has a different default encryption key for each Amazon
     * Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified,
     * Elastic DocumentDB uses the default encryption key that KMS creates for your
     * account. Your account has a different default encryption key for each Amazon
     * Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified,
     * Elastic DocumentDB uses the default encryption key that KMS creates for your
     * account. Your account has a different default encryption key for each Amazon
     * Region.</p>
     */
    inline CreateClusterRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified,
     * Elastic DocumentDB uses the default encryption key that KMS creates for your
     * account. Your account has a different default encryption key for each Amazon
     * Region.</p>
     */
    inline CreateClusterRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified,
     * Elastic DocumentDB uses the default encryption key that KMS creates for your
     * account. Your account has a different default encryption key for each Amazon
     * Region.</p>
     */
    inline CreateClusterRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline CreateClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline CreateClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline CreateClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The capacity of each shard in the new Elastic DocumentDB cluster.</p>
     */
    inline int GetShardCapacity() const{ return m_shardCapacity; }

    /**
     * <p>The capacity of each shard in the new Elastic DocumentDB cluster.</p>
     */
    inline bool ShardCapacityHasBeenSet() const { return m_shardCapacityHasBeenSet; }

    /**
     * <p>The capacity of each shard in the new Elastic DocumentDB cluster.</p>
     */
    inline void SetShardCapacity(int value) { m_shardCapacityHasBeenSet = true; m_shardCapacity = value; }

    /**
     * <p>The capacity of each shard in the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& WithShardCapacity(int value) { SetShardCapacity(value); return *this;}


    /**
     * <p>The number of shards to create in the new Elastic DocumentDB cluster.</p>
     */
    inline int GetShardCount() const{ return m_shardCount; }

    /**
     * <p>The number of shards to create in the new Elastic DocumentDB cluster.</p>
     */
    inline bool ShardCountHasBeenSet() const { return m_shardCountHasBeenSet; }

    /**
     * <p>The number of shards to create in the new Elastic DocumentDB cluster.</p>
     */
    inline void SetShardCount(int value) { m_shardCountHasBeenSet = true; m_shardCount = value; }

    /**
     * <p>The number of shards to create in the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& WithShardCount(int value) { SetShardCount(value); return *this;}


    /**
     * <p>The Amazon EC2 subnet IDs for the new Elastic DocumentDB cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The Amazon EC2 subnet IDs for the new Elastic DocumentDB cluster.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The Amazon EC2 subnet IDs for the new Elastic DocumentDB cluster.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The Amazon EC2 subnet IDs for the new Elastic DocumentDB cluster.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The Amazon EC2 subnet IDs for the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The Amazon EC2 subnet IDs for the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 subnet IDs for the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 subnet IDs for the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon EC2 subnet IDs for the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB cluster.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB cluster.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB cluster.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB cluster.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be assigned to the new Elastic DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline CreateClusterRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

  private:

    Aws::String m_adminUserName;
    bool m_adminUserNameHasBeenSet = false;

    Aws::String m_adminUserPassword;
    bool m_adminUserPasswordHasBeenSet = false;

    Auth m_authType;
    bool m_authTypeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    int m_shardCapacity;
    bool m_shardCapacityHasBeenSet = false;

    int m_shardCount;
    bool m_shardCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
