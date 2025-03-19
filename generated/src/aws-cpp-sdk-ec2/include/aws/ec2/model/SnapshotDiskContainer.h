/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/UserBucket.h>
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
   * <p>The disk container object for the import snapshot request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SnapshotDiskContainer">AWS
   * API Reference</a></p>
   */
  class SnapshotDiskContainer
  {
  public:
    AWS_EC2_API SnapshotDiskContainer() = default;
    AWS_EC2_API SnapshotDiskContainer(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SnapshotDiskContainer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The description of the disk image being imported.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SnapshotDiskContainer& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>VHD</code> | <code>VMDK</code> | <code>RAW</code> </p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    SnapshotDiskContainer& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the Amazon S3-based disk image being imported. It can either be a
     * https URL (https://..) or an Amazon S3 URL (s3://..).</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    SnapshotDiskContainer& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket for the disk image.</p>
     */
    inline const UserBucket& GetUserBucket() const { return m_userBucket; }
    inline bool UserBucketHasBeenSet() const { return m_userBucketHasBeenSet; }
    template<typename UserBucketT = UserBucket>
    void SetUserBucket(UserBucketT&& value) { m_userBucketHasBeenSet = true; m_userBucket = std::forward<UserBucketT>(value); }
    template<typename UserBucketT = UserBucket>
    SnapshotDiskContainer& WithUserBucket(UserBucketT&& value) { SetUserBucket(std::forward<UserBucketT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    UserBucket m_userBucket;
    bool m_userBucketHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
