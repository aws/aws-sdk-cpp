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
    AWS_GLUE_API GetBlueprintRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBlueprint"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the blueprint.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetBlueprintRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not to include the blueprint in the response.</p>
     */
    inline bool GetIncludeBlueprint() const { return m_includeBlueprint; }
    inline bool IncludeBlueprintHasBeenSet() const { return m_includeBlueprintHasBeenSet; }
    inline void SetIncludeBlueprint(bool value) { m_includeBlueprintHasBeenSet = true; m_includeBlueprint = value; }
    inline GetBlueprintRequest& WithIncludeBlueprint(bool value) { SetIncludeBlueprint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not to include the parameter specification.</p>
     */
    inline bool GetIncludeParameterSpec() const { return m_includeParameterSpec; }
    inline bool IncludeParameterSpecHasBeenSet() const { return m_includeParameterSpecHasBeenSet; }
    inline void SetIncludeParameterSpec(bool value) { m_includeParameterSpecHasBeenSet = true; m_includeParameterSpec = value; }
    inline GetBlueprintRequest& WithIncludeParameterSpec(bool value) { SetIncludeParameterSpec(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_includeBlueprint{false};
    bool m_includeBlueprintHasBeenSet = false;

    bool m_includeParameterSpec{false};
    bool m_includeParameterSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
