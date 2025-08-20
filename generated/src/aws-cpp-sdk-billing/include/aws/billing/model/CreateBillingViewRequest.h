/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/BillingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/billing/model/Expression.h>
#include <aws/billing/model/ResourceTag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Billing
{
namespace Model
{

  /**
   */
  class CreateBillingViewRequest : public BillingRequest
  {
  public:
    AWS_BILLING_API CreateBillingViewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBillingView"; }

    AWS_BILLING_API Aws::String SerializePayload() const override;

    AWS_BILLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the billing view. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateBillingViewRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the billing view. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateBillingViewRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of billing views used as the data source for the custom billing
     * view.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceViews() const { return m_sourceViews; }
    inline bool SourceViewsHasBeenSet() const { return m_sourceViewsHasBeenSet; }
    template<typename SourceViewsT = Aws::Vector<Aws::String>>
    void SetSourceViews(SourceViewsT&& value) { m_sourceViewsHasBeenSet = true; m_sourceViews = std::forward<SourceViewsT>(value); }
    template<typename SourceViewsT = Aws::Vector<Aws::String>>
    CreateBillingViewRequest& WithSourceViews(SourceViewsT&& value) { SetSourceViews(std::forward<SourceViewsT>(value)); return *this;}
    template<typename SourceViewsT = Aws::String>
    CreateBillingViewRequest& AddSourceViews(SourceViewsT&& value) { m_sourceViewsHasBeenSet = true; m_sourceViews.emplace_back(std::forward<SourceViewsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> See <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_billing_Expression.html">Expression</a>.
     * Billing view only supports <code>LINKED_ACCOUNT</code> and <code>Tags</code>.
     * </p>
     */
    inline const Expression& GetDataFilterExpression() const { return m_dataFilterExpression; }
    inline bool DataFilterExpressionHasBeenSet() const { return m_dataFilterExpressionHasBeenSet; }
    template<typename DataFilterExpressionT = Expression>
    void SetDataFilterExpression(DataFilterExpressionT&& value) { m_dataFilterExpressionHasBeenSet = true; m_dataFilterExpression = std::forward<DataFilterExpressionT>(value); }
    template<typename DataFilterExpressionT = Expression>
    CreateBillingViewRequest& WithDataFilterExpression(DataFilterExpressionT&& value) { SetDataFilterExpression(std::forward<DataFilterExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier you specify to ensure idempotency of the
     * request. Idempotency ensures that an API request completes no more than one
     * time. If the original request completes successfully, any subsequent retries
     * complete successfully without performing any further actions with an idempotent
     * request. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateBillingViewRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key value map specifying tags associated to the billing view being
     * created. </p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    CreateBillingViewRequest& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = ResourceTag>
    CreateBillingViewRequest& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceViews;
    bool m_sourceViewsHasBeenSet = false;

    Expression m_dataFilterExpression;
    bool m_dataFilterExpressionHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
