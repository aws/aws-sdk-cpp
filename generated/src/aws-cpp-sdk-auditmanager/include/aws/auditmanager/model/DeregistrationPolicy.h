/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/DeleteResources.h>
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
   * <p>The deregistration policy for the data that's stored in Audit Manager. You
   * can use this attribute to determine how your data is handled when you <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeregisterAccount.html">deregister
   * Audit Manager</a>.</p> <p>By default, Audit Manager retains evidence data for
   * two years from the time of its creation. Other Audit Manager resources
   * (including assessments, custom controls, and custom frameworks) remain in Audit
   * Manager indefinitely, and are available if you <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_RegisterAccount.html">re-register
   * Audit Manager</a> in the future. For more information about data retention, see
   * <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/data-protection.html">Data
   * Protection</a> in the <i>Audit Manager User Guide</i>.</p>  <p>If you
   * choose to delete all data, this action permanently deletes all evidence data in
   * your account within seven days. It also deletes all of the Audit Manager
   * resources that you created, including assessments, custom controls, and custom
   * frameworks. Your data will not be available if you re-register Audit Manager in
   * the future.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeregistrationPolicy">AWS
   * API Reference</a></p>
   */
  class DeregistrationPolicy
  {
  public:
    AWS_AUDITMANAGER_API DeregistrationPolicy();
    AWS_AUDITMANAGER_API DeregistrationPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API DeregistrationPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies which Audit Manager data will be deleted when you deregister Audit
     * Manager.</p> <ul> <li> <p>If you set the value to <code>ALL</code>, all of your
     * data is deleted within seven days of deregistration.</p> </li> <li> <p>If you
     * set the value to <code>DEFAULT</code>, none of your data is deleted at the time
     * of deregistration. However, keep in mind that the Audit Manager data retention
     * policy still applies. As a result, any evidence data will be deleted two years
     * after its creation date. Your other Audit Manager resources will continue to
     * exist indefinitely.</p> </li> </ul>
     */
    inline const DeleteResources& GetDeleteResources() const{ return m_deleteResources; }

    /**
     * <p>Specifies which Audit Manager data will be deleted when you deregister Audit
     * Manager.</p> <ul> <li> <p>If you set the value to <code>ALL</code>, all of your
     * data is deleted within seven days of deregistration.</p> </li> <li> <p>If you
     * set the value to <code>DEFAULT</code>, none of your data is deleted at the time
     * of deregistration. However, keep in mind that the Audit Manager data retention
     * policy still applies. As a result, any evidence data will be deleted two years
     * after its creation date. Your other Audit Manager resources will continue to
     * exist indefinitely.</p> </li> </ul>
     */
    inline bool DeleteResourcesHasBeenSet() const { return m_deleteResourcesHasBeenSet; }

    /**
     * <p>Specifies which Audit Manager data will be deleted when you deregister Audit
     * Manager.</p> <ul> <li> <p>If you set the value to <code>ALL</code>, all of your
     * data is deleted within seven days of deregistration.</p> </li> <li> <p>If you
     * set the value to <code>DEFAULT</code>, none of your data is deleted at the time
     * of deregistration. However, keep in mind that the Audit Manager data retention
     * policy still applies. As a result, any evidence data will be deleted two years
     * after its creation date. Your other Audit Manager resources will continue to
     * exist indefinitely.</p> </li> </ul>
     */
    inline void SetDeleteResources(const DeleteResources& value) { m_deleteResourcesHasBeenSet = true; m_deleteResources = value; }

    /**
     * <p>Specifies which Audit Manager data will be deleted when you deregister Audit
     * Manager.</p> <ul> <li> <p>If you set the value to <code>ALL</code>, all of your
     * data is deleted within seven days of deregistration.</p> </li> <li> <p>If you
     * set the value to <code>DEFAULT</code>, none of your data is deleted at the time
     * of deregistration. However, keep in mind that the Audit Manager data retention
     * policy still applies. As a result, any evidence data will be deleted two years
     * after its creation date. Your other Audit Manager resources will continue to
     * exist indefinitely.</p> </li> </ul>
     */
    inline void SetDeleteResources(DeleteResources&& value) { m_deleteResourcesHasBeenSet = true; m_deleteResources = std::move(value); }

    /**
     * <p>Specifies which Audit Manager data will be deleted when you deregister Audit
     * Manager.</p> <ul> <li> <p>If you set the value to <code>ALL</code>, all of your
     * data is deleted within seven days of deregistration.</p> </li> <li> <p>If you
     * set the value to <code>DEFAULT</code>, none of your data is deleted at the time
     * of deregistration. However, keep in mind that the Audit Manager data retention
     * policy still applies. As a result, any evidence data will be deleted two years
     * after its creation date. Your other Audit Manager resources will continue to
     * exist indefinitely.</p> </li> </ul>
     */
    inline DeregistrationPolicy& WithDeleteResources(const DeleteResources& value) { SetDeleteResources(value); return *this;}

    /**
     * <p>Specifies which Audit Manager data will be deleted when you deregister Audit
     * Manager.</p> <ul> <li> <p>If you set the value to <code>ALL</code>, all of your
     * data is deleted within seven days of deregistration.</p> </li> <li> <p>If you
     * set the value to <code>DEFAULT</code>, none of your data is deleted at the time
     * of deregistration. However, keep in mind that the Audit Manager data retention
     * policy still applies. As a result, any evidence data will be deleted two years
     * after its creation date. Your other Audit Manager resources will continue to
     * exist indefinitely.</p> </li> </ul>
     */
    inline DeregistrationPolicy& WithDeleteResources(DeleteResources&& value) { SetDeleteResources(std::move(value)); return *this;}

  private:

    DeleteResources m_deleteResources;
    bool m_deleteResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
