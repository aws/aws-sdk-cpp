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
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/model/ResourceAttributeType.h>
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
namespace MigrationHub
{
namespace Model
{

  /**
   * <p>Attribute associated with a resource.</p> <p>Note the corresponding format
   * required per type listed below:</p> <dl> <dt>IPV4</dt> <dd> <p>
   * <code>x.x.x.x</code> </p> <p> <i>where x is an integer in the range [0,255]</i>
   * </p> </dd> <dt>IPV6</dt> <dd> <p> <code>y : y : y : y : y : y : y : y</code>
   * </p> <p> <i>where y is a hexadecimal between 0 and FFFF. [0, FFFF]</i> </p>
   * </dd> <dt>MAC_ADDRESS</dt> <dd> <p>
   * <code>^([0-9A-Fa-f]{2}[:-]){5}([0-9A-Fa-f]{2})$</code> </p> </dd> <dt>FQDN</dt>
   * <dd> <p> <code>^[^&lt;&gt;{}\\\\/?,=\\p{Cntrl}]{1,256}$</code> </p> </dd>
   * </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ResourceAttribute">AWS
   * API Reference</a></p>
   */
  class AWS_MIGRATIONHUB_API ResourceAttribute
  {
  public:
    ResourceAttribute();
    ResourceAttribute(Aws::Utils::Json::JsonView jsonValue);
    ResourceAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Type of resource.</p>
     */
    inline const ResourceAttributeType& GetType() const{ return m_type; }

    /**
     * <p>Type of resource.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type of resource.</p>
     */
    inline void SetType(const ResourceAttributeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of resource.</p>
     */
    inline void SetType(ResourceAttributeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of resource.</p>
     */
    inline ResourceAttribute& WithType(const ResourceAttributeType& value) { SetType(value); return *this;}

    /**
     * <p>Type of resource.</p>
     */
    inline ResourceAttribute& WithType(ResourceAttributeType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Value of the resource type.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Value of the resource type.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Value of the resource type.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Value of the resource type.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Value of the resource type.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Value of the resource type.</p>
     */
    inline ResourceAttribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Value of the resource type.</p>
     */
    inline ResourceAttribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Value of the resource type.</p>
     */
    inline ResourceAttribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    ResourceAttributeType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
