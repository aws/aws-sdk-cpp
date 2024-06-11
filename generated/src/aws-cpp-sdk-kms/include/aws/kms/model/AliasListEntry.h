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


    ///@{
    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }
    inline AliasListEntry& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}
    inline AliasListEntry& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}
    inline AliasListEntry& WithAliasName(const char* value) { SetAliasName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>String that contains the key ARN.</p>
     */
    inline const Aws::String& GetAliasArn() const{ return m_aliasArn; }
    inline bool AliasArnHasBeenSet() const { return m_aliasArnHasBeenSet; }
    inline void SetAliasArn(const Aws::String& value) { m_aliasArnHasBeenSet = true; m_aliasArn = value; }
    inline void SetAliasArn(Aws::String&& value) { m_aliasArnHasBeenSet = true; m_aliasArn = std::move(value); }
    inline void SetAliasArn(const char* value) { m_aliasArnHasBeenSet = true; m_aliasArn.assign(value); }
    inline AliasListEntry& WithAliasArn(const Aws::String& value) { SetAliasArn(value); return *this;}
    inline AliasListEntry& WithAliasArn(Aws::String&& value) { SetAliasArn(std::move(value)); return *this;}
    inline AliasListEntry& WithAliasArn(const char* value) { SetAliasArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>String that contains the key identifier of the KMS key associated with the
     * alias.</p>
     */
    inline const Aws::String& GetTargetKeyId() const{ return m_targetKeyId; }
    inline bool TargetKeyIdHasBeenSet() const { return m_targetKeyIdHasBeenSet; }
    inline void SetTargetKeyId(const Aws::String& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = value; }
    inline void SetTargetKeyId(Aws::String&& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = std::move(value); }
    inline void SetTargetKeyId(const char* value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId.assign(value); }
    inline AliasListEntry& WithTargetKeyId(const Aws::String& value) { SetTargetKeyId(value); return *this;}
    inline AliasListEntry& WithTargetKeyId(Aws::String&& value) { SetTargetKeyId(std::move(value)); return *this;}
    inline AliasListEntry& WithTargetKeyId(const char* value) { SetTargetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time that the alias was most recently created in the account and
     * Region. Formatted as Unix time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline AliasListEntry& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline AliasListEntry& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time that the alias was most recently associated with a KMS key in
     * the account and Region. Formatted as Unix time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }
    inline AliasListEntry& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline AliasListEntry& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}
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
