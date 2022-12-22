/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/ReferenceStatus.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A genome reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ReferenceListItem">AWS
   * API Reference</a></p>
   */
  class ReferenceListItem
  {
  public:
    AWS_OMICS_API ReferenceListItem();
    AWS_OMICS_API ReferenceListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReferenceListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reference's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The reference's ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The reference's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The reference's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The reference's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The reference's ARN.</p>
     */
    inline ReferenceListItem& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The reference's ARN.</p>
     */
    inline ReferenceListItem& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The reference's ARN.</p>
     */
    inline ReferenceListItem& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>When the reference was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the reference was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the reference was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the reference was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the reference was created.</p>
     */
    inline ReferenceListItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the reference was created.</p>
     */
    inline ReferenceListItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The reference's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The reference's description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The reference's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The reference's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The reference's description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The reference's description.</p>
     */
    inline ReferenceListItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The reference's description.</p>
     */
    inline ReferenceListItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The reference's description.</p>
     */
    inline ReferenceListItem& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The reference's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The reference's ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The reference's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The reference's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The reference's ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The reference's ID.</p>
     */
    inline ReferenceListItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The reference's ID.</p>
     */
    inline ReferenceListItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The reference's ID.</p>
     */
    inline ReferenceListItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline const Aws::String& GetMd5() const{ return m_md5; }

    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline bool Md5HasBeenSet() const { return m_md5HasBeenSet; }

    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline void SetMd5(const Aws::String& value) { m_md5HasBeenSet = true; m_md5 = value; }

    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline void SetMd5(Aws::String&& value) { m_md5HasBeenSet = true; m_md5 = std::move(value); }

    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline void SetMd5(const char* value) { m_md5HasBeenSet = true; m_md5.assign(value); }

    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline ReferenceListItem& WithMd5(const Aws::String& value) { SetMd5(value); return *this;}

    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline ReferenceListItem& WithMd5(Aws::String&& value) { SetMd5(std::move(value)); return *this;}

    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline ReferenceListItem& WithMd5(const char* value) { SetMd5(value); return *this;}


    /**
     * <p>The reference's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The reference's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The reference's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The reference's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The reference's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The reference's name.</p>
     */
    inline ReferenceListItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The reference's name.</p>
     */
    inline ReferenceListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The reference's name.</p>
     */
    inline ReferenceListItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The reference's store ID.</p>
     */
    inline const Aws::String& GetReferenceStoreId() const{ return m_referenceStoreId; }

    /**
     * <p>The reference's store ID.</p>
     */
    inline bool ReferenceStoreIdHasBeenSet() const { return m_referenceStoreIdHasBeenSet; }

    /**
     * <p>The reference's store ID.</p>
     */
    inline void SetReferenceStoreId(const Aws::String& value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId = value; }

    /**
     * <p>The reference's store ID.</p>
     */
    inline void SetReferenceStoreId(Aws::String&& value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId = std::move(value); }

    /**
     * <p>The reference's store ID.</p>
     */
    inline void SetReferenceStoreId(const char* value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId.assign(value); }

    /**
     * <p>The reference's store ID.</p>
     */
    inline ReferenceListItem& WithReferenceStoreId(const Aws::String& value) { SetReferenceStoreId(value); return *this;}

    /**
     * <p>The reference's store ID.</p>
     */
    inline ReferenceListItem& WithReferenceStoreId(Aws::String&& value) { SetReferenceStoreId(std::move(value)); return *this;}

    /**
     * <p>The reference's store ID.</p>
     */
    inline ReferenceListItem& WithReferenceStoreId(const char* value) { SetReferenceStoreId(value); return *this;}


    /**
     * <p>The reference's status.</p>
     */
    inline const ReferenceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The reference's status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The reference's status.</p>
     */
    inline void SetStatus(const ReferenceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The reference's status.</p>
     */
    inline void SetStatus(ReferenceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The reference's status.</p>
     */
    inline ReferenceListItem& WithStatus(const ReferenceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The reference's status.</p>
     */
    inline ReferenceListItem& WithStatus(ReferenceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>When the reference was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>When the reference was updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>When the reference was updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>When the reference was updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>When the reference was updated.</p>
     */
    inline ReferenceListItem& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>When the reference was updated.</p>
     */
    inline ReferenceListItem& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_md5;
    bool m_md5HasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_referenceStoreId;
    bool m_referenceStoreIdHasBeenSet = false;

    ReferenceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
