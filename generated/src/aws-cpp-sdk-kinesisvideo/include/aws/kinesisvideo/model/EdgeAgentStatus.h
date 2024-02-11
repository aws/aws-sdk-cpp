/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/LastRecorderStatus.h>
#include <aws/kinesisvideo/model/LastUploaderStatus.h>
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
namespace KinesisVideo
{
namespace Model
{

  /**
   * <p>An object that contains the latest status details for an edge agent's
   * recorder and uploader jobs. Use this information to determine the current health
   * of an edge agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/EdgeAgentStatus">AWS
   * API Reference</a></p>
   */
  class EdgeAgentStatus
  {
  public:
    AWS_KINESISVIDEO_API EdgeAgentStatus();
    AWS_KINESISVIDEO_API EdgeAgentStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API EdgeAgentStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The latest status of a stream’s edge recording job.</p>
     */
    inline const LastRecorderStatus& GetLastRecorderStatus() const{ return m_lastRecorderStatus; }

    /**
     * <p>The latest status of a stream’s edge recording job.</p>
     */
    inline bool LastRecorderStatusHasBeenSet() const { return m_lastRecorderStatusHasBeenSet; }

    /**
     * <p>The latest status of a stream’s edge recording job.</p>
     */
    inline void SetLastRecorderStatus(const LastRecorderStatus& value) { m_lastRecorderStatusHasBeenSet = true; m_lastRecorderStatus = value; }

    /**
     * <p>The latest status of a stream’s edge recording job.</p>
     */
    inline void SetLastRecorderStatus(LastRecorderStatus&& value) { m_lastRecorderStatusHasBeenSet = true; m_lastRecorderStatus = std::move(value); }

    /**
     * <p>The latest status of a stream’s edge recording job.</p>
     */
    inline EdgeAgentStatus& WithLastRecorderStatus(const LastRecorderStatus& value) { SetLastRecorderStatus(value); return *this;}

    /**
     * <p>The latest status of a stream’s edge recording job.</p>
     */
    inline EdgeAgentStatus& WithLastRecorderStatus(LastRecorderStatus&& value) { SetLastRecorderStatus(std::move(value)); return *this;}


    /**
     * <p>The latest status of a stream’s edge to cloud uploader job.</p>
     */
    inline const LastUploaderStatus& GetLastUploaderStatus() const{ return m_lastUploaderStatus; }

    /**
     * <p>The latest status of a stream’s edge to cloud uploader job.</p>
     */
    inline bool LastUploaderStatusHasBeenSet() const { return m_lastUploaderStatusHasBeenSet; }

    /**
     * <p>The latest status of a stream’s edge to cloud uploader job.</p>
     */
    inline void SetLastUploaderStatus(const LastUploaderStatus& value) { m_lastUploaderStatusHasBeenSet = true; m_lastUploaderStatus = value; }

    /**
     * <p>The latest status of a stream’s edge to cloud uploader job.</p>
     */
    inline void SetLastUploaderStatus(LastUploaderStatus&& value) { m_lastUploaderStatusHasBeenSet = true; m_lastUploaderStatus = std::move(value); }

    /**
     * <p>The latest status of a stream’s edge to cloud uploader job.</p>
     */
    inline EdgeAgentStatus& WithLastUploaderStatus(const LastUploaderStatus& value) { SetLastUploaderStatus(value); return *this;}

    /**
     * <p>The latest status of a stream’s edge to cloud uploader job.</p>
     */
    inline EdgeAgentStatus& WithLastUploaderStatus(LastUploaderStatus&& value) { SetLastUploaderStatus(std::move(value)); return *this;}

  private:

    LastRecorderStatus m_lastRecorderStatus;
    bool m_lastRecorderStatusHasBeenSet = false;

    LastUploaderStatus m_lastUploaderStatus;
    bool m_lastUploaderStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
