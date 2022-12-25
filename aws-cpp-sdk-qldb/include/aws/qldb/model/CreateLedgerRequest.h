/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/QLDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qldb/model/PermissionsMode.h>
#include <utility>

namespace Aws
{
namespace QLDB
{
namespace Model
{

  /**
   */
  class CreateLedgerRequest : public QLDBRequest
  {
  public:
    AWS_QLDB_API CreateLedgerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLedger"; }

    AWS_QLDB_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of the ledgers in your Amazon Web Services account in the current
     * Region.</p> <p>Naming constraints for ledger names are defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of the ledgers in your Amazon Web Services account in the current
     * Region.</p> <p>Naming constraints for ledger names are defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of the ledgers in your Amazon Web Services account in the current
     * Region.</p> <p>Naming constraints for ledger names are defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of the ledgers in your Amazon Web Services account in the current
     * Region.</p> <p>Naming constraints for ledger names are defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of the ledgers in your Amazon Web Services account in the current
     * Region.</p> <p>Naming constraints for ledger names are defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of the ledgers in your Amazon Web Services account in the current
     * Region.</p> <p>Naming constraints for ledger names are defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline CreateLedgerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of the ledgers in your Amazon Web Services account in the current
     * Region.</p> <p>Naming constraints for ledger names are defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline CreateLedgerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of the ledgers in your Amazon Web Services account in the current
     * Region.</p> <p>Naming constraints for ledger names are defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline CreateLedgerRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The key-value pairs to add as tags to the ledger that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pairs to add as tags to the ledger that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pairs to add as tags to the ledger that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pairs to add as tags to the ledger that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pairs to add as tags to the ledger that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline CreateLedgerRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pairs to add as tags to the ledger that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline CreateLedgerRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pairs to add as tags to the ledger that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline CreateLedgerRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the ledger that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline CreateLedgerRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the ledger that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline CreateLedgerRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the ledger that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline CreateLedgerRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the ledger that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline CreateLedgerRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the ledger that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline CreateLedgerRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the ledger that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline CreateLedgerRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The permissions mode to assign to the ledger that you want to create. This
     * parameter can have one of the following values:</p> <ul> <li> <p>
     * <code>ALLOW_ALL</code>: A legacy permissions mode that enables access control
     * with API-level granularity for ledgers.</p> <p>This mode allows users who have
     * the <code>SendCommand</code> API permission for this ledger to run all PartiQL
     * commands (hence, <code>ALLOW_ALL</code>) on any tables in the specified ledger.
     * This mode disregards any table-level or command-level IAM permissions policies
     * that you create for the ledger.</p> </li> <li> <p> <code>STANDARD</code>:
     * (<i>Recommended</i>) A permissions mode that enables access control with finer
     * granularity for ledgers, tables, and PartiQL commands.</p> <p>By default, this
     * mode denies all user requests to run any PartiQL commands on any tables in this
     * ledger. To allow PartiQL commands to run, you must create IAM permissions
     * policies for specific table resources and PartiQL actions, in addition to the
     * <code>SendCommand</code> API permission for the ledger. For information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-standard-mode.html">Getting
     * started with the standard permissions mode</a> in the <i>Amazon QLDB Developer
     * Guide</i>.</p> </li> </ul>  <p>We strongly recommend using the
     * <code>STANDARD</code> permissions mode to maximize the security of your ledger
     * data.</p> 
     */
    inline const PermissionsMode& GetPermissionsMode() const{ return m_permissionsMode; }

