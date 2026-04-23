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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The S3 location of the output reports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/BusinessReportS3Location">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API BusinessReportS3Location
  {
  public:
    BusinessReportS3Location();
    BusinessReportS3Location(Aws::Utils::Json::JsonView jsonValue);
    BusinessReportS3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path of the business report.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path of the business report.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path of the business report.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path of the business report.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path of the business report.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path of the business report.</p>
     */
    inline BusinessReportS3Location& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path of the business report.</p>
     */
    inline BusinessReportS3Location& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path of the business report.</p>
     */
    inline BusinessReportS3Location& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline BusinessReportS3Location& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline BusinessReportS3Location& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket name of the output reports.</p>
     */
    inline BusinessReportS3Location& WithBucketName(const char* value) { SetBucketName(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
