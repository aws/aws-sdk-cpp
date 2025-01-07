﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/InvoicingRequest.h>
#include <aws/invoicing/model/Filters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Invoicing
{
namespace Model
{

  /**
   */
  class ListInvoiceUnitsRequest : public InvoicingRequest
  {
  public:
    AWS_INVOICING_API ListInvoiceUnitsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInvoiceUnits"; }

    AWS_INVOICING_API Aws::String SerializePayload() const override;

    AWS_INVOICING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> An optional input to the list API. If multiple filters are specified, the
     * returned list will be a configuration that match all of the provided filters.
     * Supported filter types are <code>InvoiceReceivers</code>, <code>Names</code>,
     * and <code>Accounts</code>. </p>
     */
    inline const Filters& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Filters& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Filters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListInvoiceUnitsRequest& WithFilters(const Filters& value) { SetFilters(value); return *this;}
    inline ListInvoiceUnitsRequest& WithFilters(Filters&& value) { SetFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next token used to indicate where the returned list should start from.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListInvoiceUnitsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInvoiceUnitsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInvoiceUnitsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of invoice units that can be returned. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListInvoiceUnitsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The state of an invoice unit at a specified time. You can see legacy invoice
     * units that are currently deleted if the <code>AsOf</code> time is set to before
     * it was deleted. If an <code>AsOf</code> is not provided, the default value is
     * the current time. </p>
     */
    inline const Aws::Utils::DateTime& GetAsOf() const{ return m_asOf; }
    inline bool AsOfHasBeenSet() const { return m_asOfHasBeenSet; }
    inline void SetAsOf(const Aws::Utils::DateTime& value) { m_asOfHasBeenSet = true; m_asOf = value; }
    inline void SetAsOf(Aws::Utils::DateTime&& value) { m_asOfHasBeenSet = true; m_asOf = std::move(value); }
    inline ListInvoiceUnitsRequest& WithAsOf(const Aws::Utils::DateTime& value) { SetAsOf(value); return *this;}
    inline ListInvoiceUnitsRequest& WithAsOf(Aws::Utils::DateTime&& value) { SetAsOf(std::move(value)); return *this;}
    ///@}
  private:

    Filters m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_asOf;
    bool m_asOfHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
