/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The ListDomains request includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListDomainsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API ListDomainsRequest : public Route53DomainsRequest
  {
  public:
    ListDomainsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDomains"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>For an initial request for a list of domains, omit this element. If the
     * number of domains that are associated with the current AWS account is greater
     * than the value that you specified for <code>MaxItems</code>, you can use
     * <code>Marker</code> to return additional domains. Get the value of
     * <code>NextPageMarker</code> from the previous response, and submit another
     * request that includes the value of <code>NextPageMarker</code> in the
     * <code>Marker</code> element.</p> <p>Constraints: The marker must match the value
     * specified in the previous request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>For an initial request for a list of domains, omit this element. If the
     * number of domains that are associated with the current AWS account is greater
     * than the value that you specified for <code>MaxItems</code>, you can use
     * <code>Marker</code> to return additional domains. Get the value of
     * <code>NextPageMarker</code> from the previous response, and submit another
     * request that includes the value of <code>NextPageMarker</code> in the
     * <code>Marker</code> element.</p> <p>Constraints: The marker must match the value
     * specified in the previous request.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>For an initial request for a list of domains, omit this element. If the
     * number of domains that are associated with the current AWS account is greater
     * than the value that you specified for <code>MaxItems</code>, you can use
     * <code>Marker</code> to return additional domains. Get the value of
     * <code>NextPageMarker</code> from the previous response, and submit another
     * request that includes the value of <code>NextPageMarker</code> in the
     * <code>Marker</code> element.</p> <p>Constraints: The marker must match the value
     * specified in the previous request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>For an initial request for a list of domains, omit this element. If the
     * number of domains that are associated with the current AWS account is greater
     * than the value that you specified for <code>MaxItems</code>, you can use
     * <code>Marker</code> to return additional domains. Get the value of
     * <code>NextPageMarker</code> from the previous response, and submit another
     * request that includes the value of <code>NextPageMarker</code> in the
     * <code>Marker</code> element.</p> <p>Constraints: The marker must match the value
     * specified in the previous request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>For an initial request for a list of domains, omit this element. If the
     * number of domains that are associated with the current AWS account is greater
     * than the value that you specified for <code>MaxItems</code>, you can use
     * <code>Marker</code> to return additional domains. Get the value of
     * <code>NextPageMarker</code> from the previous response, and submit another
     * request that includes the value of <code>NextPageMarker</code> in the
     * <code>Marker</code> element.</p> <p>Constraints: The marker must match the value
     * specified in the previous request.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>For an initial request for a list of domains, omit this element. If the
     * number of domains that are associated with the current AWS account is greater
     * than the value that you specified for <code>MaxItems</code>, you can use
     * <code>Marker</code> to return additional domains. Get the value of
     * <code>NextPageMarker</code> from the previous response, and submit another
     * request that includes the value of <code>NextPageMarker</code> in the
     * <code>Marker</code> element.</p> <p>Constraints: The marker must match the value
     * specified in the previous request.</p>
     */
    inline ListDomainsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>For an initial request for a list of domains, omit this element. If the
     * number of domains that are associated with the current AWS account is greater
     * than the value that you specified for <code>MaxItems</code>, you can use
     * <code>Marker</code> to return additional domains. Get the value of
     * <code>NextPageMarker</code> from the previous response, and submit another
     * request that includes the value of <code>NextPageMarker</code> in the
     * <code>Marker</code> element.</p> <p>Constraints: The marker must match the value
     * specified in the previous request.</p>
     */
    inline ListDomainsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>For an initial request for a list of domains, omit this element. If the
     * number of domains that are associated with the current AWS account is greater
     * than the value that you specified for <code>MaxItems</code>, you can use
     * <code>Marker</code> to return additional domains. Get the value of
     * <code>NextPageMarker</code> from the previous response, and submit another
     * request that includes the value of <code>NextPageMarker</code> in the
     * <code>Marker</code> element.</p> <p>Constraints: The marker must match the value
     * specified in the previous request.</p>
     */
    inline ListDomainsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Number of domains to be returned.</p> <p>Default: 20</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Number of domains to be returned.</p> <p>Default: 20</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>Number of domains to be returned.</p> <p>Default: 20</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Number of domains to be returned.</p> <p>Default: 20</p>
     */
    inline ListDomainsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
