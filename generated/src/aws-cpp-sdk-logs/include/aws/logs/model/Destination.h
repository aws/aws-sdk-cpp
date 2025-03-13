/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Represents a cross-account destination that receives subscription log
   * events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_CLOUDWATCHLOGS_API Destination() = default;
    AWS_CLOUDWATCHLOGS_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the destination.</p>
     */
    inline const Aws::String& GetDestinationName() const { return m_destinationName; }
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }
    template<typename DestinationNameT = Aws::String>
    void SetDestinationName(DestinationNameT&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::forward<DestinationNameT>(value); }
    template<typename DestinationNameT = Aws::String>
    Destination& WithDestinationName(DestinationNameT&& value) { SetDestinationName(std::forward<DestinationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the physical target where the log events
     * are delivered (for example, a Kinesis stream).</p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    Destination& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A role for impersonation, used when delivering log events to the target.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    Destination& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM policy document that governs which Amazon Web Services accounts can
     * create subscription filters against this destination.</p>
     */
    inline const Aws::String& GetAccessPolicy() const { return m_accessPolicy; }
    inline bool AccessPolicyHasBeenSet() const { return m_accessPolicyHasBeenSet; }
    template<typename AccessPolicyT = Aws::String>
    void SetAccessPolicy(AccessPolicyT&& value) { m_accessPolicyHasBeenSet = true; m_accessPolicy = std::forward<AccessPolicyT>(value); }
    template<typename AccessPolicyT = Aws::String>
    Destination& WithAccessPolicy(AccessPolicyT&& value) { SetAccessPolicy(std::forward<AccessPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of this destination.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Destination& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the destination, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline long long GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline Destination& WithCreationTime(long long value) { SetCreationTime(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_accessPolicy;
    bool m_accessPolicyHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    long long m_creationTime{0};
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
