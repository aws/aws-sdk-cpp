/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Information about the model training data channel. A training data channel is
   * a named data source that the training algorithms can consume. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ModelTrainingDataChannel">AWS
   * API Reference</a></p>
   */
  class ModelTrainingDataChannel
  {
  public:
    AWS_CLEANROOMSML_API ModelTrainingDataChannel();
    AWS_CLEANROOMSML_API ModelTrainingDataChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ModelTrainingDataChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ML input channel for this model
     * training data channel.</p>
     */
    inline const Aws::String& GetMlInputChannelArn() const{ return m_mlInputChannelArn; }
    inline bool MlInputChannelArnHasBeenSet() const { return m_mlInputChannelArnHasBeenSet; }
    inline void SetMlInputChannelArn(const Aws::String& value) { m_mlInputChannelArnHasBeenSet = true; m_mlInputChannelArn = value; }
    inline void SetMlInputChannelArn(Aws::String&& value) { m_mlInputChannelArnHasBeenSet = true; m_mlInputChannelArn = std::move(value); }
    inline void SetMlInputChannelArn(const char* value) { m_mlInputChannelArnHasBeenSet = true; m_mlInputChannelArn.assign(value); }
    inline ModelTrainingDataChannel& WithMlInputChannelArn(const Aws::String& value) { SetMlInputChannelArn(value); return *this;}
    inline ModelTrainingDataChannel& WithMlInputChannelArn(Aws::String&& value) { SetMlInputChannelArn(std::move(value)); return *this;}
    inline ModelTrainingDataChannel& WithMlInputChannelArn(const char* value) { SetMlInputChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the training data channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline ModelTrainingDataChannel& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline ModelTrainingDataChannel& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline ModelTrainingDataChannel& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}
  private:

    Aws::String m_mlInputChannelArn;
    bool m_mlInputChannelArnHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
