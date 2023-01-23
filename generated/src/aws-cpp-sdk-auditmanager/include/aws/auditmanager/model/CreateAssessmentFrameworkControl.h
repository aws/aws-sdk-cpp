/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> The control entity attributes that uniquely identify an existing control to
   * be added to a framework in Audit Manager. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/CreateAssessmentFrameworkControl">AWS
   * API Reference</a></p>
   */
  class CreateAssessmentFrameworkControl
  {
  public:
    AWS_AUDITMANAGER_API CreateAssessmentFrameworkControl();
    AWS_AUDITMANAGER_API CreateAssessmentFrameworkControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API CreateAssessmentFrameworkControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier of the control. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The unique identifier of the control. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The unique identifier of the control. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The unique identifier of the control. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The unique identifier of the control. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The unique identifier of the control. </p>
     */
    inline CreateAssessmentFrameworkControl& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The unique identifier of the control. </p>
     */
    inline CreateAssessmentFrameworkControl& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the control. </p>
     */
    inline CreateAssessmentFrameworkControl& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
