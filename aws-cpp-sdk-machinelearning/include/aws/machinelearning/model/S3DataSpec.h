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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MachineLearning
{
namespace Model
{

  /**
   * <p> Describes the data specification of a <code>DataSource</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/S3DataSpec">AWS
   * API Reference</a></p>
   */
  class AWS_MACHINELEARNING_API S3DataSpec
  {
  public:
    S3DataSpec();
    S3DataSpec(Aws::Utils::Json::JsonView jsonValue);
    S3DataSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location of the data file(s) used by a <code>DataSource</code>. The URI
     * specifies a data file or an Amazon Simple Storage Service (Amazon S3) directory
     * or bucket containing data files.</p>
     */
    inline const Aws::String& GetDataLocationS3() const{ return m_dataLocationS3; }

    /**
     * <p>The location of the data file(s) used by a <code>DataSource</code>. The URI
     * specifies a data file or an Amazon Simple Storage Service (Amazon S3) directory
     * or bucket containing data files.</p>
     */
    inline bool DataLocationS3HasBeenSet() const { return m_dataLocationS3HasBeenSet; }

    /**
     * <p>The location of the data file(s) used by a <code>DataSource</code>. The URI
     * specifies a data file or an Amazon Simple Storage Service (Amazon S3) directory
     * or bucket containing data files.</p>
     */
    inline void SetDataLocationS3(const Aws::String& value) { m_dataLocationS3HasBeenSet = true; m_dataLocationS3 = value; }

    /**
     * <p>The location of the data file(s) used by a <code>DataSource</code>. The URI
     * specifies a data file or an Amazon Simple Storage Service (Amazon S3) directory
     * or bucket containing data files.</p>
     */
    inline void SetDataLocationS3(Aws::String&& value) { m_dataLocationS3HasBeenSet = true; m_dataLocationS3 = std::move(value); }

    /**
     * <p>The location of the data file(s) used by a <code>DataSource</code>. The URI
     * specifies a data file or an Amazon Simple Storage Service (Amazon S3) directory
     * or bucket containing data files.</p>
     */
    inline void SetDataLocationS3(const char* value) { m_dataLocationS3HasBeenSet = true; m_dataLocationS3.assign(value); }

    /**
     * <p>The location of the data file(s) used by a <code>DataSource</code>. The URI
     * specifies a data file or an Amazon Simple Storage Service (Amazon S3) directory
     * or bucket containing data files.</p>
     */
    inline S3DataSpec& WithDataLocationS3(const Aws::String& value) { SetDataLocationS3(value); return *this;}

    /**
     * <p>The location of the data file(s) used by a <code>DataSource</code>. The URI
     * specifies a data file or an Amazon Simple Storage Service (Amazon S3) directory
     * or bucket containing data files.</p>
     */
    inline S3DataSpec& WithDataLocationS3(Aws::String&& value) { SetDataLocationS3(std::move(value)); return *this;}

    /**
     * <p>The location of the data file(s) used by a <code>DataSource</code>. The URI
     * specifies a data file or an Amazon Simple Storage Service (Amazon S3) directory
     * or bucket containing data files.</p>
     */
    inline S3DataSpec& WithDataLocationS3(const char* value) { SetDataLocationS3(value); return *this;}


    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline const Aws::String& GetDataRearrangement() const{ return m_dataRearrangement; }

    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline bool DataRearrangementHasBeenSet() const { return m_dataRearrangementHasBeenSet; }

    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline void SetDataRearrangement(const Aws::String& value) { m_dataRearrangementHasBeenSet = true; m_dataRearrangement = value; }

    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline void SetDataRearrangement(Aws::String&& value) { m_dataRearrangementHasBeenSet = true; m_dataRearrangement = std::move(value); }

    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline void SetDataRearrangement(const char* value) { m_dataRearrangementHasBeenSet = true; m_dataRearrangement.assign(value); }

    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline S3DataSpec& WithDataRearrangement(const Aws::String& value) { SetDataRearrangement(value); return *this;}

    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline S3DataSpec& WithDataRearrangement(Aws::String&& value) { SetDataRearrangement(std::move(value)); return *this;}

    /**
     * <p>A JSON string that represents the splitting and rearrangement processing to
     * be applied to a <code>DataSource</code>. If the <code>DataRearrangement</code>
     * parameter is not provided, all of the input data is used to create the
     * <code>Datasource</code>.</p> <p>There are multiple parameters that control what
     * data is used to create a datasource:</p> <ul>
     * <li><p><b><code>percentBegin</code></b></p> <p>Use <code>percentBegin</code> to
     * indicate the beginning of the range of the data used to create the Datasource.
     * If you do not include <code>percentBegin</code> and <code>percentEnd</code>,
     * Amazon ML includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>percentEnd</code></b></p> <p>Use <code>percentEnd</code> to
     * indicate the end of the range of the data used to create the Datasource. If you
     * do not include <code>percentBegin</code> and <code>percentEnd</code>, Amazon ML
     * includes all of the data when creating the datasource.</p></li>
     * <li><p><b><code>complement</code></b></p> <p>The <code>complement</code>
     * parameter instructs Amazon ML to use the data that is not included in the range
     * of <code>percentBegin</code> to <code>percentEnd</code> to create a datasource.
     * The <code>complement</code> parameter is useful if you need to create
     * complementary datasources for training and evaluation. To create a complementary
     * datasource, use the same values for <code>percentBegin</code> and
     * <code>percentEnd</code>, along with the <code>complement</code> parameter.</p>
     * <p>For example, the following two datasources do not share any data, and can be
     * used to train and evaluate a model. The first datasource has 25 percent of the
     * data, and the second one has 75 percent of the data.</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":0, "percentEnd":25}}</code></p>
     * <p>Datasource for training: <code>{"splitting":{"percentBegin":0,
     * "percentEnd":25, "complement":"true"}}</code></p> </li>
     * <li><p><b><code>strategy</code></b></p> <p>To change how Amazon ML splits the
     * data for a datasource, use the <code>strategy</code> parameter.</p> <p>The
     * default value for the <code>strategy</code> parameter is
     * <code>sequential</code>, meaning that Amazon ML takes all of the data records
     * between the <code>percentBegin</code> and <code>percentEnd</code> parameters for
     * the datasource, in the order that the records appear in the input data.</p>
     * <p>The following two <code>DataRearrangement</code> lines are examples of
     * sequentially ordered training and evaluation datasources:</p> <p>Datasource for
     * evaluation: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential"}}</code></p> <p>Datasource for training:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"sequential", "complement":"true"}}</code></p> <p>To randomly split
     * the input data into the proportions indicated by the percentBegin and percentEnd
     * parameters, set the <code>strategy</code> parameter to <code>random</code> and
     * provide a string that is used as the seed value for the random data splitting
     * (for example, you can use the S3 path to your data as the random seed string).
     * If you choose the random split strategy, Amazon ML assigns each row of data a
     * pseudo-random number between 0 and 100, and then selects the rows that have an
     * assigned number between <code>percentBegin</code> and <code>percentEnd</code>.
     * Pseudo-random numbers are assigned using both the input seed string value and
     * the byte offset as a seed, so changing the data results in a different split.
     * Any existing ordering is preserved. The random splitting strategy ensures that
     * variables in the training and evaluation data are distributed similarly. It is
     * useful in the cases where the input data may have an implicit sort order, which
     * would otherwise result in training and evaluation datasources containing
     * non-similar data records.</p> <p>The following two
     * <code>DataRearrangement</code> lines are examples of non-sequentially ordered
     * training and evaluation datasources:</p> <p>Datasource for evaluation:
     * <code>{"splitting":{"percentBegin":70, "percentEnd":100, "strategy":"random",
     * "randomSeed"="s3://my_s3_path/bucket/file.csv"}}</code></p> <p>Datasource for
     * training: <code>{"splitting":{"percentBegin":70, "percentEnd":100,
     * "strategy":"random", "randomSeed"="s3://my_s3_path/bucket/file.csv",
     * "complement":"true"}}</code></p> </li> </ul>
     */
    inline S3DataSpec& WithDataRearrangement(const char* value) { SetDataRearrangement(value); return *this;}


    /**
     * <p> A JSON string that represents the schema for an Amazon S3
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p> <p>Define
     * your <code>DataSchema</code> as a series of key-value pairs.
     * <code>attributes</code> and <code>excludedVariableNames</code> have an array of
     * key-value pairs for their value. Use the following format to define your
     * <code>DataSchema</code>.</p> <p>{ "version": "1.0",</p> <p>
     * "recordAnnotationFieldName": "F1",</p> <p> "recordWeightFieldName": "F2",</p>
     * <p> "targetFieldName": "F3",</p> <p> "dataFormat": "CSV",</p> <p>
     * "dataFileContainsHeader": true,</p> <p> "attributes": [</p> <p> { "fieldName":
     * "F1", "fieldType": "TEXT" }, { "fieldName": "F2", "fieldType": "NUMERIC" }, {
     * "fieldName": "F3", "fieldType": "CATEGORICAL" }, { "fieldName": "F4",
     * "fieldType": "NUMERIC" }, { "fieldName": "F5", "fieldType": "CATEGORICAL" }, {
     * "fieldName": "F6", "fieldType": "TEXT" }, { "fieldName": "F7", "fieldType":
     * "WEIGHTED_INT_SEQUENCE" }, { "fieldName": "F8", "fieldType":
     * "WEIGHTED_STRING_SEQUENCE" } ],</p> <p> "excludedVariableNames": [ "F6" ] } </p>
     * <?oxy_insert_end>
     */
    inline const Aws::String& GetDataSchema() const{ return m_dataSchema; }

    /**
     * <p> A JSON string that represents the schema for an Amazon S3
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p> <p>Define
     * your <code>DataSchema</code> as a series of key-value pairs.
     * <code>attributes</code> and <code>excludedVariableNames</code> have an array of
     * key-value pairs for their value. Use the following format to define your
     * <code>DataSchema</code>.</p> <p>{ "version": "1.0",</p> <p>
     * "recordAnnotationFieldName": "F1",</p> <p> "recordWeightFieldName": "F2",</p>
     * <p> "targetFieldName": "F3",</p> <p> "dataFormat": "CSV",</p> <p>
     * "dataFileContainsHeader": true,</p> <p> "attributes": [</p> <p> { "fieldName":
     * "F1", "fieldType": "TEXT" }, { "fieldName": "F2", "fieldType": "NUMERIC" }, {
     * "fieldName": "F3", "fieldType": "CATEGORICAL" }, { "fieldName": "F4",
     * "fieldType": "NUMERIC" }, { "fieldName": "F5", "fieldType": "CATEGORICAL" }, {
     * "fieldName": "F6", "fieldType": "TEXT" }, { "fieldName": "F7", "fieldType":
     * "WEIGHTED_INT_SEQUENCE" }, { "fieldName": "F8", "fieldType":
     * "WEIGHTED_STRING_SEQUENCE" } ],</p> <p> "excludedVariableNames": [ "F6" ] } </p>
     * <?oxy_insert_end>
     */
    inline bool DataSchemaHasBeenSet() const { return m_dataSchemaHasBeenSet; }

    /**
     * <p> A JSON string that represents the schema for an Amazon S3
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p> <p>Define
     * your <code>DataSchema</code> as a series of key-value pairs.
     * <code>attributes</code> and <code>excludedVariableNames</code> have an array of
     * key-value pairs for their value. Use the following format to define your
     * <code>DataSchema</code>.</p> <p>{ "version": "1.0",</p> <p>
     * "recordAnnotationFieldName": "F1",</p> <p> "recordWeightFieldName": "F2",</p>
     * <p> "targetFieldName": "F3",</p> <p> "dataFormat": "CSV",</p> <p>
     * "dataFileContainsHeader": true,</p> <p> "attributes": [</p> <p> { "fieldName":
     * "F1", "fieldType": "TEXT" }, { "fieldName": "F2", "fieldType": "NUMERIC" }, {
     * "fieldName": "F3", "fieldType": "CATEGORICAL" }, { "fieldName": "F4",
     * "fieldType": "NUMERIC" }, { "fieldName": "F5", "fieldType": "CATEGORICAL" }, {
     * "fieldName": "F6", "fieldType": "TEXT" }, { "fieldName": "F7", "fieldType":
     * "WEIGHTED_INT_SEQUENCE" }, { "fieldName": "F8", "fieldType":
     * "WEIGHTED_STRING_SEQUENCE" } ],</p> <p> "excludedVariableNames": [ "F6" ] } </p>
     * <?oxy_insert_end>
     */
    inline void SetDataSchema(const Aws::String& value) { m_dataSchemaHasBeenSet = true; m_dataSchema = value; }

    /**
     * <p> A JSON string that represents the schema for an Amazon S3
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p> <p>Define
     * your <code>DataSchema</code> as a series of key-value pairs.
     * <code>attributes</code> and <code>excludedVariableNames</code> have an array of
     * key-value pairs for their value. Use the following format to define your
     * <code>DataSchema</code>.</p> <p>{ "version": "1.0",</p> <p>
     * "recordAnnotationFieldName": "F1",</p> <p> "recordWeightFieldName": "F2",</p>
     * <p> "targetFieldName": "F3",</p> <p> "dataFormat": "CSV",</p> <p>
     * "dataFileContainsHeader": true,</p> <p> "attributes": [</p> <p> { "fieldName":
     * "F1", "fieldType": "TEXT" }, { "fieldName": "F2", "fieldType": "NUMERIC" }, {
     * "fieldName": "F3", "fieldType": "CATEGORICAL" }, { "fieldName": "F4",
     * "fieldType": "NUMERIC" }, { "fieldName": "F5", "fieldType": "CATEGORICAL" }, {
     * "fieldName": "F6", "fieldType": "TEXT" }, { "fieldName": "F7", "fieldType":
     * "WEIGHTED_INT_SEQUENCE" }, { "fieldName": "F8", "fieldType":
     * "WEIGHTED_STRING_SEQUENCE" } ],</p> <p> "excludedVariableNames": [ "F6" ] } </p>
     * <?oxy_insert_end>
     */
    inline void SetDataSchema(Aws::String&& value) { m_dataSchemaHasBeenSet = true; m_dataSchema = std::move(value); }

    /**
     * <p> A JSON string that represents the schema for an Amazon S3
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p> <p>Define
     * your <code>DataSchema</code> as a series of key-value pairs.
     * <code>attributes</code> and <code>excludedVariableNames</code> have an array of
     * key-value pairs for their value. Use the following format to define your
     * <code>DataSchema</code>.</p> <p>{ "version": "1.0",</p> <p>
     * "recordAnnotationFieldName": "F1",</p> <p> "recordWeightFieldName": "F2",</p>
     * <p> "targetFieldName": "F3",</p> <p> "dataFormat": "CSV",</p> <p>
     * "dataFileContainsHeader": true,</p> <p> "attributes": [</p> <p> { "fieldName":
     * "F1", "fieldType": "TEXT" }, { "fieldName": "F2", "fieldType": "NUMERIC" }, {
     * "fieldName": "F3", "fieldType": "CATEGORICAL" }, { "fieldName": "F4",
     * "fieldType": "NUMERIC" }, { "fieldName": "F5", "fieldType": "CATEGORICAL" }, {
     * "fieldName": "F6", "fieldType": "TEXT" }, { "fieldName": "F7", "fieldType":
     * "WEIGHTED_INT_SEQUENCE" }, { "fieldName": "F8", "fieldType":
     * "WEIGHTED_STRING_SEQUENCE" } ],</p> <p> "excludedVariableNames": [ "F6" ] } </p>
     * <?oxy_insert_end>
     */
    inline void SetDataSchema(const char* value) { m_dataSchemaHasBeenSet = true; m_dataSchema.assign(value); }

    /**
     * <p> A JSON string that represents the schema for an Amazon S3
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p> <p>Define
     * your <code>DataSchema</code> as a series of key-value pairs.
     * <code>attributes</code> and <code>excludedVariableNames</code> have an array of
     * key-value pairs for their value. Use the following format to define your
     * <code>DataSchema</code>.</p> <p>{ "version": "1.0",</p> <p>
     * "recordAnnotationFieldName": "F1",</p> <p> "recordWeightFieldName": "F2",</p>
     * <p> "targetFieldName": "F3",</p> <p> "dataFormat": "CSV",</p> <p>
     * "dataFileContainsHeader": true,</p> <p> "attributes": [</p> <p> { "fieldName":
     * "F1", "fieldType": "TEXT" }, { "fieldName": "F2", "fieldType": "NUMERIC" }, {
     * "fieldName": "F3", "fieldType": "CATEGORICAL" }, { "fieldName": "F4",
     * "fieldType": "NUMERIC" }, { "fieldName": "F5", "fieldType": "CATEGORICAL" }, {
     * "fieldName": "F6", "fieldType": "TEXT" }, { "fieldName": "F7", "fieldType":
     * "WEIGHTED_INT_SEQUENCE" }, { "fieldName": "F8", "fieldType":
     * "WEIGHTED_STRING_SEQUENCE" } ],</p> <p> "excludedVariableNames": [ "F6" ] } </p>
     * <?oxy_insert_end>
     */
    inline S3DataSpec& WithDataSchema(const Aws::String& value) { SetDataSchema(value); return *this;}

    /**
     * <p> A JSON string that represents the schema for an Amazon S3
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p> <p>Define
     * your <code>DataSchema</code> as a series of key-value pairs.
     * <code>attributes</code> and <code>excludedVariableNames</code> have an array of
     * key-value pairs for their value. Use the following format to define your
     * <code>DataSchema</code>.</p> <p>{ "version": "1.0",</p> <p>
     * "recordAnnotationFieldName": "F1",</p> <p> "recordWeightFieldName": "F2",</p>
     * <p> "targetFieldName": "F3",</p> <p> "dataFormat": "CSV",</p> <p>
     * "dataFileContainsHeader": true,</p> <p> "attributes": [</p> <p> { "fieldName":
     * "F1", "fieldType": "TEXT" }, { "fieldName": "F2", "fieldType": "NUMERIC" }, {
     * "fieldName": "F3", "fieldType": "CATEGORICAL" }, { "fieldName": "F4",
     * "fieldType": "NUMERIC" }, { "fieldName": "F5", "fieldType": "CATEGORICAL" }, {
     * "fieldName": "F6", "fieldType": "TEXT" }, { "fieldName": "F7", "fieldType":
     * "WEIGHTED_INT_SEQUENCE" }, { "fieldName": "F8", "fieldType":
     * "WEIGHTED_STRING_SEQUENCE" } ],</p> <p> "excludedVariableNames": [ "F6" ] } </p>
     * <?oxy_insert_end>
     */
    inline S3DataSpec& WithDataSchema(Aws::String&& value) { SetDataSchema(std::move(value)); return *this;}

    /**
     * <p> A JSON string that represents the schema for an Amazon S3
     * <code>DataSource</code>. The <code>DataSchema</code> defines the structure of
     * the observation data in the data file(s) referenced in the
     * <code>DataSource</code>.</p> <p>You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p> <p>Define
     * your <code>DataSchema</code> as a series of key-value pairs.
     * <code>attributes</code> and <code>excludedVariableNames</code> have an array of
     * key-value pairs for their value. Use the following format to define your
     * <code>DataSchema</code>.</p> <p>{ "version": "1.0",</p> <p>
     * "recordAnnotationFieldName": "F1",</p> <p> "recordWeightFieldName": "F2",</p>
     * <p> "targetFieldName": "F3",</p> <p> "dataFormat": "CSV",</p> <p>
     * "dataFileContainsHeader": true,</p> <p> "attributes": [</p> <p> { "fieldName":
     * "F1", "fieldType": "TEXT" }, { "fieldName": "F2", "fieldType": "NUMERIC" }, {
     * "fieldName": "F3", "fieldType": "CATEGORICAL" }, { "fieldName": "F4",
     * "fieldType": "NUMERIC" }, { "fieldName": "F5", "fieldType": "CATEGORICAL" }, {
     * "fieldName": "F6", "fieldType": "TEXT" }, { "fieldName": "F7", "fieldType":
     * "WEIGHTED_INT_SEQUENCE" }, { "fieldName": "F8", "fieldType":
     * "WEIGHTED_STRING_SEQUENCE" } ],</p> <p> "excludedVariableNames": [ "F6" ] } </p>
     * <?oxy_insert_end>
     */
    inline S3DataSpec& WithDataSchema(const char* value) { SetDataSchema(value); return *this;}


    /**
     * <p>Describes the schema location in Amazon S3. You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p>
     */
    inline const Aws::String& GetDataSchemaLocationS3() const{ return m_dataSchemaLocationS3; }

    /**
     * <p>Describes the schema location in Amazon S3. You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p>
     */
    inline bool DataSchemaLocationS3HasBeenSet() const { return m_dataSchemaLocationS3HasBeenSet; }

    /**
     * <p>Describes the schema location in Amazon S3. You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p>
     */
    inline void SetDataSchemaLocationS3(const Aws::String& value) { m_dataSchemaLocationS3HasBeenSet = true; m_dataSchemaLocationS3 = value; }

    /**
     * <p>Describes the schema location in Amazon S3. You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p>
     */
    inline void SetDataSchemaLocationS3(Aws::String&& value) { m_dataSchemaLocationS3HasBeenSet = true; m_dataSchemaLocationS3 = std::move(value); }

    /**
     * <p>Describes the schema location in Amazon S3. You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p>
     */
    inline void SetDataSchemaLocationS3(const char* value) { m_dataSchemaLocationS3HasBeenSet = true; m_dataSchemaLocationS3.assign(value); }

    /**
     * <p>Describes the schema location in Amazon S3. You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p>
     */
    inline S3DataSpec& WithDataSchemaLocationS3(const Aws::String& value) { SetDataSchemaLocationS3(value); return *this;}

    /**
     * <p>Describes the schema location in Amazon S3. You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p>
     */
    inline S3DataSpec& WithDataSchemaLocationS3(Aws::String&& value) { SetDataSchemaLocationS3(std::move(value)); return *this;}

    /**
     * <p>Describes the schema location in Amazon S3. You must provide either the
     * <code>DataSchema</code> or the <code>DataSchemaLocationS3</code>.</p>
     */
    inline S3DataSpec& WithDataSchemaLocationS3(const char* value) { SetDataSchemaLocationS3(value); return *this;}

  private:

    Aws::String m_dataLocationS3;
    bool m_dataLocationS3HasBeenSet;

    Aws::String m_dataRearrangement;
    bool m_dataRearrangementHasBeenSet;

    Aws::String m_dataSchema;
    bool m_dataSchemaHasBeenSet;

    Aws::String m_dataSchemaLocationS3;
    bool m_dataSchemaLocationS3HasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
