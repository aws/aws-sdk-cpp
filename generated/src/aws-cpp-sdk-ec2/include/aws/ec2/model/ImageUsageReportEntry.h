/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>A single entry in an image usage report, detailing how an image is being used
   * by a specific Amazon Web Services account and resource type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImageUsageReportEntry">AWS
   * API Reference</a></p>
   */
  class ImageUsageReportEntry
  {
  public:
    AWS_EC2_API ImageUsageReportEntry() = default;
    AWS_EC2_API ImageUsageReportEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImageUsageReportEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of resource (<code>ec2:Instance</code> or
     * <code>ec2:LaunchTemplate</code>).</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ImageUsageReportEntry& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the report.</p>
     */
    inline const Aws::String& GetReportId() const { return m_reportId; }
    inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }
    template<typename ReportIdT = Aws::String>
    void SetReportId(ReportIdT&& value) { m_reportIdHasBeenSet = true; m_reportId = std::forward<ReportIdT>(value); }
    template<typename ReportIdT = Aws::String>
    ImageUsageReportEntry& WithReportId(ReportIdT&& value) { SetReportId(std::forward<ReportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times resources of this type reference this image in the
     * account.</p>
     */
    inline long long GetUsageCount() const { return m_usageCount; }
    inline bool UsageCountHasBeenSet() const { return m_usageCountHasBeenSet; }
    inline void SetUsageCount(long long value) { m_usageCountHasBeenSet = true; m_usageCount = value; }
    inline ImageUsageReportEntry& WithUsageCount(long long value) { SetUsageCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account that uses the image.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ImageUsageReportEntry& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the image.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    ImageUsageReportEntry& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the report creation was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetReportCreationTime() const { return m_reportCreationTime; }
    inline bool ReportCreationTimeHasBeenSet() const { return m_reportCreationTimeHasBeenSet; }
    template<typename ReportCreationTimeT = Aws::Utils::DateTime>
    void SetReportCreationTime(ReportCreationTimeT&& value) { m_reportCreationTimeHasBeenSet = true; m_reportCreationTime = std::forward<ReportCreationTimeT>(value); }
    template<typename ReportCreationTimeT = Aws::Utils::DateTime>
    ImageUsageReportEntry& WithReportCreationTime(ReportCreationTimeT&& value) { SetReportCreationTime(std::forward<ReportCreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_reportId;
    bool m_reportIdHasBeenSet = false;

    long long m_usageCount{0};
    bool m_usageCountHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::Utils::DateTime m_reportCreationTime{};
    bool m_reportCreationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
