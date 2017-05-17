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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snowball/model/S3Resource.h>
#include <aws/snowball/model/LambdaResource.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{

  /**
   * <p>Contains an array of <code>S3Resource</code> objects. Each
   * <code>S3Resource</code> object represents an Amazon S3 bucket that your
   * transferred data will be exported from or imported into.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/JobResource">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API JobResource
  {
  public:
    JobResource();
    JobResource(const Aws::Utils::Json::JsonValue& jsonValue);
    JobResource& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>An array of <code>S3Resource</code> objects.</p>
     */
    inline const Aws::Vector<S3Resource>& GetS3Resources() const{ return m_s3Resources; }

    /**
     * <p>An array of <code>S3Resource</code> objects.</p>
     */
    inline void SetS3Resources(const Aws::Vector<S3Resource>& value) { m_s3ResourcesHasBeenSet = true; m_s3Resources = value; }

    /**
     * <p>An array of <code>S3Resource</code> objects.</p>
     */
    inline void SetS3Resources(Aws::Vector<S3Resource>&& value) { m_s3ResourcesHasBeenSet = true; m_s3Resources = std::move(value); }

    /**
     * <p>An array of <code>S3Resource</code> objects.</p>
     */
    inline JobResource& WithS3Resources(const Aws::Vector<S3Resource>& value) { SetS3Resources(value); return *this;}

    /**
     * <p>An array of <code>S3Resource</code> objects.</p>
     */
    inline JobResource& WithS3Resources(Aws::Vector<S3Resource>&& value) { SetS3Resources(std::move(value)); return *this;}

    /**
     * <p>An array of <code>S3Resource</code> objects.</p>
     */
    inline JobResource& AddS3Resources(const S3Resource& value) { m_s3ResourcesHasBeenSet = true; m_s3Resources.push_back(value); return *this; }

    /**
     * <p>An array of <code>S3Resource</code> objects.</p>
     */
    inline JobResource& AddS3Resources(S3Resource&& value) { m_s3ResourcesHasBeenSet = true; m_s3Resources.push_back(std::move(value)); return *this; }

    /**
     * <p>The Python-language Lambda functions for this job.</p>
     */
    inline const Aws::Vector<LambdaResource>& GetLambdaResources() const{ return m_lambdaResources; }

    /**
     * <p>The Python-language Lambda functions for this job.</p>
     */
    inline void SetLambdaResources(const Aws::Vector<LambdaResource>& value) { m_lambdaResourcesHasBeenSet = true; m_lambdaResources = value; }

    /**
     * <p>The Python-language Lambda functions for this job.</p>
     */
    inline void SetLambdaResources(Aws::Vector<LambdaResource>&& value) { m_lambdaResourcesHasBeenSet = true; m_lambdaResources = std::move(value); }

    /**
     * <p>The Python-language Lambda functions for this job.</p>
     */
    inline JobResource& WithLambdaResources(const Aws::Vector<LambdaResource>& value) { SetLambdaResources(value); return *this;}

    /**
     * <p>The Python-language Lambda functions for this job.</p>
     */
    inline JobResource& WithLambdaResources(Aws::Vector<LambdaResource>&& value) { SetLambdaResources(std::move(value)); return *this;}

    /**
     * <p>The Python-language Lambda functions for this job.</p>
     */
    inline JobResource& AddLambdaResources(const LambdaResource& value) { m_lambdaResourcesHasBeenSet = true; m_lambdaResources.push_back(value); return *this; }

    /**
     * <p>The Python-language Lambda functions for this job.</p>
     */
    inline JobResource& AddLambdaResources(LambdaResource&& value) { m_lambdaResourcesHasBeenSet = true; m_lambdaResources.push_back(std::move(value)); return *this; }

  private:
    Aws::Vector<S3Resource> m_s3Resources;
    bool m_s3ResourcesHasBeenSet;
    Aws::Vector<LambdaResource> m_lambdaResources;
    bool m_lambdaResourcesHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
