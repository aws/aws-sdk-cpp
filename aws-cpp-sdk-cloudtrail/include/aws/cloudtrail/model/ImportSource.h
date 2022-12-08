/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/S3ImportSource.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p> The import source. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ImportSource">AWS
   * API Reference</a></p>
   */
  class ImportSource
  {
  public:
    AWS_CLOUDTRAIL_API ImportSource();
    AWS_CLOUDTRAIL_API ImportSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API ImportSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The source S3 bucket. </p>
     */
    inline const S3ImportSource& GetS3() const{ return m_s3; }

    /**
     * <p> The source S3 bucket. </p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p> The source S3 bucket. </p>
     */
    inline void SetS3(const S3ImportSource& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p> The source S3 bucket. </p>
     */
    inline void SetS3(S3ImportSource&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p> The source S3 bucket. </p>
     */
    inline ImportSource& WithS3(const S3ImportSource& value) { SetS3(value); return *this;}

    /**
     * <p> The source S3 bucket. </p>
     */
    inline ImportSource& WithS3(S3ImportSource&& value) { SetS3(std::move(value)); return *this;}

  private:

    S3ImportSource m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
