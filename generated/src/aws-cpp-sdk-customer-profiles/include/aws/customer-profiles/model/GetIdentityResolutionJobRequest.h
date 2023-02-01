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
  class GetIdentityResolutionJobRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API GetIdentityResolutionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIdentityResolutionJob"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetIdentityResolutionJobRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetIdentityResolutionJobRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetIdentityResolutionJobRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline GetIdentityResolutionJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline GetIdentityResolutionJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline GetIdentityResolutionJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
