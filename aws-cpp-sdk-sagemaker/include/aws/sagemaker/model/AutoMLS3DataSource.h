﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLS3DataType.h>
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
   * <p>The Amazon S3 data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLS3DataSource">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API AutoMLS3DataSource
  {
  public:
    AutoMLS3DataSource();
    AutoMLS3DataSource(Aws::Utils::Json::JsonView jsonValue);
    AutoMLS3DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data type.</p>
     */
    inline const AutoMLS3DataType& GetS3DataType() const{ return m_s3DataType; }

    /**
     * <p>The data type.</p>
     */
    inline bool S3DataTypeHasBeenSet() const { return m_s3DataTypeHasBeenSet; }

    /**
     * <p>The data type.</p>
     */
    inline void SetS3DataType(const AutoMLS3DataType& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = value; }

    /**
     * <p>The data type.</p>
     */
    inline void SetS3DataType(AutoMLS3DataType&& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = std::move(value); }

    /**
     * <p>The data type.</p>
     */
    inline AutoMLS3DataSource& WithS3DataType(const AutoMLS3DataType& value) { SetS3DataType(value); return *this;}

    /**
     * <p>The data type.</p>
     */
    inline AutoMLS3DataSource& WithS3DataType(AutoMLS3DataType&& value) { SetS3DataType(std::move(value)); return *this;}


    /**
     * <p>The URL to the Amazon S3 data source.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The URL to the Amazon S3 data source.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The URL to the Amazon S3 data source.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The URL to the Amazon S3 data source.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The URL to the Amazon S3 data source.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The URL to the Amazon S3 data source.</p>
     */
    inline AutoMLS3DataSource& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The URL to the Amazon S3 data source.</p>
     */
    inline AutoMLS3DataSource& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The URL to the Amazon S3 data source.</p>
     */
    inline AutoMLS3DataSource& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

  private:

    AutoMLS3DataType m_s3DataType;
    bool m_s3DataTypeHasBeenSet;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
