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
   * <p>Contains information about an incremental training data channel that was used
   * to create a trained model. This structure provides details about the base model
   * and channel configuration used during incremental training.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/IncrementalTrainingDataChannelOutput">AWS
   * API Reference</a></p>
   */
  class IncrementalTrainingDataChannelOutput
  {
  public:
    AWS_CLEANROOMSML_API IncrementalTrainingDataChannelOutput() = default;
    AWS_CLEANROOMSML_API IncrementalTrainingDataChannelOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API IncrementalTrainingDataChannelOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the incremental training data channel that was used.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    IncrementalTrainingDataChannelOutput& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier of the trained model that was used for incremental
     * training.</p>
     */
    inline const Aws::String& GetVersionIdentifier() const { return m_versionIdentifier; }
    inline bool VersionIdentifierHasBeenSet() const { return m_versionIdentifierHasBeenSet; }
    template<typename VersionIdentifierT = Aws::String>
    void SetVersionIdentifier(VersionIdentifierT&& value) { m_versionIdentifierHasBeenSet = true; m_versionIdentifier = std::forward<VersionIdentifierT>(value); }
    template<typename VersionIdentifierT = Aws::String>
    IncrementalTrainingDataChannelOutput& WithVersionIdentifier(VersionIdentifierT&& value) { SetVersionIdentifier(std::forward<VersionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the base trained model that was used for incremental
     * training.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    IncrementalTrainingDataChannelOutput& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_versionIdentifier;
    bool m_versionIdentifierHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
