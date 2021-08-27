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
  class AWS_QLDB_API CreateLedgerRequest : public QLDBRequest
  {
  public:
    CreateLedgerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLedger"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of your ledgers in the current AWS Region.</p> <p>Naming constraints for
     * ledger names are defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of your ledgers in the current AWS Region.</p> <p>Naming constraints for
     * ledger names are defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of your ledgers in the current AWS Region.</p> <p>Naming constraints for
     * ledger names are defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of your ledgers in the current AWS Region.</p> <p>Naming constraints for
     * ledger names are defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of your ledgers in the current AWS Region.</p> <p>Naming constraints for
     * ledger names are defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of your ledgers in the current AWS Region.</p> <p>Naming constraints for
     * ledger names are defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline CreateLedgerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of your ledgers in the current AWS Region.</p> <p>Naming constraints for
     * ledger names are defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline CreateLedgerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ledger that you want to create. The name must be unique among
     * all of your ledgers in the current AWS Region.</p> <p>Naming constraints for
     * ledger names are defined in <a
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
     * <p>The permissions mode to assign to the ledger that you want to create.</p>
     */
    inline const PermissionsMode& GetPermissionsMode() const{ return m_permissionsMode; }

    /**
     * <p>The permissions mode to assign to the ledger that you want to create.</p>
     */
    inline bool PermissionsModeHasBeenSet() const { return m_permissionsModeHasBeenSet; }

    /**
     * <p>The permissions mode to assign to the ledger that you want to create.</p>
     */
    inline void SetPermissionsMode(const PermissionsMode& value) { m_permissionsModeHasBeenSet = true; m_permissionsMode = value; }

    /**
     * <p>The permissions mode to assign to the ledger that you want to create.</p>
     */
    inline void SetPermissionsMode(PermissionsMode&& value) { m_permissionsModeHasBeenSet = true; m_permissionsMode = std::move(value); }

    /**
     * <p>The permissions mode to assign to the ledger that you want to create.</p>
     */
    inline CreateLedgerRequest& WithPermissionsMode(const PermissionsMode& value) { SetPermissionsMode(value); return *this;}

    /**
     * <p>The permissions mode to assign to the ledger that you want to create.</p>
     */
    inline CreateLedgerRequest& WithPermissionsMode(PermissionsMode&& value) { SetPermissionsMode(std::move(value)); return *this;}


    /**
     * <p>The flag that prevents a ledger from being deleted by any user. If not
     * provided on ledger creation, this feature is enabled (<code>true</code>) by
     * default.</p> <p>If deletion protection is enabled, you must first disable it
     * before you can delete the ledger using the QLDB API or the AWS Command Line
     * Interface (AWS CLI). You can disable it by calling the <code>UpdateLedger</code>
     * operation to set the flag to <code>false</code>. The QLDB console disables
     * deletion protection for you when you use it to delete a ledger.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>The flag that prevents a ledger from being deleted by any user. If not
     * provided on ledger creation, this feature is enabled (<code>true</code>) by
     * default.</p> <p>If deletion protection is enabled, you must first disable it
     * before you can delete the ledger using the QLDB API or the AWS Command Line
     * Interface (AWS CLI). You can disable it by calling the <code>UpdateLedger</code>
     * operation to set the flag to <code>false</code>. The QLDB console disables
     * deletion protection for you when you use it to delete a ledger.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>The flag that prevents a ledger from being deleted by any user. If not
     * provided on ledger creation, this feature is enabled (<code>true</code>) by
     * default.</p> <p>If deletion protection is enabled, you must first disable it
     * before you can delete the ledger using the QLDB API or the AWS Command Line
     * Interface (AWS CLI). You can disable it by calling the <code>UpdateLedger</code>
     * operation to set the flag to <code>false</code>. The QLDB console disables
     * deletion protection for you when you use it to delete a ledger.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>The flag that prevents a ledger from being deleted by any user. If not
     * provided on ledger creation, this feature is enabled (<code>true</code>) by
     * default.</p> <p>If deletion protection is enabled, you must first disable it
     * before you can delete the ledger using the QLDB API or the AWS Command Line
     * Interface (AWS CLI). You can disable it by calling the <code>UpdateLedger</code>
     * operation to set the flag to <code>false</code>. The QLDB console disables
     * deletion protection for you when you use it to delete a ledger.</p>
     */
    inline CreateLedgerRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    PermissionsMode m_permissionsMode;
    bool m_permissionsModeHasBeenSet;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
