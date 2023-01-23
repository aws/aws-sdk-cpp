/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Configuration information of a Kinesis Data Firehose delivery
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/KinesisFirehoseConfig">AWS
   * API Reference</a></p>
   */
  class KinesisFirehoseConfig
  {
  public:
    AWS_CONNECT_API KinesisFirehoseConfig();
    AWS_CONNECT_API KinesisFirehoseConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API KinesisFirehoseConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline const Aws::String& GetFirehoseArn() const{ return m_firehoseArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline bool FirehoseArnHasBeenSet() const { return m_firehoseArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline void SetFirehoseArn(const Aws::String& value) { m_firehoseArnHasBeenSet = true; m_firehoseArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline void SetFirehoseArn(Aws::String&& value) { m_firehoseArnHasBeenSet = true; m_firehoseArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline void SetFirehoseArn(const char* value) { m_firehoseArnHasBeenSet = true; m_firehoseArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline KinesisFirehoseConfig& WithFirehoseArn(const Aws::String& value) { SetFirehoseArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline KinesisFirehoseConfig& WithFirehoseArn(Aws::String&& value) { SetFirehoseArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline KinesisFirehoseConfig& WithFirehoseArn(const char* value) { SetFirehoseArn(value); return *this;}

  private:

    Aws::String m_firehoseArn;
    bool m_firehoseArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
