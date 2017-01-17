﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
  class AWS_CLOUDSEARCH_API UpdateServiceAccessPoliciesRequest : public CloudSearchRequest
  {
  public:
    UpdateServiceAccessPoliciesRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline UpdateServiceAccessPoliciesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline UpdateServiceAccessPoliciesRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    
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
    inline void SetAccessPolicies(const Aws::String& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }

    /**
     * <p>The access rules you want to configure. These rules replace any existing
     * rules. </p>
     */
    inline void SetAccessPolicies(Aws::String&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }

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
    inline UpdateServiceAccessPoliciesRequest& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>The access rules you want to configure. These rules replace any existing
     * rules. </p>
     */
    inline UpdateServiceAccessPoliciesRequest& WithAccessPolicies(const char* value) { SetAccessPolicies(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_accessPolicies;
    bool m_accessPoliciesHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
