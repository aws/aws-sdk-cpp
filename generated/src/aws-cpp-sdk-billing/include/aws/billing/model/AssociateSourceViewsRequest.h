/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/BillingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Billing
{
namespace Model
{

  /**
   */
  class AssociateSourceViewsRequest : public BillingRequest
  {
  public:
    AWS_BILLING_API AssociateSourceViewsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateSourceViews"; }

    AWS_BILLING_API Aws::String SerializePayload() const override;

    AWS_BILLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the billing view to associate source views
     * with. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AssociateSourceViewsRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of ARNs of the source billing views to associate. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceViews() const { return m_sourceViews; }
    inline bool SourceViewsHasBeenSet() const { return m_sourceViewsHasBeenSet; }
    template<typename SourceViewsT = Aws::Vector<Aws::String>>
    void SetSourceViews(SourceViewsT&& value) { m_sourceViewsHasBeenSet = true; m_sourceViews = std::forward<SourceViewsT>(value); }
    template<typename SourceViewsT = Aws::Vector<Aws::String>>
    AssociateSourceViewsRequest& WithSourceViews(SourceViewsT&& value) { SetSourceViews(std::forward<SourceViewsT>(value)); return *this;}
    template<typename SourceViewsT = Aws::String>
    AssociateSourceViewsRequest& AddSourceViews(SourceViewsT&& value) { m_sourceViewsHasBeenSet = true; m_sourceViews.emplace_back(std::forward<SourceViewsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceViews;
    bool m_sourceViewsHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
