/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AssetScope.h>
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
    AWS_DATAZONE_API SubscribedAssetListing() = default;
    AWS_DATAZONE_API SubscribedAssetListing(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscribedAssetListing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The asset scope of the subscribed asset listing.</p>
     */
    inline const AssetScope& GetAssetScope() const { return m_assetScope; }
    inline bool AssetScopeHasBeenSet() const { return m_assetScopeHasBeenSet; }
    template<typename AssetScopeT = AssetScope>
    void SetAssetScope(AssetScopeT&& value) { m_assetScopeHasBeenSet = true; m_assetScope = std::forward<AssetScopeT>(value); }
    template<typename AssetScopeT = AssetScope>
    SubscribedAssetListing& WithAssetScope(AssetScopeT&& value) { SetAssetScope(std::forward<AssetScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    SubscribedAssetListing& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetEntityRevision() const { return m_entityRevision; }
    inline bool EntityRevisionHasBeenSet() const { return m_entityRevisionHasBeenSet; }
    template<typename EntityRevisionT = Aws::String>
    void SetEntityRevision(EntityRevisionT&& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = std::forward<EntityRevisionT>(value); }
    template<typename EntityRevisionT = Aws::String>
    SubscribedAssetListing& WithEntityRevision(EntityRevisionT&& value) { SetEntityRevision(std::forward<EntityRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetEntityType() const { return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    template<typename EntityTypeT = Aws::String>
    void SetEntityType(EntityTypeT&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::forward<EntityTypeT>(value); }
    template<typename EntityTypeT = Aws::String>
    SubscribedAssetListing& WithEntityType(EntityTypeT&& value) { SetEntityType(std::forward<EntityTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forms attached to the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetForms() const { return m_forms; }
    inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }
    template<typename FormsT = Aws::String>
    void SetForms(FormsT&& value) { m_formsHasBeenSet = true; m_forms = std::forward<FormsT>(value); }
    template<typename FormsT = Aws::String>
    SubscribedAssetListing& WithForms(FormsT&& value) { SetForms(std::forward<FormsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms attached to the published asset for which the subscription
     * grant is created.</p>
     */
    inline const Aws::Vector<DetailedGlossaryTerm>& GetGlossaryTerms() const { return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    template<typename GlossaryTermsT = Aws::Vector<DetailedGlossaryTerm>>
    void SetGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::forward<GlossaryTermsT>(value); }
    template<typename GlossaryTermsT = Aws::Vector<DetailedGlossaryTerm>>
    SubscribedAssetListing& WithGlossaryTerms(GlossaryTermsT&& value) { SetGlossaryTerms(std::forward<GlossaryTermsT>(value)); return *this;}
    template<typename GlossaryTermsT = DetailedGlossaryTerm>
    SubscribedAssetListing& AddGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value)); return *this; }
    ///@}
  private:

    AssetScope m_assetScope;
    bool m_assetScopeHasBeenSet = false;

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
