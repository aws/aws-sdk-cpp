/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/S3DataSource.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The data source of the model to import.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ModelDataSource">AWS
   * API Reference</a></p>
   */
  class ModelDataSource
  {
  public:
    AWS_BEDROCK_API ModelDataSource() = default;
    AWS_BEDROCK_API ModelDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ModelDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 data source of the model to import.</p>
     */
    inline const S3DataSource& GetS3DataSource() const { return m_s3DataSource; }
    inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }
    template<typename S3DataSourceT = S3DataSource>
    void SetS3DataSource(S3DataSourceT&& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = std::forward<S3DataSourceT>(value); }
    template<typename S3DataSourceT = S3DataSource>
    ModelDataSource& WithS3DataSource(S3DataSourceT&& value) { SetS3DataSource(std::forward<S3DataSourceT>(value)); return *this;}
    ///@}
  private:

    S3DataSource m_s3DataSource;
    bool m_s3DataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
