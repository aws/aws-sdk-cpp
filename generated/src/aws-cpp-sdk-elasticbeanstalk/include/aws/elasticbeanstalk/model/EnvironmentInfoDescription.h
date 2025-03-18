/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticbeanstalk/model/EnvironmentInfoType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>The information retrieved from the Amazon EC2 instances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/EnvironmentInfoDescription">AWS
   * API Reference</a></p>
   */
  class EnvironmentInfoDescription
  {
  public:
    AWS_ELASTICBEANSTALK_API EnvironmentInfoDescription() = default;
    AWS_ELASTICBEANSTALK_API EnvironmentInfoDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API EnvironmentInfoDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of information retrieved.</p>
     */
    inline EnvironmentInfoType GetInfoType() const { return m_infoType; }
    inline bool InfoTypeHasBeenSet() const { return m_infoTypeHasBeenSet; }
    inline void SetInfoType(EnvironmentInfoType value) { m_infoTypeHasBeenSet = true; m_infoType = value; }
    inline EnvironmentInfoDescription& WithInfoType(EnvironmentInfoType value) { SetInfoType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 Instance ID for this information.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const { return m_ec2InstanceId; }
    inline bool Ec2InstanceIdHasBeenSet() const { return m_ec2InstanceIdHasBeenSet; }
    template<typename Ec2InstanceIdT = Aws::String>
    void SetEc2InstanceId(Ec2InstanceIdT&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::forward<Ec2InstanceIdT>(value); }
    template<typename Ec2InstanceIdT = Aws::String>
    EnvironmentInfoDescription& WithEc2InstanceId(Ec2InstanceIdT&& value) { SetEc2InstanceId(std::forward<Ec2InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when this information was retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetSampleTimestamp() const { return m_sampleTimestamp; }
    inline bool SampleTimestampHasBeenSet() const { return m_sampleTimestampHasBeenSet; }
    template<typename SampleTimestampT = Aws::Utils::DateTime>
    void SetSampleTimestamp(SampleTimestampT&& value) { m_sampleTimestampHasBeenSet = true; m_sampleTimestamp = std::forward<SampleTimestampT>(value); }
    template<typename SampleTimestampT = Aws::Utils::DateTime>
    EnvironmentInfoDescription& WithSampleTimestamp(SampleTimestampT&& value) { SetSampleTimestamp(std::forward<SampleTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retrieved information. Currently contains a presigned Amazon S3 URL. The
     * files are deleted after 15 minutes.</p> <p>Anyone in possession of this URL can
     * access the files before they are deleted. Make the URL available only to trusted
     * parties.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    EnvironmentInfoDescription& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    EnvironmentInfoType m_infoType{EnvironmentInfoType::NOT_SET};
    bool m_infoTypeHasBeenSet = false;

    Aws::String m_ec2InstanceId;
    bool m_ec2InstanceIdHasBeenSet = false;

    Aws::Utils::DateTime m_sampleTimestamp{};
    bool m_sampleTimestampHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
