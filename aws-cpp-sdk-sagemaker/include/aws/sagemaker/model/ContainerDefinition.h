﻿/*
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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Describes the container, as part of model definition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ContainerDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ContainerDefinition
  {
  public:
    ContainerDefinition();
    ContainerDefinition(const Aws::Utils::Json::JsonValue& jsonValue);
    ContainerDefinition& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DNS host name for the container after Amazon SageMaker deploys it.</p>
     */
    inline const Aws::String& GetContainerHostname() const{ return m_containerHostname; }

    /**
     * <p>The DNS host name for the container after Amazon SageMaker deploys it.</p>
     */
    inline void SetContainerHostname(const Aws::String& value) { m_containerHostnameHasBeenSet = true; m_containerHostname = value; }

    /**
     * <p>The DNS host name for the container after Amazon SageMaker deploys it.</p>
     */
    inline void SetContainerHostname(Aws::String&& value) { m_containerHostnameHasBeenSet = true; m_containerHostname = std::move(value); }

    /**
     * <p>The DNS host name for the container after Amazon SageMaker deploys it.</p>
     */
    inline void SetContainerHostname(const char* value) { m_containerHostnameHasBeenSet = true; m_containerHostname.assign(value); }

    /**
     * <p>The DNS host name for the container after Amazon SageMaker deploys it.</p>
     */
    inline ContainerDefinition& WithContainerHostname(const Aws::String& value) { SetContainerHostname(value); return *this;}

    /**
     * <p>The DNS host name for the container after Amazon SageMaker deploys it.</p>
     */
    inline ContainerDefinition& WithContainerHostname(Aws::String&& value) { SetContainerHostname(std::move(value)); return *this;}

    /**
     * <p>The DNS host name for the container after Amazon SageMaker deploys it.</p>
     */
    inline ContainerDefinition& WithContainerHostname(const char* value) { SetContainerHostname(value); return *this;}


    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored. If you are using your own custom algorithm instead of an algorithm
     * provided by Amazon SageMaker, the inference code must meet Amazon SageMaker
     * requirements. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a> </p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored. If you are using your own custom algorithm instead of an algorithm
     * provided by Amazon SageMaker, the inference code must meet Amazon SageMaker
     * requirements. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a> </p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored. If you are using your own custom algorithm instead of an algorithm
     * provided by Amazon SageMaker, the inference code must meet Amazon SageMaker
     * requirements. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a> </p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored. If you are using your own custom algorithm instead of an algorithm
     * provided by Amazon SageMaker, the inference code must meet Amazon SageMaker
     * requirements. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a> </p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored. If you are using your own custom algorithm instead of an algorithm
     * provided by Amazon SageMaker, the inference code must meet Amazon SageMaker
     * requirements. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a> </p>
     */
    inline ContainerDefinition& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored. If you are using your own custom algorithm instead of an algorithm
     * provided by Amazon SageMaker, the inference code must meet Amazon SageMaker
     * requirements. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a> </p>
     */
    inline ContainerDefinition& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 Container Registry (Amazon ECR) path where inference code is
     * stored. If you are using your own custom algorithm instead of an algorithm
     * provided by Amazon SageMaker, the inference code must meet Amazon SageMaker
     * requirements. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a> </p>
     */
    inline ContainerDefinition& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). </p>
     */
    inline const Aws::String& GetModelDataUrl() const{ return m_modelDataUrl; }

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). </p>
     */
    inline void SetModelDataUrl(const Aws::String& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = value; }

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). </p>
     */
    inline void SetModelDataUrl(Aws::String&& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = std::move(value); }

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). </p>
     */
    inline void SetModelDataUrl(const char* value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl.assign(value); }

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). </p>
     */
    inline ContainerDefinition& WithModelDataUrl(const Aws::String& value) { SetModelDataUrl(value); return *this;}

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). </p>
     */
    inline ContainerDefinition& WithModelDataUrl(Aws::String&& value) { SetModelDataUrl(std::move(value)); return *this;}

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). </p>
     */
    inline ContainerDefinition& WithModelDataUrl(const char* value) { SetModelDataUrl(value); return *this;}


    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map. </p>
     */
    inline ContainerDefinition& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }

  private:

    Aws::String m_containerHostname;
    bool m_containerHostnameHasBeenSet;

    Aws::String m_image;
    bool m_imageHasBeenSet;

    Aws::String m_modelDataUrl;
    bool m_modelDataUrlHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
