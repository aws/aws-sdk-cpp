/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/ArtifactsState.h>
#include <aws/chime/model/ContentMuxType.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The content artifact object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ContentArtifactsConfiguration">AWS
   * API Reference</a></p>
   */
  class ContentArtifactsConfiguration
  {
  public:
    AWS_CHIME_API ContentArtifactsConfiguration();
    AWS_CHIME_API ContentArtifactsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API ContentArtifactsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the content artifact is enabled or disabled.</p>
     */
    inline const ArtifactsState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ArtifactsState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ArtifactsState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ContentArtifactsConfiguration& WithState(const ArtifactsState& value) { SetState(value); return *this;}
    inline ContentArtifactsConfiguration& WithState(ArtifactsState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MUX type of the artifact configuration.</p>
     */
    inline const ContentMuxType& GetMuxType() const{ return m_muxType; }
    inline bool MuxTypeHasBeenSet() const { return m_muxTypeHasBeenSet; }
    inline void SetMuxType(const ContentMuxType& value) { m_muxTypeHasBeenSet = true; m_muxType = value; }
    inline void SetMuxType(ContentMuxType&& value) { m_muxTypeHasBeenSet = true; m_muxType = std::move(value); }
    inline ContentArtifactsConfiguration& WithMuxType(const ContentMuxType& value) { SetMuxType(value); return *this;}
    inline ContentArtifactsConfiguration& WithMuxType(ContentMuxType&& value) { SetMuxType(std::move(value)); return *this;}
    ///@}
  private:

    ArtifactsState m_state;
    bool m_stateHasBeenSet = false;

    ContentMuxType m_muxType;
    bool m_muxTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
