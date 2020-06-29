/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/WorkflowStatus.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Used to update information about the investigation into the
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/WorkflowUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API WorkflowUpdate
  {
  public:
    WorkflowUpdate();
    WorkflowUpdate(Aws::Utils::Json::JsonView jsonValue);
    WorkflowUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the investigation into the finding. The allowed values are the
     * following.</p> <ul> <li> <p> <code>NEW</code> - The initial state of a finding,
     * before it is reviewed.</p> </li> <li> <p> <code>NOTIFIED</code> - Indicates that
     * you notified the resource owner about the security issue. Used when the initial
     * reviewer is not the resource owner, and needs intervention from the resource
     * owner.</p> </li> <li> <p> <code>RESOLVED</code> - The finding was reviewed and
     * remediated and is now considered resolved.</p> </li> <li> <p>
     * <code>SUPPRESSED</code> - The finding will not be reviewed again and will not be
     * acted upon.</p> </li> </ul>
     */
    inline const WorkflowStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the investigation into the finding. The allowed values are the
     * following.</p> <ul> <li> <p> <code>NEW</code> - The initial state of a finding,
     * before it is reviewed.</p> </li> <li> <p> <code>NOTIFIED</code> - Indicates that
     * you notified the resource owner about the security issue. Used when the initial
     * reviewer is not the resource owner, and needs intervention from the resource
     * owner.</p> </li> <li> <p> <code>RESOLVED</code> - The finding was reviewed and
     * remediated and is now considered resolved.</p> </li> <li> <p>
     * <code>SUPPRESSED</code> - The finding will not be reviewed again and will not be
     * acted upon.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the investigation into the finding. The allowed values are the
     * following.</p> <ul> <li> <p> <code>NEW</code> - The initial state of a finding,
     * before it is reviewed.</p> </li> <li> <p> <code>NOTIFIED</code> - Indicates that
     * you notified the resource owner about the security issue. Used when the initial
     * reviewer is not the resource owner, and needs intervention from the resource
     * owner.</p> </li> <li> <p> <code>RESOLVED</code> - The finding was reviewed and
     * remediated and is now considered resolved.</p> </li> <li> <p>
     * <code>SUPPRESSED</code> - The finding will not be reviewed again and will not be
     * acted upon.</p> </li> </ul>
     */
    inline void SetStatus(const WorkflowStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the investigation into the finding. The allowed values are the
     * following.</p> <ul> <li> <p> <code>NEW</code> - The initial state of a finding,
     * before it is reviewed.</p> </li> <li> <p> <code>NOTIFIED</code> - Indicates that
     * you notified the resource owner about the security issue. Used when the initial
     * reviewer is not the resource owner, and needs intervention from the resource
     * owner.</p> </li> <li> <p> <code>RESOLVED</code> - The finding was reviewed and
     * remediated and is now considered resolved.</p> </li> <li> <p>
     * <code>SUPPRESSED</code> - The finding will not be reviewed again and will not be
     * acted upon.</p> </li> </ul>
     */
    inline void SetStatus(WorkflowStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the investigation into the finding. The allowed values are the
     * following.</p> <ul> <li> <p> <code>NEW</code> - The initial state of a finding,
     * before it is reviewed.</p> </li> <li> <p> <code>NOTIFIED</code> - Indicates that
     * you notified the resource owner about the security issue. Used when the initial
     * reviewer is not the resource owner, and needs intervention from the resource
     * owner.</p> </li> <li> <p> <code>RESOLVED</code> - The finding was reviewed and
     * remediated and is now considered resolved.</p> </li> <li> <p>
     * <code>SUPPRESSED</code> - The finding will not be reviewed again and will not be
     * acted upon.</p> </li> </ul>
     */
    inline WorkflowUpdate& WithStatus(const WorkflowStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the investigation into the finding. The allowed values are the
     * following.</p> <ul> <li> <p> <code>NEW</code> - The initial state of a finding,
     * before it is reviewed.</p> </li> <li> <p> <code>NOTIFIED</code> - Indicates that
     * you notified the resource owner about the security issue. Used when the initial
     * reviewer is not the resource owner, and needs intervention from the resource
     * owner.</p> </li> <li> <p> <code>RESOLVED</code> - The finding was reviewed and
     * remediated and is now considered resolved.</p> </li> <li> <p>
     * <code>SUPPRESSED</code> - The finding will not be reviewed again and will not be
     * acted upon.</p> </li> </ul>
     */
    inline WorkflowUpdate& WithStatus(WorkflowStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    WorkflowStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
