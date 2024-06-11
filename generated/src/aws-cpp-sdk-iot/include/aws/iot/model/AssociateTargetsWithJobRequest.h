/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class AssociateTargetsWithJobRequest : public IoTRequest
  {
  public:
    AWS_IOT_API AssociateTargetsWithJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateTargetsWithJob"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>A list of thing group ARNs that define the targets of the job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline AssociateTargetsWithJobRequest& WithTargets(const Aws::Vector<Aws::String>& value) { SetTargets(value); return *this;}
    inline AssociateTargetsWithJobRequest& WithTargets(Aws::Vector<Aws::String>&& value) { SetTargets(std::move(value)); return *this;}
    inline AssociateTargetsWithJobRequest& AddTargets(const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline AssociateTargetsWithJobRequest& AddTargets(Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    inline AssociateTargetsWithJobRequest& AddTargets(const char* value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline AssociateTargetsWithJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline AssociateTargetsWithJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline AssociateTargetsWithJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional comment string describing why the job was associated with the
     * targets.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline AssociateTargetsWithJobRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline AssociateTargetsWithJobRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline AssociateTargetsWithJobRequest& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is only supported by IoT
     * Greengrass at this time. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/setting-up.html">Setting
     * up IoT Greengrass core devices.</a> </p> 
     */
    inline const Aws::String& GetNamespaceId() const{ return m_namespaceId; }
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }
    inline void SetNamespaceId(const Aws::String& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = value; }
    inline void SetNamespaceId(Aws::String&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::move(value); }
    inline void SetNamespaceId(const char* value) { m_namespaceIdHasBeenSet = true; m_namespaceId.assign(value); }
    inline AssociateTargetsWithJobRequest& WithNamespaceId(const Aws::String& value) { SetNamespaceId(value); return *this;}
    inline AssociateTargetsWithJobRequest& WithNamespaceId(Aws::String&& value) { SetNamespaceId(std::move(value)); return *this;}
    inline AssociateTargetsWithJobRequest& WithNamespaceId(const char* value) { SetNamespaceId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
