/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/ConfigurationStatus.h>
#include <aws/kinesisvideo/model/NotificationDestinationConfig.h>
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
   * <p>The structure that contains the notification information for the KVS images
   * delivery. If this parameter is null, the configuration will be deleted from the
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/NotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class NotificationConfiguration
  {
  public:
    AWS_KINESISVIDEO_API NotificationConfiguration() = default;
    AWS_KINESISVIDEO_API NotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API NotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates if a notification configuration is enabled or disabled.</p>
     */
    inline ConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline NotificationConfiguration& WithStatus(ConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination information required to deliver a notification to a
     * customer.</p>
     */
    inline const NotificationDestinationConfig& GetDestinationConfig() const { return m_destinationConfig; }
    inline bool DestinationConfigHasBeenSet() const { return m_destinationConfigHasBeenSet; }
    template<typename DestinationConfigT = NotificationDestinationConfig>
    void SetDestinationConfig(DestinationConfigT&& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = std::forward<DestinationConfigT>(value); }
    template<typename DestinationConfigT = NotificationDestinationConfig>
    NotificationConfiguration& WithDestinationConfig(DestinationConfigT&& value) { SetDestinationConfig(std::forward<DestinationConfigT>(value)); return *this;}
    ///@}
  private:

    ConfigurationStatus m_status{ConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    NotificationDestinationConfig m_destinationConfig;
    bool m_destinationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