    /**
     * <p>The permissions mode to assign to the ledger that you want to create. This
     * parameter can have one of the following values:</p> <ul> <li> <p>
     * <code>ALLOW_ALL</code>: A legacy permissions mode that enables access control
     * with API-level granularity for ledgers.</p> <p>This mode allows users who have
     * the <code>SendCommand</code> API permission for this ledger to run all PartiQL
     * commands (hence, <code>ALLOW_ALL</code>) on any tables in the specified ledger.
     * This mode disregards any table-level or command-level IAM permissions policies
     * that you create for the ledger.</p> </li> <li> <p> <code>STANDARD</code>:
     * (<i>Recommended</i>) A permissions mode that enables access control with finer
     * granularity for ledgers, tables, and PartiQL commands.</p> <p>By default, this
     * mode denies all user requests to run any PartiQL commands on any tables in this
     * ledger. To allow PartiQL commands to run, you must create IAM permissions
     * policies for specific table resources and PartiQL actions, in addition to the
     * <code>SendCommand</code> API permission for the ledger. For information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-standard-mode.html">Getting
     * started with the standard permissions mode</a> in the <i>Amazon QLDB Developer
     * Guide</i>.</p> </li> </ul>  <p>We strongly recommend using the
     * <code>STANDARD</code> permissions mode to maximize the security of your ledger
     * data.</p> 
     */
    inline bool PermissionsModeHasBeenSet() const { return m_permissionsModeHasBeenSet; }

    /**
     * <p>The permissions mode to assign to the ledger that you want to create. This
     * parameter can have one of the following values:</p> <ul> <li> <p>
     * <code>ALLOW_ALL</code>: A legacy permissions mode that enables access control
     * with API-level granularity for ledgers.</p> <p>This mode allows users who have
     * the <code>SendCommand</code> API permission for this ledger to run all PartiQL
     * commands (hence, <code>ALLOW_ALL</code>) on any tables in the specified ledger.
     * This mode disregards any table-level or command-level IAM permissions policies
     * that you create for the ledger.</p> </li> <li> <p> <code>STANDARD</code>:
     * (<i>Recommended</i>) A permissions mode that enables access control with finer
     * granularity for ledgers, tables, and PartiQL commands.</p> <p>By default, this
     * mode denies all user requests to run any PartiQL commands on any tables in this
     * ledger. To allow PartiQL commands to run, you must create IAM permissions
     * policies for specific table resources and PartiQL actions, in addition to the
     * <code>SendCommand</code> API permission for the ledger. For information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-standard-mode.html">Getting
     * started with the standard permissions mode</a> in the <i>Amazon QLDB Developer
     * Guide</i>.</p> </li> </ul>  <p>We strongly recommend using the
     * <code>STANDARD</code> permissions mode to maximize the security of your ledger
     * data.</p> 
     */
    inline void SetPermissionsMode(const PermissionsMode& value) { m_permissionsModeHasBeenSet = true; m_permissionsMode = value; }

    /**
     * <p>The permissions mode to assign to the ledger that you want to create. This
     * parameter can have one of the following values:</p> <ul> <li> <p>
     * <code>ALLOW_ALL</code>: A legacy permissions mode that enables access control
     * with API-level granularity for ledgers.</p> <p>This mode allows users who have
     * the <code>SendCommand</code> API permission for this ledger to run all PartiQL
     * commands (hence, <code>ALLOW_ALL</code>) on any tables in the specified ledger.
     * This mode disregards any table-level or command-level IAM permissions policies
     * that you create for the ledger.</p> </li> <li> <p> <code>STANDARD</code>:
     * (<i>Recommended</i>) A permissions mode that enables access control with finer
     * granularity for ledgers, tables, and PartiQL commands.</p> <p>By default, this
     * mode denies all user requests to run any PartiQL commands on any tables in this
     * ledger. To allow PartiQL commands to run, you must create IAM permissions
     * policies for specific table resources and PartiQL actions, in addition to the
     * <code>SendCommand</code> API permission for the ledger. For information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-standard-mode.html">Getting
     * started with the standard permissions mode</a> in the <i>Amazon QLDB Developer
     * Guide</i>.</p> </li> </ul>  <p>We strongly recommend using the
     * <code>STANDARD</code> permissions mode to maximize the security of your ledger
     * data.</p> 
     */
    inline void SetPermissionsMode(PermissionsMode&& value) { m_permissionsModeHasBeenSet = true; m_permissionsMode = std::move(value); }

