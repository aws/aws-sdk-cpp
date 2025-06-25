/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/S3AccessPointAttachmentLifecycle.h>
#include <aws/fsx/model/LifecycleTransitionReason.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/S3AccessPointAttachmentType.h>
#include <aws/fsx/model/S3AccessPointOpenZFSConfiguration.h>
#include <aws/fsx/model/S3AccessPoint.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>An S3 access point attached to an Amazon FSx volume.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/S3AccessPointAttachment">AWS
   * API Reference</a></p>
   */
  class S3AccessPointAttachment
  {
  public:
    AWS_FSX_API S3AccessPointAttachment() = default;
    AWS_FSX_API S3AccessPointAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API S3AccessPointAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The lifecycle status of the S3 access point attachment. The lifecycle can
     * have the following values:</p> <ul> <li> <p>AVAILABLE - the S3 access point
     * attachment is available for use</p> </li> <li> <p>CREATING - Amazon FSx is
     * creating the S3 access point and attachment</p> </li> <li> <p>DELETING - Amazon
     * FSx is deleting the S3 access point and attachment</p> </li> <li> <p>FAILED -
     * The S3 access point attachment is in a failed state. Delete and detach the S3
     * access point attachment, and create a new one.</p> </li> <li> <p>UPDATING -
     * Amazon FSx is updating the S3 access point attachment</p> </li> </ul>
     */
    inline S3AccessPointAttachmentLifecycle GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(S3AccessPointAttachmentLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline S3AccessPointAttachment& WithLifecycle(S3AccessPointAttachmentLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    
    inline const LifecycleTransitionReason& GetLifecycleTransitionReason() const { return m_lifecycleTransitionReason; }
    inline bool LifecycleTransitionReasonHasBeenSet() const { return m_lifecycleTransitionReasonHasBeenSet; }
    template<typename LifecycleTransitionReasonT = LifecycleTransitionReason>
    void SetLifecycleTransitionReason(LifecycleTransitionReasonT&& value) { m_lifecycleTransitionReasonHasBeenSet = true; m_lifecycleTransitionReason = std::forward<LifecycleTransitionReasonT>(value); }
    template<typename LifecycleTransitionReasonT = LifecycleTransitionReason>
    S3AccessPointAttachment& WithLifecycleTransitionReason(LifecycleTransitionReasonT&& value) { SetLifecycleTransitionReason(std::forward<LifecycleTransitionReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    S3AccessPointAttachment& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the S3 access point attachment; also used for the name of the S3
     * access point.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    S3AccessPointAttachment& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon FSx volume that the S3 access point is attached to. </p>
     */
    inline S3AccessPointAttachmentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(S3AccessPointAttachmentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline S3AccessPointAttachment& WithType(S3AccessPointAttachmentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenZFSConfiguration of the S3 access point attachment.</p>
     */
    inline const S3AccessPointOpenZFSConfiguration& GetOpenZFSConfiguration() const { return m_openZFSConfiguration; }
    inline bool OpenZFSConfigurationHasBeenSet() const { return m_openZFSConfigurationHasBeenSet; }
    template<typename OpenZFSConfigurationT = S3AccessPointOpenZFSConfiguration>
    void SetOpenZFSConfiguration(OpenZFSConfigurationT&& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = std::forward<OpenZFSConfigurationT>(value); }
    template<typename OpenZFSConfigurationT = S3AccessPointOpenZFSConfiguration>
    S3AccessPointAttachment& WithOpenZFSConfiguration(OpenZFSConfigurationT&& value) { SetOpenZFSConfiguration(std::forward<OpenZFSConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 access point configuration of the S3 access point attachment.</p>
     */
    inline const S3AccessPoint& GetS3AccessPoint() const { return m_s3AccessPoint; }
    inline bool S3AccessPointHasBeenSet() const { return m_s3AccessPointHasBeenSet; }
    template<typename S3AccessPointT = S3AccessPoint>
    void SetS3AccessPoint(S3AccessPointT&& value) { m_s3AccessPointHasBeenSet = true; m_s3AccessPoint = std::forward<S3AccessPointT>(value); }
    template<typename S3AccessPointT = S3AccessPoint>
    S3AccessPointAttachment& WithS3AccessPoint(S3AccessPointT&& value) { SetS3AccessPoint(std::forward<S3AccessPointT>(value)); return *this;}
    ///@}
  private:

    S3AccessPointAttachmentLifecycle m_lifecycle{S3AccessPointAttachmentLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    LifecycleTransitionReason m_lifecycleTransitionReason;
    bool m_lifecycleTransitionReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    S3AccessPointAttachmentType m_type{S3AccessPointAttachmentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    S3AccessPointOpenZFSConfiguration m_openZFSConfiguration;
    bool m_openZFSConfigurationHasBeenSet = false;

    S3AccessPoint m_s3AccessPoint;
    bool m_s3AccessPointHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
