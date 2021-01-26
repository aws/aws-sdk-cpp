/**
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
   * <p>Similar to Channel. A channel is a named input source that training
   * algorithms can consume. Refer to Channel for detailed
   * descriptions.</p><p><h3>See Also:</h3>   <a
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
     * <p>The data source.</p>
     */
    inline const AutoMLDataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The data source.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The data source.</p>
     */
    inline void SetDataSource(const AutoMLDataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The data source.</p>
     */
    inline void SetDataSource(AutoMLDataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The data source.</p>
     */
    inline AutoMLChannel& WithDataSource(const AutoMLDataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The data source.</p>
     */
    inline AutoMLChannel& WithDataSource(AutoMLDataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>You can use Gzip or None. The default value is None.</p>
     */
    inline const CompressionType& GetCompressionType() const{ return m_compressionType; }

    /**
     * <p>You can use Gzip or None. The default value is None.</p>
     */
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }

    /**
     * <p>You can use Gzip or None. The default value is None.</p>
     */
    inline void SetCompressionType(const CompressionType& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }

    /**
     * <p>You can use Gzip or None. The default value is None.</p>
     */
    inline void SetCompressionType(CompressionType&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }

    /**
     * <p>You can use Gzip or None. The default value is None.</p>
     */
    inline AutoMLChannel& WithCompressionType(const CompressionType& value) { SetCompressionType(value); return *this;}

    /**
     * <p>You can use Gzip or None. The default value is None.</p>
     */
    inline AutoMLChannel& WithCompressionType(CompressionType&& value) { SetCompressionType(std::move(value)); return *this;}


    /**
     * <p>The name of the target variable in supervised learning, a.k.a. 'y'.</p>
     */
    inline const Aws::String& GetTargetAttributeName() const{ return m_targetAttributeName; }

    /**
     * <p>The name of the target variable in supervised learning, a.k.a. 'y'.</p>
     */
    inline bool TargetAttributeNameHasBeenSet() const { return m_targetAttributeNameHasBeenSet; }

    /**
     * <p>The name of the target variable in supervised learning, a.k.a. 'y'.</p>
     */
    inline void SetTargetAttributeName(const Aws::String& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = value; }

    /**
     * <p>The name of the target variable in supervised learning, a.k.a. 'y'.</p>
     */
    inline void SetTargetAttributeName(Aws::String&& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = std::move(value); }

    /**
     * <p>The name of the target variable in supervised learning, a.k.a. 'y'.</p>
     */
    inline void SetTargetAttributeName(const char* value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName.assign(value); }

    /**
     * <p>The name of the target variable in supervised learning, a.k.a. 'y'.</p>
     */
    inline AutoMLChannel& WithTargetAttributeName(const Aws::String& value) { SetTargetAttributeName(value); return *this;}

    /**
     * <p>The name of the target variable in supervised learning, a.k.a. 'y'.</p>
     */
    inline AutoMLChannel& WithTargetAttributeName(Aws::String&& value) { SetTargetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the target variable in supervised learning, a.k.a. 'y'.</p>
     */
    inline AutoMLChannel& WithTargetAttributeName(const char* value) { SetTargetAttributeName(value); return *this;}

  private:

    AutoMLDataSource m_dataSource;
    bool m_dataSourceHasBeenSet;

    CompressionType m_compressionType;
    bool m_compressionTypeHasBeenSet;

    Aws::String m_targetAttributeName;
    bool m_targetAttributeNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
