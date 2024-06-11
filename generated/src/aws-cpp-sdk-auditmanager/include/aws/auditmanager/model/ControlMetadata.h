﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> The metadata that's associated with the standard control or custom control.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ControlMetadata">AWS
   * API Reference</a></p>
   */
  class ControlMetadata
  {
  public:
    AWS_AUDITMANAGER_API ControlMetadata();
    AWS_AUDITMANAGER_API ControlMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ControlMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the control. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ControlMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ControlMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ControlMetadata& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the control. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ControlMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ControlMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ControlMetadata& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the control. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ControlMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ControlMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ControlMetadata& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The data source that determines where Audit Manager collects evidence from
     * for the control. </p>
     */
    inline const Aws::String& GetControlSources() const{ return m_controlSources; }
    inline bool ControlSourcesHasBeenSet() const { return m_controlSourcesHasBeenSet; }
    inline void SetControlSources(const Aws::String& value) { m_controlSourcesHasBeenSet = true; m_controlSources = value; }
    inline void SetControlSources(Aws::String&& value) { m_controlSourcesHasBeenSet = true; m_controlSources = std::move(value); }
    inline void SetControlSources(const char* value) { m_controlSourcesHasBeenSet = true; m_controlSources.assign(value); }
    inline ControlMetadata& WithControlSources(const Aws::String& value) { SetControlSources(value); return *this;}
    inline ControlMetadata& WithControlSources(Aws::String&& value) { SetControlSources(std::move(value)); return *this;}
    inline ControlMetadata& WithControlSources(const char* value) { SetControlSources(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the control was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ControlMetadata& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ControlMetadata& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the control was most recently updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline ControlMetadata& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline ControlMetadata& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_controlSources;
    bool m_controlSourcesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
