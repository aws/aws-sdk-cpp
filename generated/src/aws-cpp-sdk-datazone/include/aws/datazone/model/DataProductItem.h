/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DataProductItemType.h>
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
   * <p>The data product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DataProductItem">AWS
   * API Reference</a></p>
   */
  class DataProductItem
  {
  public:
    AWS_DATAZONE_API DataProductItem();
    AWS_DATAZONE_API DataProductItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataProductItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The glossary terms of the data product.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }
    inline DataProductItem& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}
    inline DataProductItem& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline DataProductItem& AddGlossaryTerms(const Aws::String& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    inline DataProductItem& AddGlossaryTerms(Aws::String&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }
    inline DataProductItem& AddGlossaryTerms(const char* value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the data product.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline DataProductItem& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline DataProductItem& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline DataProductItem& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the data product.</p>
     */
    inline const DataProductItemType& GetItemType() const{ return m_itemType; }
    inline bool ItemTypeHasBeenSet() const { return m_itemTypeHasBeenSet; }
    inline void SetItemType(const DataProductItemType& value) { m_itemTypeHasBeenSet = true; m_itemType = value; }
    inline void SetItemType(DataProductItemType&& value) { m_itemTypeHasBeenSet = true; m_itemType = std::move(value); }
    inline DataProductItem& WithItemType(const DataProductItemType& value) { SetItemType(value); return *this;}
    inline DataProductItem& WithItemType(DataProductItemType&& value) { SetItemType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the data product.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }
    inline DataProductItem& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline DataProductItem& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline DataProductItem& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    DataProductItemType m_itemType;
    bool m_itemTypeHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
