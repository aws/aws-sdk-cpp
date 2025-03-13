/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/ObjectTypeEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ActionEnum.h>
#include <aws/core/utils/DateTime.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> The record of a change within Audit Manager. For example, this could be the
   * status change of an assessment or the delegation of a control set.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ChangeLog">AWS
   * API Reference</a></p>
   */
  class ChangeLog
  {
  public:
    AWS_AUDITMANAGER_API ChangeLog() = default;
    AWS_AUDITMANAGER_API ChangeLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ChangeLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The object that was changed, such as an assessment, control, or control set.
     * </p>
     */
    inline ObjectTypeEnum GetObjectType() const { return m_objectType; }
    inline bool ObjectTypeHasBeenSet() const { return m_objectTypeHasBeenSet; }
    inline void SetObjectType(ObjectTypeEnum value) { m_objectTypeHasBeenSet = true; m_objectType = value; }
    inline ChangeLog& WithObjectType(ObjectTypeEnum value) { SetObjectType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the object that changed. This could be the name of an
     * assessment, control, or control set.</p>
     */
    inline const Aws::String& GetObjectName() const { return m_objectName; }
    inline bool ObjectNameHasBeenSet() const { return m_objectNameHasBeenSet; }
    template<typename ObjectNameT = Aws::String>
    void SetObjectName(ObjectNameT&& value) { m_objectNameHasBeenSet = true; m_objectName = std::forward<ObjectNameT>(value); }
    template<typename ObjectNameT = Aws::String>
    ChangeLog& WithObjectName(ObjectNameT&& value) { SetObjectName(std::forward<ObjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The action that was performed. </p>
     */
    inline ActionEnum GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ActionEnum value) { m_actionHasBeenSet = true; m_action = value; }
    inline ChangeLog& WithAction(ActionEnum value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the action was performed and the changelog record was created.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ChangeLog& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user or role that performed the action. </p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    ChangeLog& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}
  private:

    ObjectTypeEnum m_objectType{ObjectTypeEnum::NOT_SET};
    bool m_objectTypeHasBeenSet = false;

    Aws::String m_objectName;
    bool m_objectNameHasBeenSet = false;

    ActionEnum m_action{ActionEnum::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
