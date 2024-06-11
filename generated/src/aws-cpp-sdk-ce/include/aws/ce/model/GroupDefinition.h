﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GroupDefinition
  {
  public:
    AWS_COSTEXPLORER_API GroupDefinition();
    AWS_COSTEXPLORER_API GroupDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API GroupDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The string that represents the type of group.</p>
     */
    inline const GroupDefinitionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const GroupDefinitionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(GroupDefinitionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline GroupDefinition& WithType(const GroupDefinitionType& value) { SetType(value); return *this;}
    inline GroupDefinition& WithType(GroupDefinitionType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string that represents a key for a specified group.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline GroupDefinition& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline GroupDefinition& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline GroupDefinition& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}
  private:

    GroupDefinitionType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
