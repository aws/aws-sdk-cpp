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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/machinelearning/model/BatchPredictionFilterVariable.h>
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
  class AWS_MACHINELEARNING_API DescribeBatchPredictionsRequest : public MachineLearningRequest
  {
  public:
    DescribeBatchPredictionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBatchPredictions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Use one of the following variables to filter a list of
     * <code>BatchPrediction</code>:</p> <ul> <li> <code>CreatedAt</code> - Sets the
     * search criteria to the <code>BatchPrediction</code> creation date.</li> <li>
     * <code>Status</code> - Sets the search criteria to the
     * <code>BatchPrediction</code> status.</li> <li> <code>Name</code> - Sets the
     * search criteria to the contents of the <code>BatchPrediction</code><b> </b>
     * <code>Name</code>.</li> <li> <code>IAMUser</code> - Sets the search criteria to
     * the user account that invoked the <code>BatchPrediction</code> creation.</li>
     * <li> <code>MLModelId</code> - Sets the search criteria to the
     * <code>MLModel</code> used in the <code>BatchPrediction</code>.</li> <li>
     * <code>DataSourceId</code> - Sets the search criteria to the
     * <code>DataSource</code> used in the <code>BatchPrediction</code>.</li> <li>
     * <code>DataURI</code> - Sets the search criteria to the data file(s) used in the
     * <code>BatchPrediction</code>. The URL can identify either a file or an Amazon
     * Simple Storage Solution (Amazon S3) bucket or directory.</li> </ul>
     */
    inline const BatchPredictionFilterVariable& GetFilterVariable() const{ return m_filterVariable; }

    /**
     * <p>Use one of the following variables to filter a list of
     * <code>BatchPrediction</code>:</p> <ul> <li> <code>CreatedAt</code> - Sets the
     * search criteria to the <code>BatchPrediction</code> creation date.</li> <li>
     * <code>Status</code> - Sets the search criteria to the
     * <code>BatchPrediction</code> status.</li> <li> <code>Name</code> - Sets the
     * search criteria to the contents of the <code>BatchPrediction</code><b> </b>
     * <code>Name</code>.</li> <li> <code>IAMUser</code> - Sets the search criteria to
     * the user account that invoked the <code>BatchPrediction</code> creation.</li>
     * <li> <code>MLModelId</code> - Sets the search criteria to the
     * <code>MLModel</code> used in the <code>BatchPrediction</code>.</li> <li>
     * <code>DataSourceId</code> - Sets the search criteria to the
     * <code>DataSource</code> used in the <code>BatchPrediction</code>.</li> <li>
     * <code>DataURI</code> - Sets the search criteria to the data file(s) used in the
     * <code>BatchPrediction</code>. The URL can identify either a file or an Amazon
     * Simple Storage Solution (Amazon S3) bucket or directory.</li> </ul>
     */
    inline bool FilterVariableHasBeenSet() const { return m_filterVariableHasBeenSet; }

    /**
     * <p>Use one of the following variables to filter a list of
     * <code>BatchPrediction</code>:</p> <ul> <li> <code>CreatedAt</code> - Sets the
     * search criteria to the <code>BatchPrediction</code> creation date.</li> <li>
     * <code>Status</code> - Sets the search criteria to the
     * <code>BatchPrediction</code> status.</li> <li> <code>Name</code> - Sets the
     * search criteria to the contents of the <code>BatchPrediction</code><b> </b>
     * <code>Name</code>.</li> <li> <code>IAMUser</code> - Sets the search criteria to
     * the user account that invoked the <code>BatchPrediction</code> creation.</li>
     * <li> <code>MLModelId</code> - Sets the search criteria to the
     * <code>MLModel</code> used in the <code>BatchPrediction</code>.</li> <li>
     * <code>DataSourceId</code> - Sets the search criteria to the
     * <code>DataSource</code> used in the <code>BatchPrediction</code>.</li> <li>
     * <code>DataURI</code> - Sets the search criteria to the data file(s) used in the
     * <code>BatchPrediction</code>. The URL can identify either a file or an Amazon
     * Simple Storage Solution (Amazon S3) bucket or directory.</li> </ul>
     */
    inline void SetFilterVariable(const BatchPredictionFilterVariable& value) { m_filterVariableHasBeenSet = true; m_filterVariable = value; }

    /**
     * <p>Use one of the following variables to filter a list of
     * <code>BatchPrediction</code>:</p> <ul> <li> <code>CreatedAt</code> - Sets the
     * search criteria to the <code>BatchPrediction</code> creation date.</li> <li>
     * <code>Status</code> - Sets the search criteria to the
     * <code>BatchPrediction</code> status.</li> <li> <code>Name</code> - Sets the
     * search criteria to the contents of the <code>BatchPrediction</code><b> </b>
     * <code>Name</code>.</li> <li> <code>IAMUser</code> - Sets the search criteria to
     * the user account that invoked the <code>BatchPrediction</code> creation.</li>
     * <li> <code>MLModelId</code> - Sets the search criteria to the
     * <code>MLModel</code> used in the <code>BatchPrediction</code>.</li> <li>
     * <code>DataSourceId</code> - Sets the search criteria to the
     * <code>DataSource</code> used in the <code>BatchPrediction</code>.</li> <li>
     * <code>DataURI</code> - Sets the search criteria to the data file(s) used in the
     * <code>BatchPrediction</code>. The URL can identify either a file or an Amazon
     * Simple Storage Solution (Amazon S3) bucket or directory.</li> </ul>
     */
    inline void SetFilterVariable(BatchPredictionFilterVariable&& value) { m_filterVariableHasBeenSet = true; m_filterVariable = std::move(value); }

    /**
     * <p>Use one of the following variables to filter a list of
     * <code>BatchPrediction</code>:</p> <ul> <li> <code>CreatedAt</code> - Sets the
     * search criteria to the <code>BatchPrediction</code> creation date.</li> <li>
     * <code>Status</code> - Sets the search criteria to the
     * <code>BatchPrediction</code> status.</li> <li> <code>Name</code> - Sets the
     * search criteria to the contents of the <code>BatchPrediction</code><b> </b>
     * <code>Name</code>.</li> <li> <code>IAMUser</code> - Sets the search criteria to
     * the user account that invoked the <code>BatchPrediction</code> creation.</li>
     * <li> <code>MLModelId</code> - Sets the search criteria to the
     * <code>MLModel</code> used in the <code>BatchPrediction</code>.</li> <li>
     * <code>DataSourceId</code> - Sets the search criteria to the
     * <code>DataSource</code> used in the <code>BatchPrediction</code>.</li> <li>
     * <code>DataURI</code> - Sets the search criteria to the data file(s) used in the
     * <code>BatchPrediction</code>. The URL can identify either a file or an Amazon
     * Simple Storage Solution (Amazon S3) bucket or directory.</li> </ul>
     */
    inline DescribeBatchPredictionsRequest& WithFilterVariable(const BatchPredictionFilterVariable& value) { SetFilterVariable(value); return *this;}

    /**
     * <p>Use one of the following variables to filter a list of
     * <code>BatchPrediction</code>:</p> <ul> <li> <code>CreatedAt</code> - Sets the
     * search criteria to the <code>BatchPrediction</code> creation date.</li> <li>
     * <code>Status</code> - Sets the search criteria to the
     * <code>BatchPrediction</code> status.</li> <li> <code>Name</code> - Sets the
     * search criteria to the contents of the <code>BatchPrediction</code><b> </b>
     * <code>Name</code>.</li> <li> <code>IAMUser</code> - Sets the search criteria to
     * the user account that invoked the <code>BatchPrediction</code> creation.</li>
     * <li> <code>MLModelId</code> - Sets the search criteria to the
     * <code>MLModel</code> used in the <code>BatchPrediction</code>.</li> <li>
     * <code>DataSourceId</code> - Sets the search criteria to the
     * <code>DataSource</code> used in the <code>BatchPrediction</code>.</li> <li>
     * <code>DataURI</code> - Sets the search criteria to the data file(s) used in the
     * <code>BatchPrediction</code>. The URL can identify either a file or an Amazon
     * Simple Storage Solution (Amazon S3) bucket or directory.</li> </ul>
     */
    inline DescribeBatchPredictionsRequest& WithFilterVariable(BatchPredictionFilterVariable&& value) { SetFilterVariable(std::move(value)); return *this;}


    /**
     * <p>The equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that exactly match the value specified with
     * <code>EQ</code>.</p>
     */
    inline const Aws::String& GetEQ() const{ return m_eQ; }

    /**
     * <p>The equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that exactly match the value specified with
     * <code>EQ</code>.</p>
     */
    inline bool EQHasBeenSet() const { return m_eQHasBeenSet; }

    /**
     * <p>The equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that exactly match the value specified with
     * <code>EQ</code>.</p>
     */
    inline void SetEQ(const Aws::String& value) { m_eQHasBeenSet = true; m_eQ = value; }

    /**
     * <p>The equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that exactly match the value specified with
     * <code>EQ</code>.</p>
     */
    inline void SetEQ(Aws::String&& value) { m_eQHasBeenSet = true; m_eQ = std::move(value); }

    /**
     * <p>The equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that exactly match the value specified with
     * <code>EQ</code>.</p>
     */
    inline void SetEQ(const char* value) { m_eQHasBeenSet = true; m_eQ.assign(value); }

    /**
     * <p>The equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that exactly match the value specified with
     * <code>EQ</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithEQ(const Aws::String& value) { SetEQ(value); return *this;}

    /**
     * <p>The equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that exactly match the value specified with
     * <code>EQ</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithEQ(Aws::String&& value) { SetEQ(std::move(value)); return *this;}

    /**
     * <p>The equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that exactly match the value specified with
     * <code>EQ</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithEQ(const char* value) { SetEQ(value); return *this;}


    /**
     * <p>The greater than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are greater than the value specified
     * with <code>GT</code>.</p>
     */
    inline const Aws::String& GetGT() const{ return m_gT; }

    /**
     * <p>The greater than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are greater than the value specified
     * with <code>GT</code>.</p>
     */
    inline bool GTHasBeenSet() const { return m_gTHasBeenSet; }

    /**
     * <p>The greater than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are greater than the value specified
     * with <code>GT</code>.</p>
     */
    inline void SetGT(const Aws::String& value) { m_gTHasBeenSet = true; m_gT = value; }

    /**
     * <p>The greater than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are greater than the value specified
     * with <code>GT</code>.</p>
     */
    inline void SetGT(Aws::String&& value) { m_gTHasBeenSet = true; m_gT = std::move(value); }

    /**
     * <p>The greater than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are greater than the value specified
     * with <code>GT</code>.</p>
     */
    inline void SetGT(const char* value) { m_gTHasBeenSet = true; m_gT.assign(value); }

    /**
     * <p>The greater than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are greater than the value specified
     * with <code>GT</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithGT(const Aws::String& value) { SetGT(value); return *this;}

    /**
     * <p>The greater than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are greater than the value specified
     * with <code>GT</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithGT(Aws::String&& value) { SetGT(std::move(value)); return *this;}

    /**
     * <p>The greater than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are greater than the value specified
     * with <code>GT</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithGT(const char* value) { SetGT(value); return *this;}


    /**
     * <p>The less than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are less than the value specified with
     * <code>LT</code>.</p>
     */
    inline const Aws::String& GetLT() const{ return m_lT; }

    /**
     * <p>The less than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are less than the value specified with
     * <code>LT</code>.</p>
     */
    inline bool LTHasBeenSet() const { return m_lTHasBeenSet; }

    /**
     * <p>The less than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are less than the value specified with
     * <code>LT</code>.</p>
     */
    inline void SetLT(const Aws::String& value) { m_lTHasBeenSet = true; m_lT = value; }

    /**
     * <p>The less than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are less than the value specified with
     * <code>LT</code>.</p>
     */
    inline void SetLT(Aws::String&& value) { m_lTHasBeenSet = true; m_lT = std::move(value); }

    /**
     * <p>The less than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are less than the value specified with
     * <code>LT</code>.</p>
     */
    inline void SetLT(const char* value) { m_lTHasBeenSet = true; m_lT.assign(value); }

    /**
     * <p>The less than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are less than the value specified with
     * <code>LT</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithLT(const Aws::String& value) { SetLT(value); return *this;}

    /**
     * <p>The less than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are less than the value specified with
     * <code>LT</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithLT(Aws::String&& value) { SetLT(std::move(value)); return *this;}

    /**
     * <p>The less than operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values that are less than the value specified with
     * <code>LT</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithLT(const char* value) { SetLT(value); return *this;}


    /**
     * <p>The greater than or equal to operator. The <code>BatchPrediction</code>
     * results will have <code>FilterVariable</code> values that are greater than or
     * equal to the value specified with <code>GE</code>. </p>
     */
    inline const Aws::String& GetGE() const{ return m_gE; }

    /**
     * <p>The greater than or equal to operator. The <code>BatchPrediction</code>
     * results will have <code>FilterVariable</code> values that are greater than or
     * equal to the value specified with <code>GE</code>. </p>
     */
    inline bool GEHasBeenSet() const { return m_gEHasBeenSet; }

    /**
     * <p>The greater than or equal to operator. The <code>BatchPrediction</code>
     * results will have <code>FilterVariable</code> values that are greater than or
     * equal to the value specified with <code>GE</code>. </p>
     */
    inline void SetGE(const Aws::String& value) { m_gEHasBeenSet = true; m_gE = value; }

    /**
     * <p>The greater than or equal to operator. The <code>BatchPrediction</code>
     * results will have <code>FilterVariable</code> values that are greater than or
     * equal to the value specified with <code>GE</code>. </p>
     */
    inline void SetGE(Aws::String&& value) { m_gEHasBeenSet = true; m_gE = std::move(value); }

    /**
     * <p>The greater than or equal to operator. The <code>BatchPrediction</code>
     * results will have <code>FilterVariable</code> values that are greater than or
     * equal to the value specified with <code>GE</code>. </p>
     */
    inline void SetGE(const char* value) { m_gEHasBeenSet = true; m_gE.assign(value); }

    /**
     * <p>The greater than or equal to operator. The <code>BatchPrediction</code>
     * results will have <code>FilterVariable</code> values that are greater than or
     * equal to the value specified with <code>GE</code>. </p>
     */
    inline DescribeBatchPredictionsRequest& WithGE(const Aws::String& value) { SetGE(value); return *this;}

    /**
     * <p>The greater than or equal to operator. The <code>BatchPrediction</code>
     * results will have <code>FilterVariable</code> values that are greater than or
     * equal to the value specified with <code>GE</code>. </p>
     */
    inline DescribeBatchPredictionsRequest& WithGE(Aws::String&& value) { SetGE(std::move(value)); return *this;}

    /**
     * <p>The greater than or equal to operator. The <code>BatchPrediction</code>
     * results will have <code>FilterVariable</code> values that are greater than or
     * equal to the value specified with <code>GE</code>. </p>
     */
    inline DescribeBatchPredictionsRequest& WithGE(const char* value) { SetGE(value); return *this;}


    /**
     * <p>The less than or equal to operator. The <code>BatchPrediction</code> results
     * will have <code>FilterVariable</code> values that are less than or equal to the
     * value specified with <code>LE</code>.</p>
     */
    inline const Aws::String& GetLE() const{ return m_lE; }

    /**
     * <p>The less than or equal to operator. The <code>BatchPrediction</code> results
     * will have <code>FilterVariable</code> values that are less than or equal to the
     * value specified with <code>LE</code>.</p>
     */
    inline bool LEHasBeenSet() const { return m_lEHasBeenSet; }

    /**
     * <p>The less than or equal to operator. The <code>BatchPrediction</code> results
     * will have <code>FilterVariable</code> values that are less than or equal to the
     * value specified with <code>LE</code>.</p>
     */
    inline void SetLE(const Aws::String& value) { m_lEHasBeenSet = true; m_lE = value; }

    /**
     * <p>The less than or equal to operator. The <code>BatchPrediction</code> results
     * will have <code>FilterVariable</code> values that are less than or equal to the
     * value specified with <code>LE</code>.</p>
     */
    inline void SetLE(Aws::String&& value) { m_lEHasBeenSet = true; m_lE = std::move(value); }

    /**
     * <p>The less than or equal to operator. The <code>BatchPrediction</code> results
     * will have <code>FilterVariable</code> values that are less than or equal to the
     * value specified with <code>LE</code>.</p>
     */
    inline void SetLE(const char* value) { m_lEHasBeenSet = true; m_lE.assign(value); }

    /**
     * <p>The less than or equal to operator. The <code>BatchPrediction</code> results
     * will have <code>FilterVariable</code> values that are less than or equal to the
     * value specified with <code>LE</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithLE(const Aws::String& value) { SetLE(value); return *this;}

    /**
     * <p>The less than or equal to operator. The <code>BatchPrediction</code> results
     * will have <code>FilterVariable</code> values that are less than or equal to the
     * value specified with <code>LE</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithLE(Aws::String&& value) { SetLE(std::move(value)); return *this;}

    /**
     * <p>The less than or equal to operator. The <code>BatchPrediction</code> results
     * will have <code>FilterVariable</code> values that are less than or equal to the
     * value specified with <code>LE</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithLE(const char* value) { SetLE(value); return *this;}


    /**
     * <p>The not equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values not equal to the value specified with
     * <code>NE</code>.</p>
     */
    inline const Aws::String& GetNE() const{ return m_nE; }

    /**
     * <p>The not equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values not equal to the value specified with
     * <code>NE</code>.</p>
     */
    inline bool NEHasBeenSet() const { return m_nEHasBeenSet; }

    /**
     * <p>The not equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values not equal to the value specified with
     * <code>NE</code>.</p>
     */
    inline void SetNE(const Aws::String& value) { m_nEHasBeenSet = true; m_nE = value; }

    /**
     * <p>The not equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values not equal to the value specified with
     * <code>NE</code>.</p>
     */
    inline void SetNE(Aws::String&& value) { m_nEHasBeenSet = true; m_nE = std::move(value); }

    /**
     * <p>The not equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values not equal to the value specified with
     * <code>NE</code>.</p>
     */
    inline void SetNE(const char* value) { m_nEHasBeenSet = true; m_nE.assign(value); }

    /**
     * <p>The not equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values not equal to the value specified with
     * <code>NE</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithNE(const Aws::String& value) { SetNE(value); return *this;}

    /**
     * <p>The not equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values not equal to the value specified with
     * <code>NE</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithNE(Aws::String&& value) { SetNE(std::move(value)); return *this;}

    /**
     * <p>The not equal to operator. The <code>BatchPrediction</code> results will have
     * <code>FilterVariable</code> values not equal to the value specified with
     * <code>NE</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithNE(const char* value) { SetNE(value); return *this;}


    /**
     * <p>A string that is found at the beginning of a variable, such as
     * <code>Name</code> or <code>Id</code>.</p> <p>For example, a <code>Batch
     * Prediction</code> operation could have the <code>Name</code>
     * <code>2014-09-09-HolidayGiftMailer</code>. To search for this
     * <code>BatchPrediction</code>, select <code>Name</code> for the
     * <code>FilterVariable</code> and any of the following strings for the
     * <code>Prefix</code>: </p> <ul> <li><p>2014-09</p></li>
     * <li><p>2014-09-09</p></li> <li><p>2014-09-09-Holiday</p></li> </ul>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>A string that is found at the beginning of a variable, such as
     * <code>Name</code> or <code>Id</code>.</p> <p>For example, a <code>Batch
     * Prediction</code> operation could have the <code>Name</code>
     * <code>2014-09-09-HolidayGiftMailer</code>. To search for this
     * <code>BatchPrediction</code>, select <code>Name</code> for the
     * <code>FilterVariable</code> and any of the following strings for the
     * <code>Prefix</code>: </p> <ul> <li><p>2014-09</p></li>
     * <li><p>2014-09-09</p></li> <li><p>2014-09-09-Holiday</p></li> </ul>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>A string that is found at the beginning of a variable, such as
     * <code>Name</code> or <code>Id</code>.</p> <p>For example, a <code>Batch
     * Prediction</code> operation could have the <code>Name</code>
     * <code>2014-09-09-HolidayGiftMailer</code>. To search for this
     * <code>BatchPrediction</code>, select <code>Name</code> for the
     * <code>FilterVariable</code> and any of the following strings for the
     * <code>Prefix</code>: </p> <ul> <li><p>2014-09</p></li>
     * <li><p>2014-09-09</p></li> <li><p>2014-09-09-Holiday</p></li> </ul>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>A string that is found at the beginning of a variable, such as
     * <code>Name</code> or <code>Id</code>.</p> <p>For example, a <code>Batch
     * Prediction</code> operation could have the <code>Name</code>
     * <code>2014-09-09-HolidayGiftMailer</code>. To search for this
     * <code>BatchPrediction</code>, select <code>Name</code> for the
     * <code>FilterVariable</code> and any of the following strings for the
     * <code>Prefix</code>: </p> <ul> <li><p>2014-09</p></li>
     * <li><p>2014-09-09</p></li> <li><p>2014-09-09-Holiday</p></li> </ul>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>A string that is found at the beginning of a variable, such as
     * <code>Name</code> or <code>Id</code>.</p> <p>For example, a <code>Batch
     * Prediction</code> operation could have the <code>Name</code>
     * <code>2014-09-09-HolidayGiftMailer</code>. To search for this
     * <code>BatchPrediction</code>, select <code>Name</code> for the
     * <code>FilterVariable</code> and any of the following strings for the
     * <code>Prefix</code>: </p> <ul> <li><p>2014-09</p></li>
     * <li><p>2014-09-09</p></li> <li><p>2014-09-09-Holiday</p></li> </ul>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>A string that is found at the beginning of a variable, such as
     * <code>Name</code> or <code>Id</code>.</p> <p>For example, a <code>Batch
     * Prediction</code> operation could have the <code>Name</code>
     * <code>2014-09-09-HolidayGiftMailer</code>. To search for this
     * <code>BatchPrediction</code>, select <code>Name</code> for the
     * <code>FilterVariable</code> and any of the following strings for the
     * <code>Prefix</code>: </p> <ul> <li><p>2014-09</p></li>
     * <li><p>2014-09-09</p></li> <li><p>2014-09-09-Holiday</p></li> </ul>
     */
    inline DescribeBatchPredictionsRequest& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>A string that is found at the beginning of a variable, such as
     * <code>Name</code> or <code>Id</code>.</p> <p>For example, a <code>Batch
     * Prediction</code> operation could have the <code>Name</code>
     * <code>2014-09-09-HolidayGiftMailer</code>. To search for this
     * <code>BatchPrediction</code>, select <code>Name</code> for the
     * <code>FilterVariable</code> and any of the following strings for the
     * <code>Prefix</code>: </p> <ul> <li><p>2014-09</p></li>
     * <li><p>2014-09-09</p></li> <li><p>2014-09-09-Holiday</p></li> </ul>
     */
    inline DescribeBatchPredictionsRequest& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>A string that is found at the beginning of a variable, such as
     * <code>Name</code> or <code>Id</code>.</p> <p>For example, a <code>Batch
     * Prediction</code> operation could have the <code>Name</code>
     * <code>2014-09-09-HolidayGiftMailer</code>. To search for this
     * <code>BatchPrediction</code>, select <code>Name</code> for the
     * <code>FilterVariable</code> and any of the following strings for the
     * <code>Prefix</code>: </p> <ul> <li><p>2014-09</p></li>
     * <li><p>2014-09-09</p></li> <li><p>2014-09-09-Holiday</p></li> </ul>
     */
    inline DescribeBatchPredictionsRequest& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>A two-value parameter that determines the sequence of the resulting list of
     * <code>MLModel</code>s.</p> <ul> <li> <code>asc</code> - Arranges the list in
     * ascending order (A-Z, 0-9).</li> <li> <code>dsc</code> - Arranges the list in
     * descending order (Z-A, 9-0).</li> </ul> <p>Results are sorted by
     * <code>FilterVariable</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>A two-value parameter that determines the sequence of the resulting list of
     * <code>MLModel</code>s.</p> <ul> <li> <code>asc</code> - Arranges the list in
     * ascending order (A-Z, 0-9).</li> <li> <code>dsc</code> - Arranges the list in
     * descending order (Z-A, 9-0).</li> </ul> <p>Results are sorted by
     * <code>FilterVariable</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>A two-value parameter that determines the sequence of the resulting list of
     * <code>MLModel</code>s.</p> <ul> <li> <code>asc</code> - Arranges the list in
     * ascending order (A-Z, 0-9).</li> <li> <code>dsc</code> - Arranges the list in
     * descending order (Z-A, 9-0).</li> </ul> <p>Results are sorted by
     * <code>FilterVariable</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>A two-value parameter that determines the sequence of the resulting list of
     * <code>MLModel</code>s.</p> <ul> <li> <code>asc</code> - Arranges the list in
     * ascending order (A-Z, 0-9).</li> <li> <code>dsc</code> - Arranges the list in
     * descending order (Z-A, 9-0).</li> </ul> <p>Results are sorted by
     * <code>FilterVariable</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>A two-value parameter that determines the sequence of the resulting list of
     * <code>MLModel</code>s.</p> <ul> <li> <code>asc</code> - Arranges the list in
     * ascending order (A-Z, 0-9).</li> <li> <code>dsc</code> - Arranges the list in
     * descending order (Z-A, 9-0).</li> </ul> <p>Results are sorted by
     * <code>FilterVariable</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>A two-value parameter that determines the sequence of the resulting list of
     * <code>MLModel</code>s.</p> <ul> <li> <code>asc</code> - Arranges the list in
     * ascending order (A-Z, 0-9).</li> <li> <code>dsc</code> - Arranges the list in
     * descending order (Z-A, 9-0).</li> </ul> <p>Results are sorted by
     * <code>FilterVariable</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>An ID of the page in the paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An ID of the page in the paginated results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An ID of the page in the paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An ID of the page in the paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An ID of the page in the paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An ID of the page in the paginated results.</p>
     */
    inline DescribeBatchPredictionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An ID of the page in the paginated results.</p>
     */
    inline DescribeBatchPredictionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An ID of the page in the paginated results.</p>
     */
    inline DescribeBatchPredictionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of pages of information to include in the result. The range of
     * acceptable values is <code>1</code> through <code>100</code>. The default value
     * is <code>100</code>.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The number of pages of information to include in the result. The range of
     * acceptable values is <code>1</code> through <code>100</code>. The default value
     * is <code>100</code>.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The number of pages of information to include in the result. The range of
     * acceptable values is <code>1</code> through <code>100</code>. The default value
     * is <code>100</code>.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The number of pages of information to include in the result. The range of
     * acceptable values is <code>1</code> through <code>100</code>. The default value
     * is <code>100</code>.</p>
     */
    inline DescribeBatchPredictionsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    BatchPredictionFilterVariable m_filterVariable;
    bool m_filterVariableHasBeenSet;

    Aws::String m_eQ;
    bool m_eQHasBeenSet;

    Aws::String m_gT;
    bool m_gTHasBeenSet;

    Aws::String m_lT;
    bool m_lTHasBeenSet;

    Aws::String m_gE;
    bool m_gEHasBeenSet;

    Aws::String m_lE;
    bool m_lEHasBeenSet;

    Aws::String m_nE;
    bool m_nEHasBeenSet;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
