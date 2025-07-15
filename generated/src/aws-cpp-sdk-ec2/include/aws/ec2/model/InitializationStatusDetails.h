/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InitializationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Information about the volume initialization. For more information, see <a
   * href="https://docs.aws.amazon.com/ebs/latest/userguide/initalize-volume.html">Initialize
   * Amazon EBS volumes</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InitializationStatusDetails">AWS
   * API Reference</a></p>
   */
  class InitializationStatusDetails
  {
  public:
    AWS_EC2_API InitializationStatusDetails() = default;
    AWS_EC2_API InitializationStatusDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InitializationStatusDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The method used for volume initialization. Possible values include:</p> <ul>
     * <li> <p> <code>default</code> - Volume initialized using the default volume
     * initialization rate or fast snapshot restore.</p> </li> <li> <p>
     * <code>provisioned-rate</code> - Volume initialized using an Amazon EBS
     * Provisioned Rate for Volume Initialization.</p> </li> </ul>
     */
    inline InitializationType GetInitializationType() const { return m_initializationType; }
    inline bool InitializationTypeHasBeenSet() const { return m_initializationTypeHasBeenSet; }
    inline void SetInitializationType(InitializationType value) { m_initializationTypeHasBeenSet = true; m_initializationType = value; }
    inline InitializationStatusDetails& WithInitializationType(InitializationType value) { SetInitializationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current volume initialization progress as a percentage (0-100). Returns
     * <code>100</code> when volume initialization has completed.</p>
     */
    inline long long GetProgress() const { return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    inline void SetProgress(long long value) { m_progressHasBeenSet = true; m_progress = value; }
    inline InitializationStatusDetails& WithProgress(long long value) { SetProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated remaining time, in seconds, for volume initialization to
     * complete. Returns <code>0</code> when volume initialization has completed.</p>
     * <p>Only available for volumes created with Amazon EBS Provisioned Rate for
     * Volume Initialization.</p>
     */
    inline long long GetEstimatedTimeToCompleteInSeconds() const { return m_estimatedTimeToCompleteInSeconds; }
    inline bool EstimatedTimeToCompleteInSecondsHasBeenSet() const { return m_estimatedTimeToCompleteInSecondsHasBeenSet; }
    inline void SetEstimatedTimeToCompleteInSeconds(long long value) { m_estimatedTimeToCompleteInSecondsHasBeenSet = true; m_estimatedTimeToCompleteInSeconds = value; }
    inline InitializationStatusDetails& WithEstimatedTimeToCompleteInSeconds(long long value) { SetEstimatedTimeToCompleteInSeconds(value); return *this;}
    ///@}
  private:

    InitializationType m_initializationType{InitializationType::NOT_SET};
    bool m_initializationTypeHasBeenSet = false;

    long long m_progress{0};
    bool m_progressHasBeenSet = false;

    long long m_estimatedTimeToCompleteInSeconds{0};
    bool m_estimatedTimeToCompleteInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
