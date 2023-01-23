/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/ObjectFilter.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class ListProfileObjectsRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API ListProfileObjectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProfileObjects"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

    AWS_CUSTOMERPROFILES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The pagination token from the previous call to ListProfileObjects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous call to ListProfileObjects.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token from the previous call to ListProfileObjects.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token from the previous call to ListProfileObjects.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous call to ListProfileObjects.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous call to ListProfileObjects.</p>
     */
    inline ListProfileObjectsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous call to ListProfileObjects.</p>
     */
    inline ListProfileObjectsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous call to ListProfileObjects.</p>
     */
    inline ListProfileObjectsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of objects returned per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of objects returned per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of objects returned per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of objects returned per page.</p>
     */
    inline ListProfileObjectsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListProfileObjectsRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline ListProfileObjectsRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline ListProfileObjectsRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The name of the profile object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const{ return m_objectTypeName; }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline void SetObjectTypeName(const Aws::String& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = value; }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline void SetObjectTypeName(Aws::String&& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = std::move(value); }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline void SetObjectTypeName(const char* value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName.assign(value); }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline ListProfileObjectsRequest& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}

    /**
     * <p>The name of the profile object type.</p>
     */
    inline ListProfileObjectsRequest& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the profile object type.</p>
     */
    inline ListProfileObjectsRequest& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}


    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline ListProfileObjectsRequest& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline ListProfileObjectsRequest& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline ListProfileObjectsRequest& WithProfileId(const char* value) { SetProfileId(value); return *this;}


    /**
     * <p>Applies a filter to the response to include profile objects with the
     * specified index values. This filter is only supported for ObjectTypeName _asset,
     * _case and _order.</p>
     */
    inline const ObjectFilter& GetObjectFilter() const{ return m_objectFilter; }

    /**
     * <p>Applies a filter to the response to include profile objects with the
     * specified index values. This filter is only supported for ObjectTypeName _asset,
     * _case and _order.</p>
     */
    inline bool ObjectFilterHasBeenSet() const { return m_objectFilterHasBeenSet; }

    /**
     * <p>Applies a filter to the response to include profile objects with the
     * specified index values. This filter is only supported for ObjectTypeName _asset,
     * _case and _order.</p>
     */
    inline void SetObjectFilter(const ObjectFilter& value) { m_objectFilterHasBeenSet = true; m_objectFilter = value; }

    /**
     * <p>Applies a filter to the response to include profile objects with the
     * specified index values. This filter is only supported for ObjectTypeName _asset,
     * _case and _order.</p>
     */
    inline void SetObjectFilter(ObjectFilter&& value) { m_objectFilterHasBeenSet = true; m_objectFilter = std::move(value); }

    /**
     * <p>Applies a filter to the response to include profile objects with the
     * specified index values. This filter is only supported for ObjectTypeName _asset,
     * _case and _order.</p>
     */
    inline ListProfileObjectsRequest& WithObjectFilter(const ObjectFilter& value) { SetObjectFilter(value); return *this;}

    /**
     * <p>Applies a filter to the response to include profile objects with the
     * specified index values. This filter is only supported for ObjectTypeName _asset,
     * _case and _order.</p>
     */
    inline ListProfileObjectsRequest& WithObjectFilter(ObjectFilter&& value) { SetObjectFilter(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_objectTypeName;
    bool m_objectTypeNameHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    ObjectFilter m_objectFilter;
    bool m_objectFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
