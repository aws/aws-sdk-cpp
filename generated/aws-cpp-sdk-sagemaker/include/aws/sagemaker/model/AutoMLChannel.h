﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLDataSource.h>
#include <aws/sagemaker/model/CompressionType.h>
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
   * <p>A channel is a named input source that training algorithms can consume. For
   * more information, see .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLChannel">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API AutoMLChannel
  {
  public:
    AutoMLChannel();
    AutoMLChannel(Aws::Utils::Json::JsonView jsonValue);
    AutoMLChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data source for an AutoML channel.</p>
     */
    inline const AutoMLDataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The data source for an AutoML channel.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The data source for an AutoML channel.</p>
     */
    inline void SetDataSource(const AutoMLDataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The data source for an AutoML channel.</p>
     */
    inline void SetDataSource(AutoMLDataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The data source for an AutoML channel.</p>
     */
    inline AutoMLChannel& WithDataSource(const AutoMLDataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The data source for an AutoML channel.</p>
     */
    inline AutoMLChannel& WithDataSource(AutoMLDataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>You can use <code>Gzip</code> or <code>None</code>. The default value is
     * <code>None</code>.</p>
     */
    inline const CompressionType& GetCompressionType() const{ return m_compressionType; }

    /**
     * <p>You can use <code>Gzip</code> or <code>None</code>. The default value is
     * <code>None</code>.</p>
     */
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }

    /**
     * <p>You can use <code>Gzip</code> or <code>None</code>. The default value is
     * <code>None</code>.</p>
     */
    inline void SetCompressionType(const CompressionType& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }

    /**
     * <p>You can use <code>Gzip</code> or <code>None</code>. The default value is
     * <code>None</code>.</p>
     */
    inline void SetCompressionType(CompressionType&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }

    /**
     * <p>You can use <code>Gzip</code> or <code>None</code>. The default value is
     * <code>None</code>.</p>
     */
    inline AutoMLChannel& WithCompressionType(const CompressionType& value) { SetCompressionType(value); return *this;}

    /**
     * <p>You can use <code>Gzip</code> or <code>None</code>. The default value is
     * <code>None</code>.</p>
     */
    inline AutoMLChannel& WithCompressionType(CompressionType&& value) { SetCompressionType(std::move(value)); return *this;}


    /**
     * <p>The name of the target variable in supervised learning, usually represented
     * by 'y'.</p>
     */
    inline const Aws::String& GetTargetAttributeName() const{ return m_targetAttributeName; }

    /**
     * <p>The name of the target variable in supervised learning, usually represented
     * by 'y'.</p>
     */
    inline bool TargetAttributeNameHasBeenSet() const { return m_targetAttributeNameHasBeenSet; }

    /**
     * <p>The name of the target variable in supervised learning, usually represented
     * by 'y'.</p>
     */
    inline void SetTargetAttributeName(const Aws::String& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = value; }

    /**
     * <p>The name of the target variable in supervised learning, usually represented
     * by 'y'.</p>
     */
    inline void SetTargetAttributeName(Aws::String&& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = std::move(value); }

    /**
     * <p>The name of the target variable in supervised learning, usually represented
     * by 'y'.</p>
     */
    inline void SetTargetAttributeName(const char* value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName.assign(value); }

    /**
     * <p>The name of the target variable in supervised learning, usually represented
     * by 'y'.</p>
     */
    inline AutoMLChannel& WithTargetAttributeName(const Aws::String& value) { SetTargetAttributeName(value); return *this;}

    /**
     * <p>The name of the target variable in supervised learning, usually represented
     * by 'y'.</p>
     */
    inline AutoMLChannel& WithTargetAttributeName(Aws::String&& value) { SetTargetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the target variable in supervised learning, usually represented
     * by 'y'.</p>
     */
    inline AutoMLChannel& WithTargetAttributeName(const char* value) { SetTargetAttributeName(value); return *this;}


    /**
     * <p>The content type of the data from the input source. You can use
     * <code>text/csv;header=present</code> or
     * <code>x-application/vnd.amazon+parquet</code>. The default value is
     * <code>text/csv;header=present</code>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content type of the data from the input source. You can use
     * <code>text/csv;header=present</code> or
     * <code>x-application/vnd.amazon+parquet</code>. The default value is
     * <code>text/csv;header=present</code>.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The content type of the data from the input source. You can use
     * <code>text/csv;header=present</code> or
     * <code>x-application/vnd.amazon+parquet</code>. The default value is
     * <code>text/csv;header=present</code>.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The content type of the data from the input source. You can use
     * <code>text/csv;header=present</code> or
     * <code>x-application/vnd.amazon+parquet</code>. The default value is
     * <code>text/csv;header=present</code>.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The content type of the data from the input source. You can use
     * <code>text/csv;header=present</code> or
     * <code>x-application/vnd.amazon+parquet</code>. The default value is
     * <code>text/csv;header=present</code>.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The content type of the data from the input source. You can use
     * <code>text/csv;header=present</code> or
     * <code>x-application/vnd.amazon+parquet</code>. The default value is
     * <code>text/csv;header=present</code>.</p>
     */
    inline AutoMLChannel& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content type of the data from the input source. You can use
     * <code>text/csv;header=present</code> or
     * <code>x-application/vnd.amazon+parquet</code>. The default value is
     * <code>text/csv;header=present</code>.</p>
     */
    inline AutoMLChannel& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The content type of the data from the input source. You can use
     * <code>text/csv;header=present</code> or
     * <code>x-application/vnd.amazon+parquet</code>. The default value is
     * <code>text/csv;header=present</code>.</p>
     */
    inline AutoMLChannel& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:

    AutoMLDataSource m_dataSource;
    bool m_dataSourceHasBeenSet;

    CompressionType m_compressionType;
    bool m_compressionTypeHasBeenSet;

    Aws::String m_targetAttributeName;
    bool m_targetAttributeNameHasBeenSet;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
