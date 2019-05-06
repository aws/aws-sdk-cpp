/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API CopyImageRequest : public AppStreamRequest
  {
  public:
    CopyImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyImage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the image to copy.</p>
     */
    inline const Aws::String& GetSourceImageName() const{ return m_sourceImageName; }

    /**
     * <p>The name of the image to copy.</p>
     */
    inline bool SourceImageNameHasBeenSet() const { return m_sourceImageNameHasBeenSet; }

    /**
     * <p>The name of the image to copy.</p>
     */
    inline void SetSourceImageName(const Aws::String& value) { m_sourceImageNameHasBeenSet = true; m_sourceImageName = value; }

    /**
     * <p>The name of the image to copy.</p>
     */
    inline void SetSourceImageName(Aws::String&& value) { m_sourceImageNameHasBeenSet = true; m_sourceImageName = std::move(value); }

    /**
     * <p>The name of the image to copy.</p>
     */
    inline void SetSourceImageName(const char* value) { m_sourceImageNameHasBeenSet = true; m_sourceImageName.assign(value); }

    /**
     * <p>The name of the image to copy.</p>
     */
    inline CopyImageRequest& WithSourceImageName(const Aws::String& value) { SetSourceImageName(value); return *this;}

    /**
     * <p>The name of the image to copy.</p>
     */
    inline CopyImageRequest& WithSourceImageName(Aws::String&& value) { SetSourceImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the image to copy.</p>
     */
    inline CopyImageRequest& WithSourceImageName(const char* value) { SetSourceImageName(value); return *this;}


    /**
     * <p>The name that the image will have when it is copied to the destination.</p>
     */
    inline const Aws::String& GetDestinationImageName() const{ return m_destinationImageName; }

    /**
     * <p>The name that the image will have when it is copied to the destination.</p>
     */
    inline bool DestinationImageNameHasBeenSet() const { return m_destinationImageNameHasBeenSet; }

    /**
     * <p>The name that the image will have when it is copied to the destination.</p>
     */
    inline void SetDestinationImageName(const Aws::String& value) { m_destinationImageNameHasBeenSet = true; m_destinationImageName = value; }

    /**
     * <p>The name that the image will have when it is copied to the destination.</p>
     */
    inline void SetDestinationImageName(Aws::String&& value) { m_destinationImageNameHasBeenSet = true; m_destinationImageName = std::move(value); }

    /**
     * <p>The name that the image will have when it is copied to the destination.</p>
     */
    inline void SetDestinationImageName(const char* value) { m_destinationImageNameHasBeenSet = true; m_destinationImageName.assign(value); }

    /**
     * <p>The name that the image will have when it is copied to the destination.</p>
     */
    inline CopyImageRequest& WithDestinationImageName(const Aws::String& value) { SetDestinationImageName(value); return *this;}

    /**
     * <p>The name that the image will have when it is copied to the destination.</p>
     */
    inline CopyImageRequest& WithDestinationImageName(Aws::String&& value) { SetDestinationImageName(std::move(value)); return *this;}

    /**
     * <p>The name that the image will have when it is copied to the destination.</p>
     */
    inline CopyImageRequest& WithDestinationImageName(const char* value) { SetDestinationImageName(value); return *this;}


    /**
     * <p>The destination region to which the image will be copied. This parameter is
     * required, even if you are copying an image within the same region.</p>
     */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }

    /**
     * <p>The destination region to which the image will be copied. This parameter is
     * required, even if you are copying an image within the same region.</p>
     */
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }

    /**
     * <p>The destination region to which the image will be copied. This parameter is
     * required, even if you are copying an image within the same region.</p>
     */
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }

    /**
     * <p>The destination region to which the image will be copied. This parameter is
     * required, even if you are copying an image within the same region.</p>
     */
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::move(value); }

    /**
     * <p>The destination region to which the image will be copied. This parameter is
     * required, even if you are copying an image within the same region.</p>
     */
    inline void SetDestinationRegion(const char* value) { m_destinationRegionHasBeenSet = true; m_destinationRegion.assign(value); }

    /**
     * <p>The destination region to which the image will be copied. This parameter is
     * required, even if you are copying an image within the same region.</p>
     */
    inline CopyImageRequest& WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}

    /**
     * <p>The destination region to which the image will be copied. This parameter is
     * required, even if you are copying an image within the same region.</p>
     */
    inline CopyImageRequest& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(std::move(value)); return *this;}

    /**
     * <p>The destination region to which the image will be copied. This parameter is
     * required, even if you are copying an image within the same region.</p>
     */
    inline CopyImageRequest& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}


    /**
     * <p>The description that the image will have when it is copied to the
     * destination.</p>
     */
    inline const Aws::String& GetDestinationImageDescription() const{ return m_destinationImageDescription; }

    /**
     * <p>The description that the image will have when it is copied to the
     * destination.</p>
     */
    inline bool DestinationImageDescriptionHasBeenSet() const { return m_destinationImageDescriptionHasBeenSet; }

    /**
     * <p>The description that the image will have when it is copied to the
     * destination.</p>
     */
    inline void SetDestinationImageDescription(const Aws::String& value) { m_destinationImageDescriptionHasBeenSet = true; m_destinationImageDescription = value; }

    /**
     * <p>The description that the image will have when it is copied to the
     * destination.</p>
     */
    inline void SetDestinationImageDescription(Aws::String&& value) { m_destinationImageDescriptionHasBeenSet = true; m_destinationImageDescription = std::move(value); }

    /**
     * <p>The description that the image will have when it is copied to the
     * destination.</p>
     */
    inline void SetDestinationImageDescription(const char* value) { m_destinationImageDescriptionHasBeenSet = true; m_destinationImageDescription.assign(value); }

    /**
     * <p>The description that the image will have when it is copied to the
     * destination.</p>
     */
    inline CopyImageRequest& WithDestinationImageDescription(const Aws::String& value) { SetDestinationImageDescription(value); return *this;}

    /**
     * <p>The description that the image will have when it is copied to the
     * destination.</p>
     */
    inline CopyImageRequest& WithDestinationImageDescription(Aws::String&& value) { SetDestinationImageDescription(std::move(value)); return *this;}

    /**
     * <p>The description that the image will have when it is copied to the
     * destination.</p>
     */
    inline CopyImageRequest& WithDestinationImageDescription(const char* value) { SetDestinationImageDescription(value); return *this;}

  private:

    Aws::String m_sourceImageName;
    bool m_sourceImageNameHasBeenSet;

    Aws::String m_destinationImageName;
    bool m_destinationImageNameHasBeenSet;

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet;

    Aws::String m_destinationImageDescription;
    bool m_destinationImageDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
