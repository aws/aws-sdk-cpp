/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/PresenterPosition.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>Defines the configuration for a presenter-only video tile.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/PresenterOnlyConfiguration">AWS
   * API Reference</a></p>
   */
  class PresenterOnlyConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API PresenterOnlyConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API PresenterOnlyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API PresenterOnlyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the position of the presenter video tile. Default:
     * <code>TopRight</code>.</p>
     */
    inline PresenterPosition GetPresenterPosition() const { return m_presenterPosition; }
    inline bool PresenterPositionHasBeenSet() const { return m_presenterPositionHasBeenSet; }
    inline void SetPresenterPosition(PresenterPosition value) { m_presenterPositionHasBeenSet = true; m_presenterPosition = value; }
    inline PresenterOnlyConfiguration& WithPresenterPosition(PresenterPosition value) { SetPresenterPosition(value); return *this;}
    ///@}
  private:

    PresenterPosition m_presenterPosition{PresenterPosition::NOT_SET};
    bool m_presenterPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
