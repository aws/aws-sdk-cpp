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
    AWS_DATAEXCHANGE_API CreateDataGrantRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateDataGrantRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDataGrantRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDataGrantRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution scope of the data grant.</p>
     */
    inline const GrantDistributionScope& GetGrantDistributionScope() const{ return m_grantDistributionScope; }
    inline bool GrantDistributionScopeHasBeenSet() const { return m_grantDistributionScopeHasBeenSet; }
    inline void SetGrantDistributionScope(const GrantDistributionScope& value) { m_grantDistributionScopeHasBeenSet = true; m_grantDistributionScope = value; }
    inline void SetGrantDistributionScope(GrantDistributionScope&& value) { m_grantDistributionScopeHasBeenSet = true; m_grantDistributionScope = std::move(value); }
    inline CreateDataGrantRequest& WithGrantDistributionScope(const GrantDistributionScope& value) { SetGrantDistributionScope(value); return *this;}
    inline CreateDataGrantRequest& WithGrantDistributionScope(GrantDistributionScope&& value) { SetGrantDistributionScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the data grant receiver.</p>
     */
    inline const Aws::String& GetReceiverPrincipal() const{ return m_receiverPrincipal; }
    inline bool ReceiverPrincipalHasBeenSet() const { return m_receiverPrincipalHasBeenSet; }
    inline void SetReceiverPrincipal(const Aws::String& value) { m_receiverPrincipalHasBeenSet = true; m_receiverPrincipal = value; }
    inline void SetReceiverPrincipal(Aws::String&& value) { m_receiverPrincipalHasBeenSet = true; m_receiverPrincipal = std::move(value); }
    inline void SetReceiverPrincipal(const char* value) { m_receiverPrincipalHasBeenSet = true; m_receiverPrincipal.assign(value); }
    inline CreateDataGrantRequest& WithReceiverPrincipal(const Aws::String& value) { SetReceiverPrincipal(value); return *this;}
    inline CreateDataGrantRequest& WithReceiverPrincipal(Aws::String&& value) { SetReceiverPrincipal(std::move(value)); return *this;}
    inline CreateDataGrantRequest& WithReceiverPrincipal(const char* value) { SetReceiverPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data set used to create the data grant.</p>
     */
    inline const Aws::String& GetSourceDataSetId() const{ return m_sourceDataSetId; }
    inline bool SourceDataSetIdHasBeenSet() const { return m_sourceDataSetIdHasBeenSet; }
    inline void SetSourceDataSetId(const Aws::String& value) { m_sourceDataSetIdHasBeenSet = true; m_sourceDataSetId = value; }
    inline void SetSourceDataSetId(Aws::String&& value) { m_sourceDataSetIdHasBeenSet = true; m_sourceDataSetId = std::move(value); }
    inline void SetSourceDataSetId(const char* value) { m_sourceDataSetIdHasBeenSet = true; m_sourceDataSetId.assign(value); }
    inline CreateDataGrantRequest& WithSourceDataSetId(const Aws::String& value) { SetSourceDataSetId(value); return *this;}
    inline CreateDataGrantRequest& WithSourceDataSetId(Aws::String&& value) { SetSourceDataSetId(std::move(value)); return *this;}
    inline CreateDataGrantRequest& WithSourceDataSetId(const char* value) { SetSourceDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when access to the associated data set ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEndsAt() const{ return m_endsAt; }
    inline bool EndsAtHasBeenSet() const { return m_endsAtHasBeenSet; }
    inline void SetEndsAt(const Aws::Utils::DateTime& value) { m_endsAtHasBeenSet = true; m_endsAt = value; }
    inline void SetEndsAt(Aws::Utils::DateTime&& value) { m_endsAtHasBeenSet = true; m_endsAt = std::move(value); }
    inline CreateDataGrantRequest& WithEndsAt(const Aws::Utils::DateTime& value) { SetEndsAt(value); return *this;}
    inline CreateDataGrantRequest& WithEndsAt(Aws::Utils::DateTime&& value) { SetEndsAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data grant.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateDataGrantRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateDataGrantRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateDataGrantRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to add to the data grant. A tag is a key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDataGrantRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateDataGrantRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDataGrantRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateDataGrantRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDataGrantRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDataGrantRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDataGrantRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDataGrantRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDataGrantRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    GrantDistributionScope m_grantDistributionScope;
    bool m_grantDistributionScopeHasBeenSet = false;

    Aws::String m_receiverPrincipal;
    bool m_receiverPrincipalHasBeenSet = false;

    Aws::String m_sourceDataSetId;
    bool m_sourceDataSetIdHasBeenSet = false;

    Aws::Utils::DateTime m_endsAt;
    bool m_endsAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