    /**
     * <p>The permissions mode to assign to the ledger that you want to create. This
     * parameter can have one of the following values:</p> <ul> <li> <p>
     * <code>ALLOW_ALL</code>: A legacy permissions mode that enables access control
     * with API-level granularity for ledgers.</p> <p>This mode allows users who have
     * the <code>SendCommand</code> API permission for this ledger to run all PartiQL
     * commands (hence, <code>ALLOW_ALL</code>) on any tables in the specified ledger.
     * This mode disregards any table-level or command-level IAM permissions policies
     * that you create for the ledger.</p> </li> <li> <p> <code>STANDARD</code>:
     * (<i>Recommended</i>) A permissions mode that enables access control with finer
     * granularity for ledgers, tables, and PartiQL commands.</p> <p>By default, this
     * mode denies all user requests to run any PartiQL commands on any tables in this
     * ledger. To allow PartiQL commands to run, you must create IAM permissions
     * policies for specific table resources and PartiQL actions, in addition to the
     * <code>SendCommand</code> API permission for the ledger. For information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-standard-mode.html">Getting
     * started with the standard permissions mode</a> in the <i>Amazon QLDB Developer
     * Guide</i>.</p> </li> </ul>  <p>We strongly recommend using the
     * <code>STANDARD</code> permissions mode to maximize the security of your ledger
     * data.</p> 
     */
    inline CreateLedgerRequest& WithPermissionsMode(const PermissionsMode& value) { SetPermissionsMode(value); return *this;}

    /**
     * <p>The permissions mode to assign to the ledger that you want to create. This
     * parameter can have one of the following values:</p> <ul> <li> <p>
     * <code>ALLOW_ALL</code>: A legacy permissions mode that enables access control
     * with API-level granularity for ledgers.</p> <p>This mode allows users who have
     * the <code>SendCommand</code> API permission for this ledger to run all PartiQL
     * commands (hence, <code>ALLOW_ALL</code>) on any tables in the specified ledger.
     * This mode disregards any table-level or command-level IAM permissions policies
     * that you create for the ledger.</p> </li> <li> <p> <code>STANDARD</code>:
     * (<i>Recommended</i>) A permissions mode that enables access control with finer
     * granularity for ledgers, tables, and PartiQL commands.</p> <p>By default, this
     * mode denies all user requests to run any PartiQL commands on any tables in this
     * ledger. To allow PartiQL commands to run, you must create IAM permissions
     * policies for specific table resources and PartiQL actions, in addition to the
     * <code>SendCommand</code> API permission for the ledger. For information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-standard-mode.html">Getting
     * started with the standard permissions mode</a> in the <i>Amazon QLDB Developer
     * Guide</i>.</p> </li> </ul>  <p>We strongly recommend using the
     * <code>STANDARD</code> permissions mode to maximize the security of your ledger
     * data.</p> 
     */
    inline CreateLedgerRequest& WithPermissionsMode(PermissionsMode&& value) { SetPermissionsMode(std::move(value)); return *this;}


