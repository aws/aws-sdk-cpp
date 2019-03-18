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
   * <p>The inventory item result attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResultAttribute">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API ResultAttribute
  {
  public:
    ResultAttribute();
    ResultAttribute(Aws::Utils::Json::JsonView jsonValue);
    ResultAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the inventory item type. Valid value: AWS:InstanceInformation.
     * Default Value: AWS:InstanceInformation.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>Name of the inventory item type. Valid value: AWS:InstanceInformation.
     * Default Value: AWS:InstanceInformation.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>Name of the inventory item type. Valid value: AWS:InstanceInformation.
     * Default Value: AWS:InstanceInformation.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>Name of the inventory item type. Valid value: AWS:InstanceInformation.
     * Default Value: AWS:InstanceInformation.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>Name of the inventory item type. Valid value: AWS:InstanceInformation.
     * Default Value: AWS:InstanceInformation.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>Name of the inventory item type. Valid value: AWS:InstanceInformation.
     * Default Value: AWS:InstanceInformation.</p>
     */
    inline ResultAttribute& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>Name of the inventory item type. Valid value: AWS:InstanceInformation.
     * Default Value: AWS:InstanceInformation.</p>
     */
    inline ResultAttribute& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>Name of the inventory item type. Valid value: AWS:InstanceInformation.
     * Default Value: AWS:InstanceInformation.</p>
     */
    inline ResultAttribute& WithTypeName(const char* value) { SetTypeName(value); return *this;}

  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
