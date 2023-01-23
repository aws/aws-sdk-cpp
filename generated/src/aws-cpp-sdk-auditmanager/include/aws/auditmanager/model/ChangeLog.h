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
    AWS_AUDITMANAGER_API ChangeLog();
    AWS_AUDITMANAGER_API ChangeLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ChangeLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The object that was changed, such as an assessment, control, or control set.
     * </p>
     */
    inline const ObjectTypeEnum& GetObjectType() const{ return m_objectType; }

    /**
     * <p> The object that was changed, such as an assessment, control, or control set.
     * </p>
     */
    inline bool ObjectTypeHasBeenSet() const { return m_objectTypeHasBeenSet; }

    /**
     * <p> The object that was changed, such as an assessment, control, or control set.
     * </p>
     */
    inline void SetObjectType(const ObjectTypeEnum& value) { m_objectTypeHasBeenSet = true; m_objectType = value; }

    /**
     * <p> The object that was changed, such as an assessment, control, or control set.
     * </p>
     */
    inline void SetObjectType(ObjectTypeEnum&& value) { m_objectTypeHasBeenSet = true; m_objectType = std::move(value); }

    /**
     * <p> The object that was changed, such as an assessment, control, or control set.
     * </p>
     */
    inline ChangeLog& WithObjectType(const ObjectTypeEnum& value) { SetObjectType(value); return *this;}

    /**
     * <p> The object that was changed, such as an assessment, control, or control set.
     * </p>
     */
    inline ChangeLog& WithObjectType(ObjectTypeEnum&& value) { SetObjectType(std::move(value)); return *this;}


    /**
     * <p> The name of the object that changed. This could be the name of an
     * assessment, control, or control set.</p>
     */
    inline const Aws::String& GetObjectName() const{ return m_objectName; }

    /**
     * <p> The name of the object that changed. This could be the name of an
     * assessment, control, or control set.</p>
     */
    inline bool ObjectNameHasBeenSet() const { return m_objectNameHasBeenSet; }

    /**
     * <p> The name of the object that changed. This could be the name of an
     * assessment, control, or control set.</p>
     */
    inline void SetObjectName(const Aws::String& value) { m_objectNameHasBeenSet = true; m_objectName = value; }

    /**
     * <p> The name of the object that changed. This could be the name of an
     * assessment, control, or control set.</p>
     */
    inline void SetObjectName(Aws::String&& value) { m_objectNameHasBeenSet = true; m_objectName = std::move(value); }

    /**
     * <p> The name of the object that changed. This could be the name of an
     * assessment, control, or control set.</p>
     */
    inline void SetObjectName(const char* value) { m_objectNameHasBeenSet = true; m_objectName.assign(value); }

    /**
     * <p> The name of the object that changed. This could be the name of an
     * assessment, control, or control set.</p>
     */
    inline ChangeLog& WithObjectName(const Aws::String& value) { SetObjectName(value); return *this;}

    /**
     * <p> The name of the object that changed. This could be the name of an
     * assessment, control, or control set.</p>
     */
    inline ChangeLog& WithObjectName(Aws::String&& value) { SetObjectName(std::move(value)); return *this;}

    /**
     * <p> The name of the object that changed. This could be the name of an
     * assessment, control, or control set.</p>
     */
    inline ChangeLog& WithObjectName(const char* value) { SetObjectName(value); return *this;}


    /**
     * <p> The action that was performed. </p>
     */
    inline const ActionEnum& GetAction() const{ return m_action; }

    /**
     * <p> The action that was performed. </p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p> The action that was performed. </p>
     */
    inline void SetAction(const ActionEnum& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p> The action that was performed. </p>
     */
    inline void SetAction(ActionEnum&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p> The action that was performed. </p>
     */
    inline ChangeLog& WithAction(const ActionEnum& value) { SetAction(value); return *this;}

    /**
     * <p> The action that was performed. </p>
     */
    inline ChangeLog& WithAction(ActionEnum&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p> The time when the action was performed and the changelog record was created.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p> The time when the action was performed and the changelog record was created.
     * </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p> The time when the action was performed and the changelog record was created.
     * </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p> The time when the action was performed and the changelog record was created.
     * </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p> The time when the action was performed and the changelog record was created.
     * </p>
     */
    inline ChangeLog& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p> The time when the action was performed and the changelog record was created.
     * </p>
     */
    inline ChangeLog& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p> The IAM user or role that performed the action. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p> The IAM user or role that performed the action. </p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p> The IAM user or role that performed the action. </p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p> The IAM user or role that performed the action. </p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p> The IAM user or role that performed the action. </p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p> The IAM user or role that performed the action. </p>
     */
    inline ChangeLog& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p> The IAM user or role that performed the action. </p>
     */
    inline ChangeLog& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p> The IAM user or role that performed the action. </p>
     */
    inline ChangeLog& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}

  private:

    ObjectTypeEnum m_objectType;
    bool m_objectTypeHasBeenSet = false;

    Aws::String m_objectName;
    bool m_objectNameHasBeenSet = false;

    ActionEnum m_action;
    bool m_actionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
