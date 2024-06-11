﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p> Identifies an Amazon Kinesis stream as the streaming source. You provide the
   * stream's Amazon Resource Name (ARN) and an IAM role ARN that enables Amazon
   * Kinesis Analytics to access the stream on your behalf.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/KinesisStreamsInput">AWS
   * API Reference</a></p>
   */
  class KinesisStreamsInput
  {
  public:
    AWS_KINESISANALYTICS_API KinesisStreamsInput();
    AWS_KINESISANALYTICS_API KinesisStreamsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API KinesisStreamsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the input Amazon Kinesis stream to read.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }
    inline KinesisStreamsInput& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}
    inline KinesisStreamsInput& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}
    inline KinesisStreamsInput& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to grant the necessary permissions to this
     * role.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline KinesisStreamsInput& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline KinesisStreamsInput& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline KinesisStreamsInput& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
