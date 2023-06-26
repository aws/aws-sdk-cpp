/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/model/EnvironmentLifecycleStatus.h>
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
namespace Cloud9
{
namespace Model
{

  /**
   * <p>Information about the current creation or deletion lifecycle state of an
   * Cloud9 development environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/EnvironmentLifecycle">AWS
   * API Reference</a></p>
   */
  class EnvironmentLifecycle
  {
  public:
    AWS_CLOUD9_API EnvironmentLifecycle();
    AWS_CLOUD9_API EnvironmentLifecycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUD9_API EnvironmentLifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUD9_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current creation or deletion lifecycle state of the environment.</p> <ul>
     * <li> <p> <code>CREATING</code>: The environment is in the process of being
     * created.</p> </li> <li> <p> <code>CREATED</code>: The environment was
     * successfully created.</p> </li> <li> <p> <code>CREATE_FAILED</code>: The
     * environment failed to be created.</p> </li> <li> <p> <code>DELETING</code>: The
     * environment is in the process of being deleted.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code>: The environment failed to delete.</p> </li> </ul>
     */
    inline const EnvironmentLifecycleStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current creation or deletion lifecycle state of the environment.</p> <ul>
     * <li> <p> <code>CREATING</code>: The environment is in the process of being
     * created.</p> </li> <li> <p> <code>CREATED</code>: The environment was
     * successfully created.</p> </li> <li> <p> <code>CREATE_FAILED</code>: The
     * environment failed to be created.</p> </li> <li> <p> <code>DELETING</code>: The
     * environment is in the process of being deleted.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code>: The environment failed to delete.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current creation or deletion lifecycle state of the environment.</p> <ul>
     * <li> <p> <code>CREATING</code>: The environment is in the process of being
     * created.</p> </li> <li> <p> <code>CREATED</code>: The environment was
     * successfully created.</p> </li> <li> <p> <code>CREATE_FAILED</code>: The
     * environment failed to be created.</p> </li> <li> <p> <code>DELETING</code>: The
     * environment is in the process of being deleted.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code>: The environment failed to delete.</p> </li> </ul>
     */
    inline void SetStatus(const EnvironmentLifecycleStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current creation or deletion lifecycle state of the environment.</p> <ul>
     * <li> <p> <code>CREATING</code>: The environment is in the process of being
     * created.</p> </li> <li> <p> <code>CREATED</code>: The environment was
     * successfully created.</p> </li> <li> <p> <code>CREATE_FAILED</code>: The
     * environment failed to be created.</p> </li> <li> <p> <code>DELETING</code>: The
     * environment is in the process of being deleted.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code>: The environment failed to delete.</p> </li> </ul>
     */
    inline void SetStatus(EnvironmentLifecycleStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current creation or deletion lifecycle state of the environment.</p> <ul>
     * <li> <p> <code>CREATING</code>: The environment is in the process of being
     * created.</p> </li> <li> <p> <code>CREATED</code>: The environment was
     * successfully created.</p> </li> <li> <p> <code>CREATE_FAILED</code>: The
     * environment failed to be created.</p> </li> <li> <p> <code>DELETING</code>: The
     * environment is in the process of being deleted.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code>: The environment failed to delete.</p> </li> </ul>
     */
    inline EnvironmentLifecycle& WithStatus(const EnvironmentLifecycleStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current creation or deletion lifecycle state of the environment.</p> <ul>
     * <li> <p> <code>CREATING</code>: The environment is in the process of being
     * created.</p> </li> <li> <p> <code>CREATED</code>: The environment was
     * successfully created.</p> </li> <li> <p> <code>CREATE_FAILED</code>: The
     * environment failed to be created.</p> </li> <li> <p> <code>DELETING</code>: The
     * environment is in the process of being deleted.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code>: The environment failed to delete.</p> </li> </ul>
     */
    inline EnvironmentLifecycle& WithStatus(EnvironmentLifecycleStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Any informational message about the lifecycle state of the environment.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>Any informational message about the lifecycle state of the environment.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Any informational message about the lifecycle state of the environment.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Any informational message about the lifecycle state of the environment.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Any informational message about the lifecycle state of the environment.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>Any informational message about the lifecycle state of the environment.</p>
     */
    inline EnvironmentLifecycle& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>Any informational message about the lifecycle state of the environment.</p>
     */
    inline EnvironmentLifecycle& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>Any informational message about the lifecycle state of the environment.</p>
     */
    inline EnvironmentLifecycle& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>If the environment failed to delete, the Amazon Resource Name (ARN) of the
     * related Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetFailureResource() const{ return m_failureResource; }

    /**
     * <p>If the environment failed to delete, the Amazon Resource Name (ARN) of the
     * related Amazon Web Services resource.</p>
     */
    inline bool FailureResourceHasBeenSet() const { return m_failureResourceHasBeenSet; }

    /**
     * <p>If the environment failed to delete, the Amazon Resource Name (ARN) of the
     * related Amazon Web Services resource.</p>
     */
    inline void SetFailureResource(const Aws::String& value) { m_failureResourceHasBeenSet = true; m_failureResource = value; }

    /**
     * <p>If the environment failed to delete, the Amazon Resource Name (ARN) of the
     * related Amazon Web Services resource.</p>
     */
    inline void SetFailureResource(Aws::String&& value) { m_failureResourceHasBeenSet = true; m_failureResource = std::move(value); }

    /**
     * <p>If the environment failed to delete, the Amazon Resource Name (ARN) of the
     * related Amazon Web Services resource.</p>
     */
    inline void SetFailureResource(const char* value) { m_failureResourceHasBeenSet = true; m_failureResource.assign(value); }

    /**
     * <p>If the environment failed to delete, the Amazon Resource Name (ARN) of the
     * related Amazon Web Services resource.</p>
     */
    inline EnvironmentLifecycle& WithFailureResource(const Aws::String& value) { SetFailureResource(value); return *this;}

    /**
     * <p>If the environment failed to delete, the Amazon Resource Name (ARN) of the
     * related Amazon Web Services resource.</p>
     */
    inline EnvironmentLifecycle& WithFailureResource(Aws::String&& value) { SetFailureResource(std::move(value)); return *this;}

    /**
     * <p>If the environment failed to delete, the Amazon Resource Name (ARN) of the
     * related Amazon Web Services resource.</p>
     */
    inline EnvironmentLifecycle& WithFailureResource(const char* value) { SetFailureResource(value); return *this;}

  private:

    EnvironmentLifecycleStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_failureResource;
    bool m_failureResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
