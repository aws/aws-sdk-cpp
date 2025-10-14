/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AssociateSoftwareToImageBuilderRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API AssociateSoftwareToImageBuilderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateSoftwareToImageBuilder"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the target image builder instance.</p>
     */
    inline const Aws::String& GetImageBuilderName() const { return m_imageBuilderName; }
    inline bool ImageBuilderNameHasBeenSet() const { return m_imageBuilderNameHasBeenSet; }
    template<typename ImageBuilderNameT = Aws::String>
    void SetImageBuilderName(ImageBuilderNameT&& value) { m_imageBuilderNameHasBeenSet = true; m_imageBuilderName = std::forward<ImageBuilderNameT>(value); }
    template<typename ImageBuilderNameT = Aws::String>
    AssociateSoftwareToImageBuilderRequest& WithImageBuilderName(ImageBuilderNameT&& value) { SetImageBuilderName(std::forward<ImageBuilderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of license included applications to associate with the image
     * builder.</p> <p>Possible values include the following:</p> <ul> <li>
     * <p>Microsoft_Office_2021_LTSC_Professional_Plus_32Bit</p> </li> <li>
     * <p>Microsoft_Office_2021_LTSC_Professional_Plus_64Bit</p> </li> <li>
     * <p>Microsoft_Office_2024_LTSC_Professional_Plus_32Bit</p> </li> <li>
     * <p>Microsoft_Office_2024_LTSC_Professional_Plus_64Bit</p> </li> <li>
     * <p>Microsoft_Visio_2021_LTSC_Professional_32Bit</p> </li> <li>
     * <p>Microsoft_Visio_2021_LTSC_Professional_64Bit</p> </li> <li>
     * <p>Microsoft_Visio_2024_LTSC_Professional_32Bit</p> </li> <li>
     * <p>Microsoft_Visio_2024_LTSC_Professional_64Bit</p> </li> <li>
     * <p>Microsoft_Project_2021_Professional_32Bit</p> </li> <li>
     * <p>Microsoft_Project_2021_Professional_64Bit</p> </li> <li>
     * <p>Microsoft_Project_2024_Professional_32Bit</p> </li> <li>
     * <p>Microsoft_Project_2024_Professional_64Bit</p> </li> <li>
     * <p>Microsoft_Office_2021_LTSC_Standard_32Bit</p> </li> <li>
     * <p>Microsoft_Office_2021_LTSC_Standard_64Bit</p> </li> <li>
     * <p>Microsoft_Office_2024_LTSC_Standard_32Bit</p> </li> <li>
     * <p>Microsoft_Office_2024_LTSC_Standard_64Bit</p> </li> <li>
     * <p>Microsoft_Visio_2021_LTSC_Standard_32Bit</p> </li> <li>
     * <p>Microsoft_Visio_2021_LTSC_Standard_64Bit</p> </li> <li>
     * <p>Microsoft_Visio_2024_LTSC_Standard_32Bit</p> </li> <li>
     * <p>Microsoft_Visio_2024_LTSC_Standard_64Bit</p> </li> <li>
     * <p>Microsoft_Project_2021_Standard_32Bit</p> </li> <li>
     * <p>Microsoft_Project_2021_Standard_64Bit</p> </li> <li>
     * <p>Microsoft_Project_2024_Standard_32Bit</p> </li> <li>
     * <p>Microsoft_Project_2024_Standard_64Bit</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetSoftwareNames() const { return m_softwareNames; }
    inline bool SoftwareNamesHasBeenSet() const { return m_softwareNamesHasBeenSet; }
    template<typename SoftwareNamesT = Aws::Vector<Aws::String>>
    void SetSoftwareNames(SoftwareNamesT&& value) { m_softwareNamesHasBeenSet = true; m_softwareNames = std::forward<SoftwareNamesT>(value); }
    template<typename SoftwareNamesT = Aws::Vector<Aws::String>>
    AssociateSoftwareToImageBuilderRequest& WithSoftwareNames(SoftwareNamesT&& value) { SetSoftwareNames(std::forward<SoftwareNamesT>(value)); return *this;}
    template<typename SoftwareNamesT = Aws::String>
    AssociateSoftwareToImageBuilderRequest& AddSoftwareNames(SoftwareNamesT&& value) { m_softwareNamesHasBeenSet = true; m_softwareNames.emplace_back(std::forward<SoftwareNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_imageBuilderName;
    bool m_imageBuilderNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_softwareNames;
    bool m_softwareNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
