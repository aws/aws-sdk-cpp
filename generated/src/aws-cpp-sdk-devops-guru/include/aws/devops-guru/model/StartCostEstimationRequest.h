/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/devops-guru/model/CostEstimationResourceCollectionFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class StartCostEstimationRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API StartCostEstimationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCostEstimation"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    /**
     * <p>The collection of Amazon Web Services resources used to create a monthly
     * DevOps Guru cost estimate.</p>
     */
    inline const CostEstimationResourceCollectionFilter& GetResourceCollection() const{ return m_resourceCollection; }

    /**
     * <p>The collection of Amazon Web Services resources used to create a monthly
     * DevOps Guru cost estimate.</p>
     */
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }

    /**
     * <p>The collection of Amazon Web Services resources used to create a monthly
     * DevOps Guru cost estimate.</p>
     */
    inline void SetResourceCollection(const CostEstimationResourceCollectionFilter& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }

    /**
     * <p>The collection of Amazon Web Services resources used to create a monthly
     * DevOps Guru cost estimate.</p>
     */
    inline void SetResourceCollection(CostEstimationResourceCollectionFilter&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }

    /**
     * <p>The collection of Amazon Web Services resources used to create a monthly
     * DevOps Guru cost estimate.</p>
     */
    inline StartCostEstimationRequest& WithResourceCollection(const CostEstimationResourceCollectionFilter& value) { SetResourceCollection(value); return *this;}

    /**
     * <p>The collection of Amazon Web Services resources used to create a monthly
     * DevOps Guru cost estimate.</p>
     */
    inline StartCostEstimationRequest& WithResourceCollection(CostEstimationResourceCollectionFilter&& value) { SetResourceCollection(std::move(value)); return *this;}


    /**
     * <p>The idempotency token used to identify each cost estimate request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token used to identify each cost estimate request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token used to identify each cost estimate request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token used to identify each cost estimate request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token used to identify each cost estimate request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token used to identify each cost estimate request.</p>
     */
    inline StartCostEstimationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token used to identify each cost estimate request.</p>
     */
    inline StartCostEstimationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token used to identify each cost estimate request.</p>
     */
    inline StartCostEstimationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    CostEstimationResourceCollectionFilter m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
