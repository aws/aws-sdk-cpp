﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
   * <p>The ground truth labels for the dataset used for the monitoring
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringGroundTruthS3Input">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API MonitoringGroundTruthS3Input
  {
  public:
    MonitoringGroundTruthS3Input();
    MonitoringGroundTruthS3Input(Aws::Utils::Json::JsonView jsonValue);
    MonitoringGroundTruthS3Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The address of the Amazon S3 location of the ground truth labels.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The address of the Amazon S3 location of the ground truth labels.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The address of the Amazon S3 location of the ground truth labels.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The address of the Amazon S3 location of the ground truth labels.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The address of the Amazon S3 location of the ground truth labels.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The address of the Amazon S3 location of the ground truth labels.</p>
     */
    inline MonitoringGroundTruthS3Input& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The address of the Amazon S3 location of the ground truth labels.</p>
     */
    inline MonitoringGroundTruthS3Input& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The address of the Amazon S3 location of the ground truth labels.</p>
     */
    inline MonitoringGroundTruthS3Input& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
