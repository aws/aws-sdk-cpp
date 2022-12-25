/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudFront
{
namespace Model
{

  /**
   */
  class ListConflictingAliases2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API ListConflictingAliases2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConflictingAliases"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of a distribution in your account that has an attached SSL/TLS
     * certificate that includes the provided alias.</p>
     */
    inline const Aws::String& GetDistributionId() const{ return m_distributionId; }

    /**
     * <p>The ID of a distribution in your account that has an attached SSL/TLS
     * certificate that includes the provided alias.</p>
     */
    inline bool DistributionIdHasBeenSet() const { return m_distributionIdHasBeenSet; }

    /**
     * <p>The ID of a distribution in your account that has an attached SSL/TLS
     * certificate that includes the provided alias.</p>
     */
    inline void SetDistributionId(const Aws::String& value) { m_distributionIdHasBeenSet = true; m_distributionId = value; }

    /**
     * <p>The ID of a distribution in your account that has an attached SSL/TLS
     * certificate that includes the provided alias.</p>
     */
    inline void SetDistributionId(Aws::String&& value) { m_distributionIdHasBeenSet = true; m_distributionId = std::move(value); }

    /**
     * <p>The ID of a distribution in your account that has an attached SSL/TLS
     * certificate that includes the provided alias.</p>
     */
    inline void SetDistributionId(const char* value) { m_distributionIdHasBeenSet = true; m_distributionId.assign(value); }

    /**
     * <p>The ID of a distribution in your account that has an attached SSL/TLS
     * certificate that includes the provided alias.</p>
     */
    inline ListConflictingAliases2020_05_31Request& WithDistributionId(const Aws::String& value) { SetDistributionId(value); return *this;}

    /**
     * <p>The ID of a distribution in your account that has an attached SSL/TLS
     * certificate that includes the provided alias.</p>
     */
    inline ListConflictingAliases2020_05_31Request& WithDistributionId(Aws::String&& value) { SetDistributionId(std::move(value)); return *this;}

    /**
     * <p>The ID of a distribution in your account that has an attached SSL/TLS
     * certificate that includes the provided alias.</p>
     */
    inline ListConflictingAliases2020_05_31Request& WithDistributionId(const char* value) { SetDistributionId(value); return *this;}


    /**
     * <p>The alias (also called a CNAME) to search for conflicting aliases.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias (also called a CNAME) to search for conflicting aliases.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The alias (also called a CNAME) to search for conflicting aliases.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The alias (also called a CNAME) to search for conflicting aliases.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The alias (also called a CNAME) to search for conflicting aliases.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The alias (also called a CNAME) to search for conflicting aliases.</p>
     */
    inline ListConflictingAliases2020_05_31Request& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias (also called a CNAME) to search for conflicting aliases.</p>
     */
    inline ListConflictingAliases2020_05_31Request& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The alias (also called a CNAME) to search for conflicting aliases.</p>
     */
    inline ListConflictingAliases2020_05_31Request& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>Use this field when paginating results to indicate where to begin in the list
     * of conflicting aliases. The response includes conflicting aliases in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this field when paginating results to indicate where to begin in the list
     * of conflicting aliases. The response includes conflicting aliases in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Use this field when paginating results to indicate where to begin in the list
     * of conflicting aliases. The response includes conflicting aliases in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this field when paginating results to indicate where to begin in the list
     * of conflicting aliases. The response includes conflicting aliases in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Use this field when paginating results to indicate where to begin in the list
     * of conflicting aliases. The response includes conflicting aliases in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this field when paginating results to indicate where to begin in the list
     * of conflicting aliases. The response includes conflicting aliases in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline ListConflictingAliases2020_05_31Request& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this field when paginating results to indicate where to begin in the list
     * of conflicting aliases. The response includes conflicting aliases in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline ListConflictingAliases2020_05_31Request& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Use this field when paginating results to indicate where to begin in the list
     * of conflicting aliases. The response includes conflicting aliases in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline ListConflictingAliases2020_05_31Request& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of conflicting aliases that you want in the response.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of conflicting aliases that you want in the response.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of conflicting aliases that you want in the response.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of conflicting aliases that you want in the response.</p>
     */
    inline ListConflictingAliases2020_05_31Request& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_distributionId;
    bool m_distributionIdHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
