/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/EdgeConfig.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class StartEdgeConfigurationUpdateRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API StartEdgeConfigurationUpdateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartEdgeConfigurationUpdate"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the stream whose edge configuration you want to update. Specify
     * either the <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }
    inline StartEdgeConfigurationUpdateRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}
    inline StartEdgeConfigurationUpdateRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}
    inline StartEdgeConfigurationUpdateRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the stream. Specify either the
     * <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }
    inline StartEdgeConfigurationUpdateRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}
    inline StartEdgeConfigurationUpdateRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}
    inline StartEdgeConfigurationUpdateRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The edge configuration details required to invoke the update process.</p>
     */
    inline const EdgeConfig& GetEdgeConfig() const{ return m_edgeConfig; }
    inline bool EdgeConfigHasBeenSet() const { return m_edgeConfigHasBeenSet; }
    inline void SetEdgeConfig(const EdgeConfig& value) { m_edgeConfigHasBeenSet = true; m_edgeConfig = value; }
    inline void SetEdgeConfig(EdgeConfig&& value) { m_edgeConfigHasBeenSet = true; m_edgeConfig = std::move(value); }
    inline StartEdgeConfigurationUpdateRequest& WithEdgeConfig(const EdgeConfig& value) { SetEdgeConfig(value); return *this;}
    inline StartEdgeConfigurationUpdateRequest& WithEdgeConfig(EdgeConfig&& value) { SetEdgeConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    EdgeConfig m_edgeConfig;
    bool m_edgeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
