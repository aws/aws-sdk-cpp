﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/machinelearning/model/EvaluationFilterVariable.h>
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
  class DescribeEvaluationsRequest : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API DescribeEvaluationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEvaluations"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Use one of the following variable to filter a list of <code>Evaluation</code>
     * objects:</p> <ul> <li> <p> <code>CreatedAt</code> - Sets the search criteria to
     * the <code>Evaluation</code> creation date.</p> </li> <li> <p>
     * <code>Status</code> - Sets the search criteria to the <code>Evaluation</code>
     * status.</p> </li> <li> <p> <code>Name</code> - Sets the search criteria to the
     * contents of <code>Evaluation</code> <b> </b> <code>Name</code>.</p> </li> <li>
     * <p> <code>IAMUser</code> - Sets the search criteria to the user account that
     * invoked an <code>Evaluation</code>.</p> </li> <li> <p> <code>MLModelId</code> -
     * Sets the search criteria to the <code>MLModel</code> that was evaluated.</p>
     * </li> <li> <p> <code>DataSourceId</code> - Sets the search criteria to the
     * <code>DataSource</code> used in <code>Evaluation</code>.</p> </li> <li> <p>
     * <code>DataUri</code> - Sets the search criteria to the data file(s) used in
     * <code>Evaluation</code>. The URL can identify either a file or an Amazon Simple
     * Storage Solution (Amazon S3) bucket or directory.</p> </li> </ul>
     */
    inline const EvaluationFilterVariable& GetFilterVariable() const{ return m_filterVariable; }
    inline bool FilterVariableHasBeenSet() const { return m_filterVariableHasBeenSet; }
    inline void SetFilterVariable(const EvaluationFilterVariable& value) { m_filterVariableHasBeenSet = true; m_filterVariable = value; }
    inline void SetFilterVariable(EvaluationFilterVariable&& value) { m_filterVariableHasBeenSet = true; m_filterVariable = std::move(value); }
    inline DescribeEvaluationsRequest& WithFilterVariable(const EvaluationFilterVariable& value) { SetFilterVariable(value); return *this;}
    inline DescribeEvaluationsRequest& WithFilterVariable(EvaluationFilterVariable&& value) { SetFilterVariable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The equal to operator. The <code>Evaluation</code> results will have
     * <code>FilterVariable</code> values that exactly match the value specified with
     * <code>EQ</code>.</p>
     */
    inline const Aws::String& GetEQ() const{ return m_eQ; }
    inline bool EQHasBeenSet() const { return m_eQHasBeenSet; }
    inline void SetEQ(const Aws::String& value) { m_eQHasBeenSet = true; m_eQ = value; }
    inline void SetEQ(Aws::String&& value) { m_eQHasBeenSet = true; m_eQ = std::move(value); }
    inline void SetEQ(const char* value) { m_eQHasBeenSet = true; m_eQ.assign(value); }
    inline DescribeEvaluationsRequest& WithEQ(const Aws::String& value) { SetEQ(value); return *this;}
    inline DescribeEvaluationsRequest& WithEQ(Aws::String&& value) { SetEQ(std::move(value)); return *this;}
    inline DescribeEvaluationsRequest& WithEQ(const char* value) { SetEQ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The greater than operator. The <code>Evaluation</code> results will have
     * <code>FilterVariable</code> values that are greater than the value specified
     * with <code>GT</code>.</p>
     */
    inline const Aws::String& GetGT() const{ return m_gT; }
    inline bool GTHasBeenSet() const { return m_gTHasBeenSet; }
    inline void SetGT(const Aws::String& value) { m_gTHasBeenSet = true; m_gT = value; }
    inline void SetGT(Aws::String&& value) { m_gTHasBeenSet = true; m_gT = std::move(value); }
    inline void SetGT(const char* value) { m_gTHasBeenSet = true; m_gT.assign(value); }
    inline DescribeEvaluationsRequest& WithGT(const Aws::String& value) { SetGT(value); return *this;}
    inline DescribeEvaluationsRequest& WithGT(Aws::String&& value) { SetGT(std::move(value)); return *this;}
    inline DescribeEvaluationsRequest& WithGT(const char* value) { SetGT(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The less than operator. The <code>Evaluation</code> results will have
     * <code>FilterVariable</code> values that are less than the value specified with
     * <code>LT</code>.</p>
     */
    inline const Aws::String& GetLT() const{ return m_lT; }
    inline bool LTHasBeenSet() const { return m_lTHasBeenSet; }
    inline void SetLT(const Aws::String& value) { m_lTHasBeenSet = true; m_lT = value; }
    inline void SetLT(Aws::String&& value) { m_lTHasBeenSet = true; m_lT = std::move(value); }
    inline void SetLT(const char* value) { m_lTHasBeenSet = true; m_lT.assign(value); }
    inline DescribeEvaluationsRequest& WithLT(const Aws::String& value) { SetLT(value); return *this;}
    inline DescribeEvaluationsRequest& WithLT(Aws::String&& value) { SetLT(std::move(value)); return *this;}
    inline DescribeEvaluationsRequest& WithLT(const char* value) { SetLT(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The greater than or equal to operator. The <code>Evaluation</code> results
     * will have <code>FilterVariable</code> values that are greater than or equal to
     * the value specified with <code>GE</code>. </p>
     */
    inline const Aws::String& GetGE() const{ return m_gE; }
    inline bool GEHasBeenSet() const { return m_gEHasBeenSet; }
    inline void SetGE(const Aws::String& value) { m_gEHasBeenSet = true; m_gE = value; }
    inline void SetGE(Aws::String&& value) { m_gEHasBeenSet = true; m_gE = std::move(value); }
    inline void SetGE(const char* value) { m_gEHasBeenSet = true; m_gE.assign(value); }
    inline DescribeEvaluationsRequest& WithGE(const Aws::String& value) { SetGE(value); return *this;}
    inline DescribeEvaluationsRequest& WithGE(Aws::String&& value) { SetGE(std::move(value)); return *this;}
    inline DescribeEvaluationsRequest& WithGE(const char* value) { SetGE(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The less than or equal to operator. The <code>Evaluation</code> results will
     * have <code>FilterVariable</code> values that are less than or equal to the value
     * specified with <code>LE</code>.</p>
     */
    inline const Aws::String& GetLE() const{ return m_lE; }
    inline bool LEHasBeenSet() const { return m_lEHasBeenSet; }
    inline void SetLE(const Aws::String& value) { m_lEHasBeenSet = true; m_lE = value; }
    inline void SetLE(Aws::String&& value) { m_lEHasBeenSet = true; m_lE = std::move(value); }
    inline void SetLE(const char* value) { m_lEHasBeenSet = true; m_lE.assign(value); }
    inline DescribeEvaluationsRequest& WithLE(const Aws::String& value) { SetLE(value); return *this;}
    inline DescribeEvaluationsRequest& WithLE(Aws::String&& value) { SetLE(std::move(value)); return *this;}
    inline DescribeEvaluationsRequest& WithLE(const char* value) { SetLE(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The not equal to operator. The <code>Evaluation</code> results will have
     * <code>FilterVariable</code> values not equal to the value specified with
     * <code>NE</code>.</p>
     */
    inline const Aws::String& GetNE() const{ return m_nE; }
    inline bool NEHasBeenSet() const { return m_nEHasBeenSet; }
    inline void SetNE(const Aws::String& value) { m_nEHasBeenSet = true; m_nE = value; }
    inline void SetNE(Aws::String&& value) { m_nEHasBeenSet = true; m_nE = std::move(value); }
    inline void SetNE(const char* value) { m_nEHasBeenSet = true; m_nE.assign(value); }
    inline DescribeEvaluationsRequest& WithNE(const Aws::String& value) { SetNE(value); return *this;}
    inline DescribeEvaluationsRequest& WithNE(Aws::String&& value) { SetNE(std::move(value)); return *this;}
    inline DescribeEvaluationsRequest& WithNE(const char* value) { SetNE(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that is found at the beginning of a variable, such as
     * <code>Name</code> or <code>Id</code>.</p> <p>For example, an
     * <code>Evaluation</code> could have the <code>Name</code>
     * <code>2014-09-09-HolidayGiftMailer</code>. To search for this
     * <code>Evaluation</code>, select <code>Name</code> for the
     * <code>FilterVariable</code> and any of the following strings for the
     * <code>Prefix</code>: </p> <ul> <li> <p>2014-09</p> </li> <li> <p>2014-09-09</p>
     * </li> <li> <p>2014-09-09-Holiday</p> </li> </ul>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline DescribeEvaluationsRequest& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline DescribeEvaluationsRequest& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline DescribeEvaluationsRequest& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A two-value parameter that determines the sequence of the resulting list of
     * <code>Evaluation</code>.</p> <ul> <li> <p> <code>asc</code> - Arranges the list
     * in ascending order (A-Z, 0-9).</p> </li> <li> <p> <code>dsc</code> - Arranges
     * the list in descending order (Z-A, 9-0).</p> </li> </ul> <p>Results are sorted
     * by <code>FilterVariable</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline DescribeEvaluationsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline DescribeEvaluationsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the page in the paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeEvaluationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeEvaluationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeEvaluationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of <code>Evaluation</code> to include in the result.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeEvaluationsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    EvaluationFilterVariable m_filterVariable;
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

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
