/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ScanStatus.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The current status of an image scan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ImageScanStatus">AWS
   * API Reference</a></p>
   */
  class ImageScanStatus
  {
  public:
    AWS_ECR_API ImageScanStatus();
    AWS_ECR_API ImageScanStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API ImageScanStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current state of an image scan.</p>
     */
    inline const ScanStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of an image scan.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of an image scan.</p>
     */
    inline void SetStatus(const ScanStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of an image scan.</p>
     */
    inline void SetStatus(ScanStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of an image scan.</p>
     */
    inline ImageScanStatus& WithStatus(const ScanStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of an image scan.</p>
     */
    inline ImageScanStatus& WithStatus(ScanStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The description of the image scan status.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the image scan status.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the image scan status.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the image scan status.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the image scan status.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the image scan status.</p>
     */
    inline ImageScanStatus& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the image scan status.</p>
     */
    inline ImageScanStatus& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the image scan status.</p>
     */
    inline ImageScanStatus& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    ScanStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
