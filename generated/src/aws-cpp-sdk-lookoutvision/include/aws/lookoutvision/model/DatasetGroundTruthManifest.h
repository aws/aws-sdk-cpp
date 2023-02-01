/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/InputS3Object.h>
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
   * <p>Location information about a manifest file. You can use a manifest file to
   * create a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DatasetGroundTruthManifest">AWS
   * API Reference</a></p>
   */
  class DatasetGroundTruthManifest
  {
  public:
    AWS_LOOKOUTFORVISION_API DatasetGroundTruthManifest();
    AWS_LOOKOUTFORVISION_API DatasetGroundTruthManifest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API DatasetGroundTruthManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 bucket location for the manifest file.</p>
     */
    inline const InputS3Object& GetS3Object() const{ return m_s3Object; }

    /**
     * <p>The S3 bucket location for the manifest file.</p>
     */
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }

    /**
     * <p>The S3 bucket location for the manifest file.</p>
     */
    inline void SetS3Object(const InputS3Object& value) { m_s3ObjectHasBeenSet = true; m_s3Object = value; }

    /**
     * <p>The S3 bucket location for the manifest file.</p>
     */
    inline void SetS3Object(InputS3Object&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::move(value); }

    /**
     * <p>The S3 bucket location for the manifest file.</p>
     */
    inline DatasetGroundTruthManifest& WithS3Object(const InputS3Object& value) { SetS3Object(value); return *this;}

    /**
     * <p>The S3 bucket location for the manifest file.</p>
     */
    inline DatasetGroundTruthManifest& WithS3Object(InputS3Object&& value) { SetS3Object(std::move(value)); return *this;}

  private:

    InputS3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
