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
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/NamespaceType.h>
#include <aws/servicediscovery/model/NamespaceProperties.h>
#include <aws/core/utils/DateTime.h>
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
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that contains information about a namespace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/NamespaceSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API NamespaceSummary
  {
  public:
    NamespaceSummary();
    NamespaceSummary(Aws::Utils::Json::JsonView jsonValue);
    NamespaceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the namespace.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the namespace.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the namespace.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the namespace.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the namespace.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the namespace.</p>
     */
    inline NamespaceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the namespace.</p>
     */
    inline NamespaceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the namespace.</p>
     */
    inline NamespaceSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the namespace
     * when you create it.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the namespace
     * when you create it.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the namespace
     * when you create it.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the namespace
     * when you create it.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the namespace
     * when you create it.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the namespace
     * when you create it.</p>
     */
    inline NamespaceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the namespace
     * when you create it.</p>
     */
    inline NamespaceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the namespace
     * when you create it.</p>
     */
    inline NamespaceSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the namespace. When you create a namespace, AWS Cloud Map
     * automatically creates a Route 53 hosted zone that has the same name as the
     * namespace.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the namespace. When you create a namespace, AWS Cloud Map
     * automatically creates a Route 53 hosted zone that has the same name as the
     * namespace.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the namespace. When you create a namespace, AWS Cloud Map
     * automatically creates a Route 53 hosted zone that has the same name as the
     * namespace.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the namespace. When you create a namespace, AWS Cloud Map
     * automatically creates a Route 53 hosted zone that has the same name as the
     * namespace.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the namespace. When you create a namespace, AWS Cloud Map
     * automatically creates a Route 53 hosted zone that has the same name as the
     * namespace.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the namespace. When you create a namespace, AWS Cloud Map
     * automatically creates a Route 53 hosted zone that has the same name as the
     * namespace.</p>
     */
    inline NamespaceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the namespace. When you create a namespace, AWS Cloud Map
     * automatically creates a Route 53 hosted zone that has the same name as the
     * namespace.</p>
     */
    inline NamespaceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace. When you create a namespace, AWS Cloud Map
     * automatically creates a Route 53 hosted zone that has the same name as the
     * namespace.</p>
     */
    inline NamespaceSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the namespace, either public or private.</p>
     */
    inline const NamespaceType& GetType() const{ return m_type; }

    /**
     * <p>The type of the namespace, either public or private.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the namespace, either public or private.</p>
     */
    inline void SetType(const NamespaceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the namespace, either public or private.</p>
     */
    inline void SetType(NamespaceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the namespace, either public or private.</p>
     */
    inline NamespaceSummary& WithType(const NamespaceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the namespace, either public or private.</p>
     */
    inline NamespaceSummary& WithType(NamespaceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A description for the namespace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the namespace.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the namespace.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the namespace.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the namespace.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the namespace.</p>
     */
    inline NamespaceSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the namespace.</p>
     */
    inline NamespaceSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the namespace.</p>
     */
    inline NamespaceSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The number of services that were created using the namespace.</p>
     */
    inline int GetServiceCount() const{ return m_serviceCount; }

    /**
     * <p>The number of services that were created using the namespace.</p>
     */
    inline bool ServiceCountHasBeenSet() const { return m_serviceCountHasBeenSet; }

    /**
     * <p>The number of services that were created using the namespace.</p>
     */
    inline void SetServiceCount(int value) { m_serviceCountHasBeenSet = true; m_serviceCount = value; }

    /**
     * <p>The number of services that were created using the namespace.</p>
     */
    inline NamespaceSummary& WithServiceCount(int value) { SetServiceCount(value); return *this;}


    
    inline const NamespaceProperties& GetProperties() const{ return m_properties; }

    
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    
    inline void SetProperties(const NamespaceProperties& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    
    inline void SetProperties(NamespaceProperties&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    
    inline NamespaceSummary& WithProperties(const NamespaceProperties& value) { SetProperties(value); return *this;}

    
    inline NamespaceSummary& WithProperties(NamespaceProperties&& value) { SetProperties(std::move(value)); return *this;}


    /**
     * <p>The date and time that the namespace was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time that the namespace was created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time that the namespace was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time that the namespace was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time that the namespace was created.</p>
     */
    inline NamespaceSummary& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time that the namespace was created.</p>
     */
    inline NamespaceSummary& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    NamespaceType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_serviceCount;
    bool m_serviceCountHasBeenSet;

    NamespaceProperties m_properties;
    bool m_propertiesHasBeenSet;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
