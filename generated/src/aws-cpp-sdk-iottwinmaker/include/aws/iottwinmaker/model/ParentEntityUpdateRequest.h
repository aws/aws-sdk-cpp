﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/ParentEntityUpdateType.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The parent entity update request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ParentEntityUpdateRequest">AWS
   * API Reference</a></p>
   */
  class ParentEntityUpdateRequest
  {
  public:
    AWS_IOTTWINMAKER_API ParentEntityUpdateRequest();
    AWS_IOTTWINMAKER_API ParentEntityUpdateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API ParentEntityUpdateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the update.</p>
     */
    inline const ParentEntityUpdateType& GetUpdateType() const{ return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    inline void SetUpdateType(const ParentEntityUpdateType& value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline void SetUpdateType(ParentEntityUpdateType&& value) { m_updateTypeHasBeenSet = true; m_updateType = std::move(value); }
    inline ParentEntityUpdateRequest& WithUpdateType(const ParentEntityUpdateType& value) { SetUpdateType(value); return *this;}
    inline ParentEntityUpdateRequest& WithUpdateType(ParentEntityUpdateType&& value) { SetUpdateType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the parent entity.</p>
     */
    inline const Aws::String& GetParentEntityId() const{ return m_parentEntityId; }
    inline bool ParentEntityIdHasBeenSet() const { return m_parentEntityIdHasBeenSet; }
    inline void SetParentEntityId(const Aws::String& value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId = value; }
    inline void SetParentEntityId(Aws::String&& value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId = std::move(value); }
    inline void SetParentEntityId(const char* value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId.assign(value); }
    inline ParentEntityUpdateRequest& WithParentEntityId(const Aws::String& value) { SetParentEntityId(value); return *this;}
    inline ParentEntityUpdateRequest& WithParentEntityId(Aws::String&& value) { SetParentEntityId(std::move(value)); return *this;}
    inline ParentEntityUpdateRequest& WithParentEntityId(const char* value) { SetParentEntityId(value); return *this;}
    ///@}
  private:

    ParentEntityUpdateType m_updateType;
    bool m_updateTypeHasBeenSet = false;

    Aws::String m_parentEntityId;
    bool m_parentEntityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
