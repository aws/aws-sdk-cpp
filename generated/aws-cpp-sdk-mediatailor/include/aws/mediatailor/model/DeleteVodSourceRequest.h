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
  class AWS_MEDIATAILOR_API DeleteVodSourceRequest : public MediaTailorRequest
  {
  public:
    DeleteVodSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVodSource"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = value; }

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::move(value); }

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName.assign(value); }

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline DeleteVodSourceRequest& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline DeleteVodSourceRequest& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline DeleteVodSourceRequest& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}


    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline const Aws::String& GetVodSourceName() const{ return m_vodSourceName; }

    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }

    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline void SetVodSourceName(const Aws::String& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = value; }

    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline void SetVodSourceName(Aws::String&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::move(value); }

    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline void SetVodSourceName(const char* value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName.assign(value); }

    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline DeleteVodSourceRequest& WithVodSourceName(const Aws::String& value) { SetVodSourceName(value); return *this;}

    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline DeleteVodSourceRequest& WithVodSourceName(Aws::String&& value) { SetVodSourceName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline DeleteVodSourceRequest& WithVodSourceName(const char* value) { SetVodSourceName(value); return *this;}

  private:

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
