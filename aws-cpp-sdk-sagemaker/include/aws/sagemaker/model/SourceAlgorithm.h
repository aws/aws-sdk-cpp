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
   * <p>Specifies an algorithm that was used to create the model package. The
   * algorithm must be either an algorithm resource in your Amazon SageMaker account
   * or an algorithm in AWS Marketplace that you are subscribed to.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SourceAlgorithm">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API SourceAlgorithm
  {
  public:
    SourceAlgorithm();
    SourceAlgorithm(Aws::Utils::Json::JsonView jsonValue);
    SourceAlgorithm& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline const Aws::String& GetModelDataUrl() const{ return m_modelDataUrl; }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline bool ModelDataUrlHasBeenSet() const { return m_modelDataUrlHasBeenSet; }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline void SetModelDataUrl(const Aws::String& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = value; }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline void SetModelDataUrl(Aws::String&& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = std::move(value); }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline void SetModelDataUrl(const char* value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl.assign(value); }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline SourceAlgorithm& WithModelDataUrl(const Aws::String& value) { SetModelDataUrl(value); return *this;}

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline SourceAlgorithm& WithModelDataUrl(Aws::String&& value) { SetModelDataUrl(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>
     */
    inline SourceAlgorithm& WithModelDataUrl(const char* value) { SetModelDataUrl(value); return *this;}


    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your Amazon SageMaker account
     * or an algorithm in AWS Marketplace that you are subscribed to.</p>
     */
    inline const Aws::String& GetAlgorithmName() const{ return m_algorithmName; }

    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your Amazon SageMaker account
     * or an algorithm in AWS Marketplace that you are subscribed to.</p>
     */
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }

    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your Amazon SageMaker account
     * or an algorithm in AWS Marketplace that you are subscribed to.</p>
     */
    inline void SetAlgorithmName(const Aws::String& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }

    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your Amazon SageMaker account
     * or an algorithm in AWS Marketplace that you are subscribed to.</p>
     */
    inline void SetAlgorithmName(Aws::String&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::move(value); }

    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your Amazon SageMaker account
     * or an algorithm in AWS Marketplace that you are subscribed to.</p>
     */
    inline void SetAlgorithmName(const char* value) { m_algorithmNameHasBeenSet = true; m_algorithmName.assign(value); }

    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your Amazon SageMaker account
     * or an algorithm in AWS Marketplace that you are subscribed to.</p>
     */
    inline SourceAlgorithm& WithAlgorithmName(const Aws::String& value) { SetAlgorithmName(value); return *this;}

    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your Amazon SageMaker account
     * or an algorithm in AWS Marketplace that you are subscribed to.</p>
     */
    inline SourceAlgorithm& WithAlgorithmName(Aws::String&& value) { SetAlgorithmName(std::move(value)); return *this;}

    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your Amazon SageMaker account
     * or an algorithm in AWS Marketplace that you are subscribed to.</p>
     */
    inline SourceAlgorithm& WithAlgorithmName(const char* value) { SetAlgorithmName(value); return *this;}

  private:

    Aws::String m_modelDataUrl;
    bool m_modelDataUrlHasBeenSet;

    Aws::String m_algorithmName;
    bool m_algorithmNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
