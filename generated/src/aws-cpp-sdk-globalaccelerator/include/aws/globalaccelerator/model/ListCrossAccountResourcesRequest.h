﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class ListCrossAccountResourcesRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCrossAccountResourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCrossAccountResources"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an accelerator in a cross-account
     * attachment.</p>
     */
    inline const Aws::String& GetAcceleratorArn() const { return m_acceleratorArn; }
    inline bool AcceleratorArnHasBeenSet() const { return m_acceleratorArnHasBeenSet; }
    template<typename AcceleratorArnT = Aws::String>
    void SetAcceleratorArn(AcceleratorArnT&& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = std::forward<AcceleratorArnT>(value); }
    template<typename AcceleratorArnT = Aws::String>
    ListCrossAccountResourcesRequest& WithAcceleratorArn(AcceleratorArnT&& value) { SetAcceleratorArn(std::forward<AcceleratorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of a resource owner in a cross-account attachment.</p>
     */
    inline const Aws::String& GetResourceOwnerAwsAccountId() const { return m_resourceOwnerAwsAccountId; }
    inline bool ResourceOwnerAwsAccountIdHasBeenSet() const { return m_resourceOwnerAwsAccountIdHasBeenSet; }
    template<typename ResourceOwnerAwsAccountIdT = Aws::String>
    void SetResourceOwnerAwsAccountId(ResourceOwnerAwsAccountIdT&& value) { m_resourceOwnerAwsAccountIdHasBeenSet = true; m_resourceOwnerAwsAccountId = std::forward<ResourceOwnerAwsAccountIdT>(value); }
    template<typename ResourceOwnerAwsAccountIdT = Aws::String>
    ListCrossAccountResourcesRequest& WithResourceOwnerAwsAccountId(ResourceOwnerAwsAccountIdT&& value) { SetResourceOwnerAwsAccountId(std::forward<ResourceOwnerAwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of cross-account resource objects that you want to return with
     * this call. The default value is 10.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCrossAccountResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCrossAccountResourcesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_acceleratorArn;
    bool m_acceleratorArnHasBeenSet = false;

    Aws::String m_resourceOwnerAwsAccountId;
    bool m_resourceOwnerAwsAccountIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
