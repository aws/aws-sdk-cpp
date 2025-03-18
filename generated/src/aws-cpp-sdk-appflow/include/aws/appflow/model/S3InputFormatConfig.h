/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/S3InputFileType.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> When you use Amazon S3 as the source, the configuration format that you
   * provide the flow input data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/S3InputFormatConfig">AWS
   * API Reference</a></p>
   */
  class S3InputFormatConfig
  {
  public:
    AWS_APPFLOW_API S3InputFormatConfig() = default;
    AWS_APPFLOW_API S3InputFormatConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API S3InputFormatConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The file type that Amazon AppFlow gets from your Amazon S3 bucket. </p>
     */
    inline S3InputFileType GetS3InputFileType() const { return m_s3InputFileType; }
    inline bool S3InputFileTypeHasBeenSet() const { return m_s3InputFileTypeHasBeenSet; }
    inline void SetS3InputFileType(S3InputFileType value) { m_s3InputFileTypeHasBeenSet = true; m_s3InputFileType = value; }
    inline S3InputFormatConfig& WithS3InputFileType(S3InputFileType value) { SetS3InputFileType(value); return *this;}
    ///@}
  private:

    S3InputFileType m_s3InputFileType{S3InputFileType::NOT_SET};
    bool m_s3InputFileTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
