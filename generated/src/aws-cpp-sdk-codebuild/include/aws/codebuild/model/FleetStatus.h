/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/FleetStatusCode.h>
#include <aws/codebuild/model/FleetContextCode.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>The status of the compute fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/FleetStatus">AWS
   * API Reference</a></p>
   */
  class FleetStatus
  {
  public:
    AWS_CODEBUILD_API FleetStatus();
    AWS_CODEBUILD_API FleetStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API FleetStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status code of the compute fleet. Valid values include:</p> <ul> <li> <p>
     * <code>CREATING</code>: The compute fleet is being created.</p> </li> <li> <p>
     * <code>UPDATING</code>: The compute fleet is being updated.</p> </li> <li> <p>
     * <code>ROTATING</code>: The compute fleet is being rotated.</p> </li> <li> <p>
     * <code>DELETING</code>: The compute fleet is being deleted.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code>: The compute fleet has failed to create.</p> </li>
     * <li> <p> <code>UPDATE_ROLLBACK_FAILED</code>: The compute fleet has failed to
     * update and could not rollback to previous state.</p> </li> <li> <p>
     * <code>ACTIVE</code>: The compute fleet has succeeded and is active.</p> </li>
     * </ul>
     */
    inline const FleetStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The status code of the compute fleet. Valid values include:</p> <ul> <li> <p>
     * <code>CREATING</code>: The compute fleet is being created.</p> </li> <li> <p>
     * <code>UPDATING</code>: The compute fleet is being updated.</p> </li> <li> <p>
     * <code>ROTATING</code>: The compute fleet is being rotated.</p> </li> <li> <p>
     * <code>DELETING</code>: The compute fleet is being deleted.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code>: The compute fleet has failed to create.</p> </li>
     * <li> <p> <code>UPDATE_ROLLBACK_FAILED</code>: The compute fleet has failed to
     * update and could not rollback to previous state.</p> </li> <li> <p>
     * <code>ACTIVE</code>: The compute fleet has succeeded and is active.</p> </li>
     * </ul>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The status code of the compute fleet. Valid values include:</p> <ul> <li> <p>
     * <code>CREATING</code>: The compute fleet is being created.</p> </li> <li> <p>
     * <code>UPDATING</code>: The compute fleet is being updated.</p> </li> <li> <p>
     * <code>ROTATING</code>: The compute fleet is being rotated.</p> </li> <li> <p>
     * <code>DELETING</code>: The compute fleet is being deleted.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code>: The compute fleet has failed to create.</p> </li>
     * <li> <p> <code>UPDATE_ROLLBACK_FAILED</code>: The compute fleet has failed to
     * update and could not rollback to previous state.</p> </li> <li> <p>
     * <code>ACTIVE</code>: The compute fleet has succeeded and is active.</p> </li>
     * </ul>
     */
    inline void SetStatusCode(const FleetStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The status code of the compute fleet. Valid values include:</p> <ul> <li> <p>
     * <code>CREATING</code>: The compute fleet is being created.</p> </li> <li> <p>
     * <code>UPDATING</code>: The compute fleet is being updated.</p> </li> <li> <p>
     * <code>ROTATING</code>: The compute fleet is being rotated.</p> </li> <li> <p>
     * <code>DELETING</code>: The compute fleet is being deleted.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code>: The compute fleet has failed to create.</p> </li>
     * <li> <p> <code>UPDATE_ROLLBACK_FAILED</code>: The compute fleet has failed to
     * update and could not rollback to previous state.</p> </li> <li> <p>
     * <code>ACTIVE</code>: The compute fleet has succeeded and is active.</p> </li>
     * </ul>
     */
    inline void SetStatusCode(FleetStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The status code of the compute fleet. Valid values include:</p> <ul> <li> <p>
     * <code>CREATING</code>: The compute fleet is being created.</p> </li> <li> <p>
     * <code>UPDATING</code>: The compute fleet is being updated.</p> </li> <li> <p>
     * <code>ROTATING</code>: The compute fleet is being rotated.</p> </li> <li> <p>
     * <code>DELETING</code>: The compute fleet is being deleted.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code>: The compute fleet has failed to create.</p> </li>
     * <li> <p> <code>UPDATE_ROLLBACK_FAILED</code>: The compute fleet has failed to
     * update and could not rollback to previous state.</p> </li> <li> <p>
     * <code>ACTIVE</code>: The compute fleet has succeeded and is active.</p> </li>
     * </ul>
     */
    inline FleetStatus& WithStatusCode(const FleetStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The status code of the compute fleet. Valid values include:</p> <ul> <li> <p>
     * <code>CREATING</code>: The compute fleet is being created.</p> </li> <li> <p>
     * <code>UPDATING</code>: The compute fleet is being updated.</p> </li> <li> <p>
     * <code>ROTATING</code>: The compute fleet is being rotated.</p> </li> <li> <p>
     * <code>DELETING</code>: The compute fleet is being deleted.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code>: The compute fleet has failed to create.</p> </li>
     * <li> <p> <code>UPDATE_ROLLBACK_FAILED</code>: The compute fleet has failed to
     * update and could not rollback to previous state.</p> </li> <li> <p>
     * <code>ACTIVE</code>: The compute fleet has succeeded and is active.</p> </li>
     * </ul>
     */
    inline FleetStatus& WithStatusCode(FleetStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>Additional information about a compute fleet. Valid values include:</p> <ul>
     * <li> <p> <code>CREATE_FAILED</code>: The compute fleet has failed to create.</p>
     * </li> <li> <p> <code>UPDATE_FAILED</code>: The compute fleet has failed to
     * update.</p> </li> </ul>
     */
    inline const FleetContextCode& GetContext() const{ return m_context; }

    /**
     * <p>Additional information about a compute fleet. Valid values include:</p> <ul>
     * <li> <p> <code>CREATE_FAILED</code>: The compute fleet has failed to create.</p>
     * </li> <li> <p> <code>UPDATE_FAILED</code>: The compute fleet has failed to
     * update.</p> </li> </ul>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>Additional information about a compute fleet. Valid values include:</p> <ul>
     * <li> <p> <code>CREATE_FAILED</code>: The compute fleet has failed to create.</p>
     * </li> <li> <p> <code>UPDATE_FAILED</code>: The compute fleet has failed to
     * update.</p> </li> </ul>
     */
    inline void SetContext(const FleetContextCode& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>Additional information about a compute fleet. Valid values include:</p> <ul>
     * <li> <p> <code>CREATE_FAILED</code>: The compute fleet has failed to create.</p>
     * </li> <li> <p> <code>UPDATE_FAILED</code>: The compute fleet has failed to
     * update.</p> </li> </ul>
     */
    inline void SetContext(FleetContextCode&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>Additional information about a compute fleet. Valid values include:</p> <ul>
     * <li> <p> <code>CREATE_FAILED</code>: The compute fleet has failed to create.</p>
     * </li> <li> <p> <code>UPDATE_FAILED</code>: The compute fleet has failed to
     * update.</p> </li> </ul>
     */
    inline FleetStatus& WithContext(const FleetContextCode& value) { SetContext(value); return *this;}

    /**
     * <p>Additional information about a compute fleet. Valid values include:</p> <ul>
     * <li> <p> <code>CREATE_FAILED</code>: The compute fleet has failed to create.</p>
     * </li> <li> <p> <code>UPDATE_FAILED</code>: The compute fleet has failed to
     * update.</p> </li> </ul>
     */
    inline FleetStatus& WithContext(FleetContextCode&& value) { SetContext(std::move(value)); return *this;}


    /**
     * <p>A message associated with the status of a compute fleet.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message associated with the status of a compute fleet.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message associated with the status of a compute fleet.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message associated with the status of a compute fleet.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message associated with the status of a compute fleet.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message associated with the status of a compute fleet.</p>
     */
    inline FleetStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message associated with the status of a compute fleet.</p>
     */
    inline FleetStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message associated with the status of a compute fleet.</p>
     */
    inline FleetStatus& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    FleetStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    FleetContextCode m_context;
    bool m_contextHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
