/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The details of the published asset for which the subscription grant is
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscribedAssetListing">AWS
   * API Reference</a></p>
   */
  class SubscribedAssetListing
  {
  public:
    AWS_DATAZONE_API SubscribedAssetListing();
    AWS_DATAZONE_API SubscribedAssetListing(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscribedAssetListing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The identifier of the published asset for which the subscription grant is
     * created.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The identifier of the published asset for which the subscription grant is
     * created.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The identifier of the published asset for which the subscription grant is
     * created.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The identifier of the published asset for which the subscription grant is
     * created.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The identifier of the published asset for which the subscription grant is
     * created.</p>
     */
    inline SubscribedAssetListing& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The identifier of the published asset for which the subscription grant is
     * created.</p>
     */
    inline SubscribedAssetListing& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the published asset for which the subscription grant is
     * created.</p>
     */
    inline SubscribedAssetListing& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The revision of the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetEntityRevision() const{ return m_entityRevision; }

    /**
     * <p>The revision of the published asset for which the subscription grant is
     * created.</p>
     */
    inline bool EntityRevisionHasBeenSet() const { return m_entityRevisionHasBeenSet; }

    /**
     * <p>The revision of the published asset for which the subscription grant is
     * created.</p>
     */
    inline void SetEntityRevision(const Aws::String& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = value; }

    /**
     * <p>The revision of the published asset for which the subscription grant is
     * created.</p>
     */
    inline void SetEntityRevision(Aws::String&& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = std::move(value); }

    /**
     * <p>The revision of the published asset for which the subscription grant is
     * created.</p>
     */
    inline void SetEntityRevision(const char* value) { m_entityRevisionHasBeenSet = true; m_entityRevision.assign(value); }

    /**
     * <p>The revision of the published asset for which the subscription grant is
     * created.</p>
     */
    inline SubscribedAssetListing& WithEntityRevision(const Aws::String& value) { SetEntityRevision(value); return *this;}

    /**
     * <p>The revision of the published asset for which the subscription grant is
     * created.</p>
     */
    inline SubscribedAssetListing& WithEntityRevision(Aws::String&& value) { SetEntityRevision(std::move(value)); return *this;}

    /**
     * <p>The revision of the published asset for which the subscription grant is
     * created.</p>
     */
    inline SubscribedAssetListing& WithEntityRevision(const char* value) { SetEntityRevision(value); return *this;}


    /**
     * <p>The type of the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetEntityType() const{ return m_entityType; }

    /**
     * <p>The type of the published asset for which the subscription grant is
     * created.</p>
     */
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }

    /**
     * <p>The type of the published asset for which the subscription grant is
     * created.</p>
     */
    inline void SetEntityType(const Aws::String& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }

    /**
     * <p>The type of the published asset for which the subscription grant is
     * created.</p>
     */
    inline void SetEntityType(Aws::String&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }

    /**
     * <p>The type of the published asset for which the subscription grant is
     * created.</p>
     */
    inline void SetEntityType(const char* value) { m_entityTypeHasBeenSet = true; m_entityType.assign(value); }

    /**
     * <p>The type of the published asset for which the subscription grant is
     * created.</p>
     */
    inline SubscribedAssetListing& WithEntityType(const Aws::String& value) { SetEntityType(value); return *this;}

    /**
     * <p>The type of the published asset for which the subscription grant is
     * created.</p>
     */
    inline SubscribedAssetListing& WithEntityType(Aws::String&& value) { SetEntityType(std::move(value)); return *this;}

    /**
     * <p>The type of the published asset for which the subscription grant is
     * created.</p>
     */
    inline SubscribedAssetListing& WithEntityType(const char* value) { SetEntityType(value); return *this;}


    /**
     * <p>The forms attached to the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetForms() const{ return m_forms; }

    /**
     * <p>The forms attached to the published asset for which the subscription grant is
     * created.</p>
     */
    inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }

    /**
     * <p>The forms attached to the published asset for which the subscription grant is
     * created.</p>
     */
    inline void SetForms(const Aws::String& value) { m_formsHasBeenSet = true; m_forms = value; }

    /**
     * <p>The forms attached to the published asset for which the subscription grant is
     * created.</p>
     */
    inline void SetForms(Aws::String&& value) { m_formsHasBeenSet = true; m_forms = std::move(value); }

    /**
     * <p>The forms attached to the published asset for which the subscription grant is
     * created.</p>
     */
    inline void SetForms(const char* value) { m_formsHasBeenSet = true; m_forms.assign(value); }

    /**
     * <p>The forms attached to the published asset for which the subscription grant is
     * created.</p>
     */
    inline SubscribedAssetListing& WithForms(const Aws::String& value) { SetForms(value); return *this;}

    /**
     * <p>The forms attached to the published asset for which the subscription grant is
     * created.</p>
     */
    inline SubscribedAssetListing& WithForms(Aws::String&& value) { SetForms(std::move(value)); return *this;}

    /**
     * <p>The forms attached to the published asset for which the subscription grant is
     * created.</p>
     */
    inline SubscribedAssetListing& WithForms(const char* value) { SetForms(value); return *this;}


    /**
     * <p>The glossary terms attached to the published asset for which the subscription
     * grant is created.</p>
     */
    inline const Aws::Vector<DetailedGlossaryTerm>& GetGlossaryTerms() const{ return m_glossaryTerms; }

    /**
     * <p>The glossary terms attached to the published asset for which the subscription
     * grant is created.</p>
     */
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }

    /**
     * <p>The glossary terms attached to the published asset for which the subscription
     * grant is created.</p>
     */
    inline void SetGlossaryTerms(const Aws::Vector<DetailedGlossaryTerm>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }

    /**
     * <p>The glossary terms attached to the published asset for which the subscription
     * grant is created.</p>
     */
    inline void SetGlossaryTerms(Aws::Vector<DetailedGlossaryTerm>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }

    /**
     * <p>The glossary terms attached to the published asset for which the subscription
     * grant is created.</p>
     */
    inline SubscribedAssetListing& WithGlossaryTerms(const Aws::Vector<DetailedGlossaryTerm>& value) { SetGlossaryTerms(value); return *this;}

    /**
     * <p>The glossary terms attached to the published asset for which the subscription
     * grant is created.</p>
     */
    inline SubscribedAssetListing& WithGlossaryTerms(Aws::Vector<DetailedGlossaryTerm>&& value) { SetGlossaryTerms(std::move(value)); return *this;}

    /**
     * <p>The glossary terms attached to the published asset for which the subscription
     * grant is created.</p>
     */
    inline SubscribedAssetListing& AddGlossaryTerms(const DetailedGlossaryTerm& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }

    /**
     * <p>The glossary terms attached to the published asset for which the subscription
     * grant is created.</p>
     */
    inline SubscribedAssetListing& AddGlossaryTerms(DetailedGlossaryTerm&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_entityRevision;
    bool m_entityRevisionHasBeenSet = false;

    Aws::String m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::String m_forms;
    bool m_formsHasBeenSet = false;

    Aws::Vector<DetailedGlossaryTerm> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
