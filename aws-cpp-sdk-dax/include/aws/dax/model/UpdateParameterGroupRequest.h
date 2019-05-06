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
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/DAXRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dax/model/ParameterNameValue.h>
#include <utility>

namespace Aws
{
namespace DAX
{
namespace Model
{

  /**
   */
  class AWS_DAX_API UpdateParameterGroupRequest : public DAXRequest
  {
  public:
    UpdateParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateParameterGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline UpdateParameterGroupRequest& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of the parameter group.</p>
     */
    inline UpdateParameterGroupRequest& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter group.</p>
     */
    inline UpdateParameterGroupRequest& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}


    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>
     */
    inline const Aws::Vector<ParameterNameValue>& GetParameterNameValues() const{ return m_parameterNameValues; }

    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>
     */
    inline bool ParameterNameValuesHasBeenSet() const { return m_parameterNameValuesHasBeenSet; }

    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>
     */
    inline void SetParameterNameValues(const Aws::Vector<ParameterNameValue>& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues = value; }

    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>
     */
    inline void SetParameterNameValues(Aws::Vector<ParameterNameValue>&& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues = std::move(value); }

    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>
     */
    inline UpdateParameterGroupRequest& WithParameterNameValues(const Aws::Vector<ParameterNameValue>& value) { SetParameterNameValues(value); return *this;}

    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>
     */
    inline UpdateParameterGroupRequest& WithParameterNameValues(Aws::Vector<ParameterNameValue>&& value) { SetParameterNameValues(std::move(value)); return *this;}

    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>
     */
    inline UpdateParameterGroupRequest& AddParameterNameValues(const ParameterNameValue& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues.push_back(value); return *this; }

    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>
     */
    inline UpdateParameterGroupRequest& AddParameterNameValues(ParameterNameValue&& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet;

    Aws::Vector<ParameterNameValue> m_parameterNameValues;
    bool m_parameterNameValuesHasBeenSet;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
