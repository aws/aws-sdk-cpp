/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The data product revision.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DataProductRevision">AWS
   * API Reference</a></p>
   */
  class DataProductRevision
  {
  public:
    AWS_DATAZONE_API DataProductRevision();
    AWS_DATAZONE_API DataProductRevision(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataProductRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp at which the data product revision was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline DataProductRevision& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DataProductRevision& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the data product revision.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline DataProductRevision& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline DataProductRevision& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline DataProductRevision& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where the data product revision lives.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline DataProductRevision& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline DataProductRevision& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline DataProductRevision& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data product revision.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DataProductRevision& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DataProductRevision& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DataProductRevision& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data product revision.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }
    inline DataProductRevision& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline DataProductRevision& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline DataProductRevision& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
