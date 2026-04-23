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
#include <aws/workspaces/model/ModificationResourceEnum.h>
#include <aws/workspaces/model/ModificationStateEnum.h>
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
   * <p>Describes a WorkSpace modification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModificationState">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API ModificationState
  {
  public:
    ModificationState();
    ModificationState(Aws::Utils::Json::JsonView jsonValue);
    ModificationState& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource.</p>
     */
    inline const ModificationResourceEnum& GetResource() const{ return m_resource; }

    /**
     * <p>The resource.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The resource.</p>
     */
    inline void SetResource(const ModificationResourceEnum& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The resource.</p>
     */
    inline void SetResource(ModificationResourceEnum&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The resource.</p>
     */
    inline ModificationState& WithResource(const ModificationResourceEnum& value) { SetResource(value); return *this;}

    /**
     * <p>The resource.</p>
     */
    inline ModificationState& WithResource(ModificationResourceEnum&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>The modification state.</p>
     */
    inline const ModificationStateEnum& GetState() const{ return m_state; }

    /**
     * <p>The modification state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The modification state.</p>
     */
    inline void SetState(const ModificationStateEnum& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The modification state.</p>
     */
    inline void SetState(ModificationStateEnum&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The modification state.</p>
     */
    inline ModificationState& WithState(const ModificationStateEnum& value) { SetState(value); return *this;}

    /**
     * <p>The modification state.</p>
     */
    inline ModificationState& WithState(ModificationStateEnum&& value) { SetState(std::move(value)); return *this;}

  private:

    ModificationResourceEnum m_resource;
    bool m_resourceHasBeenSet;

    ModificationStateEnum m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
