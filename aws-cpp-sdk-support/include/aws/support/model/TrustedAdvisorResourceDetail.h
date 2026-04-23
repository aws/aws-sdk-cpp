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
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>Contains information about a resource identified by a Trusted Advisor
   * check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/TrustedAdvisorResourceDetail">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API TrustedAdvisorResourceDetail
  {
  public:
    TrustedAdvisorResourceDetail();
    TrustedAdvisorResourceDetail(Aws::Utils::Json::JsonView jsonValue);
    TrustedAdvisorResourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status code for the resource identified in the Trusted Advisor check.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status code for the resource identified in the Trusted Advisor check.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status code for the resource identified in the Trusted Advisor check.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status code for the resource identified in the Trusted Advisor check.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status code for the resource identified in the Trusted Advisor check.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status code for the resource identified in the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorResourceDetail& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status code for the resource identified in the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorResourceDetail& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status code for the resource identified in the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorResourceDetail& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The AWS region in which the identified resource is located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS region in which the identified resource is located.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS region in which the identified resource is located.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS region in which the identified resource is located.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS region in which the identified resource is located.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS region in which the identified resource is located.</p>
     */
    inline TrustedAdvisorResourceDetail& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS region in which the identified resource is located.</p>
     */
    inline TrustedAdvisorResourceDetail& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS region in which the identified resource is located.</p>
     */
    inline TrustedAdvisorResourceDetail& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The unique identifier for the identified resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The unique identifier for the identified resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The unique identifier for the identified resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The unique identifier for the identified resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The unique identifier for the identified resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The unique identifier for the identified resource.</p>
     */
    inline TrustedAdvisorResourceDetail& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique identifier for the identified resource.</p>
     */
    inline TrustedAdvisorResourceDetail& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the identified resource.</p>
     */
    inline TrustedAdvisorResourceDetail& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Specifies whether the AWS resource was ignored by Trusted Advisor because it
     * was marked as suppressed by the user.</p>
     */
    inline bool GetIsSuppressed() const{ return m_isSuppressed; }

    /**
     * <p>Specifies whether the AWS resource was ignored by Trusted Advisor because it
     * was marked as suppressed by the user.</p>
     */
    inline bool IsSuppressedHasBeenSet() const { return m_isSuppressedHasBeenSet; }

    /**
     * <p>Specifies whether the AWS resource was ignored by Trusted Advisor because it
     * was marked as suppressed by the user.</p>
     */
    inline void SetIsSuppressed(bool value) { m_isSuppressedHasBeenSet = true; m_isSuppressed = value; }

    /**
     * <p>Specifies whether the AWS resource was ignored by Trusted Advisor because it
     * was marked as suppressed by the user.</p>
     */
    inline TrustedAdvisorResourceDetail& WithIsSuppressed(bool value) { SetIsSuppressed(value); return *this;}


    /**
     * <p>Additional information about the identified resource. The exact metadata and
     * its order can be obtained by inspecting the
     * <a>TrustedAdvisorCheckDescription</a> object returned by the call to
     * <a>DescribeTrustedAdvisorChecks</a>. <b>Metadata</b> contains all the data that
     * is shown in the Excel download, even in those cases where the UI shows just
     * summary data. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Additional information about the identified resource. The exact metadata and
     * its order can be obtained by inspecting the
     * <a>TrustedAdvisorCheckDescription</a> object returned by the call to
     * <a>DescribeTrustedAdvisorChecks</a>. <b>Metadata</b> contains all the data that
     * is shown in the Excel download, even in those cases where the UI shows just
     * summary data. </p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>Additional information about the identified resource. The exact metadata and
     * its order can be obtained by inspecting the
     * <a>TrustedAdvisorCheckDescription</a> object returned by the call to
     * <a>DescribeTrustedAdvisorChecks</a>. <b>Metadata</b> contains all the data that
     * is shown in the Excel download, even in those cases where the UI shows just
     * summary data. </p>
     */
    inline void SetMetadata(const Aws::Vector<Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>Additional information about the identified resource. The exact metadata and
     * its order can be obtained by inspecting the
     * <a>TrustedAdvisorCheckDescription</a> object returned by the call to
     * <a>DescribeTrustedAdvisorChecks</a>. <b>Metadata</b> contains all the data that
     * is shown in the Excel download, even in those cases where the UI shows just
     * summary data. </p>
     */
    inline void SetMetadata(Aws::Vector<Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>Additional information about the identified resource. The exact metadata and
     * its order can be obtained by inspecting the
     * <a>TrustedAdvisorCheckDescription</a> object returned by the call to
     * <a>DescribeTrustedAdvisorChecks</a>. <b>Metadata</b> contains all the data that
     * is shown in the Excel download, even in those cases where the UI shows just
     * summary data. </p>
     */
    inline TrustedAdvisorResourceDetail& WithMetadata(const Aws::Vector<Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>Additional information about the identified resource. The exact metadata and
     * its order can be obtained by inspecting the
     * <a>TrustedAdvisorCheckDescription</a> object returned by the call to
     * <a>DescribeTrustedAdvisorChecks</a>. <b>Metadata</b> contains all the data that
     * is shown in the Excel download, even in those cases where the UI shows just
     * summary data. </p>
     */
    inline TrustedAdvisorResourceDetail& WithMetadata(Aws::Vector<Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>Additional information about the identified resource. The exact metadata and
     * its order can be obtained by inspecting the
     * <a>TrustedAdvisorCheckDescription</a> object returned by the call to
     * <a>DescribeTrustedAdvisorChecks</a>. <b>Metadata</b> contains all the data that
     * is shown in the Excel download, even in those cases where the UI shows just
     * summary data. </p>
     */
    inline TrustedAdvisorResourceDetail& AddMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.push_back(value); return *this; }

    /**
     * <p>Additional information about the identified resource. The exact metadata and
     * its order can be obtained by inspecting the
     * <a>TrustedAdvisorCheckDescription</a> object returned by the call to
     * <a>DescribeTrustedAdvisorChecks</a>. <b>Metadata</b> contains all the data that
     * is shown in the Excel download, even in those cases where the UI shows just
     * summary data. </p>
     */
    inline TrustedAdvisorResourceDetail& AddMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.push_back(std::move(value)); return *this; }

    /**
     * <p>Additional information about the identified resource. The exact metadata and
     * its order can be obtained by inspecting the
     * <a>TrustedAdvisorCheckDescription</a> object returned by the call to
     * <a>DescribeTrustedAdvisorChecks</a>. <b>Metadata</b> contains all the data that
     * is shown in the Excel download, even in those cases where the UI shows just
     * summary data. </p>
     */
    inline TrustedAdvisorResourceDetail& AddMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.push_back(value); return *this; }

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    bool m_isSuppressed;
    bool m_isSuppressedHasBeenSet;

    Aws::Vector<Aws::String> m_metadata;
    bool m_metadataHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
