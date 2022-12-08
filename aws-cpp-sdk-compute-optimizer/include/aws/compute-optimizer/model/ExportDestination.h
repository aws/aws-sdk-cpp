/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/S3Destination.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes the destination of the recommendations export and metadata
   * files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExportDestination">AWS
   * API Reference</a></p>
   */
  class ExportDestination
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ExportDestination();
    AWS_COMPUTEOPTIMIZER_API ExportDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ExportDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that describes the destination Amazon Simple Storage Service
     * (Amazon S3) bucket name and object keys of a recommendations export file, and
     * its associated metadata file.</p>
     */
    inline const S3Destination& GetS3() const{ return m_s3; }

    /**
     * <p>An object that describes the destination Amazon Simple Storage Service
     * (Amazon S3) bucket name and object keys of a recommendations export file, and
     * its associated metadata file.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>An object that describes the destination Amazon Simple Storage Service
     * (Amazon S3) bucket name and object keys of a recommendations export file, and
     * its associated metadata file.</p>
     */
    inline void SetS3(const S3Destination& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>An object that describes the destination Amazon Simple Storage Service
     * (Amazon S3) bucket name and object keys of a recommendations export file, and
     * its associated metadata file.</p>
     */
    inline void SetS3(S3Destination&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>An object that describes the destination Amazon Simple Storage Service
     * (Amazon S3) bucket name and object keys of a recommendations export file, and
     * its associated metadata file.</p>
     */
    inline ExportDestination& WithS3(const S3Destination& value) { SetS3(value); return *this;}

    /**
     * <p>An object that describes the destination Amazon Simple Storage Service
     * (Amazon S3) bucket name and object keys of a recommendations export file, and
     * its associated metadata file.</p>
     */
    inline ExportDestination& WithS3(S3Destination&& value) { SetS3(std::move(value)); return *this;}

  private:

    S3Destination m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
