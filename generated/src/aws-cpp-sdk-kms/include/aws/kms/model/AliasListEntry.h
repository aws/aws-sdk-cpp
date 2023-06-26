/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace KMS
{
namespace Model
{

  /**
   * <p>Contains information about an alias.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/AliasListEntry">AWS
   * API Reference</a></p>
   */
  class AliasListEntry
  {
  public:
    AWS_KMS_API AliasListEntry();
    AWS_KMS_API AliasListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API AliasListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }

    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }

    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }

    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline AliasListEntry& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline AliasListEntry& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}

    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline AliasListEntry& WithAliasName(const char* value) { SetAliasName(value); return *this;}


    /**
     * <p>String that contains the key ARN.</p>
     */
    inline const Aws::String& GetAliasArn() const{ return m_aliasArn; }

    /**
     * <p>String that contains the key ARN.</p>
     */
    inline bool AliasArnHasBeenSet() const { return m_aliasArnHasBeenSet; }

    /**
     * <p>String that contains the key ARN.</p>
     */
    inline void SetAliasArn(const Aws::String& value) { m_aliasArnHasBeenSet = true; m_aliasArn = value; }

    /**
     * <p>String that contains the key ARN.</p>
     */
    inline void SetAliasArn(Aws::String&& value) { m_aliasArnHasBeenSet = true; m_aliasArn = std::move(value); }

    /**
     * <p>String that contains the key ARN.</p>
     */
    inline void SetAliasArn(const char* value) { m_aliasArnHasBeenSet = true; m_aliasArn.assign(value); }

    /**
     * <p>String that contains the key ARN.</p>
     */
    inline AliasListEntry& WithAliasArn(const Aws::String& value) { SetAliasArn(value); return *this;}

    /**
     * <p>String that contains the key ARN.</p>
     */
    inline AliasListEntry& WithAliasArn(Aws::String&& value) { SetAliasArn(std::move(value)); return *this;}

    /**
     * <p>String that contains the key ARN.</p>
     */
    inline AliasListEntry& WithAliasArn(const char* value) { SetAliasArn(value); return *this;}


    /**
     * <p>String that contains the key identifier of the KMS key associated with the
     * alias.</p>
     */
    inline const Aws::String& GetTargetKeyId() const{ return m_targetKeyId; }

    /**
     * <p>String that contains the key identifier of the KMS key associated with the
     * alias.</p>
     */
    inline bool TargetKeyIdHasBeenSet() const { return m_targetKeyIdHasBeenSet; }

    /**
     * <p>String that contains the key identifier of the KMS key associated with the
     * alias.</p>
     */
    inline void SetTargetKeyId(const Aws::String& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = value; }

    /**
     * <p>String that contains the key identifier of the KMS key associated with the
     * alias.</p>
     */
    inline void SetTargetKeyId(Aws::String&& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = std::move(value); }

    /**
     * <p>String that contains the key identifier of the KMS key associated with the
     * alias.</p>
     */
    inline void SetTargetKeyId(const char* value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId.assign(value); }

    /**
     * <p>String that contains the key identifier of the KMS key associated with the
     * alias.</p>
     */
    inline AliasListEntry& WithTargetKeyId(const Aws::String& value) { SetTargetKeyId(value); return *this;}

    /**
     * <p>String that contains the key identifier of the KMS key associated with the
     * alias.</p>
     */
    inline AliasListEntry& WithTargetKeyId(Aws::String&& value) { SetTargetKeyId(std::move(value)); return *this;}

    /**
     * <p>String that contains the key identifier of the KMS key associated with the
     * alias.</p>
     */
    inline AliasListEntry& WithTargetKeyId(const char* value) { SetTargetKeyId(value); return *this;}


    /**
     * <p>Date and time that the alias was most recently created in the account and
     * Region. Formatted as Unix time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>Date and time that the alias was most recently created in the account and
     * Region. Formatted as Unix time.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>Date and time that the alias was most recently created in the account and
     * Region. Formatted as Unix time.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>Date and time that the alias was most recently created in the account and
     * Region. Formatted as Unix time.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>Date and time that the alias was most recently created in the account and
     * Region. Formatted as Unix time.</p>
     */
    inline AliasListEntry& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>Date and time that the alias was most recently created in the account and
     * Region. Formatted as Unix time.</p>
     */
    inline AliasListEntry& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>Date and time that the alias was most recently associated with a KMS key in
     * the account and Region. Formatted as Unix time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>Date and time that the alias was most recently associated with a KMS key in
     * the account and Region. Formatted as Unix time.</p>
     */
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }

    /**
     * <p>Date and time that the alias was most recently associated with a KMS key in
     * the account and Region. Formatted as Unix time.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }

    /**
     * <p>Date and time that the alias was most recently associated with a KMS key in
     * the account and Region. Formatted as Unix time.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }

    /**
     * <p>Date and time that the alias was most recently associated with a KMS key in
     * the account and Region. Formatted as Unix time.</p>
     */
    inline AliasListEntry& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>Date and time that the alias was most recently associated with a KMS key in
     * the account and Region. Formatted as Unix time.</p>
     */
    inline AliasListEntry& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}

  private:

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;

    Aws::String m_aliasArn;
    bool m_aliasArnHasBeenSet = false;

    Aws::String m_targetKeyId;
    bool m_targetKeyIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
