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
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>For <code>List</code> operations, an optional specification to return a
   * subset of objects, such as resolver endpoints or resolver rules.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/Filter">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RESOLVER_API Filter
  {
  public:
    Filter();
    Filter(Aws::Utils::Json::JsonView jsonValue);
    Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * name of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>Direction</code> for the
     * value of <code>Name</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * name of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>Direction</code> for the
     * value of <code>Name</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * name of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>Direction</code> for the
     * value of <code>Name</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * name of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>Direction</code> for the
     * value of <code>Name</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * name of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>Direction</code> for the
     * value of <code>Name</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * name of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>Direction</code> for the
     * value of <code>Name</code>.</p>
     */
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * name of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>Direction</code> for the
     * value of <code>Name</code>.</p>
     */
    inline Filter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * name of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>Direction</code> for the
     * value of <code>Name</code>.</p>
     */
    inline Filter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>INBOUND</code> for the value
     * of <code>Values</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>INBOUND</code> for the value
     * of <code>Values</code>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>INBOUND</code> for the value
     * of <code>Values</code>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>INBOUND</code> for the value
     * of <code>Values</code>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>INBOUND</code> for the value
     * of <code>Values</code>.</p>
     */
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>INBOUND</code> for the value
     * of <code>Values</code>.</p>
     */
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>INBOUND</code> for the value
     * of <code>Values</code>.</p>
     */
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>INBOUND</code> for the value
     * of <code>Values</code>.</p>
     */
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as resolver endpoints or resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound resolver endpoints, specify <code>INBOUND</code> for the value
     * of <code>Values</code>.</p>
     */
    inline Filter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
