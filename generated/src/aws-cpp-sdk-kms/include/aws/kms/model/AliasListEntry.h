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
    AWS_KMS_API AliasListEntry() = default;
    AWS_KMS_API AliasListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API AliasListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline const Aws::String& GetAliasName() const { return m_aliasName; }
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
    template<typename AliasNameT = Aws::String>
    void SetAliasName(AliasNameT&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::forward<AliasNameT>(value); }
    template<typename AliasNameT = Aws::String>
    AliasListEntry& WithAliasName(AliasNameT&& value) { SetAliasName(std::forward<AliasNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>String that contains the key ARN.</p>
     */
    inline const Aws::String& GetAliasArn() const { return m_aliasArn; }
    inline bool AliasArnHasBeenSet() const { return m_aliasArnHasBeenSet; }
    template<typename AliasArnT = Aws::String>
    void SetAliasArn(AliasArnT&& value) { m_aliasArnHasBeenSet = true; m_aliasArn = std::forward<AliasArnT>(value); }
    template<typename AliasArnT = Aws::String>
    AliasListEntry& WithAliasArn(AliasArnT&& value) { SetAliasArn(std::forward<AliasArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>String that contains the key identifier of the KMS key associated with the
     * alias.</p>
     */
    inline const Aws::String& GetTargetKeyId() const { return m_targetKeyId; }
    inline bool TargetKeyIdHasBeenSet() const { return m_targetKeyIdHasBeenSet; }
    template<typename TargetKeyIdT = Aws::String>
    void SetTargetKeyId(TargetKeyIdT&& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = std::forward<TargetKeyIdT>(value); }
    template<typename TargetKeyIdT = Aws::String>
    AliasListEntry& WithTargetKeyId(TargetKeyIdT&& value) { SetTargetKeyId(std::forward<TargetKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time that the alias was most recently created in the account and
     * Region. Formatted as Unix time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    AliasListEntry& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time that the alias was most recently associated with a KMS key in
     * the account and Region. Formatted as Unix time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    AliasListEntry& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;

    Aws::String m_aliasArn;
    bool m_aliasArnHasBeenSet = false;

    Aws::String m_targetKeyId;
    bool m_targetKeyIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
