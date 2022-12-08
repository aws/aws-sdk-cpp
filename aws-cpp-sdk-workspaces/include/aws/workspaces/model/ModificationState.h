/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ModificationState
  {
  public:
    AWS_WORKSPACES_API ModificationState();
    AWS_WORKSPACES_API ModificationState(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ModificationState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_resourceHasBeenSet = false;

    ModificationStateEnum m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
