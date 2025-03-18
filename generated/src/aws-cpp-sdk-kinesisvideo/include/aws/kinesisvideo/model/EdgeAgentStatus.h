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
    AWS_KINESISVIDEO_API EdgeAgentStatus() = default;
    AWS_KINESISVIDEO_API EdgeAgentStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API EdgeAgentStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The latest status of a stream’s edge recording job.</p>
     */
    inline const LastRecorderStatus& GetLastRecorderStatus() const { return m_lastRecorderStatus; }
    inline bool LastRecorderStatusHasBeenSet() const { return m_lastRecorderStatusHasBeenSet; }
    template<typename LastRecorderStatusT = LastRecorderStatus>
    void SetLastRecorderStatus(LastRecorderStatusT&& value) { m_lastRecorderStatusHasBeenSet = true; m_lastRecorderStatus = std::forward<LastRecorderStatusT>(value); }
    template<typename LastRecorderStatusT = LastRecorderStatus>
    EdgeAgentStatus& WithLastRecorderStatus(LastRecorderStatusT&& value) { SetLastRecorderStatus(std::forward<LastRecorderStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest status of a stream’s edge to cloud uploader job.</p>
     */
    inline const LastUploaderStatus& GetLastUploaderStatus() const { return m_lastUploaderStatus; }
    inline bool LastUploaderStatusHasBeenSet() const { return m_lastUploaderStatusHasBeenSet; }
    template<typename LastUploaderStatusT = LastUploaderStatus>
    void SetLastUploaderStatus(LastUploaderStatusT&& value) { m_lastUploaderStatusHasBeenSet = true; m_lastUploaderStatus = std::forward<LastUploaderStatusT>(value); }
    template<typename LastUploaderStatusT = LastUploaderStatus>
    EdgeAgentStatus& WithLastUploaderStatus(LastUploaderStatusT&& value) { SetLastUploaderStatus(std::forward<LastUploaderStatusT>(value)); return *this;}
    ///@}
  private:

    LastRecorderStatus m_lastRecorderStatus;
    bool m_lastRecorderStatusHasBeenSet = false;

    LastUploaderStatus m_lastUploaderStatus;
    bool m_lastUploaderStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
