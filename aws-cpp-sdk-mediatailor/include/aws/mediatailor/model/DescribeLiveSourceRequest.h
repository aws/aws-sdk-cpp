/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class DescribeLiveSourceRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API DescribeLiveSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLiveSource"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the live source.</p>
     */
    inline const Aws::String& GetLiveSourceName() const{ return m_liveSourceName; }

    /**
     * <p>The name of the live source.</p>
     */
    inline bool LiveSourceNameHasBeenSet() const { return m_liveSourceNameHasBeenSet; }

    /**
     * <p>The name of the live source.</p>
     */
    inline void SetLiveSourceName(const Aws::String& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = value; }

    /**
     * <p>The name of the live source.</p>
     */
    inline void SetLiveSourceName(Aws::String&& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = std::move(value); }

    /**
     * <p>The name of the live source.</p>
     */
    inline void SetLiveSourceName(const char* value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName.assign(value); }

    /**
     * <p>The name of the live source.</p>
     */
    inline DescribeLiveSourceRequest& WithLiveSourceName(const Aws::String& value) { SetLiveSourceName(value); return *this;}

    /**
     * <p>The name of the live source.</p>
     */
    inline DescribeLiveSourceRequest& WithLiveSourceName(Aws::String&& value) { SetLiveSourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the live source.</p>
     */
    inline DescribeLiveSourceRequest& WithLiveSourceName(const char* value) { SetLiveSourceName(value); return *this;}


    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }

    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = value; }

    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::move(value); }

    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName.assign(value); }

    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline DescribeLiveSourceRequest& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline DescribeLiveSourceRequest& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline DescribeLiveSourceRequest& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}

  private:

    Aws::String m_liveSourceName;
    bool m_liveSourceNameHasBeenSet = false;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
