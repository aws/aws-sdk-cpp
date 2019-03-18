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
   * <p>Describes the user storage for a WorkSpace bundle.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UserStorage">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API UserStorage
  {
  public:
    UserStorage();
    UserStorage(Aws::Utils::Json::JsonView jsonValue);
    UserStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of the user storage.</p>
     */
    inline const Aws::String& GetCapacity() const{ return m_capacity; }

    /**
     * <p>The size of the user storage.</p>
     */
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }

    /**
     * <p>The size of the user storage.</p>
     */
    inline void SetCapacity(const Aws::String& value) { m_capacityHasBeenSet = true; m_capacity = value; }

    /**
     * <p>The size of the user storage.</p>
     */
    inline void SetCapacity(Aws::String&& value) { m_capacityHasBeenSet = true; m_capacity = std::move(value); }

    /**
     * <p>The size of the user storage.</p>
     */
    inline void SetCapacity(const char* value) { m_capacityHasBeenSet = true; m_capacity.assign(value); }

    /**
     * <p>The size of the user storage.</p>
     */
    inline UserStorage& WithCapacity(const Aws::String& value) { SetCapacity(value); return *this;}

    /**
     * <p>The size of the user storage.</p>
     */
    inline UserStorage& WithCapacity(Aws::String&& value) { SetCapacity(std::move(value)); return *this;}

    /**
     * <p>The size of the user storage.</p>
     */
    inline UserStorage& WithCapacity(const char* value) { SetCapacity(value); return *this;}

  private:

    Aws::String m_capacity;
    bool m_capacityHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
