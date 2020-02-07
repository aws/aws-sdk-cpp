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
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ImageState.h>
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
   * <p> Details of an EC2 AMI. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Ami">AWS
   * API Reference</a></p>
   */
  class AWS_IMAGEBUILDER_API Ami
  {
  public:
    Ami();
    Ami(Aws::Utils::Json::JsonView jsonValue);
    Ami& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The AWS Region of the EC2 AMI. </p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p> The AWS Region of the EC2 AMI. </p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p> The AWS Region of the EC2 AMI. </p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p> The AWS Region of the EC2 AMI. </p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p> The AWS Region of the EC2 AMI. </p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p> The AWS Region of the EC2 AMI. </p>
     */
    inline Ami& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p> The AWS Region of the EC2 AMI. </p>
     */
    inline Ami& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p> The AWS Region of the EC2 AMI. </p>
     */
    inline Ami& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p> The AMI ID of the EC2 AMI. </p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p> The AMI ID of the EC2 AMI. </p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p> The AMI ID of the EC2 AMI. </p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p> The AMI ID of the EC2 AMI. </p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p> The AMI ID of the EC2 AMI. </p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p> The AMI ID of the EC2 AMI. </p>
     */
    inline Ami& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p> The AMI ID of the EC2 AMI. </p>
     */
    inline Ami& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p> The AMI ID of the EC2 AMI. </p>
     */
    inline Ami& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p> The name of the EC2 AMI. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the EC2 AMI. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the EC2 AMI. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the EC2 AMI. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the EC2 AMI. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the EC2 AMI. </p>
     */
    inline Ami& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the EC2 AMI. </p>
     */
    inline Ami& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the EC2 AMI. </p>
     */
    inline Ami& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the EC2 AMI. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the EC2 AMI. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the EC2 AMI. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the EC2 AMI. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the EC2 AMI. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the EC2 AMI. </p>
     */
    inline Ami& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the EC2 AMI. </p>
     */
    inline Ami& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the EC2 AMI. </p>
     */
    inline Ami& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const ImageState& GetState() const{ return m_state; }

    
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    
    inline void SetState(const ImageState& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(ImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline Ami& WithState(const ImageState& value) { SetState(value); return *this;}

    
    inline Ami& WithState(ImageState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_image;
    bool m_imageHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ImageState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
