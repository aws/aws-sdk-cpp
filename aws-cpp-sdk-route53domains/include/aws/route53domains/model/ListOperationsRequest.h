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
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The ListOperations request includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListOperationsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API ListOperationsRequest : public Route53DomainsRequest
  {
  public:
    ListOperationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOperations"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An optional parameter that lets you get information about all the operations
     * that you submitted after a specified date and time. Specify the date and time in
     * Coordinated Universal time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedSince() const{ return m_submittedSince; }

    /**
     * <p>An optional parameter that lets you get information about all the operations
     * that you submitted after a specified date and time. Specify the date and time in
     * Coordinated Universal time (UTC).</p>
     */
    inline bool SubmittedSinceHasBeenSet() const { return m_submittedSinceHasBeenSet; }

    /**
     * <p>An optional parameter that lets you get information about all the operations
     * that you submitted after a specified date and time. Specify the date and time in
     * Coordinated Universal time (UTC).</p>
     */
    inline void SetSubmittedSince(const Aws::Utils::DateTime& value) { m_submittedSinceHasBeenSet = true; m_submittedSince = value; }

    /**
     * <p>An optional parameter that lets you get information about all the operations
     * that you submitted after a specified date and time. Specify the date and time in
     * Coordinated Universal time (UTC).</p>
     */
    inline void SetSubmittedSince(Aws::Utils::DateTime&& value) { m_submittedSinceHasBeenSet = true; m_submittedSince = std::move(value); }

    /**
     * <p>An optional parameter that lets you get information about all the operations
     * that you submitted after a specified date and time. Specify the date and time in
     * Coordinated Universal time (UTC).</p>
     */
    inline ListOperationsRequest& WithSubmittedSince(const Aws::Utils::DateTime& value) { SetSubmittedSince(value); return *this;}

    /**
     * <p>An optional parameter that lets you get information about all the operations
     * that you submitted after a specified date and time. Specify the date and time in
     * Coordinated Universal time (UTC).</p>
     */
    inline ListOperationsRequest& WithSubmittedSince(Aws::Utils::DateTime&& value) { SetSubmittedSince(std::move(value)); return *this;}


    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline ListOperationsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline ListOperationsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline ListOperationsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


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
    inline ListOperationsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:

    Aws::Utils::DateTime m_submittedSince;
    bool m_submittedSinceHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
