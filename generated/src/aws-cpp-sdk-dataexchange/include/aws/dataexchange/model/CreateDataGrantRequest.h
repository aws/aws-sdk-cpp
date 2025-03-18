/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/DataExchangeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/GrantDistributionScope.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace DataExchange
{
namespace Model
{

  /**
   */
  class CreateDataGrantRequest : public DataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API CreateDataGrantRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataGrant"; }

    AWS_DATAEXCHANGE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the data grant.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDataGrantRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution scope of the data grant.</p>
     */
    inline GrantDistributionScope GetGrantDistributionScope() const { return m_grantDistributionScope; }
    inline bool GrantDistributionScopeHasBeenSet() const { return m_grantDistributionScopeHasBeenSet; }
    inline void SetGrantDistributionScope(GrantDistributionScope value) { m_grantDistributionScopeHasBeenSet = true; m_grantDistributionScope = value; }
    inline CreateDataGrantRequest& WithGrantDistributionScope(GrantDistributionScope value) { SetGrantDistributionScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the data grant receiver.</p>
     */
    inline const Aws::String& GetReceiverPrincipal() const { return m_receiverPrincipal; }
    inline bool ReceiverPrincipalHasBeenSet() const { return m_receiverPrincipalHasBeenSet; }
    template<typename ReceiverPrincipalT = Aws::String>
    void SetReceiverPrincipal(ReceiverPrincipalT&& value) { m_receiverPrincipalHasBeenSet = true; m_receiverPrincipal = std::forward<ReceiverPrincipalT>(value); }
    template<typename ReceiverPrincipalT = Aws::String>
    CreateDataGrantRequest& WithReceiverPrincipal(ReceiverPrincipalT&& value) { SetReceiverPrincipal(std::forward<ReceiverPrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data set used to create the data grant.</p>
     */
    inline const Aws::String& GetSourceDataSetId() const { return m_sourceDataSetId; }
    inline bool SourceDataSetIdHasBeenSet() const { return m_sourceDataSetIdHasBeenSet; }
    template<typename SourceDataSetIdT = Aws::String>
    void SetSourceDataSetId(SourceDataSetIdT&& value) { m_sourceDataSetIdHasBeenSet = true; m_sourceDataSetId = std::forward<SourceDataSetIdT>(value); }
    template<typename SourceDataSetIdT = Aws::String>
    CreateDataGrantRequest& WithSourceDataSetId(SourceDataSetIdT&& value) { SetSourceDataSetId(std::forward<SourceDataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when access to the associated data set ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEndsAt() const { return m_endsAt; }
    inline bool EndsAtHasBeenSet() const { return m_endsAtHasBeenSet; }
    template<typename EndsAtT = Aws::Utils::DateTime>
    void SetEndsAt(EndsAtT&& value) { m_endsAtHasBeenSet = true; m_endsAt = std::forward<EndsAtT>(value); }
    template<typename EndsAtT = Aws::Utils::DateTime>
    CreateDataGrantRequest& WithEndsAt(EndsAtT&& value) { SetEndsAt(std::forward<EndsAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data grant.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateDataGrantRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to add to the data grant. A tag is a key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDataGrantRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDataGrantRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    GrantDistributionScope m_grantDistributionScope{GrantDistributionScope::NOT_SET};
    bool m_grantDistributionScopeHasBeenSet = false;

    Aws::String m_receiverPrincipal;
    bool m_receiverPrincipalHasBeenSet = false;

    Aws::String m_sourceDataSetId;
    bool m_sourceDataSetIdHasBeenSet = false;

    Aws::Utils::DateTime m_endsAt{};
    bool m_endsAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
