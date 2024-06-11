/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateBlueprintRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateBlueprintRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBlueprint"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the blueprint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateBlueprintRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateBlueprintRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateBlueprintRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the blueprint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateBlueprintRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateBlueprintRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateBlueprintRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published.</p>
     */
    inline const Aws::String& GetBlueprintLocation() const{ return m_blueprintLocation; }
    inline bool BlueprintLocationHasBeenSet() const { return m_blueprintLocationHasBeenSet; }
    inline void SetBlueprintLocation(const Aws::String& value) { m_blueprintLocationHasBeenSet = true; m_blueprintLocation = value; }
    inline void SetBlueprintLocation(Aws::String&& value) { m_blueprintLocationHasBeenSet = true; m_blueprintLocation = std::move(value); }
    inline void SetBlueprintLocation(const char* value) { m_blueprintLocationHasBeenSet = true; m_blueprintLocation.assign(value); }
    inline UpdateBlueprintRequest& WithBlueprintLocation(const Aws::String& value) { SetBlueprintLocation(value); return *this;}
    inline UpdateBlueprintRequest& WithBlueprintLocation(Aws::String&& value) { SetBlueprintLocation(std::move(value)); return *this;}
    inline UpdateBlueprintRequest& WithBlueprintLocation(const char* value) { SetBlueprintLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_blueprintLocation;
    bool m_blueprintLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
