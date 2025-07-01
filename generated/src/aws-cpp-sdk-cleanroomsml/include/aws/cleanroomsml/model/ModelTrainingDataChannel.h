/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/S3DataDistributionType.h>
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
    AWS_CLEANROOMSML_API ModelTrainingDataChannel() = default;
    AWS_CLEANROOMSML_API ModelTrainingDataChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ModelTrainingDataChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ML input channel for this model
     * training data channel.</p>
     */
    inline const Aws::String& GetMlInputChannelArn() const { return m_mlInputChannelArn; }
    inline bool MlInputChannelArnHasBeenSet() const { return m_mlInputChannelArnHasBeenSet; }
    template<typename MlInputChannelArnT = Aws::String>
    void SetMlInputChannelArn(MlInputChannelArnT&& value) { m_mlInputChannelArnHasBeenSet = true; m_mlInputChannelArn = std::forward<MlInputChannelArnT>(value); }
    template<typename MlInputChannelArnT = Aws::String>
    ModelTrainingDataChannel& WithMlInputChannelArn(MlInputChannelArnT&& value) { SetMlInputChannelArn(std::forward<MlInputChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the training data channel.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    ModelTrainingDataChannel& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how the training data stored in Amazon S3 should be distributed to
     * training instances. This parameter controls the data distribution strategy for
     * the training job:</p> <ul> <li> <p> <code>FullyReplicated</code> - The entire
     * dataset is replicated on each training instance. This is suitable for smaller
     * datasets and algorithms that require access to the complete dataset.</p> </li>
     * <li> <p> <code>ShardedByS3Key</code> - The dataset is distributed across
     * training instances based on Amazon S3 key names. This is suitable for larger
     * datasets and distributed training scenarios where each instance processes a
     * subset of the data.</p> </li> </ul>
     */
    inline S3DataDistributionType GetS3DataDistributionType() const { return m_s3DataDistributionType; }
    inline bool S3DataDistributionTypeHasBeenSet() const { return m_s3DataDistributionTypeHasBeenSet; }
    inline void SetS3DataDistributionType(S3DataDistributionType value) { m_s3DataDistributionTypeHasBeenSet = true; m_s3DataDistributionType = value; }
    inline ModelTrainingDataChannel& WithS3DataDistributionType(S3DataDistributionType value) { SetS3DataDistributionType(value); return *this;}
    ///@}
  private:

    Aws::String m_mlInputChannelArn;
    bool m_mlInputChannelArnHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    S3DataDistributionType m_s3DataDistributionType{S3DataDistributionType::NOT_SET};
    bool m_s3DataDistributionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
