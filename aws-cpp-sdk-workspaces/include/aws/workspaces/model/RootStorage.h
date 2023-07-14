﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the root volume for a WorkSpace bundle.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RootStorage">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API RootStorage
  {
  public:
    RootStorage();
    RootStorage(Aws::Utils::Json::JsonView jsonValue);
    RootStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of the root volume.</p>
     */
    inline const Aws::String& GetCapacity() const{ return m_capacity; }

    /**
     * <p>The size of the root volume.</p>
     */
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }

    /**
     * <p>The size of the root volume.</p>
     */
    inline void SetCapacity(const Aws::String& value) { m_capacityHasBeenSet = true; m_capacity = value; }

    /**
     * <p>The size of the root volume.</p>
     */
    inline void SetCapacity(Aws::String&& value) { m_capacityHasBeenSet = true; m_capacity = std::move(value); }

    /**
     * <p>The size of the root volume.</p>
     */
    inline void SetCapacity(const char* value) { m_capacityHasBeenSet = true; m_capacity.assign(value); }

    /**
     * <p>The size of the root volume.</p>
     */
    inline RootStorage& WithCapacity(const Aws::String& value) { SetCapacity(value); return *this;}

    /**
     * <p>The size of the root volume.</p>
     */
    inline RootStorage& WithCapacity(Aws::String&& value) { SetCapacity(std::move(value)); return *this;}

    /**
     * <p>The size of the root volume.</p>
     */
    inline RootStorage& WithCapacity(const char* value) { SetCapacity(value); return *this;}

  private:

    Aws::String m_capacity;
    bool m_capacityHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
