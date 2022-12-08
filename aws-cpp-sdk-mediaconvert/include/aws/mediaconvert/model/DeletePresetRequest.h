/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class DeletePresetRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API DeletePresetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePreset"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    /**
     * The name of the preset to be deleted.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the preset to be deleted.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the preset to be deleted.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the preset to be deleted.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the preset to be deleted.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the preset to be deleted.
     */
    inline DeletePresetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the preset to be deleted.
     */
    inline DeletePresetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the preset to be deleted.
     */
    inline DeletePresetRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
