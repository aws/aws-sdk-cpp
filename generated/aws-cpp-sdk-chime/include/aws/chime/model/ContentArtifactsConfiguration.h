﻿/**
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
  class AWS_CHIME_API ContentArtifactsConfiguration
  {
  public:
    ContentArtifactsConfiguration();
    ContentArtifactsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ContentArtifactsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the content artifact is enabled or disabled.</p>
     */
    inline const ArtifactsState& GetState() const{ return m_state; }

    /**
     * <p>Indicates whether the content artifact is enabled or disabled.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Indicates whether the content artifact is enabled or disabled.</p>
     */
    inline void SetState(const ArtifactsState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Indicates whether the content artifact is enabled or disabled.</p>
     */
    inline void SetState(ArtifactsState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Indicates whether the content artifact is enabled or disabled.</p>
     */
    inline ContentArtifactsConfiguration& WithState(const ArtifactsState& value) { SetState(value); return *this;}

    /**
     * <p>Indicates whether the content artifact is enabled or disabled.</p>
     */
    inline ContentArtifactsConfiguration& WithState(ArtifactsState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The MUX type of the artifact configuration.</p>
     */
    inline const ContentMuxType& GetMuxType() const{ return m_muxType; }

    /**
     * <p>The MUX type of the artifact configuration.</p>
     */
    inline bool MuxTypeHasBeenSet() const { return m_muxTypeHasBeenSet; }

    /**
     * <p>The MUX type of the artifact configuration.</p>
     */
    inline void SetMuxType(const ContentMuxType& value) { m_muxTypeHasBeenSet = true; m_muxType = value; }

    /**
     * <p>The MUX type of the artifact configuration.</p>
     */
    inline void SetMuxType(ContentMuxType&& value) { m_muxTypeHasBeenSet = true; m_muxType = std::move(value); }

    /**
     * <p>The MUX type of the artifact configuration.</p>
     */
    inline ContentArtifactsConfiguration& WithMuxType(const ContentMuxType& value) { SetMuxType(value); return *this;}

    /**
     * <p>The MUX type of the artifact configuration.</p>
     */
    inline ContentArtifactsConfiguration& WithMuxType(ContentMuxType&& value) { SetMuxType(std::move(value)); return *this;}

  private:

    ArtifactsState m_state;
    bool m_stateHasBeenSet;

    ContentMuxType m_muxType;
    bool m_muxTypeHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
