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
    AWS_DAX_API UpdateParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateParameterGroup"; }

    AWS_DAX_API Aws::String SerializePayload() const override;

    AWS_DAX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * the array represents a single parameter.</p>  <p>
     * <code>record-ttl-millis</code> and <code>query-ttl-millis</code> are the only
     * supported parameter names. For more details, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DAX.cluster-management.html#DAX.cluster-management.custom-settings.ttl">Configuring
     * TTL Settings</a>.</p> 
     */
    inline const Aws::Vector<ParameterNameValue>& GetParameterNameValues() const{ return m_parameterNameValues; }

    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>  <p>
     * <code>record-ttl-millis</code> and <code>query-ttl-millis</code> are the only
     * supported parameter names. For more details, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DAX.cluster-management.html#DAX.cluster-management.custom-settings.ttl">Configuring
     * TTL Settings</a>.</p> 
     */
    inline bool ParameterNameValuesHasBeenSet() const { return m_parameterNameValuesHasBeenSet; }

    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>  <p>
     * <code>record-ttl-millis</code> and <code>query-ttl-millis</code> are the only
     * supported parameter names. For more details, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DAX.cluster-management.html#DAX.cluster-management.custom-settings.ttl">Configuring
     * TTL Settings</a>.</p> 
     */
    inline void SetParameterNameValues(const Aws::Vector<ParameterNameValue>& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues = value; }

    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>  <p>
     * <code>record-ttl-millis</code> and <code>query-ttl-millis</code> are the only
     * supported parameter names. For more details, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DAX.cluster-management.html#DAX.cluster-management.custom-settings.ttl">Configuring
     * TTL Settings</a>.</p> 
     */
    inline void SetParameterNameValues(Aws::Vector<ParameterNameValue>&& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues = std::move(value); }

    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>  <p>
     * <code>record-ttl-millis</code> and <code>query-ttl-millis</code> are the only
     * supported parameter names. For more details, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DAX.cluster-management.html#DAX.cluster-management.custom-settings.ttl">Configuring
     * TTL Settings</a>.</p> 
     */
    inline UpdateParameterGroupRequest& WithParameterNameValues(const Aws::Vector<ParameterNameValue>& value) { SetParameterNameValues(value); return *this;}

    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>  <p>
     * <code>record-ttl-millis</code> and <code>query-ttl-millis</code> are the only
     * supported parameter names. For more details, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DAX.cluster-management.html#DAX.cluster-management.custom-settings.ttl">Configuring
     * TTL Settings</a>.</p> 
     */
    inline UpdateParameterGroupRequest& WithParameterNameValues(Aws::Vector<ParameterNameValue>&& value) { SetParameterNameValues(std::move(value)); return *this;}

    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>  <p>
     * <code>record-ttl-millis</code> and <code>query-ttl-millis</code> are the only
     * supported parameter names. For more details, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DAX.cluster-management.html#DAX.cluster-management.custom-settings.ttl">Configuring
     * TTL Settings</a>.</p> 
     */
    inline UpdateParameterGroupRequest& AddParameterNameValues(const ParameterNameValue& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues.push_back(value); return *this; }

    /**
     * <p>An array of name-value pairs for the parameters in the group. Each element in
     * the array represents a single parameter.</p>  <p>
     * <code>record-ttl-millis</code> and <code>query-ttl-millis</code> are the only
     * supported parameter names. For more details, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DAX.cluster-management.html#DAX.cluster-management.custom-settings.ttl">Configuring
     * TTL Settings</a>.</p> 
     */
    inline UpdateParameterGroupRequest& AddParameterNameValues(ParameterNameValue&& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;

    Aws::Vector<ParameterNameValue> m_parameterNameValues;
    bool m_parameterNameValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
