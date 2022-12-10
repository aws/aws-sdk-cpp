/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class TransformDataSource
  {
  public:
    AWS_SAGEMAKER_API TransformDataSource();
    AWS_SAGEMAKER_API TransformDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TransformDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 location of the data source that is associated with a channel.</p>
     */
    inline const TransformS3DataSource& GetS3DataSource() const{ return m_s3DataSource; }

    /**
     * <p>The S3 location of the data source that is associated with a channel.</p>
     */
    inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }

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
    bool m_s3DataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
