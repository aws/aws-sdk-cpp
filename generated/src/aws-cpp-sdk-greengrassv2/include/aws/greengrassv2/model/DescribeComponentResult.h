/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/greengrassv2/model/CloudComponentStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/greengrassv2/model/ComponentPlatform.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GreengrassV2
{
namespace Model
{
  class DescribeComponentResult
  {
  public:
    AWS_GREENGRASSV2_API DescribeComponentResult() = default;
    AWS_GREENGRASSV2_API DescribeComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API DescribeComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeComponentResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    DescribeComponentResult& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the component.</p>
     */
    inline const Aws::String& GetComponentVersion() const { return m_componentVersion; }
    template<typename ComponentVersionT = Aws::String>
    void SetComponentVersion(ComponentVersionT&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::forward<ComponentVersionT>(value); }
    template<typename ComponentVersionT = Aws::String>
    DescribeComponentResult& WithComponentVersion(ComponentVersionT&& value) { SetComponentVersion(std::forward<ComponentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the component was created, expressed in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    DescribeComponentResult& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The publisher of the component version.</p>
     */
    inline const Aws::String& GetPublisher() const { return m_publisher; }
    template<typename PublisherT = Aws::String>
    void SetPublisher(PublisherT&& value) { m_publisherHasBeenSet = true; m_publisher = std::forward<PublisherT>(value); }
    template<typename PublisherT = Aws::String>
    DescribeComponentResult& WithPublisher(PublisherT&& value) { SetPublisher(std::forward<PublisherT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the component version.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeComponentResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the component version in IoT Greengrass V2. This status is
     * different from the status of the component on a core device.</p>
     */
    inline const CloudComponentStatus& GetStatus() const { return m_status; }
    template<typename StatusT = CloudComponentStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = CloudComponentStatus>
    DescribeComponentResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline const Aws::Vector<ComponentPlatform>& GetPlatforms() const { return m_platforms; }
    template<typename PlatformsT = Aws::Vector<ComponentPlatform>>
    void SetPlatforms(PlatformsT&& value) { m_platformsHasBeenSet = true; m_platforms = std::forward<PlatformsT>(value); }
    template<typename PlatformsT = Aws::Vector<ComponentPlatform>>
    DescribeComponentResult& WithPlatforms(PlatformsT&& value) { SetPlatforms(std::forward<PlatformsT>(value)); return *this;}
    template<typename PlatformsT = ComponentPlatform>
    DescribeComponentResult& AddPlatforms(PlatformsT&& value) { m_platformsHasBeenSet = true; m_platforms.emplace_back(std::forward<PlatformsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeComponentResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeComponentResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeComponentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentVersion;
    bool m_componentVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    Aws::String m_publisher;
    bool m_publisherHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CloudComponentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<ComponentPlatform> m_platforms;
    bool m_platformsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
