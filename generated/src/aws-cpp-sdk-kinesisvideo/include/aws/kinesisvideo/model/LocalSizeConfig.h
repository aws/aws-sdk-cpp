/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/StrategyOnFullSize.h>
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
   * <p>The configuration details that include the maximum size of the media
   * (<code>MaxLocalMediaSizeInMB</code>) that you want to store for a stream on the
   * Edge Agent, as well as the strategy that should be used
   * (<code>StrategyOnFullSize</code>) when a stream's maximum size has been
   * reached.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/LocalSizeConfig">AWS
   * API Reference</a></p>
   */
  class LocalSizeConfig
  {
  public:
    AWS_KINESISVIDEO_API LocalSizeConfig();
    AWS_KINESISVIDEO_API LocalSizeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API LocalSizeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The overall maximum size of the media that you want to store for a stream on
     * the Edge Agent. </p>
     */
    inline int GetMaxLocalMediaSizeInMB() const{ return m_maxLocalMediaSizeInMB; }

    /**
     * <p>The overall maximum size of the media that you want to store for a stream on
     * the Edge Agent. </p>
     */
    inline bool MaxLocalMediaSizeInMBHasBeenSet() const { return m_maxLocalMediaSizeInMBHasBeenSet; }

    /**
     * <p>The overall maximum size of the media that you want to store for a stream on
     * the Edge Agent. </p>
     */
    inline void SetMaxLocalMediaSizeInMB(int value) { m_maxLocalMediaSizeInMBHasBeenSet = true; m_maxLocalMediaSizeInMB = value; }

    /**
     * <p>The overall maximum size of the media that you want to store for a stream on
     * the Edge Agent. </p>
     */
    inline LocalSizeConfig& WithMaxLocalMediaSizeInMB(int value) { SetMaxLocalMediaSizeInMB(value); return *this;}


    /**
     * <p>The strategy to perform when a stream’s <code>MaxLocalMediaSizeInMB</code>
     * limit is reached.</p>
     */
    inline const StrategyOnFullSize& GetStrategyOnFullSize() const{ return m_strategyOnFullSize; }

    /**
     * <p>The strategy to perform when a stream’s <code>MaxLocalMediaSizeInMB</code>
     * limit is reached.</p>
     */
    inline bool StrategyOnFullSizeHasBeenSet() const { return m_strategyOnFullSizeHasBeenSet; }

    /**
     * <p>The strategy to perform when a stream’s <code>MaxLocalMediaSizeInMB</code>
     * limit is reached.</p>
     */
    inline void SetStrategyOnFullSize(const StrategyOnFullSize& value) { m_strategyOnFullSizeHasBeenSet = true; m_strategyOnFullSize = value; }

    /**
     * <p>The strategy to perform when a stream’s <code>MaxLocalMediaSizeInMB</code>
     * limit is reached.</p>
     */
    inline void SetStrategyOnFullSize(StrategyOnFullSize&& value) { m_strategyOnFullSizeHasBeenSet = true; m_strategyOnFullSize = std::move(value); }

    /**
     * <p>The strategy to perform when a stream’s <code>MaxLocalMediaSizeInMB</code>
     * limit is reached.</p>
     */
    inline LocalSizeConfig& WithStrategyOnFullSize(const StrategyOnFullSize& value) { SetStrategyOnFullSize(value); return *this;}

    /**
     * <p>The strategy to perform when a stream’s <code>MaxLocalMediaSizeInMB</code>
     * limit is reached.</p>
     */
    inline LocalSizeConfig& WithStrategyOnFullSize(StrategyOnFullSize&& value) { SetStrategyOnFullSize(std::move(value)); return *this;}

  private:

    int m_maxLocalMediaSizeInMB;
    bool m_maxLocalMediaSizeInMBHasBeenSet = false;

    StrategyOnFullSize m_strategyOnFullSize;
    bool m_strategyOnFullSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
