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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>An activity that runs a Lambda function to modify the message.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/LambdaActivity">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API LambdaActivity
  {
  public:
    LambdaActivity();
    LambdaActivity(Aws::Utils::Json::JsonView jsonValue);
    LambdaActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the 'lambda' activity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the 'lambda' activity.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the 'lambda' activity.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the 'lambda' activity.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the 'lambda' activity.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the 'lambda' activity.</p>
     */
    inline LambdaActivity& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the 'lambda' activity.</p>
     */
    inline LambdaActivity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the 'lambda' activity.</p>
     */
    inline LambdaActivity& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the Lambda function that is run on the message.</p>
     */
    inline const Aws::String& GetLambdaName() const{ return m_lambdaName; }

    /**
     * <p>The name of the Lambda function that is run on the message.</p>
     */
    inline bool LambdaNameHasBeenSet() const { return m_lambdaNameHasBeenSet; }

    /**
     * <p>The name of the Lambda function that is run on the message.</p>
     */
    inline void SetLambdaName(const Aws::String& value) { m_lambdaNameHasBeenSet = true; m_lambdaName = value; }

    /**
     * <p>The name of the Lambda function that is run on the message.</p>
     */
    inline void SetLambdaName(Aws::String&& value) { m_lambdaNameHasBeenSet = true; m_lambdaName = std::move(value); }

    /**
     * <p>The name of the Lambda function that is run on the message.</p>
     */
    inline void SetLambdaName(const char* value) { m_lambdaNameHasBeenSet = true; m_lambdaName.assign(value); }

    /**
     * <p>The name of the Lambda function that is run on the message.</p>
     */
    inline LambdaActivity& WithLambdaName(const Aws::String& value) { SetLambdaName(value); return *this;}

    /**
     * <p>The name of the Lambda function that is run on the message.</p>
     */
    inline LambdaActivity& WithLambdaName(Aws::String&& value) { SetLambdaName(std::move(value)); return *this;}

    /**
     * <p>The name of the Lambda function that is run on the message.</p>
     */
    inline LambdaActivity& WithLambdaName(const char* value) { SetLambdaName(value); return *this;}


    /**
     * <p>The number of messages passed to the Lambda function for processing.</p>
     * <p>The AWS Lambda function must be able to process all of these messages within
     * five minutes, which is the maximum timeout duration for Lambda functions.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>The number of messages passed to the Lambda function for processing.</p>
     * <p>The AWS Lambda function must be able to process all of these messages within
     * five minutes, which is the maximum timeout duration for Lambda functions.</p>
     */
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }

    /**
     * <p>The number of messages passed to the Lambda function for processing.</p>
     * <p>The AWS Lambda function must be able to process all of these messages within
     * five minutes, which is the maximum timeout duration for Lambda functions.</p>
     */
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /**
     * <p>The number of messages passed to the Lambda function for processing.</p>
     * <p>The AWS Lambda function must be able to process all of these messages within
     * five minutes, which is the maximum timeout duration for Lambda functions.</p>
     */
    inline LambdaActivity& WithBatchSize(int value) { SetBatchSize(value); return *this;}


    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline const Aws::String& GetNext() const{ return m_next; }

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline void SetNext(const Aws::String& value) { m_nextHasBeenSet = true; m_next = value; }

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline void SetNext(Aws::String&& value) { m_nextHasBeenSet = true; m_next = std::move(value); }

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline void SetNext(const char* value) { m_nextHasBeenSet = true; m_next.assign(value); }

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline LambdaActivity& WithNext(const Aws::String& value) { SetNext(value); return *this;}

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline LambdaActivity& WithNext(Aws::String&& value) { SetNext(std::move(value)); return *this;}

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline LambdaActivity& WithNext(const char* value) { SetNext(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_lambdaName;
    bool m_lambdaNameHasBeenSet;

    int m_batchSize;
    bool m_batchSizeHasBeenSet;

    Aws::String m_next;
    bool m_nextHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
