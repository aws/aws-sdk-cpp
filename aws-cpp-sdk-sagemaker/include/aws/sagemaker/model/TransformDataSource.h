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
#include <aws/sagemaker/model/TransformS3DataSource.h>
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
   * <p>Describes the location of the channel data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TransformDataSource">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API TransformDataSource
  {
  public:
    TransformDataSource();
    TransformDataSource(Aws::Utils::Json::JsonView jsonValue);
    TransformDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 location of the data source that is associated with a channel.</p>
     */
    inline const TransformS3DataSource& GetS3DataSource() const{ return m_s3DataSource; }

    /**
     * <p>The S3 location of the data source that is associated with a channel.</p>
     */
    inline void SetS3DataSource(const TransformS3DataSource& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = value; }

    /**
     * <p>The S3 location of the data source that is associated with a channel.</p>
     */
    inline void SetS3DataSource(TransformS3DataSource&& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = std::move(value); }

    /**
     * <p>The S3 location of the data source that is associated with a channel.</p>
     */
    inline TransformDataSource& WithS3DataSource(const TransformS3DataSource& value) { SetS3DataSource(value); return *this;}

    /**
     * <p>The S3 location of the data source that is associated with a channel.</p>
     */
    inline TransformDataSource& WithS3DataSource(TransformS3DataSource&& value) { SetS3DataSource(std::move(value)); return *this;}

  private:

    TransformS3DataSource m_s3DataSource;
    bool m_s3DataSourceHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
