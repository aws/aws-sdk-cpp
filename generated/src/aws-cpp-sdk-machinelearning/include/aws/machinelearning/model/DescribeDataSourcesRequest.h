﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/machinelearning/model/DataSourceFilterVariable.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class DescribeDataSourcesRequest : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API DescribeDataSourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDataSources"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Use one of the following variables to filter a list of
     * <code>DataSource</code>:</p> <ul> <li> <p> <code>CreatedAt</code> - Sets the
     * search criteria to <code>DataSource</code> creation dates.</p> </li> <li> <p>
     * <code>Status</code> - Sets the search criteria to <code>DataSource</code>
     * statuses.</p> </li> <li> <p> <code>Name</code> - Sets the search criteria to the
     * contents of <code>DataSource</code> <code>Name</code>.</p> </li> <li> <p>
     * <code>DataUri</code> - Sets the search criteria to the URI of data files used to
     * create the <code>DataSource</code>. The URI can identify either a file or an
     * Amazon Simple Storage Service (Amazon S3) bucket or directory.</p> </li> <li>
     * <p> <code>IAMUser</code> - Sets the search criteria to the user account that
     * invoked the <code>DataSource</code> creation.</p> </li> </ul>
     */
    inline DataSourceFilterVariable GetFilterVariable() const { return m_filterVariable; }
    inline bool FilterVariableHasBeenSet() const { return m_filterVariableHasBeenSet; }
    inline void SetFilterVariable(DataSourceFilterVariable value) { m_filterVariableHasBeenSet = true; m_filterVariable = value; }
    inline DescribeDataSourcesRequest& WithFilterVariable(DataSourceFilterVariable value) { SetFilterVariable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The equal to operator. The <code>DataSource</code> results will have
     * <code>FilterVariable</code> values that exactly match the value specified with
     * <code>EQ</code>.</p>
     */
    inline const Aws::String& GetEQ() const { return m_eQ; }
    inline bool EQHasBeenSet() const { return m_eQHasBeenSet; }
    template<typename EQT = Aws::String>
    void SetEQ(EQT&& value) { m_eQHasBeenSet = true; m_eQ = std::forward<EQT>(value); }
    template<typename EQT = Aws::String>
    DescribeDataSourcesRequest& WithEQ(EQT&& value) { SetEQ(std::forward<EQT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The greater than operator. The <code>DataSource</code> results will have
     * <code>FilterVariable</code> values that are greater than the value specified
     * with <code>GT</code>.</p>
     */
    inline const Aws::String& GetGT() const { return m_gT; }
    inline bool GTHasBeenSet() const { return m_gTHasBeenSet; }
    template<typename GTT = Aws::String>
    void SetGT(GTT&& value) { m_gTHasBeenSet = true; m_gT = std::forward<GTT>(value); }
    template<typename GTT = Aws::String>
    DescribeDataSourcesRequest& WithGT(GTT&& value) { SetGT(std::forward<GTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The less than operator. The <code>DataSource</code> results will have
     * <code>FilterVariable</code> values that are less than the value specified with
     * <code>LT</code>.</p>
     */
    inline const Aws::String& GetLT() const { return m_lT; }
    inline bool LTHasBeenSet() const { return m_lTHasBeenSet; }
    template<typename LTT = Aws::String>
    void SetLT(LTT&& value) { m_lTHasBeenSet = true; m_lT = std::forward<LTT>(value); }
    template<typename LTT = Aws::String>
    DescribeDataSourcesRequest& WithLT(LTT&& value) { SetLT(std::forward<LTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The greater than or equal to operator. The <code>DataSource</code> results
     * will have <code>FilterVariable</code> values that are greater than or equal to
     * the value specified with <code>GE</code>. </p>
     */
    inline const Aws::String& GetGE() const { return m_gE; }
    inline bool GEHasBeenSet() const { return m_gEHasBeenSet; }
    template<typename GET = Aws::String>
    void SetGE(GET&& value) { m_gEHasBeenSet = true; m_gE = std::forward<GET>(value); }
    template<typename GET = Aws::String>
    DescribeDataSourcesRequest& WithGE(GET&& value) { SetGE(std::forward<GET>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The less than or equal to operator. The <code>DataSource</code> results will
     * have <code>FilterVariable</code> values that are less than or equal to the value
     * specified with <code>LE</code>.</p>
     */
    inline const Aws::String& GetLE() const { return m_lE; }
    inline bool LEHasBeenSet() const { return m_lEHasBeenSet; }
    template<typename LET = Aws::String>
    void SetLE(LET&& value) { m_lEHasBeenSet = true; m_lE = std::forward<LET>(value); }
    template<typename LET = Aws::String>
    DescribeDataSourcesRequest& WithLE(LET&& value) { SetLE(std::forward<LET>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The not equal to operator. The <code>DataSource</code> results will have
     * <code>FilterVariable</code> values not equal to the value specified with
     * <code>NE</code>.</p>
     */
    inline const Aws::String& GetNE() const { return m_nE; }
    inline bool NEHasBeenSet() const { return m_nEHasBeenSet; }
    template<typename NET = Aws::String>
    void SetNE(NET&& value) { m_nEHasBeenSet = true; m_nE = std::forward<NET>(value); }
    template<typename NET = Aws::String>
    DescribeDataSourcesRequest& WithNE(NET&& value) { SetNE(std::forward<NET>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that is found at the beginning of a variable, such as
     * <code>Name</code> or <code>Id</code>.</p> <p>For example, a
     * <code>DataSource</code> could have the <code>Name</code>
     * <code>2014-09-09-HolidayGiftMailer</code>. To search for this
     * <code>DataSource</code>, select <code>Name</code> for the
     * <code>FilterVariable</code> and any of the following strings for the
     * <code>Prefix</code>: </p> <ul> <li> <p>2014-09</p> </li> <li> <p>2014-09-09</p>
     * </li> <li> <p>2014-09-09-Holiday</p> </li> </ul>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    DescribeDataSourcesRequest& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A two-value parameter that determines the sequence of the resulting list of
     * <code>DataSource</code>.</p> <ul> <li> <p> <code>asc</code> - Arranges the list
     * in ascending order (A-Z, 0-9).</p> </li> <li> <p> <code>dsc</code> - Arranges
     * the list in descending order (Z-A, 9-0).</p> </li> </ul> <p>Results are sorted
     * by <code>FilterVariable</code>.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline DescribeDataSourcesRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the page in the paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDataSourcesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of <code>DataSource</code> to include in the result.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeDataSourcesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    DataSourceFilterVariable m_filterVariable{DataSourceFilterVariable::NOT_SET};
    bool m_filterVariableHasBeenSet = false;

    Aws::String m_eQ;
    bool m_eQHasBeenSet = false;

    Aws::String m_gT;
    bool m_gTHasBeenSet = false;

    Aws::String m_lT;
    bool m_lTHasBeenSet = false;

    Aws::String m_gE;
    bool m_gEHasBeenSet = false;

    Aws::String m_lE;
    bool m_lEHasBeenSet = false;

    Aws::String m_nE;
    bool m_nEHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
