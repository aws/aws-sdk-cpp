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
    AWS_GLUE_API BatchGetBlueprintsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetBlueprints"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of blueprint names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>A list of blueprint names.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>A list of blueprint names.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>A list of blueprint names.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>A list of blueprint names.</p>
     */
    inline BatchGetBlueprintsRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>A list of blueprint names.</p>
     */
    inline BatchGetBlueprintsRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>A list of blueprint names.</p>
     */
    inline BatchGetBlueprintsRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>A list of blueprint names.</p>
     */
    inline BatchGetBlueprintsRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of blueprint names.</p>
     */
    inline BatchGetBlueprintsRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }


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
    inline BatchGetBlueprintsRequest& WithIncludeBlueprint(bool value) { SetIncludeBlueprint(value); return *this;}


    /**
     * <p>Specifies whether or not to include the parameters, as a JSON string, for the
     * blueprint in the response.</p>
     */
    inline bool GetIncludeParameterSpec() const{ return m_includeParameterSpec; }

    /**
     * <p>Specifies whether or not to include the parameters, as a JSON string, for the
     * blueprint in the response.</p>
     */
    inline bool IncludeParameterSpecHasBeenSet() const { return m_includeParameterSpecHasBeenSet; }

    /**
     * <p>Specifies whether or not to include the parameters, as a JSON string, for the
     * blueprint in the response.</p>
     */
    inline void SetIncludeParameterSpec(bool value) { m_includeParameterSpecHasBeenSet = true; m_includeParameterSpec = value; }

    /**
     * <p>Specifies whether or not to include the parameters, as a JSON string, for the
     * blueprint in the response.</p>
     */
    inline BatchGetBlueprintsRequest& WithIncludeParameterSpec(bool value) { SetIncludeParameterSpec(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    bool m_includeBlueprint;
    bool m_includeBlueprintHasBeenSet = false;

    bool m_includeParameterSpec;
    bool m_includeParameterSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
