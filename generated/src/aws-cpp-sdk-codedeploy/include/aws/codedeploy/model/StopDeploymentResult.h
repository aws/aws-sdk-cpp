/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/StopStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p> Represents the output of a <code>StopDeployment</code> operation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/StopDeploymentOutput">AWS
   * API Reference</a></p>
   */
  class StopDeploymentResult
  {
  public:
    AWS_CODEDEPLOY_API StopDeploymentResult();
    AWS_CODEDEPLOY_API StopDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API StopDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the stop deployment operation:</p> <ul> <li> <p>Pending: The
     * stop operation is pending.</p> </li> <li> <p>Succeeded: The stop operation was
     * successful.</p> </li> </ul>
     */
    inline const StopStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the stop deployment operation:</p> <ul> <li> <p>Pending: The
     * stop operation is pending.</p> </li> <li> <p>Succeeded: The stop operation was
     * successful.</p> </li> </ul>
     */
    inline void SetStatus(const StopStatus& value) { m_status = value; }

    /**
     * <p>The status of the stop deployment operation:</p> <ul> <li> <p>Pending: The
     * stop operation is pending.</p> </li> <li> <p>Succeeded: The stop operation was
     * successful.</p> </li> </ul>
     */
    inline void SetStatus(StopStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the stop deployment operation:</p> <ul> <li> <p>Pending: The
     * stop operation is pending.</p> </li> <li> <p>Succeeded: The stop operation was
     * successful.</p> </li> </ul>
     */
    inline StopDeploymentResult& WithStatus(const StopStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the stop deployment operation:</p> <ul> <li> <p>Pending: The
     * stop operation is pending.</p> </li> <li> <p>Succeeded: The stop operation was
     * successful.</p> </li> </ul>
     */
    inline StopDeploymentResult& WithStatus(StopStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>An accompanying status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>An accompanying status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>An accompanying status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>An accompanying status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>An accompanying status message.</p>
     */
    inline StopDeploymentResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>An accompanying status message.</p>
     */
    inline StopDeploymentResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>An accompanying status message.</p>
     */
    inline StopDeploymentResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    StopStatus m_status;

    Aws::String m_statusMessage;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
