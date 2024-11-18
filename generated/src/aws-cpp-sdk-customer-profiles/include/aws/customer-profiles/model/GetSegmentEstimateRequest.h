/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class GetSegmentEstimateRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API GetSegmentEstimateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSegmentEstimate"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline GetSegmentEstimateRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline GetSegmentEstimateRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline GetSegmentEstimateRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query Id passed by a previous <code>CreateSegmentEstimate</code>
     * operation.</p>
     */
    inline const Aws::String& GetEstimateId() const{ return m_estimateId; }
    inline bool EstimateIdHasBeenSet() const { return m_estimateIdHasBeenSet; }
    inline void SetEstimateId(const Aws::String& value) { m_estimateIdHasBeenSet = true; m_estimateId = value; }
    inline void SetEstimateId(Aws::String&& value) { m_estimateIdHasBeenSet = true; m_estimateId = std::move(value); }
    inline void SetEstimateId(const char* value) { m_estimateIdHasBeenSet = true; m_estimateId.assign(value); }
    inline GetSegmentEstimateRequest& WithEstimateId(const Aws::String& value) { SetEstimateId(value); return *this;}
    inline GetSegmentEstimateRequest& WithEstimateId(Aws::String&& value) { SetEstimateId(std::move(value)); return *this;}
    inline GetSegmentEstimateRequest& WithEstimateId(const char* value) { SetEstimateId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_estimateId;
    bool m_estimateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
