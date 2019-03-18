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
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Attributes that define an Amazon S3 machine learning resource.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/S3MachineLearningModelResourceData">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API S3MachineLearningModelResourceData
  {
  public:
    S3MachineLearningModelResourceData();
    S3MachineLearningModelResourceData(Aws::Utils::Json::JsonView jsonValue);
    S3MachineLearningModelResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline const Aws::String& GetDestinationPath() const{ return m_destinationPath; }

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline bool DestinationPathHasBeenSet() const { return m_destinationPathHasBeenSet; }

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline void SetDestinationPath(const Aws::String& value) { m_destinationPathHasBeenSet = true; m_destinationPath = value; }

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline void SetDestinationPath(Aws::String&& value) { m_destinationPathHasBeenSet = true; m_destinationPath = std::move(value); }

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline void SetDestinationPath(const char* value) { m_destinationPathHasBeenSet = true; m_destinationPath.assign(value); }

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline S3MachineLearningModelResourceData& WithDestinationPath(const Aws::String& value) { SetDestinationPath(value); return *this;}

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline S3MachineLearningModelResourceData& WithDestinationPath(Aws::String&& value) { SetDestinationPath(std::move(value)); return *this;}

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline S3MachineLearningModelResourceData& WithDestinationPath(const char* value) { SetDestinationPath(value); return *this;}


    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline S3MachineLearningModelResourceData& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline S3MachineLearningModelResourceData& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline S3MachineLearningModelResourceData& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

  private:

    Aws::String m_destinationPath;
    bool m_destinationPathHasBeenSet;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