    /**
     * <p>The flag that prevents a ledger from being deleted by any user. If not
     * provided on ledger creation, this feature is enabled (<code>true</code>) by
     * default.</p> <p>If deletion protection is enabled, you must first disable it
     * before you can delete the ledger. You can disable it by calling the
     * <code>UpdateLedger</code> operation to set the flag to <code>false</code>.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>The flag that prevents a ledger from being deleted by any user. If not
     * provided on ledger creation, this feature is enabled (<code>true</code>) by
     * default.</p> <p>If deletion protection is enabled, you must first disable it
     * before you can delete the ledger. You can disable it by calling the
     * <code>UpdateLedger</code> operation to set the flag to <code>false</code>.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>The flag that prevents a ledger from being deleted by any user. If not
     * provided on ledger creation, this feature is enabled (<code>true</code>) by
     * default.</p> <p>If deletion protection is enabled, you must first disable it
     * before you can delete the ledger. You can disable it by calling the
     * <code>UpdateLedger</code> operation to set the flag to <code>false</code>.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>The flag that prevents a ledger from being deleted by any user. If not
     * provided on ledger creation, this feature is enabled (<code>true</code>) by
     * default.</p> <p>If deletion protection is enabled, you must first disable it
     * before you can delete the ledger. You can disable it by calling the
     * <code>UpdateLedger</code> operation to set the flag to <code>false</code>.</p>
     */
    inline CreateLedgerRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>The key in Key Management Service (KMS) to use for encryption of data at rest
     * in the ledger. For more information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/encryption-at-rest.html">Encryption
     * at rest</a> in the <i>Amazon QLDB Developer Guide</i>.</p> <p>Use one of the
     * following options to specify this parameter:</p> <ul> <li> <p>
     * <code>AWS_OWNED_KMS_KEY</code>: Use an KMS key that is owned and managed by
     * Amazon Web Services on your behalf.</p> </li> <li> <p> <b>Undefined</b>: By
     * default, use an Amazon Web Services owned KMS key.</p> </li> <li> <p> <b>A valid
     * symmetric customer managed KMS key</b>: Use the specified KMS key in your
     * account that you create, own, and manage.</p> <p>Amazon QLDB does not support
     * asymmetric keys. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> </ul> <p>To specify a customer managed KMS key, you can use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }

    /**
     * <p>The key in Key Management Service (KMS) to use for encryption of data at rest
     * in the ledger. For more information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/encryption-at-rest.html">Encryption
     * at rest</a> in the <i>Amazon QLDB Developer Guide</i>.</p> <p>Use one of the
     * following options to specify this parameter:</p> <ul> <li> <p>
     * <code>AWS_OWNED_KMS_KEY</code>: Use an KMS key that is owned and managed by
     * Amazon Web Services on your behalf.</p> </li> <li> <p> <b>Undefined</b>: By
     * default, use an Amazon Web Services owned KMS key.</p> </li> <li> <p> <b>A valid
     * symmetric customer managed KMS key</b>: Use the specified KMS key in your
     * account that you create, own, and manage.</p> <p>Amazon QLDB does not support
     * asymmetric keys. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> </ul> <p>To specify a customer managed KMS key, you can use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>
     */
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }

