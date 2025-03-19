/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateParameterGroupRequest : public DAXRequest
  {
  public:
    AWS_DAX_API UpdateParameterGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateParameterGroup"; }

    AWS_DAX_API Aws::String SerializePayload() const override;

    AWS_DAX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the parameter group.</p>
     */
    inline const Aws::String& GetParameterGroupName() const { return m_parameterGroupName; }
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }
    template<typename ParameterGroupNameT = Aws::String>
    void SetParameterGroupName(ParameterGroupNameT&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::forward<ParameterGroupNameT>(value); }
    template<typename ParameterGroupNameT = Aws::String>
    UpdateParameterGroupRequest& WithParameterGroupName(ParameterGroupNameT&& value) { SetParameterGroupName(std::forward<ParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>  <p>
     * <code>record-ttl-millis</code> and <code>query-ttl-millis</code> are the only
     * supported parameter names. For more details, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DAX.cluster-management.html#DAX.cluster-management.custom-settings.ttl">Configuring
     * TTL Settings</a>.</p> 
     */
    inline const Aws::Vector<ParameterNameValue>& GetParameterNameValues() const { return m_parameterNameValues; }
    inline bool ParameterNameValuesHasBeenSet() const { return m_parameterNameValuesHasBeenSet; }
    template<typename ParameterNameValuesT = Aws::Vector<ParameterNameValue>>
    void SetParameterNameValues(ParameterNameValuesT&& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues = std::forward<ParameterNameValuesT>(value); }
    template<typename ParameterNameValuesT = Aws::Vector<ParameterNameValue>>
    UpdateParameterGroupRequest& WithParameterNameValues(ParameterNameValuesT&& value) { SetParameterNameValues(std::forward<ParameterNameValuesT>(value)); return *this;}
    template<typename ParameterNameValuesT = ParameterNameValue>
    UpdateParameterGroupRequest& AddParameterNameValues(ParameterNameValuesT&& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues.emplace_back(std::forward<ParameterNameValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;

    Aws::Vector<ParameterNameValue> m_parameterNameValues;
    bool m_parameterNameValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
