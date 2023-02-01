/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DAX
{
namespace Model
{

  /**
   * <p>A named set of parameters that are applied to all of the nodes in a DAX
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/ParameterGroup">AWS
   * API Reference</a></p>
   */
  class ParameterGroup
  {
  public:
    AWS_DAX_API ParameterGroup();
    AWS_DAX_API ParameterGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API ParameterGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the parameter group.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The name of the parameter group.</p>
     */
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the parameter group.</p>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of the parameter group.</p>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }

    /**
     * <p>The name of the parameter group.</p>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /**
     * <p>The name of the parameter group.</p>
     */
    inline ParameterGroup& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of the parameter group.</p>
     */
    inline ParameterGroup& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter group.</p>
     */
    inline ParameterGroup& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}


    /**
     * <p>A description of the parameter group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the parameter group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the parameter group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the parameter group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the parameter group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the parameter group.</p>
     */
    inline ParameterGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the parameter group.</p>
     */
    inline ParameterGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the parameter group.</p>
     */
    inline ParameterGroup& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
