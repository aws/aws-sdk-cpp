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
    AWS_BILLING_API CreateBillingViewRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateBillingViewRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateBillingViewRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateBillingViewRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the billing view. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateBillingViewRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateBillingViewRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateBillingViewRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of billing views used as the data source for the custom billing
     * view.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceViews() const{ return m_sourceViews; }
    inline bool SourceViewsHasBeenSet() const { return m_sourceViewsHasBeenSet; }
    inline void SetSourceViews(const Aws::Vector<Aws::String>& value) { m_sourceViewsHasBeenSet = true; m_sourceViews = value; }
    inline void SetSourceViews(Aws::Vector<Aws::String>&& value) { m_sourceViewsHasBeenSet = true; m_sourceViews = std::move(value); }
    inline CreateBillingViewRequest& WithSourceViews(const Aws::Vector<Aws::String>& value) { SetSourceViews(value); return *this;}
    inline CreateBillingViewRequest& WithSourceViews(Aws::Vector<Aws::String>&& value) { SetSourceViews(std::move(value)); return *this;}
    inline CreateBillingViewRequest& AddSourceViews(const Aws::String& value) { m_sourceViewsHasBeenSet = true; m_sourceViews.push_back(value); return *this; }
    inline CreateBillingViewRequest& AddSourceViews(Aws::String&& value) { m_sourceViewsHasBeenSet = true; m_sourceViews.push_back(std::move(value)); return *this; }
    inline CreateBillingViewRequest& AddSourceViews(const char* value) { m_sourceViewsHasBeenSet = true; m_sourceViews.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> See <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
     * Billing view only supports <code>LINKED_ACCOUNT</code> and <code>Tags</code>.
     * </p>
     */
    inline const Expression& GetDataFilterExpression() const{ return m_dataFilterExpression; }
    inline bool DataFilterExpressionHasBeenSet() const { return m_dataFilterExpressionHasBeenSet; }
    inline void SetDataFilterExpression(const Expression& value) { m_dataFilterExpressionHasBeenSet = true; m_dataFilterExpression = value; }
    inline void SetDataFilterExpression(Expression&& value) { m_dataFilterExpressionHasBeenSet = true; m_dataFilterExpression = std::move(value); }
    inline CreateBillingViewRequest& WithDataFilterExpression(const Expression& value) { SetDataFilterExpression(value); return *this;}
    inline CreateBillingViewRequest& WithDataFilterExpression(Expression&& value) { SetDataFilterExpression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier you specify to ensure idempotency of the
     * request. Idempotency ensures that an API request completes no more than one
     * time. If the original request completes successfully, any subsequent retries
     * complete successfully without performing any further actions with an idempotent
     * request. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateBillingViewRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateBillingViewRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateBillingViewRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key value map specifying tags associated to the billing view being
     * created. </p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    inline void SetResourceTags(const Aws::Vector<ResourceTag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }
    inline void SetResourceTags(Aws::Vector<ResourceTag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }
    inline CreateBillingViewRequest& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}
    inline CreateBillingViewRequest& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}
    inline CreateBillingViewRequest& AddResourceTags(const ResourceTag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }
    inline CreateBillingViewRequest& AddResourceTags(ResourceTag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }
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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
