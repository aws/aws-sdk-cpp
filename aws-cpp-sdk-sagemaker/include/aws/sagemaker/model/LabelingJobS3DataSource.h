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
   * <p>The Amazon S3 location of the input data objects.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobS3DataSource">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API LabelingJobS3DataSource
  {
  public:
    LabelingJobS3DataSource();
    LabelingJobS3DataSource(Aws::Utils::Json::JsonView jsonValue);
    LabelingJobS3DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects.</p>
     */
    inline const Aws::String& GetManifestS3Uri() const{ return m_manifestS3Uri; }

    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects.</p>
     */
    inline bool ManifestS3UriHasBeenSet() const { return m_manifestS3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects.</p>
     */
    inline void SetManifestS3Uri(const Aws::String& value) { m_manifestS3UriHasBeenSet = true; m_manifestS3Uri = value; }

    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects.</p>
     */
    inline void SetManifestS3Uri(Aws::String&& value) { m_manifestS3UriHasBeenSet = true; m_manifestS3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects.</p>
     */
    inline void SetManifestS3Uri(const char* value) { m_manifestS3UriHasBeenSet = true; m_manifestS3Uri.assign(value); }

    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects.</p>
     */
    inline LabelingJobS3DataSource& WithManifestS3Uri(const Aws::String& value) { SetManifestS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects.</p>
     */
    inline LabelingJobS3DataSource& WithManifestS3Uri(Aws::String&& value) { SetManifestS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects.</p>
     */
    inline LabelingJobS3DataSource& WithManifestS3Uri(const char* value) { SetManifestS3Uri(value); return *this;}

  private:

    Aws::String m_manifestS3Uri;
    bool m_manifestS3UriHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
