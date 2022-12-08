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
  class GetBlueprintRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetBlueprintRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBlueprint"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the blueprint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline GetBlueprintRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the blueprint.</p>
     */
    inline GetBlueprintRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the blueprint.</p>
     */
    inline GetBlueprintRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies whether or not to include the blueprint in the response.</p>
     */
    inline bool GetIncludeBlueprint() const{ return m_includeBlueprint; }

    /**
     * <p>Specifies whether or not to include the blueprint in the response.</p>
     */
    inline bool IncludeBlueprintHasBeenSet() const { return m_includeBlueprintHasBeenSet; }

    /**
     * <p>Specifies whether or not to include the blueprint in the response.</p>
     */
    inline void SetIncludeBlueprint(bool value) { m_includeBlueprintHasBeenSet = true; m_includeBlueprint = value; }

    /**
     * <p>Specifies whether or not to include the blueprint in the response.</p>
     */
    inline GetBlueprintRequest& WithIncludeBlueprint(bool value) { SetIncludeBlueprint(value); return *this;}


    /**
     * <p>Specifies whether or not to include the parameter specification.</p>
     */
    inline bool GetIncludeParameterSpec() const{ return m_includeParameterSpec; }

    /**
     * <p>Specifies whether or not to include the parameter specification.</p>
     */
    inline bool IncludeParameterSpecHasBeenSet() const { return m_includeParameterSpecHasBeenSet; }

    /**
     * <p>Specifies whether or not to include the parameter specification.</p>
     */
    inline void SetIncludeParameterSpec(bool value) { m_includeParameterSpecHasBeenSet = true; m_includeParameterSpec = value; }

    /**
     * <p>Specifies whether or not to include the parameter specification.</p>
     */
    inline GetBlueprintRequest& WithIncludeParameterSpec(bool value) { SetIncludeParameterSpec(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_includeBlueprint;
    bool m_includeBlueprintHasBeenSet = false;

    bool m_includeParameterSpec;
    bool m_includeParameterSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
