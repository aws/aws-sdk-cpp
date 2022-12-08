/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p> Details of an Amazon EC2 AMI.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Ami">AWS
   * API Reference</a></p>
   */
  class Ami
  {
  public:
    AWS_IMAGEBUILDER_API Ami();
    AWS_IMAGEBUILDER_API Ami(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Ami& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services Region of the Amazon EC2 AMI.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region of the Amazon EC2 AMI.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region of the Amazon EC2 AMI.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region of the Amazon EC2 AMI.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region of the Amazon EC2 AMI.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region of the Amazon EC2 AMI.</p>
     */
    inline Ami& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region of the Amazon EC2 AMI.</p>
     */
    inline Ami& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region of the Amazon EC2 AMI.</p>
     */
    inline Ami& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The AMI ID of the Amazon EC2 AMI.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The AMI ID of the Amazon EC2 AMI.</p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The AMI ID of the Amazon EC2 AMI.</p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The AMI ID of the Amazon EC2 AMI.</p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The AMI ID of the Amazon EC2 AMI.</p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The AMI ID of the Amazon EC2 AMI.</p>
     */
    inline Ami& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The AMI ID of the Amazon EC2 AMI.</p>
     */
    inline Ami& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The AMI ID of the Amazon EC2 AMI.</p>
     */
    inline Ami& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p>The name of the Amazon EC2 AMI.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon EC2 AMI.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon EC2 AMI.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon EC2 AMI.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon EC2 AMI.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon EC2 AMI.</p>
     */
    inline Ami& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon EC2 AMI.</p>
     */
    inline Ami& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon EC2 AMI.</p>
     */
    inline Ami& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the Amazon EC2 AMI. Minimum and maximum length are in
     * characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the Amazon EC2 AMI. Minimum and maximum length are in
     * characters.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the Amazon EC2 AMI. Minimum and maximum length are in
     * characters.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the Amazon EC2 AMI. Minimum and maximum length are in
     * characters.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the Amazon EC2 AMI. Minimum and maximum length are in
     * characters.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the Amazon EC2 AMI. Minimum and maximum length are in
     * characters.</p>
     */
    inline Ami& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the Amazon EC2 AMI. Minimum and maximum length are in
     * characters.</p>
     */
    inline Ami& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the Amazon EC2 AMI. Minimum and maximum length are in
     * characters.</p>
     */
    inline Ami& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const ImageState& GetState() const{ return m_state; }

    
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    
    inline void SetState(const ImageState& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(ImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline Ami& WithState(const ImageState& value) { SetState(value); return *this;}

    
    inline Ami& WithState(ImageState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The account ID of the owner of the AMI.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID of the owner of the AMI.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID of the owner of the AMI.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID of the owner of the AMI.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID of the owner of the AMI.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID of the owner of the AMI.</p>
     */
    inline Ami& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID of the owner of the AMI.</p>
     */
    inline Ami& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID of the owner of the AMI.</p>
     */
    inline Ami& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ImageState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
