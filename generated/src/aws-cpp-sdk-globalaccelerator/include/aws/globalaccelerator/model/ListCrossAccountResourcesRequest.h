/**
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
    AWS_GLOBALACCELERATOR_API ListCrossAccountResourcesRequest();

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
    inline const Aws::String& GetAcceleratorArn() const{ return m_acceleratorArn; }
    inline bool AcceleratorArnHasBeenSet() const { return m_acceleratorArnHasBeenSet; }
    inline void SetAcceleratorArn(const Aws::String& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = value; }
    inline void SetAcceleratorArn(Aws::String&& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = std::move(value); }
    inline void SetAcceleratorArn(const char* value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn.assign(value); }
    inline ListCrossAccountResourcesRequest& WithAcceleratorArn(const Aws::String& value) { SetAcceleratorArn(value); return *this;}
    inline ListCrossAccountResourcesRequest& WithAcceleratorArn(Aws::String&& value) { SetAcceleratorArn(std::move(value)); return *this;}
    inline ListCrossAccountResourcesRequest& WithAcceleratorArn(const char* value) { SetAcceleratorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of a resource owner in a cross-account attachment.</p>
     */
    inline const Aws::String& GetResourceOwnerAwsAccountId() const{ return m_resourceOwnerAwsAccountId; }
    inline bool ResourceOwnerAwsAccountIdHasBeenSet() const { return m_resourceOwnerAwsAccountIdHasBeenSet; }
    inline void SetResourceOwnerAwsAccountId(const Aws::String& value) { m_resourceOwnerAwsAccountIdHasBeenSet = true; m_resourceOwnerAwsAccountId = value; }
    inline void SetResourceOwnerAwsAccountId(Aws::String&& value) { m_resourceOwnerAwsAccountIdHasBeenSet = true; m_resourceOwnerAwsAccountId = std::move(value); }
    inline void SetResourceOwnerAwsAccountId(const char* value) { m_resourceOwnerAwsAccountIdHasBeenSet = true; m_resourceOwnerAwsAccountId.assign(value); }
    inline ListCrossAccountResourcesRequest& WithResourceOwnerAwsAccountId(const Aws::String& value) { SetResourceOwnerAwsAccountId(value); return *this;}
    inline ListCrossAccountResourcesRequest& WithResourceOwnerAwsAccountId(Aws::String&& value) { SetResourceOwnerAwsAccountId(std::move(value)); return *this;}
    inline ListCrossAccountResourcesRequest& WithResourceOwnerAwsAccountId(const char* value) { SetResourceOwnerAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of cross-account resource objects that you want to return with
     * this call. The default value is 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCrossAccountResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListCrossAccountResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCrossAccountResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCrossAccountResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_acceleratorArn;
    bool m_acceleratorArnHasBeenSet = false;

    Aws::String m_resourceOwnerAwsAccountId;
    bool m_resourceOwnerAwsAccountIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
