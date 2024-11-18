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
  class ListProfileAttributeValuesRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API ListProfileAttributeValuesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProfileAttributeValues"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline ListProfileAttributeValuesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline ListProfileAttributeValuesRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline ListProfileAttributeValuesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute name.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }
    inline ListProfileAttributeValuesRequest& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}
    inline ListProfileAttributeValuesRequest& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}
    inline ListProfileAttributeValuesRequest& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
