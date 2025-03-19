/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchGetBlueprintsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchGetBlueprintsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetBlueprints"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of blueprint names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const { return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    template<typename NamesT = Aws::Vector<Aws::String>>
    void SetNames(NamesT&& value) { m_namesHasBeenSet = true; m_names = std::forward<NamesT>(value); }
    template<typename NamesT = Aws::Vector<Aws::String>>
    BatchGetBlueprintsRequest& WithNames(NamesT&& value) { SetNames(std::forward<NamesT>(value)); return *this;}
    template<typename NamesT = Aws::String>
    BatchGetBlueprintsRequest& AddNames(NamesT&& value) { m_namesHasBeenSet = true; m_names.emplace_back(std::forward<NamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not to include the blueprint in the response.</p>
     */
    inline bool GetIncludeBlueprint() const { return m_includeBlueprint; }
    inline bool IncludeBlueprintHasBeenSet() const { return m_includeBlueprintHasBeenSet; }
    inline void SetIncludeBlueprint(bool value) { m_includeBlueprintHasBeenSet = true; m_includeBlueprint = value; }
    inline BatchGetBlueprintsRequest& WithIncludeBlueprint(bool value) { SetIncludeBlueprint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not to include the parameters, as a JSON string, for the
     * blueprint in the response.</p>
     */
    inline bool GetIncludeParameterSpec() const { return m_includeParameterSpec; }
    inline bool IncludeParameterSpecHasBeenSet() const { return m_includeParameterSpecHasBeenSet; }
    inline void SetIncludeParameterSpec(bool value) { m_includeParameterSpecHasBeenSet = true; m_includeParameterSpec = value; }
    inline BatchGetBlueprintsRequest& WithIncludeParameterSpec(bool value) { SetIncludeParameterSpec(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    bool m_includeBlueprint{false};
    bool m_includeBlueprintHasBeenSet = false;

    bool m_includeParameterSpec{false};
    bool m_includeParameterSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
