/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class ResetParameterGroupRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API ResetParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetParameterGroup"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the parameter group to reset.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The name of the parameter group to reset.</p>
     */
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the parameter group to reset.</p>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of the parameter group to reset.</p>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }

    /**
     * <p>The name of the parameter group to reset.</p>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /**
     * <p>The name of the parameter group to reset.</p>
     */
    inline ResetParameterGroupRequest& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of the parameter group to reset.</p>
     */
    inline ResetParameterGroupRequest& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter group to reset.</p>
     */
    inline ResetParameterGroupRequest& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}


    /**
     * <p>If true, all parameters in the parameter group are reset to their default
     * values. If false, only the parameters listed by ParameterNames are reset to
     * their default values.</p>
     */
    inline bool GetAllParameters() const{ return m_allParameters; }

    /**
     * <p>If true, all parameters in the parameter group are reset to their default
     * values. If false, only the parameters listed by ParameterNames are reset to
     * their default values.</p>
     */
    inline bool AllParametersHasBeenSet() const { return m_allParametersHasBeenSet; }

    /**
     * <p>If true, all parameters in the parameter group are reset to their default
     * values. If false, only the parameters listed by ParameterNames are reset to
     * their default values.</p>
     */
    inline void SetAllParameters(bool value) { m_allParametersHasBeenSet = true; m_allParameters = value; }

    /**
     * <p>If true, all parameters in the parameter group are reset to their default
     * values. If false, only the parameters listed by ParameterNames are reset to
     * their default values.</p>
     */
    inline ResetParameterGroupRequest& WithAllParameters(bool value) { SetAllParameters(value); return *this;}


    /**
     * <p>An array of parameter names to reset to their default values. If
     * AllParameters is true, do not use ParameterNames. If AllParameters is false, you
     * must specify the name of at least one parameter to reset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParameterNames() const{ return m_parameterNames; }

    /**
     * <p>An array of parameter names to reset to their default values. If
     * AllParameters is true, do not use ParameterNames. If AllParameters is false, you
     * must specify the name of at least one parameter to reset.</p>
     */
    inline bool ParameterNamesHasBeenSet() const { return m_parameterNamesHasBeenSet; }

    /**
     * <p>An array of parameter names to reset to their default values. If
     * AllParameters is true, do not use ParameterNames. If AllParameters is false, you
     * must specify the name of at least one parameter to reset.</p>
     */
    inline void SetParameterNames(const Aws::Vector<Aws::String>& value) { m_parameterNamesHasBeenSet = true; m_parameterNames = value; }

    /**
     * <p>An array of parameter names to reset to their default values. If
     * AllParameters is true, do not use ParameterNames. If AllParameters is false, you
     * must specify the name of at least one parameter to reset.</p>
     */
    inline void SetParameterNames(Aws::Vector<Aws::String>&& value) { m_parameterNamesHasBeenSet = true; m_parameterNames = std::move(value); }

    /**
     * <p>An array of parameter names to reset to their default values. If
     * AllParameters is true, do not use ParameterNames. If AllParameters is false, you
     * must specify the name of at least one parameter to reset.</p>
     */
    inline ResetParameterGroupRequest& WithParameterNames(const Aws::Vector<Aws::String>& value) { SetParameterNames(value); return *this;}

    /**
     * <p>An array of parameter names to reset to their default values. If
     * AllParameters is true, do not use ParameterNames. If AllParameters is false, you
     * must specify the name of at least one parameter to reset.</p>
     */
    inline ResetParameterGroupRequest& WithParameterNames(Aws::Vector<Aws::String>&& value) { SetParameterNames(std::move(value)); return *this;}

    /**
     * <p>An array of parameter names to reset to their default values. If
     * AllParameters is true, do not use ParameterNames. If AllParameters is false, you
     * must specify the name of at least one parameter to reset.</p>
     */
    inline ResetParameterGroupRequest& AddParameterNames(const Aws::String& value) { m_parameterNamesHasBeenSet = true; m_parameterNames.push_back(value); return *this; }

    /**
     * <p>An array of parameter names to reset to their default values. If
     * AllParameters is true, do not use ParameterNames. If AllParameters is false, you
     * must specify the name of at least one parameter to reset.</p>
     */
    inline ResetParameterGroupRequest& AddParameterNames(Aws::String&& value) { m_parameterNamesHasBeenSet = true; m_parameterNames.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of parameter names to reset to their default values. If
     * AllParameters is true, do not use ParameterNames. If AllParameters is false, you
     * must specify the name of at least one parameter to reset.</p>
     */
    inline ResetParameterGroupRequest& AddParameterNames(const char* value) { m_parameterNamesHasBeenSet = true; m_parameterNames.push_back(value); return *this; }

  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;

    bool m_allParameters;
    bool m_allParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_parameterNames;
    bool m_parameterNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
