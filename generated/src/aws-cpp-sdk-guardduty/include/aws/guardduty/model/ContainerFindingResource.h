/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about container resources involved in a GuardDuty
   * finding. This structure provides details about containers that were identified
   * as part of suspicious or malicious activity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ContainerFindingResource">AWS
   * API Reference</a></p>
   */
  class ContainerFindingResource
  {
  public:
    AWS_GUARDDUTY_API ContainerFindingResource() = default;
    AWS_GUARDDUTY_API ContainerFindingResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ContainerFindingResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container image information, including the image name and tag used to run
     * the container that was involved in the finding.</p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    ContainerFindingResource& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID associated with the container image.</p>
     */
    inline const Aws::String& GetImageUid() const { return m_imageUid; }
    inline bool ImageUidHasBeenSet() const { return m_imageUidHasBeenSet; }
    template<typename ImageUidT = Aws::String>
    void SetImageUid(ImageUidT&& value) { m_imageUidHasBeenSet = true; m_imageUid = std::forward<ImageUidT>(value); }
    template<typename ImageUidT = Aws::String>
    ContainerFindingResource& WithImageUid(ImageUidT&& value) { SetImageUid(std::forward<ImageUidT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_imageUid;
    bool m_imageUidHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
