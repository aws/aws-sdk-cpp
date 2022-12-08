/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResourceSignalStatus.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for the <a>SignalResource</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/SignalResourceInput">AWS
   * API Reference</a></p>
   */
  class SignalResourceRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API SignalResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SignalResource"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The stack name or unique stack ID that includes the resource that you want to
     * signal.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The stack name or unique stack ID that includes the resource that you want to
     * signal.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The stack name or unique stack ID that includes the resource that you want to
     * signal.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The stack name or unique stack ID that includes the resource that you want to
     * signal.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The stack name or unique stack ID that includes the resource that you want to
     * signal.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The stack name or unique stack ID that includes the resource that you want to
     * signal.</p>
     */
    inline SignalResourceRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The stack name or unique stack ID that includes the resource that you want to
     * signal.</p>
     */
    inline SignalResourceRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The stack name or unique stack ID that includes the resource that you want to
     * signal.</p>
     */
    inline SignalResourceRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The logical ID of the resource that you want to signal. The logical ID is the
     * name of the resource that given in the template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const{ return m_logicalResourceId; }

    /**
     * <p>The logical ID of the resource that you want to signal. The logical ID is the
     * name of the resource that given in the template.</p>
     */
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }

    /**
     * <p>The logical ID of the resource that you want to signal. The logical ID is the
     * name of the resource that given in the template.</p>
     */
    inline void SetLogicalResourceId(const Aws::String& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }

    /**
     * <p>The logical ID of the resource that you want to signal. The logical ID is the
     * name of the resource that given in the template.</p>
     */
    inline void SetLogicalResourceId(Aws::String&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }

    /**
     * <p>The logical ID of the resource that you want to signal. The logical ID is the
     * name of the resource that given in the template.</p>
     */
    inline void SetLogicalResourceId(const char* value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId.assign(value); }

    /**
     * <p>The logical ID of the resource that you want to signal. The logical ID is the
     * name of the resource that given in the template.</p>
     */
    inline SignalResourceRequest& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The logical ID of the resource that you want to signal. The logical ID is the
     * name of the resource that given in the template.</p>
     */
    inline SignalResourceRequest& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(std::move(value)); return *this;}

    /**
     * <p>The logical ID of the resource that you want to signal. The logical ID is the
     * name of the resource that given in the template.</p>
     */
    inline SignalResourceRequest& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}


    /**
     * <p>A unique ID of the signal. When you signal Amazon EC2 instances or Auto
     * Scaling groups, specify the instance ID that you are signaling as the unique ID.
     * If you send multiple signals to a single resource (such as signaling a wait
     * condition), each signal requires a different unique ID.</p>
     */
    inline const Aws::String& GetUniqueId() const{ return m_uniqueId; }

    /**
     * <p>A unique ID of the signal. When you signal Amazon EC2 instances or Auto
     * Scaling groups, specify the instance ID that you are signaling as the unique ID.
     * If you send multiple signals to a single resource (such as signaling a wait
     * condition), each signal requires a different unique ID.</p>
     */
    inline bool UniqueIdHasBeenSet() const { return m_uniqueIdHasBeenSet; }

    /**
     * <p>A unique ID of the signal. When you signal Amazon EC2 instances or Auto
     * Scaling groups, specify the instance ID that you are signaling as the unique ID.
     * If you send multiple signals to a single resource (such as signaling a wait
     * condition), each signal requires a different unique ID.</p>
     */
    inline void SetUniqueId(const Aws::String& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = value; }

    /**
     * <p>A unique ID of the signal. When you signal Amazon EC2 instances or Auto
     * Scaling groups, specify the instance ID that you are signaling as the unique ID.
     * If you send multiple signals to a single resource (such as signaling a wait
     * condition), each signal requires a different unique ID.</p>
     */
    inline void SetUniqueId(Aws::String&& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = std::move(value); }

    /**
     * <p>A unique ID of the signal. When you signal Amazon EC2 instances or Auto
     * Scaling groups, specify the instance ID that you are signaling as the unique ID.
     * If you send multiple signals to a single resource (such as signaling a wait
     * condition), each signal requires a different unique ID.</p>
     */
    inline void SetUniqueId(const char* value) { m_uniqueIdHasBeenSet = true; m_uniqueId.assign(value); }

    /**
     * <p>A unique ID of the signal. When you signal Amazon EC2 instances or Auto
     * Scaling groups, specify the instance ID that you are signaling as the unique ID.
     * If you send multiple signals to a single resource (such as signaling a wait
     * condition), each signal requires a different unique ID.</p>
     */
    inline SignalResourceRequest& WithUniqueId(const Aws::String& value) { SetUniqueId(value); return *this;}

    /**
     * <p>A unique ID of the signal. When you signal Amazon EC2 instances or Auto
     * Scaling groups, specify the instance ID that you are signaling as the unique ID.
     * If you send multiple signals to a single resource (such as signaling a wait
     * condition), each signal requires a different unique ID.</p>
     */
    inline SignalResourceRequest& WithUniqueId(Aws::String&& value) { SetUniqueId(std::move(value)); return *this;}

    /**
     * <p>A unique ID of the signal. When you signal Amazon EC2 instances or Auto
     * Scaling groups, specify the instance ID that you are signaling as the unique ID.
     * If you send multiple signals to a single resource (such as signaling a wait
     * condition), each signal requires a different unique ID.</p>
     */
    inline SignalResourceRequest& WithUniqueId(const char* value) { SetUniqueId(value); return *this;}


    /**
     * <p>The status of the signal, which is either success or failure. A failure
     * signal causes CloudFormation to immediately fail the stack creation or
     * update.</p>
     */
    inline const ResourceSignalStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the signal, which is either success or failure. A failure
     * signal causes CloudFormation to immediately fail the stack creation or
     * update.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the signal, which is either success or failure. A failure
     * signal causes CloudFormation to immediately fail the stack creation or
     * update.</p>
     */
    inline void SetStatus(const ResourceSignalStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the signal, which is either success or failure. A failure
     * signal causes CloudFormation to immediately fail the stack creation or
     * update.</p>
     */
    inline void SetStatus(ResourceSignalStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the signal, which is either success or failure. A failure
     * signal causes CloudFormation to immediately fail the stack creation or
     * update.</p>
     */
    inline SignalResourceRequest& WithStatus(const ResourceSignalStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the signal, which is either success or failure. A failure
     * signal causes CloudFormation to immediately fail the stack creation or
     * update.</p>
     */
    inline SignalResourceRequest& WithStatus(ResourceSignalStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_uniqueId;
    bool m_uniqueIdHasBeenSet = false;

    ResourceSignalStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
