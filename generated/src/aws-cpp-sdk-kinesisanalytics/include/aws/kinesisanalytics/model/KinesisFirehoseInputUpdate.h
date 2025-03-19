/**
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
   * <p>When updating application input configuration, provides information about an
   * Amazon Kinesis Firehose delivery stream as the streaming source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/KinesisFirehoseInputUpdate">AWS
   * API Reference</a></p>
   */
  class KinesisFirehoseInputUpdate
  {
  public:
    AWS_KINESISANALYTICS_API KinesisFirehoseInputUpdate() = default;
    AWS_KINESISANALYTICS_API KinesisFirehoseInputUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API KinesisFirehoseInputUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the input Amazon Kinesis Firehose delivery
     * stream to read.</p>
     */
    inline const Aws::String& GetResourceARNUpdate() const { return m_resourceARNUpdate; }
    inline bool ResourceARNUpdateHasBeenSet() const { return m_resourceARNUpdateHasBeenSet; }
    template<typename ResourceARNUpdateT = Aws::String>
    void SetResourceARNUpdate(ResourceARNUpdateT&& value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate = std::forward<ResourceARNUpdateT>(value); }
    template<typename ResourceARNUpdateT = Aws::String>
    KinesisFirehoseInputUpdate& WithResourceARNUpdate(ResourceARNUpdateT&& value) { SetResourceARNUpdate(std::forward<ResourceARNUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to grant the necessary permissions to this
     * role.</p>
     */
    inline const Aws::String& GetRoleARNUpdate() const { return m_roleARNUpdate; }
    inline bool RoleARNUpdateHasBeenSet() const { return m_roleARNUpdateHasBeenSet; }
    template<typename RoleARNUpdateT = Aws::String>
    void SetRoleARNUpdate(RoleARNUpdateT&& value) { m_roleARNUpdateHasBeenSet = true; m_roleARNUpdate = std::forward<RoleARNUpdateT>(value); }
    template<typename RoleARNUpdateT = Aws::String>
    KinesisFirehoseInputUpdate& WithRoleARNUpdate(RoleARNUpdateT&& value) { SetRoleARNUpdate(std::forward<RoleARNUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceARNUpdate;
    bool m_resourceARNUpdateHasBeenSet = false;

    Aws::String m_roleARNUpdate;
    bool m_roleARNUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