    /**
     * <p>The key in Key Management Service (KMS) to use for encryption of data at rest
     * in the ledger. For more information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/encryption-at-rest.html">Encryption
     * at rest</a> in the <i>Amazon QLDB Developer Guide</i>.</p> <p>Use one of the
     * following options to specify this parameter:</p> <ul> <li> <p>
     * <code>AWS_OWNED_KMS_KEY</code>: Use an KMS key that is owned and managed by
     * Amazon Web Services on your behalf.</p> </li> <li> <p> <b>Undefined</b>: By
     * default, use an Amazon Web Services owned KMS key.</p> </li> <li> <p> <b>A valid
     * symmetric customer managed KMS key</b>: Use the specified KMS key in your
     * account that you create, own, and manage.</p> <p>Amazon QLDB does not support
     * asymmetric keys. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> </ul> <p>To specify a customer managed KMS key, you can use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }

    /**
     * <p>The key in Key Management Service (KMS) to use for encryption of data at rest
     * in the ledger. For more information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/encryption-at-rest.html">Encryption
     * at rest</a> in the <i>Amazon QLDB Developer Guide</i>.</p> <p>Use one of the
     * following options to specify this parameter:</p> <ul> <li> <p>
     * <code>AWS_OWNED_KMS_KEY</code>: Use an KMS key that is owned and managed by
     * Amazon Web Services on your behalf.</p> </li> <li> <p> <b>Undefined</b>: By
     * default, use an Amazon Web Services owned KMS key.</p> </li> <li> <p> <b>A valid
     * symmetric customer managed KMS key</b>: Use the specified KMS key in your
     * account that you create, own, and manage.</p> <p>Amazon QLDB does not support
     * asymmetric keys. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> </ul> <p>To specify a customer managed KMS key, you can use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }

    /**
     * <p>The key in Key Management Service (KMS) to use for encryption of data at rest
     * in the ledger. For more information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/encryption-at-rest.html">Encryption
     * at rest</a> in the <i>Amazon QLDB Developer Guide</i>.</p> <p>Use one of the
     * following options to specify this parameter:</p> <ul> <li> <p>
     * <code>AWS_OWNED_KMS_KEY</code>: Use an KMS key that is owned and managed by
     * Amazon Web Services on your behalf.</p> </li> <li> <p> <b>Undefined</b>: By
     * default, use an Amazon Web Services owned KMS key.</p> </li> <li> <p> <b>A valid
     * symmetric customer managed KMS key</b>: Use the specified KMS key in your
     * account that you create, own, and manage.</p> <p>Amazon QLDB does not support
     * asymmetric keys. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> </ul> <p>To specify a customer managed KMS key, you can use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }

    /**
     * <p>The key in Key Management Service (KMS) to use for encryption of data at rest
     * in the ledger. For more information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/encryption-at-rest.html">Encryption
     * at rest</a> in the <i>Amazon QLDB Developer Guide</i>.</p> <p>Use one of the
     * following options to specify this parameter:</p> <ul> <li> <p>
     * <code>AWS_OWNED_KMS_KEY</code>: Use an KMS key that is owned and managed by
     * Amazon Web Services on your behalf.</p> </li> <li> <p> <b>Undefined</b>: By
     * default, use an Amazon Web Services owned KMS key.</p> </li> <li> <p> <b>A valid
     * symmetric customer managed KMS key</b>: Use the specified KMS key in your
     * account that you create, own, and manage.</p> <p>Amazon QLDB does not support
     * asymmetric keys. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> </ul> <p>To specify a customer managed KMS key, you can use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CreateLedgerRequest& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}

    /**
     * <p>The key in Key Management Service (KMS) to use for encryption of data at rest
     * in the ledger. For more information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/encryption-at-rest.html">Encryption
     * at rest</a> in the <i>Amazon QLDB Developer Guide</i>.</p> <p>Use one of the
     * following options to specify this parameter:</p> <ul> <li> <p>
     * <code>AWS_OWNED_KMS_KEY</code>: Use an KMS key that is owned and managed by
     * Amazon Web Services on your behalf.</p> </li> <li> <p> <b>Undefined</b>: By
     * default, use an Amazon Web Services owned KMS key.</p> </li> <li> <p> <b>A valid
     * symmetric customer managed KMS key</b>: Use the specified KMS key in your
     * account that you create, own, and manage.</p> <p>Amazon QLDB does not support
     * asymmetric keys. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> </ul> <p>To specify a customer managed KMS key, you can use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CreateLedgerRequest& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}

    /**
     * <p>The key in Key Management Service (KMS) to use for encryption of data at rest
     * in the ledger. For more information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/encryption-at-rest.html">Encryption
     * at rest</a> in the <i>Amazon QLDB Developer Guide</i>.</p> <p>Use one of the
     * following options to specify this parameter:</p> <ul> <li> <p>
     * <code>AWS_OWNED_KMS_KEY</code>: Use an KMS key that is owned and managed by
     * Amazon Web Services on your behalf.</p> </li> <li> <p> <b>Undefined</b>: By
     * default, use an Amazon Web Services owned KMS key.</p> </li> <li> <p> <b>A valid
     * symmetric customer managed KMS key</b>: Use the specified KMS key in your
     * account that you create, own, and manage.</p> <p>Amazon QLDB does not support
     * asymmetric keys. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> </ul> <p>To specify a customer managed KMS key, you can use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CreateLedgerRequest& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    PermissionsMode m_permissionsMode;
    bool m_permissionsModeHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
