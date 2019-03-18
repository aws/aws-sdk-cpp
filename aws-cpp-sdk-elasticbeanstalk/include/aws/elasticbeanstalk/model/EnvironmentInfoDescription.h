/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICBEANSTALK_API EnvironmentInfoDescription
  {
  public:
    EnvironmentInfoDescription();
    EnvironmentInfoDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    EnvironmentInfoDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of information retrieved.</p>
     */
    inline const EnvironmentInfoType& GetInfoType() const{ return m_infoType; }

    /**
     * <p>The type of information retrieved.</p>
     */
    inline bool InfoTypeHasBeenSet() const { return m_infoTypeHasBeenSet; }

    /**
     * <p>The type of information retrieved.</p>
     */
    inline void SetInfoType(const EnvironmentInfoType& value) { m_infoTypeHasBeenSet = true; m_infoType = value; }

    /**
     * <p>The type of information retrieved.</p>
     */
    inline void SetInfoType(EnvironmentInfoType&& value) { m_infoTypeHasBeenSet = true; m_infoType = std::move(value); }

    /**
     * <p>The type of information retrieved.</p>
     */
    inline EnvironmentInfoDescription& WithInfoType(const EnvironmentInfoType& value) { SetInfoType(value); return *this;}

    /**
     * <p>The type of information retrieved.</p>
     */
    inline EnvironmentInfoDescription& WithInfoType(EnvironmentInfoType&& value) { SetInfoType(std::move(value)); return *this;}


    /**
     * <p>The Amazon EC2 Instance ID for this information.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const{ return m_ec2InstanceId; }

    /**
     * <p>The Amazon EC2 Instance ID for this information.</p>
     */
    inline bool Ec2InstanceIdHasBeenSet() const { return m_ec2InstanceIdHasBeenSet; }

    /**
     * <p>The Amazon EC2 Instance ID for this information.</p>
     */
    inline void SetEc2InstanceId(const Aws::String& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = value; }

    /**
     * <p>The Amazon EC2 Instance ID for this information.</p>
     */
    inline void SetEc2InstanceId(Aws::String&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::move(value); }

    /**
     * <p>The Amazon EC2 Instance ID for this information.</p>
     */
    inline void SetEc2InstanceId(const char* value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId.assign(value); }

    /**
     * <p>The Amazon EC2 Instance ID for this information.</p>
     */
    inline EnvironmentInfoDescription& WithEc2InstanceId(const Aws::String& value) { SetEc2InstanceId(value); return *this;}

    /**
     * <p>The Amazon EC2 Instance ID for this information.</p>
     */
    inline EnvironmentInfoDescription& WithEc2InstanceId(Aws::String&& value) { SetEc2InstanceId(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 Instance ID for this information.</p>
     */
    inline EnvironmentInfoDescription& WithEc2InstanceId(const char* value) { SetEc2InstanceId(value); return *this;}


    /**
     * <p>The time stamp when this information was retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetSampleTimestamp() const{ return m_sampleTimestamp; }

    /**
     * <p>The time stamp when this information was retrieved.</p>
     */
    inline bool SampleTimestampHasBeenSet() const { return m_sampleTimestampHasBeenSet; }

    /**
     * <p>The time stamp when this information was retrieved.</p>
     */
    inline void SetSampleTimestamp(const Aws::Utils::DateTime& value) { m_sampleTimestampHasBeenSet = true; m_sampleTimestamp = value; }

    /**
     * <p>The time stamp when this information was retrieved.</p>
     */
    inline void SetSampleTimestamp(Aws::Utils::DateTime&& value) { m_sampleTimestampHasBeenSet = true; m_sampleTimestamp = std::move(value); }

    /**
     * <p>The time stamp when this information was retrieved.</p>
     */
    inline EnvironmentInfoDescription& WithSampleTimestamp(const Aws::Utils::DateTime& value) { SetSampleTimestamp(value); return *this;}

    /**
     * <p>The time stamp when this information was retrieved.</p>
     */
    inline EnvironmentInfoDescription& WithSampleTimestamp(Aws::Utils::DateTime&& value) { SetSampleTimestamp(std::move(value)); return *this;}


    /**
     * <p>The retrieved information. Currently contains a presigned Amazon S3 URL. The
     * files are deleted after 15 minutes.</p> <p>Anyone in possession of this URL can
     * access the files before they are deleted. Make the URL available only to trusted
     * parties.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The retrieved information. Currently contains a presigned Amazon S3 URL. The
     * files are deleted after 15 minutes.</p> <p>Anyone in possession of this URL can
     * access the files before they are deleted. Make the URL available only to trusted
     * parties.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The retrieved information. Currently contains a presigned Amazon S3 URL. The
     * files are deleted after 15 minutes.</p> <p>Anyone in possession of this URL can
     * access the files before they are deleted. Make the URL available only to trusted
     * parties.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The retrieved information. Currently contains a presigned Amazon S3 URL. The
     * files are deleted after 15 minutes.</p> <p>Anyone in possession of this URL can
     * access the files before they are deleted. Make the URL available only to trusted
     * parties.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The retrieved information. Currently contains a presigned Amazon S3 URL. The
     * files are deleted after 15 minutes.</p> <p>Anyone in possession of this URL can
     * access the files before they are deleted. Make the URL available only to trusted
     * parties.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The retrieved information. Currently contains a presigned Amazon S3 URL. The
     * files are deleted after 15 minutes.</p> <p>Anyone in possession of this URL can
     * access the files before they are deleted. Make the URL available only to trusted
     * parties.</p>
     */
    inline EnvironmentInfoDescription& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The retrieved information. Currently contains a presigned Amazon S3 URL. The
     * files are deleted after 15 minutes.</p> <p>Anyone in possession of this URL can
     * access the files before they are deleted. Make the URL available only to trusted
     * parties.</p>
     */
    inline EnvironmentInfoDescription& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The retrieved information. Currently contains a presigned Amazon S3 URL. The
     * files are deleted after 15 minutes.</p> <p>Anyone in possession of this URL can
     * access the files before they are deleted. Make the URL available only to trusted
     * parties.</p>
     */
    inline EnvironmentInfoDescription& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    EnvironmentInfoType m_infoType;
    bool m_infoTypeHasBeenSet;

    Aws::String m_ec2InstanceId;
    bool m_ec2InstanceIdHasBeenSet;

    Aws::Utils::DateTime m_sampleTimestamp;
    bool m_sampleTimestampHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
