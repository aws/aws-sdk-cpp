/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/FrameworkControl.h>
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
namespace Backup
{
namespace Model
{
  class DescribeFrameworkResult
  {
  public:
    AWS_BACKUP_API DescribeFrameworkResult();
    AWS_BACKUP_API DescribeFrameworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeFrameworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique name of a framework.</p>
     */
    inline const Aws::String& GetFrameworkName() const{ return m_frameworkName; }

    /**
     * <p>The unique name of a framework.</p>
     */
    inline void SetFrameworkName(const Aws::String& value) { m_frameworkName = value; }

    /**
     * <p>The unique name of a framework.</p>
     */
    inline void SetFrameworkName(Aws::String&& value) { m_frameworkName = std::move(value); }

    /**
     * <p>The unique name of a framework.</p>
     */
    inline void SetFrameworkName(const char* value) { m_frameworkName.assign(value); }

    /**
     * <p>The unique name of a framework.</p>
     */
    inline DescribeFrameworkResult& WithFrameworkName(const Aws::String& value) { SetFrameworkName(value); return *this;}

    /**
     * <p>The unique name of a framework.</p>
     */
    inline DescribeFrameworkResult& WithFrameworkName(Aws::String&& value) { SetFrameworkName(std::move(value)); return *this;}

    /**
     * <p>The unique name of a framework.</p>
     */
    inline DescribeFrameworkResult& WithFrameworkName(const char* value) { SetFrameworkName(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetFrameworkArn() const{ return m_frameworkArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetFrameworkArn(const Aws::String& value) { m_frameworkArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetFrameworkArn(Aws::String&& value) { m_frameworkArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetFrameworkArn(const char* value) { m_frameworkArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline DescribeFrameworkResult& WithFrameworkArn(const Aws::String& value) { SetFrameworkArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline DescribeFrameworkResult& WithFrameworkArn(Aws::String&& value) { SetFrameworkArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline DescribeFrameworkResult& WithFrameworkArn(const char* value) { SetFrameworkArn(value); return *this;}


    /**
     * <p>An optional description of the framework.</p>
     */
    inline const Aws::String& GetFrameworkDescription() const{ return m_frameworkDescription; }

    /**
     * <p>An optional description of the framework.</p>
     */
    inline void SetFrameworkDescription(const Aws::String& value) { m_frameworkDescription = value; }

    /**
     * <p>An optional description of the framework.</p>
     */
    inline void SetFrameworkDescription(Aws::String&& value) { m_frameworkDescription = std::move(value); }

    /**
     * <p>An optional description of the framework.</p>
     */
    inline void SetFrameworkDescription(const char* value) { m_frameworkDescription.assign(value); }

    /**
     * <p>An optional description of the framework.</p>
     */
    inline DescribeFrameworkResult& WithFrameworkDescription(const Aws::String& value) { SetFrameworkDescription(value); return *this;}

    /**
     * <p>An optional description of the framework.</p>
     */
    inline DescribeFrameworkResult& WithFrameworkDescription(Aws::String&& value) { SetFrameworkDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the framework.</p>
     */
    inline DescribeFrameworkResult& WithFrameworkDescription(const char* value) { SetFrameworkDescription(value); return *this;}


    /**
     * <p>A list of the controls that make up the framework. Each control in the list
     * has a name, input parameters, and scope.</p>
     */
    inline const Aws::Vector<FrameworkControl>& GetFrameworkControls() const{ return m_frameworkControls; }

    /**
     * <p>A list of the controls that make up the framework. Each control in the list
     * has a name, input parameters, and scope.</p>
     */
    inline void SetFrameworkControls(const Aws::Vector<FrameworkControl>& value) { m_frameworkControls = value; }

    /**
     * <p>A list of the controls that make up the framework. Each control in the list
     * has a name, input parameters, and scope.</p>
     */
    inline void SetFrameworkControls(Aws::Vector<FrameworkControl>&& value) { m_frameworkControls = std::move(value); }

    /**
     * <p>A list of the controls that make up the framework. Each control in the list
     * has a name, input parameters, and scope.</p>
     */
    inline DescribeFrameworkResult& WithFrameworkControls(const Aws::Vector<FrameworkControl>& value) { SetFrameworkControls(value); return *this;}

    /**
     * <p>A list of the controls that make up the framework. Each control in the list
     * has a name, input parameters, and scope.</p>
     */
    inline DescribeFrameworkResult& WithFrameworkControls(Aws::Vector<FrameworkControl>&& value) { SetFrameworkControls(std::move(value)); return *this;}

    /**
     * <p>A list of the controls that make up the framework. Each control in the list
     * has a name, input parameters, and scope.</p>
     */
    inline DescribeFrameworkResult& AddFrameworkControls(const FrameworkControl& value) { m_frameworkControls.push_back(value); return *this; }

    /**
     * <p>A list of the controls that make up the framework. Each control in the list
     * has a name, input parameters, and scope.</p>
     */
    inline DescribeFrameworkResult& AddFrameworkControls(FrameworkControl&& value) { m_frameworkControls.push_back(std::move(value)); return *this; }


    /**
     * <p>The date and time that a framework is created, in ISO 8601 representation.
     * The value of <code>CreationTime</code> is accurate to milliseconds. For example,
     * 2020-07-10T15:00:00.000-08:00 represents the 10th of July 2020 at 3:00 PM 8
     * hours behind UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that a framework is created, in ISO 8601 representation.
     * The value of <code>CreationTime</code> is accurate to milliseconds. For example,
     * 2020-07-10T15:00:00.000-08:00 represents the 10th of July 2020 at 3:00 PM 8
     * hours behind UTC.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The date and time that a framework is created, in ISO 8601 representation.
     * The value of <code>CreationTime</code> is accurate to milliseconds. For example,
     * 2020-07-10T15:00:00.000-08:00 represents the 10th of July 2020 at 3:00 PM 8
     * hours behind UTC.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date and time that a framework is created, in ISO 8601 representation.
     * The value of <code>CreationTime</code> is accurate to milliseconds. For example,
     * 2020-07-10T15:00:00.000-08:00 represents the 10th of July 2020 at 3:00 PM 8
     * hours behind UTC.</p>
     */
    inline DescribeFrameworkResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that a framework is created, in ISO 8601 representation.
     * The value of <code>CreationTime</code> is accurate to milliseconds. For example,
     * 2020-07-10T15:00:00.000-08:00 represents the 10th of July 2020 at 3:00 PM 8
     * hours behind UTC.</p>
     */
    inline DescribeFrameworkResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline const Aws::String& GetDeploymentStatus() const{ return m_deploymentStatus; }

    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline void SetDeploymentStatus(const Aws::String& value) { m_deploymentStatus = value; }

    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline void SetDeploymentStatus(Aws::String&& value) { m_deploymentStatus = std::move(value); }

    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline void SetDeploymentStatus(const char* value) { m_deploymentStatus.assign(value); }

    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline DescribeFrameworkResult& WithDeploymentStatus(const Aws::String& value) { SetDeploymentStatus(value); return *this;}

    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline DescribeFrameworkResult& WithDeploymentStatus(Aws::String&& value) { SetDeploymentStatus(std::move(value)); return *this;}

    /**
     * <p>The deployment status of a framework. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS | COMPLETED |
     * FAILED</code> </p>
     */
    inline DescribeFrameworkResult& WithDeploymentStatus(const char* value) { SetDeploymentStatus(value); return *this;}


    /**
     * <p>A framework consists of one or more controls. Each control governs a
     * resource, such as backup plans, backup selections, backup vaults, or recovery
     * points. You can also turn Config recording on or off for each resource. The
     * statuses are:</p> <ul> <li> <p> <code>ACTIVE</code> when recording is turned on
     * for all resources governed by the framework.</p> </li> <li> <p>
     * <code>PARTIALLY_ACTIVE</code> when recording is turned off for at least one
     * resource governed by the framework.</p> </li> <li> <p> <code>INACTIVE</code>
     * when recording is turned off for all resources governed by the framework.</p>
     * </li> <li> <p> <code>UNAVAILABLE</code> when Backup is unable to validate
     * recording status at this time.</p> </li> </ul>
     */
    inline const Aws::String& GetFrameworkStatus() const{ return m_frameworkStatus; }

    /**
     * <p>A framework consists of one or more controls. Each control governs a
     * resource, such as backup plans, backup selections, backup vaults, or recovery
     * points. You can also turn Config recording on or off for each resource. The
     * statuses are:</p> <ul> <li> <p> <code>ACTIVE</code> when recording is turned on
     * for all resources governed by the framework.</p> </li> <li> <p>
     * <code>PARTIALLY_ACTIVE</code> when recording is turned off for at least one
     * resource governed by the framework.</p> </li> <li> <p> <code>INACTIVE</code>
     * when recording is turned off for all resources governed by the framework.</p>
     * </li> <li> <p> <code>UNAVAILABLE</code> when Backup is unable to validate
     * recording status at this time.</p> </li> </ul>
     */
    inline void SetFrameworkStatus(const Aws::String& value) { m_frameworkStatus = value; }

    /**
     * <p>A framework consists of one or more controls. Each control governs a
     * resource, such as backup plans, backup selections, backup vaults, or recovery
     * points. You can also turn Config recording on or off for each resource. The
     * statuses are:</p> <ul> <li> <p> <code>ACTIVE</code> when recording is turned on
     * for all resources governed by the framework.</p> </li> <li> <p>
     * <code>PARTIALLY_ACTIVE</code> when recording is turned off for at least one
     * resource governed by the framework.</p> </li> <li> <p> <code>INACTIVE</code>
     * when recording is turned off for all resources governed by the framework.</p>
     * </li> <li> <p> <code>UNAVAILABLE</code> when Backup is unable to validate
     * recording status at this time.</p> </li> </ul>
     */
    inline void SetFrameworkStatus(Aws::String&& value) { m_frameworkStatus = std::move(value); }

    /**
     * <p>A framework consists of one or more controls. Each control governs a
     * resource, such as backup plans, backup selections, backup vaults, or recovery
     * points. You can also turn Config recording on or off for each resource. The
     * statuses are:</p> <ul> <li> <p> <code>ACTIVE</code> when recording is turned on
     * for all resources governed by the framework.</p> </li> <li> <p>
     * <code>PARTIALLY_ACTIVE</code> when recording is turned off for at least one
     * resource governed by the framework.</p> </li> <li> <p> <code>INACTIVE</code>
     * when recording is turned off for all resources governed by the framework.</p>
     * </li> <li> <p> <code>UNAVAILABLE</code> when Backup is unable to validate
     * recording status at this time.</p> </li> </ul>
     */
    inline void SetFrameworkStatus(const char* value) { m_frameworkStatus.assign(value); }

    /**
     * <p>A framework consists of one or more controls. Each control governs a
     * resource, such as backup plans, backup selections, backup vaults, or recovery
     * points. You can also turn Config recording on or off for each resource. The
     * statuses are:</p> <ul> <li> <p> <code>ACTIVE</code> when recording is turned on
     * for all resources governed by the framework.</p> </li> <li> <p>
     * <code>PARTIALLY_ACTIVE</code> when recording is turned off for at least one
     * resource governed by the framework.</p> </li> <li> <p> <code>INACTIVE</code>
     * when recording is turned off for all resources governed by the framework.</p>
     * </li> <li> <p> <code>UNAVAILABLE</code> when Backup is unable to validate
     * recording status at this time.</p> </li> </ul>
     */
    inline DescribeFrameworkResult& WithFrameworkStatus(const Aws::String& value) { SetFrameworkStatus(value); return *this;}

    /**
     * <p>A framework consists of one or more controls. Each control governs a
     * resource, such as backup plans, backup selections, backup vaults, or recovery
     * points. You can also turn Config recording on or off for each resource. The
     * statuses are:</p> <ul> <li> <p> <code>ACTIVE</code> when recording is turned on
     * for all resources governed by the framework.</p> </li> <li> <p>
     * <code>PARTIALLY_ACTIVE</code> when recording is turned off for at least one
     * resource governed by the framework.</p> </li> <li> <p> <code>INACTIVE</code>
     * when recording is turned off for all resources governed by the framework.</p>
     * </li> <li> <p> <code>UNAVAILABLE</code> when Backup is unable to validate
     * recording status at this time.</p> </li> </ul>
     */
    inline DescribeFrameworkResult& WithFrameworkStatus(Aws::String&& value) { SetFrameworkStatus(std::move(value)); return *this;}

    /**
     * <p>A framework consists of one or more controls. Each control governs a
     * resource, such as backup plans, backup selections, backup vaults, or recovery
     * points. You can also turn Config recording on or off for each resource. The
     * statuses are:</p> <ul> <li> <p> <code>ACTIVE</code> when recording is turned on
     * for all resources governed by the framework.</p> </li> <li> <p>
     * <code>PARTIALLY_ACTIVE</code> when recording is turned off for at least one
     * resource governed by the framework.</p> </li> <li> <p> <code>INACTIVE</code>
     * when recording is turned off for all resources governed by the framework.</p>
     * </li> <li> <p> <code>UNAVAILABLE</code> when Backup is unable to validate
     * recording status at this time.</p> </li> </ul>
     */
    inline DescribeFrameworkResult& WithFrameworkStatus(const char* value) { SetFrameworkStatus(value); return *this;}


    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>DescribeFrameworkOutput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>DescribeFrameworkOutput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyToken = value; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>DescribeFrameworkOutput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyToken = std::move(value); }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>DescribeFrameworkOutput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyToken.assign(value); }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>DescribeFrameworkOutput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline DescribeFrameworkResult& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>DescribeFrameworkOutput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline DescribeFrameworkResult& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>DescribeFrameworkOutput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline DescribeFrameworkResult& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:

    Aws::String m_frameworkName;

    Aws::String m_frameworkArn;

    Aws::String m_frameworkDescription;

    Aws::Vector<FrameworkControl> m_frameworkControls;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_deploymentStatus;

    Aws::String m_frameworkStatus;

    Aws::String m_idempotencyToken;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
