/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about the hierarchy level to update.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HierarchyLevelUpdate">AWS
   * API Reference</a></p>
   */
  class HierarchyLevelUpdate
  {
  public:
    AWS_CONNECT_API HierarchyLevelUpdate();
    AWS_CONNECT_API HierarchyLevelUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HierarchyLevelUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the user hierarchy level. Must not be more than 50
     * characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the user hierarchy level. Must not be more than 50
     * characters.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the user hierarchy level. Must not be more than 50
     * characters.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the user hierarchy level. Must not be more than 50
     * characters.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the user hierarchy level. Must not be more than 50
     * characters.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the user hierarchy level. Must not be more than 50
     * characters.</p>
     */
    inline HierarchyLevelUpdate& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the user hierarchy level. Must not be more than 50
     * characters.</p>
     */
    inline HierarchyLevelUpdate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the user hierarchy level. Must not be more than 50
     * characters.</p>
     */
    inline HierarchyLevelUpdate& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
