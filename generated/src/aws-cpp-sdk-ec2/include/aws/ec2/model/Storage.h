/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Storage
  {
  public:
    AWS_EC2_API Storage();
    AWS_EC2_API Storage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Storage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>An Amazon S3 storage location.</p>
     */
    inline const S3Storage& GetS3() const{ return m_s3; }

    /**
     * <p>An Amazon S3 storage location.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

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
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
