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
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
    NamespaceSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    NamespaceSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the namespace.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

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
     * <p>The Amazon Resource Name (ARN) that Route 53 assigns to the namespace when
     * you create it.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) that Route 53 assigns to the namespace when
     * you create it.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that Route 53 assigns to the namespace when
     * you create it.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that Route 53 assigns to the namespace when
     * you create it.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that Route 53 assigns to the namespace when
     * you create it.</p>
     */
    inline NamespaceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that Route 53 assigns to the namespace when
     * you create it.</p>
     */
    inline NamespaceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that Route 53 assigns to the namespace when
     * you create it.</p>
     */
    inline NamespaceSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the namespace. When you create a namespace, Route 53
     * automatically creates a hosted zone that has the same name as the namespace.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the namespace. When you create a namespace, Route 53
     * automatically creates a hosted zone that has the same name as the namespace.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the namespace. When you create a namespace, Route 53
     * automatically creates a hosted zone that has the same name as the namespace.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the namespace. When you create a namespace, Route 53
     * automatically creates a hosted zone that has the same name as the namespace.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the namespace. When you create a namespace, Route 53
     * automatically creates a hosted zone that has the same name as the namespace.</p>
     */
    inline NamespaceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the namespace. When you create a namespace, Route 53
     * automatically creates a hosted zone that has the same name as the namespace.</p>
     */
    inline NamespaceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace. When you create a namespace, Route 53
     * automatically creates a hosted zone that has the same name as the namespace.</p>
     */
    inline NamespaceSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the namespace, either public or private.</p>
     */
    inline const NamespaceType& GetType() const{ return m_type; }

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

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    NamespaceType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
