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
   * <p>A complex type that contains information about a specified
   * namespace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/Namespace">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API Namespace
  {
  public:
    Namespace();
    Namespace(Aws::Utils::Json::JsonView jsonValue);
    Namespace& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a namespace.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of a namespace.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of a namespace.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of a namespace.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of a namespace.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of a namespace.</p>
     */
    inline Namespace& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of a namespace.</p>
     */
    inline Namespace& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of a namespace.</p>
     */
    inline Namespace& WithId(const char* value) { SetId(value); return *this;}


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
    inline Namespace& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the namespace
     * when you create it.</p>
     */
    inline Namespace& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the namespace
     * when you create it.</p>
     */
    inline Namespace& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the namespace, such as <code>example.com</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the namespace, such as <code>example.com</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the namespace, such as <code>example.com</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the namespace, such as <code>example.com</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the namespace, such as <code>example.com</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the namespace, such as <code>example.com</code>.</p>
     */
    inline Namespace& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the namespace, such as <code>example.com</code>.</p>
     */
    inline Namespace& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace, such as <code>example.com</code>.</p>
     */
    inline Namespace& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the namespace. Valid values are <code>DNS_PUBLIC</code> and
     * <code>DNS_PRIVATE</code>.</p>
     */
    inline const NamespaceType& GetType() const{ return m_type; }

    /**
     * <p>The type of the namespace. Valid values are <code>DNS_PUBLIC</code> and
     * <code>DNS_PRIVATE</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the namespace. Valid values are <code>DNS_PUBLIC</code> and
     * <code>DNS_PRIVATE</code>.</p>
     */
    inline void SetType(const NamespaceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the namespace. Valid values are <code>DNS_PUBLIC</code> and
     * <code>DNS_PRIVATE</code>.</p>
     */
    inline void SetType(NamespaceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the namespace. Valid values are <code>DNS_PUBLIC</code> and
     * <code>DNS_PRIVATE</code>.</p>
     */
    inline Namespace& WithType(const NamespaceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the namespace. Valid values are <code>DNS_PUBLIC</code> and
     * <code>DNS_PRIVATE</code>.</p>
     */
    inline Namespace& WithType(NamespaceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The description that you specify for the namespace when you create it.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description that you specify for the namespace when you create it.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description that you specify for the namespace when you create it.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description that you specify for the namespace when you create it.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description that you specify for the namespace when you create it.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description that you specify for the namespace when you create it.</p>
     */
    inline Namespace& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description that you specify for the namespace when you create it.</p>
     */
    inline Namespace& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description that you specify for the namespace when you create it.</p>
     */
    inline Namespace& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The number of services that are associated with the namespace.</p>
     */
    inline int GetServiceCount() const{ return m_serviceCount; }

    /**
     * <p>The number of services that are associated with the namespace.</p>
     */
    inline bool ServiceCountHasBeenSet() const { return m_serviceCountHasBeenSet; }

    /**
     * <p>The number of services that are associated with the namespace.</p>
     */
    inline void SetServiceCount(int value) { m_serviceCountHasBeenSet = true; m_serviceCount = value; }

    /**
     * <p>The number of services that are associated with the namespace.</p>
     */
    inline Namespace& WithServiceCount(int value) { SetServiceCount(value); return *this;}


    /**
     * <p>A complex type that contains information that's specific to the type of the
     * namespace.</p>
     */
    inline const NamespaceProperties& GetProperties() const{ return m_properties; }

    /**
     * <p>A complex type that contains information that's specific to the type of the
     * namespace.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>A complex type that contains information that's specific to the type of the
     * namespace.</p>
     */
    inline void SetProperties(const NamespaceProperties& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A complex type that contains information that's specific to the type of the
     * namespace.</p>
     */
    inline void SetProperties(NamespaceProperties&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>A complex type that contains information that's specific to the type of the
     * namespace.</p>
     */
    inline Namespace& WithProperties(const NamespaceProperties& value) { SetProperties(value); return *this;}

    /**
     * <p>A complex type that contains information that's specific to the type of the
     * namespace.</p>
     */
    inline Namespace& WithProperties(NamespaceProperties&& value) { SetProperties(std::move(value)); return *this;}


    /**
     * <p>The date that the namespace was created, in Unix date/time format and
     * Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date that the namespace was created, in Unix date/time format and
     * Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date that the namespace was created, in Unix date/time format and
     * Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date that the namespace was created, in Unix date/time format and
     * Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date that the namespace was created, in Unix date/time format and
     * Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline Namespace& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date that the namespace was created, in Unix date/time format and
     * Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline Namespace& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing an operation twice. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing an operation twice. </p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing an operation twice. </p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing an operation twice. </p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing an operation twice. </p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing an operation twice. </p>
     */
    inline Namespace& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing an operation twice. </p>
     */
    inline Namespace& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing an operation twice. </p>
     */
    inline Namespace& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}

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

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
