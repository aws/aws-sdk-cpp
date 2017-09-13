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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/S3Storage.h>
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
   * <p>Describes the storage location for an instance store-backed
   * AMI.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Storage">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API Storage
  {
  public:
    Storage();
    Storage(const Aws::Utils::Xml::XmlNode& xmlNode);
    Storage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>An Amazon S3 storage location.</p>
     */
    inline const S3Storage& GetS3() const{ return m_s3; }

    /**
     * <p>An Amazon S3 storage location.</p>
     */
    inline void SetS3(const S3Storage& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>An Amazon S3 storage location.</p>
     */
    inline void SetS3(S3Storage&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>An Amazon S3 storage location.</p>
     */
    inline Storage& WithS3(const S3Storage& value) { SetS3(value); return *this;}

    /**
     * <p>An Amazon S3 storage location.</p>
     */
    inline Storage& WithS3(S3Storage&& value) { SetS3(std::move(value)); return *this;}

  private:

    S3Storage m_s3;
    bool m_s3HasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
