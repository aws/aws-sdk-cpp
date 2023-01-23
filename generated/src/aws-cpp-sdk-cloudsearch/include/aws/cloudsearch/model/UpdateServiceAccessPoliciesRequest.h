/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the
   * <code><a>UpdateServiceAccessPolicies</a></code> operation. Specifies the name of
   * the domain you want to update and the access rules you want to
   * configure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateServiceAccessPoliciesRequest">AWS
   * API Reference</a></p>
   */
  class UpdateServiceAccessPoliciesRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API UpdateServiceAccessPoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceAccessPolicies"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline UpdateServiceAccessPoliciesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline UpdateServiceAccessPoliciesRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    
    inline UpdateServiceAccessPoliciesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The access rules you want to configure. These rules replace any existing
     * rules. </p>
     */
    inline const Aws::String& GetAccessPolicies() const{ return m_accessPolicies; }

    /**
     * <p>The access rules you want to configure. These rules replace any existing
     * rules. </p>
     */
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }

    /**
     * <p>The access rules you want to configure. These rules replace any existing
     * rules. </p>
     */
    inline void SetAccessPolicies(const Aws::String& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }

    /**
     * <p>The access rules you want to configure. These rules replace any existing
     * rules. </p>
     */
    inline void SetAccessPolicies(Aws::String&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::move(value); }

    /**
     * <p>The access rules you want to configure. These rules replace any existing
     * rules. </p>
     */
    inline void SetAccessPolicies(const char* value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies.assign(value); }

    /**
     * <p>The access rules you want to configure. These rules replace any existing
     * rules. </p>
     */
    inline UpdateServiceAccessPoliciesRequest& WithAccessPolicies(const Aws::String& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>The access rules you want to configure. These rules replace any existing
     * rules. </p>
     */
    inline UpdateServiceAccessPoliciesRequest& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(std::move(value)); return *this;}

    /**
     * <p>The access rules you want to configure. These rules replace any existing
     * rules. </p>
     */
    inline UpdateServiceAccessPoliciesRequest& WithAccessPolicies(const char* value) { SetAccessPolicies(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_accessPolicies;
    bool m_accessPoliciesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
