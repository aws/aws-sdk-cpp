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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/JoinSource.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The data structure used to combine the input data and transformed data from
   * the batch transform output into a joined dataset and to store it in an output
   * file. It also contains information on how to filter the input data and the
   * joined dataset. For more information, see <a
   * href="http://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-io-join.html">Batch
   * Transform I/O Join</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DataProcessing">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API DataProcessing
  {
  public:
    DataProcessing();
    DataProcessing(Aws::Utils::Json::JsonView jsonValue);
    DataProcessing& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A JSONPath expression used to select a portion of the input data to pass to
     * the algorithm. Use the <code>InputFilter</code> parameter to exclude fields,
     * such as an ID column, from the input. If you want Amazon SageMaker to pass the
     * entire input dataset to the algorithm, accept the default value
     * <code>$</code>.</p> <p>Examples: <code>"$"</code>, <code>"$[1:]"</code>,
     * <code>"$.features"</code> </p>
     */
    inline const Aws::String& GetInputFilter() const{ return m_inputFilter; }

    /**
     * <p>A JSONPath expression used to select a portion of the input data to pass to
     * the algorithm. Use the <code>InputFilter</code> parameter to exclude fields,
     * such as an ID column, from the input. If you want Amazon SageMaker to pass the
     * entire input dataset to the algorithm, accept the default value
     * <code>$</code>.</p> <p>Examples: <code>"$"</code>, <code>"$[1:]"</code>,
     * <code>"$.features"</code> </p>
     */
    inline bool InputFilterHasBeenSet() const { return m_inputFilterHasBeenSet; }

    /**
     * <p>A JSONPath expression used to select a portion of the input data to pass to
     * the algorithm. Use the <code>InputFilter</code> parameter to exclude fields,
     * such as an ID column, from the input. If you want Amazon SageMaker to pass the
     * entire input dataset to the algorithm, accept the default value
     * <code>$</code>.</p> <p>Examples: <code>"$"</code>, <code>"$[1:]"</code>,
     * <code>"$.features"</code> </p>
     */
    inline void SetInputFilter(const Aws::String& value) { m_inputFilterHasBeenSet = true; m_inputFilter = value; }

    /**
     * <p>A JSONPath expression used to select a portion of the input data to pass to
     * the algorithm. Use the <code>InputFilter</code> parameter to exclude fields,
     * such as an ID column, from the input. If you want Amazon SageMaker to pass the
     * entire input dataset to the algorithm, accept the default value
     * <code>$</code>.</p> <p>Examples: <code>"$"</code>, <code>"$[1:]"</code>,
     * <code>"$.features"</code> </p>
     */
    inline void SetInputFilter(Aws::String&& value) { m_inputFilterHasBeenSet = true; m_inputFilter = std::move(value); }

    /**
     * <p>A JSONPath expression used to select a portion of the input data to pass to
     * the algorithm. Use the <code>InputFilter</code> parameter to exclude fields,
     * such as an ID column, from the input. If you want Amazon SageMaker to pass the
     * entire input dataset to the algorithm, accept the default value
     * <code>$</code>.</p> <p>Examples: <code>"$"</code>, <code>"$[1:]"</code>,
     * <code>"$.features"</code> </p>
     */
    inline void SetInputFilter(const char* value) { m_inputFilterHasBeenSet = true; m_inputFilter.assign(value); }

    /**
     * <p>A JSONPath expression used to select a portion of the input data to pass to
     * the algorithm. Use the <code>InputFilter</code> parameter to exclude fields,
     * such as an ID column, from the input. If you want Amazon SageMaker to pass the
     * entire input dataset to the algorithm, accept the default value
     * <code>$</code>.</p> <p>Examples: <code>"$"</code>, <code>"$[1:]"</code>,
     * <code>"$.features"</code> </p>
     */
    inline DataProcessing& WithInputFilter(const Aws::String& value) { SetInputFilter(value); return *this;}

    /**
     * <p>A JSONPath expression used to select a portion of the input data to pass to
     * the algorithm. Use the <code>InputFilter</code> parameter to exclude fields,
     * such as an ID column, from the input. If you want Amazon SageMaker to pass the
     * entire input dataset to the algorithm, accept the default value
     * <code>$</code>.</p> <p>Examples: <code>"$"</code>, <code>"$[1:]"</code>,
     * <code>"$.features"</code> </p>
     */
    inline DataProcessing& WithInputFilter(Aws::String&& value) { SetInputFilter(std::move(value)); return *this;}

    /**
     * <p>A JSONPath expression used to select a portion of the input data to pass to
     * the algorithm. Use the <code>InputFilter</code> parameter to exclude fields,
     * such as an ID column, from the input. If you want Amazon SageMaker to pass the
     * entire input dataset to the algorithm, accept the default value
     * <code>$</code>.</p> <p>Examples: <code>"$"</code>, <code>"$[1:]"</code>,
     * <code>"$.features"</code> </p>
     */
    inline DataProcessing& WithInputFilter(const char* value) { SetInputFilter(value); return *this;}


    /**
     * <p>A JSONPath expression used to select a portion of the joined dataset to save
     * in the output file for a batch transform job. If you want Amazon SageMaker to
     * store the entire input dataset in the output file, leave the default value,
     * <code>$</code>. If you specify indexes that aren't within the dimension size of
     * the joined dataset, you get an error.</p> <p>Examples: <code>"$"</code>,
     * <code>"$[0,5:]"</code>, <code>"$.['id','SageMakerOutput']"</code> </p>
     */
    inline const Aws::String& GetOutputFilter() const{ return m_outputFilter; }

    /**
     * <p>A JSONPath expression used to select a portion of the joined dataset to save
     * in the output file for a batch transform job. If you want Amazon SageMaker to
     * store the entire input dataset in the output file, leave the default value,
     * <code>$</code>. If you specify indexes that aren't within the dimension size of
     * the joined dataset, you get an error.</p> <p>Examples: <code>"$"</code>,
     * <code>"$[0,5:]"</code>, <code>"$.['id','SageMakerOutput']"</code> </p>
     */
    inline bool OutputFilterHasBeenSet() const { return m_outputFilterHasBeenSet; }

    /**
     * <p>A JSONPath expression used to select a portion of the joined dataset to save
     * in the output file for a batch transform job. If you want Amazon SageMaker to
     * store the entire input dataset in the output file, leave the default value,
     * <code>$</code>. If you specify indexes that aren't within the dimension size of
     * the joined dataset, you get an error.</p> <p>Examples: <code>"$"</code>,
     * <code>"$[0,5:]"</code>, <code>"$.['id','SageMakerOutput']"</code> </p>
     */
    inline void SetOutputFilter(const Aws::String& value) { m_outputFilterHasBeenSet = true; m_outputFilter = value; }

    /**
     * <p>A JSONPath expression used to select a portion of the joined dataset to save
     * in the output file for a batch transform job. If you want Amazon SageMaker to
     * store the entire input dataset in the output file, leave the default value,
     * <code>$</code>. If you specify indexes that aren't within the dimension size of
     * the joined dataset, you get an error.</p> <p>Examples: <code>"$"</code>,
     * <code>"$[0,5:]"</code>, <code>"$.['id','SageMakerOutput']"</code> </p>
     */
    inline void SetOutputFilter(Aws::String&& value) { m_outputFilterHasBeenSet = true; m_outputFilter = std::move(value); }

    /**
     * <p>A JSONPath expression used to select a portion of the joined dataset to save
     * in the output file for a batch transform job. If you want Amazon SageMaker to
     * store the entire input dataset in the output file, leave the default value,
     * <code>$</code>. If you specify indexes that aren't within the dimension size of
     * the joined dataset, you get an error.</p> <p>Examples: <code>"$"</code>,
     * <code>"$[0,5:]"</code>, <code>"$.['id','SageMakerOutput']"</code> </p>
     */
    inline void SetOutputFilter(const char* value) { m_outputFilterHasBeenSet = true; m_outputFilter.assign(value); }

    /**
     * <p>A JSONPath expression used to select a portion of the joined dataset to save
     * in the output file for a batch transform job. If you want Amazon SageMaker to
     * store the entire input dataset in the output file, leave the default value,
     * <code>$</code>. If you specify indexes that aren't within the dimension size of
     * the joined dataset, you get an error.</p> <p>Examples: <code>"$"</code>,
     * <code>"$[0,5:]"</code>, <code>"$.['id','SageMakerOutput']"</code> </p>
     */
    inline DataProcessing& WithOutputFilter(const Aws::String& value) { SetOutputFilter(value); return *this;}

    /**
     * <p>A JSONPath expression used to select a portion of the joined dataset to save
     * in the output file for a batch transform job. If you want Amazon SageMaker to
     * store the entire input dataset in the output file, leave the default value,
     * <code>$</code>. If you specify indexes that aren't within the dimension size of
     * the joined dataset, you get an error.</p> <p>Examples: <code>"$"</code>,
     * <code>"$[0,5:]"</code>, <code>"$.['id','SageMakerOutput']"</code> </p>
     */
    inline DataProcessing& WithOutputFilter(Aws::String&& value) { SetOutputFilter(std::move(value)); return *this;}

    /**
     * <p>A JSONPath expression used to select a portion of the joined dataset to save
     * in the output file for a batch transform job. If you want Amazon SageMaker to
     * store the entire input dataset in the output file, leave the default value,
     * <code>$</code>. If you specify indexes that aren't within the dimension size of
     * the joined dataset, you get an error.</p> <p>Examples: <code>"$"</code>,
     * <code>"$[0,5:]"</code>, <code>"$.['id','SageMakerOutput']"</code> </p>
     */
    inline DataProcessing& WithOutputFilter(const char* value) { SetOutputFilter(value); return *this;}


    /**
     * <p>Specifies the source of the data to join with the transformed data. The valid
     * values are <code>None</code> and <code>Input</code> The default value is
     * <code>None</code> which specifies not to join the input with the transformed
     * data. If you want the batch transform job to join the original input data with
     * the transformed data, set <code>JoinSource</code> to <code>Input</code>. To join
     * input and output, the batch transform job must satisfy the <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-io-join.html#batch-transform-io-join-requirements">Requirements
     * for Using Batch Transform I/O Join</a>.</p> <p>For JSON or JSONLines objects,
     * such as a JSON array, Amazon SageMaker adds the transformed data to the input
     * JSON object in an attribute called <code>SageMakerOutput</code>. The joined
     * result for JSON must be a key-value pair object. If the input is not a key-value
     * pair object, Amazon SageMaker creates a new JSON file. In the new JSON file, and
     * the input data is stored under the <code>SageMakerInput</code> key and the
     * results are stored in <code>SageMakerOutput</code>.</p> <p>For CSV files, Amazon
     * SageMaker combines the transformed data with the input data at the end of the
     * input data and stores it in the output file. The joined data has the joined
     * input data followed by the transformed data and the output is a CSV file. </p>
     */
    inline const JoinSource& GetJoinSource() const{ return m_joinSource; }

    /**
     * <p>Specifies the source of the data to join with the transformed data. The valid
     * values are <code>None</code> and <code>Input</code> The default value is
     * <code>None</code> which specifies not to join the input with the transformed
     * data. If you want the batch transform job to join the original input data with
     * the transformed data, set <code>JoinSource</code> to <code>Input</code>. To join
     * input and output, the batch transform job must satisfy the <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-io-join.html#batch-transform-io-join-requirements">Requirements
     * for Using Batch Transform I/O Join</a>.</p> <p>For JSON or JSONLines objects,
     * such as a JSON array, Amazon SageMaker adds the transformed data to the input
     * JSON object in an attribute called <code>SageMakerOutput</code>. The joined
     * result for JSON must be a key-value pair object. If the input is not a key-value
     * pair object, Amazon SageMaker creates a new JSON file. In the new JSON file, and
     * the input data is stored under the <code>SageMakerInput</code> key and the
     * results are stored in <code>SageMakerOutput</code>.</p> <p>For CSV files, Amazon
     * SageMaker combines the transformed data with the input data at the end of the
     * input data and stores it in the output file. The joined data has the joined
     * input data followed by the transformed data and the output is a CSV file. </p>
     */
    inline bool JoinSourceHasBeenSet() const { return m_joinSourceHasBeenSet; }

    /**
     * <p>Specifies the source of the data to join with the transformed data. The valid
     * values are <code>None</code> and <code>Input</code> The default value is
     * <code>None</code> which specifies not to join the input with the transformed
     * data. If you want the batch transform job to join the original input data with
     * the transformed data, set <code>JoinSource</code> to <code>Input</code>. To join
     * input and output, the batch transform job must satisfy the <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-io-join.html#batch-transform-io-join-requirements">Requirements
     * for Using Batch Transform I/O Join</a>.</p> <p>For JSON or JSONLines objects,
     * such as a JSON array, Amazon SageMaker adds the transformed data to the input
     * JSON object in an attribute called <code>SageMakerOutput</code>. The joined
     * result for JSON must be a key-value pair object. If the input is not a key-value
     * pair object, Amazon SageMaker creates a new JSON file. In the new JSON file, and
     * the input data is stored under the <code>SageMakerInput</code> key and the
     * results are stored in <code>SageMakerOutput</code>.</p> <p>For CSV files, Amazon
     * SageMaker combines the transformed data with the input data at the end of the
     * input data and stores it in the output file. The joined data has the joined
     * input data followed by the transformed data and the output is a CSV file. </p>
     */
    inline void SetJoinSource(const JoinSource& value) { m_joinSourceHasBeenSet = true; m_joinSource = value; }

    /**
     * <p>Specifies the source of the data to join with the transformed data. The valid
     * values are <code>None</code> and <code>Input</code> The default value is
     * <code>None</code> which specifies not to join the input with the transformed
     * data. If you want the batch transform job to join the original input data with
     * the transformed data, set <code>JoinSource</code> to <code>Input</code>. To join
     * input and output, the batch transform job must satisfy the <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-io-join.html#batch-transform-io-join-requirements">Requirements
     * for Using Batch Transform I/O Join</a>.</p> <p>For JSON or JSONLines objects,
     * such as a JSON array, Amazon SageMaker adds the transformed data to the input
     * JSON object in an attribute called <code>SageMakerOutput</code>. The joined
     * result for JSON must be a key-value pair object. If the input is not a key-value
     * pair object, Amazon SageMaker creates a new JSON file. In the new JSON file, and
     * the input data is stored under the <code>SageMakerInput</code> key and the
     * results are stored in <code>SageMakerOutput</code>.</p> <p>For CSV files, Amazon
     * SageMaker combines the transformed data with the input data at the end of the
     * input data and stores it in the output file. The joined data has the joined
     * input data followed by the transformed data and the output is a CSV file. </p>
     */
    inline void SetJoinSource(JoinSource&& value) { m_joinSourceHasBeenSet = true; m_joinSource = std::move(value); }

    /**
     * <p>Specifies the source of the data to join with the transformed data. The valid
     * values are <code>None</code> and <code>Input</code> The default value is
     * <code>None</code> which specifies not to join the input with the transformed
     * data. If you want the batch transform job to join the original input data with
     * the transformed data, set <code>JoinSource</code> to <code>Input</code>. To join
     * input and output, the batch transform job must satisfy the <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-io-join.html#batch-transform-io-join-requirements">Requirements
     * for Using Batch Transform I/O Join</a>.</p> <p>For JSON or JSONLines objects,
     * such as a JSON array, Amazon SageMaker adds the transformed data to the input
     * JSON object in an attribute called <code>SageMakerOutput</code>. The joined
     * result for JSON must be a key-value pair object. If the input is not a key-value
     * pair object, Amazon SageMaker creates a new JSON file. In the new JSON file, and
     * the input data is stored under the <code>SageMakerInput</code> key and the
     * results are stored in <code>SageMakerOutput</code>.</p> <p>For CSV files, Amazon
     * SageMaker combines the transformed data with the input data at the end of the
     * input data and stores it in the output file. The joined data has the joined
     * input data followed by the transformed data and the output is a CSV file. </p>
     */
    inline DataProcessing& WithJoinSource(const JoinSource& value) { SetJoinSource(value); return *this;}

    /**
     * <p>Specifies the source of the data to join with the transformed data. The valid
     * values are <code>None</code> and <code>Input</code> The default value is
     * <code>None</code> which specifies not to join the input with the transformed
     * data. If you want the batch transform job to join the original input data with
     * the transformed data, set <code>JoinSource</code> to <code>Input</code>. To join
     * input and output, the batch transform job must satisfy the <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-io-join.html#batch-transform-io-join-requirements">Requirements
     * for Using Batch Transform I/O Join</a>.</p> <p>For JSON or JSONLines objects,
     * such as a JSON array, Amazon SageMaker adds the transformed data to the input
     * JSON object in an attribute called <code>SageMakerOutput</code>. The joined
     * result for JSON must be a key-value pair object. If the input is not a key-value
     * pair object, Amazon SageMaker creates a new JSON file. In the new JSON file, and
     * the input data is stored under the <code>SageMakerInput</code> key and the
     * results are stored in <code>SageMakerOutput</code>.</p> <p>For CSV files, Amazon
     * SageMaker combines the transformed data with the input data at the end of the
     * input data and stores it in the output file. The joined data has the joined
     * input data followed by the transformed data and the output is a CSV file. </p>
     */
    inline DataProcessing& WithJoinSource(JoinSource&& value) { SetJoinSource(std::move(value)); return *this;}

  private:

    Aws::String m_inputFilter;
    bool m_inputFilterHasBeenSet;

    Aws::String m_outputFilter;
    bool m_outputFilterHasBeenSet;

    JoinSource m_joinSource;
    bool m_joinSourceHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
