/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/ImageScanStatus.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Shows the vulnerability scan status for a specific image, and the reason for
   * that status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImageScanState">AWS
   * API Reference</a></p>
   */
  class ImageScanState
  {
  public:
    AWS_IMAGEBUILDER_API ImageScanState();
    AWS_IMAGEBUILDER_API ImageScanState(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ImageScanState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current state of vulnerability scans for the image.</p>
     */
    inline const ImageScanStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ImageScanStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ImageScanStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ImageScanState& WithStatus(const ImageScanStatus& value) { SetStatus(value); return *this;}
    inline ImageScanState& WithStatus(ImageScanStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the scan status for the image.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline ImageScanState& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline ImageScanState& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline ImageScanState& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}
  private:

    ImageScanStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
