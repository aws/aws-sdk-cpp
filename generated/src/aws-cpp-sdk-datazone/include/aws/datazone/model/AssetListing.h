/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/DetailedGlossaryTerm.h>
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
   * <p>An asset published in an Amazon DataZone catalog.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetListing">AWS
   * API Reference</a></p>
   */
  class AssetListing
  {
  public:
    AWS_DATAZONE_API AssetListing();
    AWS_DATAZONE_API AssetListing(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetListing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline AssetListing& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline AssetListing& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline AssetListing& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The revision of an asset published in an Amazon DataZone catalog. </p>
     */
    inline const Aws::String& GetAssetRevision() const{ return m_assetRevision; }

    /**
     * <p>The revision of an asset published in an Amazon DataZone catalog. </p>
     */
    inline bool AssetRevisionHasBeenSet() const { return m_assetRevisionHasBeenSet; }

    /**
     * <p>The revision of an asset published in an Amazon DataZone catalog. </p>
     */
    inline void SetAssetRevision(const Aws::String& value) { m_assetRevisionHasBeenSet = true; m_assetRevision = value; }

    /**
     * <p>The revision of an asset published in an Amazon DataZone catalog. </p>
     */
    inline void SetAssetRevision(Aws::String&& value) { m_assetRevisionHasBeenSet = true; m_assetRevision = std::move(value); }

    /**
     * <p>The revision of an asset published in an Amazon DataZone catalog. </p>
     */
    inline void SetAssetRevision(const char* value) { m_assetRevisionHasBeenSet = true; m_assetRevision.assign(value); }

    /**
     * <p>The revision of an asset published in an Amazon DataZone catalog. </p>
     */
    inline AssetListing& WithAssetRevision(const Aws::String& value) { SetAssetRevision(value); return *this;}

    /**
     * <p>The revision of an asset published in an Amazon DataZone catalog. </p>
     */
    inline AssetListing& WithAssetRevision(Aws::String&& value) { SetAssetRevision(std::move(value)); return *this;}

    /**
     * <p>The revision of an asset published in an Amazon DataZone catalog. </p>
     */
    inline AssetListing& WithAssetRevision(const char* value) { SetAssetRevision(value); return *this;}


    /**
     * <p>The type of an asset published in an Amazon DataZone catalog. </p>
     */
    inline const Aws::String& GetAssetType() const{ return m_assetType; }

    /**
     * <p>The type of an asset published in an Amazon DataZone catalog. </p>
     */
    inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }

    /**
     * <p>The type of an asset published in an Amazon DataZone catalog. </p>
     */
    inline void SetAssetType(const Aws::String& value) { m_assetTypeHasBeenSet = true; m_assetType = value; }

    /**
     * <p>The type of an asset published in an Amazon DataZone catalog. </p>
     */
    inline void SetAssetType(Aws::String&& value) { m_assetTypeHasBeenSet = true; m_assetType = std::move(value); }

    /**
     * <p>The type of an asset published in an Amazon DataZone catalog. </p>
     */
    inline void SetAssetType(const char* value) { m_assetTypeHasBeenSet = true; m_assetType.assign(value); }

    /**
     * <p>The type of an asset published in an Amazon DataZone catalog. </p>
     */
    inline AssetListing& WithAssetType(const Aws::String& value) { SetAssetType(value); return *this;}

    /**
     * <p>The type of an asset published in an Amazon DataZone catalog. </p>
     */
    inline AssetListing& WithAssetType(Aws::String&& value) { SetAssetType(std::move(value)); return *this;}

    /**
     * <p>The type of an asset published in an Amazon DataZone catalog. </p>
     */
    inline AssetListing& WithAssetType(const char* value) { SetAssetType(value); return *this;}


    /**
     * <p>The timestamp of when an asset published in an Amazon DataZone catalog was
     * created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when an asset published in an Amazon DataZone catalog was
     * created. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when an asset published in an Amazon DataZone catalog was
     * created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when an asset published in an Amazon DataZone catalog was
     * created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when an asset published in an Amazon DataZone catalog was
     * created. </p>
     */
    inline AssetListing& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when an asset published in an Amazon DataZone catalog was
     * created. </p>
     */
    inline AssetListing& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The metadata forms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline const Aws::String& GetForms() const{ return m_forms; }

    /**
     * <p>The metadata forms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }

    /**
     * <p>The metadata forms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline void SetForms(const Aws::String& value) { m_formsHasBeenSet = true; m_forms = value; }

    /**
     * <p>The metadata forms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline void SetForms(Aws::String&& value) { m_formsHasBeenSet = true; m_forms = std::move(value); }

    /**
     * <p>The metadata forms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline void SetForms(const char* value) { m_formsHasBeenSet = true; m_forms.assign(value); }

    /**
     * <p>The metadata forms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline AssetListing& WithForms(const Aws::String& value) { SetForms(value); return *this;}

    /**
     * <p>The metadata forms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline AssetListing& WithForms(Aws::String&& value) { SetForms(std::move(value)); return *this;}

    /**
     * <p>The metadata forms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline AssetListing& WithForms(const char* value) { SetForms(value); return *this;}


    /**
     * <p>The glossary terms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline const Aws::Vector<DetailedGlossaryTerm>& GetGlossaryTerms() const{ return m_glossaryTerms; }

    /**
     * <p>The glossary terms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }

    /**
     * <p>The glossary terms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline void SetGlossaryTerms(const Aws::Vector<DetailedGlossaryTerm>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }

    /**
     * <p>The glossary terms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline void SetGlossaryTerms(Aws::Vector<DetailedGlossaryTerm>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }

    /**
     * <p>The glossary terms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline AssetListing& WithGlossaryTerms(const Aws::Vector<DetailedGlossaryTerm>& value) { SetGlossaryTerms(value); return *this;}

    /**
     * <p>The glossary terms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline AssetListing& WithGlossaryTerms(Aws::Vector<DetailedGlossaryTerm>&& value) { SetGlossaryTerms(std::move(value)); return *this;}

    /**
     * <p>The glossary terms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline AssetListing& AddGlossaryTerms(const DetailedGlossaryTerm& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }

    /**
     * <p>The glossary terms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline AssetListing& AddGlossaryTerms(DetailedGlossaryTerm&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of the project where an asset published in an Amazon DataZone
     * catalog exists. </p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }

    /**
     * <p>The identifier of the project where an asset published in an Amazon DataZone
     * catalog exists. </p>
     */
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }

    /**
     * <p>The identifier of the project where an asset published in an Amazon DataZone
     * catalog exists. </p>
     */
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = value; }

    /**
     * <p>The identifier of the project where an asset published in an Amazon DataZone
     * catalog exists. </p>
     */
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::move(value); }

    /**
     * <p>The identifier of the project where an asset published in an Amazon DataZone
     * catalog exists. </p>
     */
    inline void SetOwningProjectId(const char* value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId.assign(value); }

    /**
     * <p>The identifier of the project where an asset published in an Amazon DataZone
     * catalog exists. </p>
     */
    inline AssetListing& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}

    /**
     * <p>The identifier of the project where an asset published in an Amazon DataZone
     * catalog exists. </p>
     */
    inline AssetListing& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the project where an asset published in an Amazon DataZone
     * catalog exists. </p>
     */
    inline AssetListing& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_assetRevision;
    bool m_assetRevisionHasBeenSet = false;

    Aws::String m_assetType;
    bool m_assetTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_forms;
    bool m_formsHasBeenSet = false;

    Aws::Vector<DetailedGlossaryTerm> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::String m_owningProjectId;
    bool m_owningProjectIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
