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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/S3DataConfig.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>The output configuration parameters of a batch inference job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/BatchInferenceJobOutput">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API BatchInferenceJobOutput
  {
  public:
    BatchInferenceJobOutput();
    BatchInferenceJobOutput(Aws::Utils::Json::JsonView jsonValue);
    BatchInferenceJobOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information on the Amazon S3 bucket in which the batch inference job's output
     * is stored.</p>
     */
    inline const S3DataConfig& GetS3DataDestination() const{ return m_s3DataDestination; }

    /**
     * <p>Information on the Amazon S3 bucket in which the batch inference job's output
     * is stored.</p>
     */
    inline bool S3DataDestinationHasBeenSet() const { return m_s3DataDestinationHasBeenSet; }

    /**
     * <p>Information on the Amazon S3 bucket in which the batch inference job's output
     * is stored.</p>
     */
    inline void SetS3DataDestination(const S3DataConfig& value) { m_s3DataDestinationHasBeenSet = true; m_s3DataDestination = value; }

    /**
     * <p>Information on the Amazon S3 bucket in which the batch inference job's output
     * is stored.</p>
     */
    inline void SetS3DataDestination(S3DataConfig&& value) { m_s3DataDestinationHasBeenSet = true; m_s3DataDestination = std::move(value); }

    /**
     * <p>Information on the Amazon S3 bucket in which the batch inference job's output
     * is stored.</p>
     */
    inline BatchInferenceJobOutput& WithS3DataDestination(const S3DataConfig& value) { SetS3DataDestination(value); return *this;}

    /**
     * <p>Information on the Amazon S3 bucket in which the batch inference job's output
     * is stored.</p>
     */
    inline BatchInferenceJobOutput& WithS3DataDestination(S3DataConfig&& value) { SetS3DataDestination(std::move(value)); return *this;}

  private:

    S3DataConfig m_s3DataDestination;
    bool m_s3DataDestinationHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
