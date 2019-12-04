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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/TestingData.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>A Sagemaker Groundtruth format manifest file representing the dataset used
   * for testing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/TestingDataResult">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API TestingDataResult
  {
  public:
    TestingDataResult();
    TestingDataResult(Aws::Utils::Json::JsonView jsonValue);
    TestingDataResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The testing dataset that was supplied for training.</p>
     */
    inline const TestingData& GetInput() const{ return m_input; }

    /**
     * <p>The testing dataset that was supplied for training.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The testing dataset that was supplied for training.</p>
     */
    inline void SetInput(const TestingData& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The testing dataset that was supplied for training.</p>
     */
    inline void SetInput(TestingData&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The testing dataset that was supplied for training.</p>
     */
    inline TestingDataResult& WithInput(const TestingData& value) { SetInput(value); return *this;}

    /**
     * <p>The testing dataset that was supplied for training.</p>
     */
    inline TestingDataResult& WithInput(TestingData&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>The subset of the dataset that was actually tested. Some images (assets)
     * might not be tested due to file formatting and other issues. </p>
     */
    inline const TestingData& GetOutput() const{ return m_output; }

    /**
     * <p>The subset of the dataset that was actually tested. Some images (assets)
     * might not be tested due to file formatting and other issues. </p>
     */
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }

    /**
     * <p>The subset of the dataset that was actually tested. Some images (assets)
     * might not be tested due to file formatting and other issues. </p>
     */
    inline void SetOutput(const TestingData& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>The subset of the dataset that was actually tested. Some images (assets)
     * might not be tested due to file formatting and other issues. </p>
     */
    inline void SetOutput(TestingData&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }

    /**
     * <p>The subset of the dataset that was actually tested. Some images (assets)
     * might not be tested due to file formatting and other issues. </p>
     */
    inline TestingDataResult& WithOutput(const TestingData& value) { SetOutput(value); return *this;}

    /**
     * <p>The subset of the dataset that was actually tested. Some images (assets)
     * might not be tested due to file formatting and other issues. </p>
     */
    inline TestingDataResult& WithOutput(TestingData&& value) { SetOutput(std::move(value)); return *this;}

  private:

    TestingData m_input;
    bool m_inputHasBeenSet;

    TestingData m_output;
    bool m_outputHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
