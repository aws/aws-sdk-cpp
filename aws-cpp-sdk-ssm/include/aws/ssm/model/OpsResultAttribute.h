/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The OpsItem data type to return.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsResultAttribute">AWS
   * API Reference</a></p>
   */
  class OpsResultAttribute
  {
  public:
    AWS_SSM_API OpsResultAttribute();
    AWS_SSM_API OpsResultAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsResultAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the data type. Valid value: <code>AWS:OpsItem</code>,
     * <code>AWS:EC2InstanceInformation</code>, <code>AWS:OpsItemTrendline</code>, or
     * <code>AWS:ComplianceSummary</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>Name of the data type. Valid value: <code>AWS:OpsItem</code>,
     * <code>AWS:EC2InstanceInformation</code>, <code>AWS:OpsItemTrendline</code>, or
     * <code>AWS:ComplianceSummary</code>.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>Name of the data type. Valid value: <code>AWS:OpsItem</code>,
     * <code>AWS:EC2InstanceInformation</code>, <code>AWS:OpsItemTrendline</code>, or
     * <code>AWS:ComplianceSummary</code>.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>Name of the data type. Valid value: <code>AWS:OpsItem</code>,
     * <code>AWS:EC2InstanceInformation</code>, <code>AWS:OpsItemTrendline</code>, or
     * <code>AWS:ComplianceSummary</code>.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>Name of the data type. Valid value: <code>AWS:OpsItem</code>,
     * <code>AWS:EC2InstanceInformation</code>, <code>AWS:OpsItemTrendline</code>, or
     * <code>AWS:ComplianceSummary</code>.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>Name of the data type. Valid value: <code>AWS:OpsItem</code>,
     * <code>AWS:EC2InstanceInformation</code>, <code>AWS:OpsItemTrendline</code>, or
     * <code>AWS:ComplianceSummary</code>.</p>
     */
    inline OpsResultAttribute& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>Name of the data type. Valid value: <code>AWS:OpsItem</code>,
     * <code>AWS:EC2InstanceInformation</code>, <code>AWS:OpsItemTrendline</code>, or
     * <code>AWS:ComplianceSummary</code>.</p>
     */
    inline OpsResultAttribute& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>Name of the data type. Valid value: <code>AWS:OpsItem</code>,
     * <code>AWS:EC2InstanceInformation</code>, <code>AWS:OpsItemTrendline</code>, or
     * <code>AWS:ComplianceSummary</code>.</p>
     */
    inline OpsResultAttribute& WithTypeName(const char* value) { SetTypeName(value); return *this;}

  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
