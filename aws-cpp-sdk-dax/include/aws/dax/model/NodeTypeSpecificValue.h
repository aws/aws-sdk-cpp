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
namespace DAX
{
namespace Model
{

  /**
   * <p>Represents a parameter value that is applicable to a particular node
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/NodeTypeSpecificValue">AWS
   * API Reference</a></p>
   */
  class AWS_DAX_API NodeTypeSpecificValue
  {
  public:
    NodeTypeSpecificValue();
    NodeTypeSpecificValue(Aws::Utils::Json::JsonView jsonValue);
    NodeTypeSpecificValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A node type to which the parameter value applies.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>A node type to which the parameter value applies.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>A node type to which the parameter value applies.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>A node type to which the parameter value applies.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>A node type to which the parameter value applies.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>A node type to which the parameter value applies.</p>
     */
    inline NodeTypeSpecificValue& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>A node type to which the parameter value applies.</p>
     */
    inline NodeTypeSpecificValue& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>A node type to which the parameter value applies.</p>
     */
    inline NodeTypeSpecificValue& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>The parameter value for this node type.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The parameter value for this node type.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The parameter value for this node type.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The parameter value for this node type.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The parameter value for this node type.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The parameter value for this node type.</p>
     */
    inline NodeTypeSpecificValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The parameter value for this node type.</p>
     */
    inline NodeTypeSpecificValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The parameter value for this node type.</p>
     */
    inline NodeTypeSpecificValue& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
