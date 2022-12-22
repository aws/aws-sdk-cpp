/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/ConnectedHomeSettingsForUpdate.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p> The stream processor settings that you want to update.
   * <code>ConnectedHome</code> settings can be updated to detect different labels
   * with a different minimum confidence. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StreamProcessorSettingsForUpdate">AWS
   * API Reference</a></p>
   */
  class StreamProcessorSettingsForUpdate
  {
  public:
    AWS_REKOGNITION_API StreamProcessorSettingsForUpdate();
    AWS_REKOGNITION_API StreamProcessorSettingsForUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API StreamProcessorSettingsForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The label detection settings you want to use for your stream processor. </p>
     */
    inline const ConnectedHomeSettingsForUpdate& GetConnectedHomeForUpdate() const{ return m_connectedHomeForUpdate; }

    /**
     * <p> The label detection settings you want to use for your stream processor. </p>
     */
    inline bool ConnectedHomeForUpdateHasBeenSet() const { return m_connectedHomeForUpdateHasBeenSet; }

    /**
     * <p> The label detection settings you want to use for your stream processor. </p>
     */
    inline void SetConnectedHomeForUpdate(const ConnectedHomeSettingsForUpdate& value) { m_connectedHomeForUpdateHasBeenSet = true; m_connectedHomeForUpdate = value; }

    /**
     * <p> The label detection settings you want to use for your stream processor. </p>
     */
    inline void SetConnectedHomeForUpdate(ConnectedHomeSettingsForUpdate&& value) { m_connectedHomeForUpdateHasBeenSet = true; m_connectedHomeForUpdate = std::move(value); }

    /**
     * <p> The label detection settings you want to use for your stream processor. </p>
     */
    inline StreamProcessorSettingsForUpdate& WithConnectedHomeForUpdate(const ConnectedHomeSettingsForUpdate& value) { SetConnectedHomeForUpdate(value); return *this;}

    /**
     * <p> The label detection settings you want to use for your stream processor. </p>
     */
    inline StreamProcessorSettingsForUpdate& WithConnectedHomeForUpdate(ConnectedHomeSettingsForUpdate&& value) { SetConnectedHomeForUpdate(std::move(value)); return *this;}

  private:

    ConnectedHomeSettingsForUpdate m_connectedHomeForUpdate;
    bool m_connectedHomeForUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
