/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/S3Location.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>The S3 location where Amazon Lookout for Vision saves model training
   * files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/OutputConfig">AWS
   * API Reference</a></p>
   */
  class OutputConfig
  {
  public:
    AWS_LOOKOUTFORVISION_API OutputConfig();
    AWS_LOOKOUTFORVISION_API OutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API OutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 location for the output.</p>
     */
    inline const S3Location& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>The S3 location for the output.</p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>The S3 location for the output.</p>
     */
    inline void SetS3Location(const S3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>The S3 location for the output.</p>
     */
    inline void SetS3Location(S3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>The S3 location for the output.</p>
     */
    inline OutputConfig& WithS3Location(const S3Location& value) { SetS3Location(value); return *this;}

    /**
     * <p>The S3 location for the output.</p>
     */
    inline OutputConfig& WithS3Location(S3Location&& value) { SetS3Location(std::move(value)); return *this;}

  private:

    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
