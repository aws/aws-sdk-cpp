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
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/GroupDefinitionType.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Represents a group when you specify a group by criteria or in the response to
   * a query with a specific grouping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GroupDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API GroupDefinition
  {
  public:
    GroupDefinition();
    GroupDefinition(Aws::Utils::Json::JsonView jsonValue);
    GroupDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The string that represents the type of group.</p>
     */
    inline const GroupDefinitionType& GetType() const{ return m_type; }

    /**
     * <p>The string that represents the type of group.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The string that represents the type of group.</p>
     */
    inline void SetType(const GroupDefinitionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The string that represents the type of group.</p>
     */
    inline void SetType(GroupDefinitionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The string that represents the type of group.</p>
     */
    inline GroupDefinition& WithType(const GroupDefinitionType& value) { SetType(value); return *this;}

    /**
     * <p>The string that represents the type of group.</p>
     */
    inline GroupDefinition& WithType(GroupDefinitionType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The string that represents a key for a specified group.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The string that represents a key for a specified group.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The string that represents a key for a specified group.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The string that represents a key for a specified group.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The string that represents a key for a specified group.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The string that represents a key for a specified group.</p>
     */
    inline GroupDefinition& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The string that represents a key for a specified group.</p>
     */
    inline GroupDefinition& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The string that represents a key for a specified group.</p>
     */
    inline GroupDefinition& WithKey(const char* value) { SetKey(value); return *this;}

  private:

    GroupDefinitionType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
