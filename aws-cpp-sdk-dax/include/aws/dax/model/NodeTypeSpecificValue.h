/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class NodeTypeSpecificValue
  {
  public:
    AWS_DAX_API NodeTypeSpecificValue();
    AWS_DAX_API NodeTypeSpecificValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API NodeTypeSpecificValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
