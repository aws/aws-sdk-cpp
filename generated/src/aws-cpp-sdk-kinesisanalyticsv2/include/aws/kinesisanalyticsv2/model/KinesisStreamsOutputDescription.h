﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>For an SQL-based Kinesis Data Analytics application's output, describes the
   * Kinesis data stream that is configured as its destination. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/KinesisStreamsOutputDescription">AWS
   * API Reference</a></p>
   */
  class KinesisStreamsOutputDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API KinesisStreamsOutputDescription() = default;
    AWS_KINESISANALYTICSV2_API KinesisStreamsOutputDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API KinesisStreamsOutputDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream.</p>
     */
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    KinesisStreamsOutputDescription& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics can assume to access the
     * stream.</p>  <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> 
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    KinesisStreamsOutputDescription& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
