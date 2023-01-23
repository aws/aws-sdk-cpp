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
    AWS_GREENGRASSV2_API DescribeComponentResult();
    AWS_GREENGRASSV2_API DescribeComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API DescribeComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline DescribeComponentResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline DescribeComponentResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline DescribeComponentResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentName = value; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentName = std::move(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const char* value) { m_componentName.assign(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline DescribeComponentResult& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline DescribeComponentResult& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline DescribeComponentResult& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p>The version of the component.</p>
     */
    inline const Aws::String& GetComponentVersion() const{ return m_componentVersion; }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetComponentVersion(const Aws::String& value) { m_componentVersion = value; }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetComponentVersion(Aws::String&& value) { m_componentVersion = std::move(value); }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetComponentVersion(const char* value) { m_componentVersion.assign(value); }

    /**
     * <p>The version of the component.</p>
     */
    inline DescribeComponentResult& WithComponentVersion(const Aws::String& value) { SetComponentVersion(value); return *this;}

    /**
     * <p>The version of the component.</p>
     */
    inline DescribeComponentResult& WithComponentVersion(Aws::String&& value) { SetComponentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the component.</p>
     */
    inline DescribeComponentResult& WithComponentVersion(const char* value) { SetComponentVersion(value); return *this;}


    /**
     * <p>The time at which the component was created, expressed in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The time at which the component was created, expressed in ISO 8601
     * format.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestamp = value; }

    /**
     * <p>The time at which the component was created, expressed in ISO 8601
     * format.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestamp = std::move(value); }

    /**
     * <p>The time at which the component was created, expressed in ISO 8601
     * format.</p>
     */
    inline DescribeComponentResult& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The time at which the component was created, expressed in ISO 8601
     * format.</p>
     */
    inline DescribeComponentResult& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The publisher of the component version.</p>
     */
    inline const Aws::String& GetPublisher() const{ return m_publisher; }

    /**
     * <p>The publisher of the component version.</p>
     */
    inline void SetPublisher(const Aws::String& value) { m_publisher = value; }

    /**
     * <p>The publisher of the component version.</p>
     */
    inline void SetPublisher(Aws::String&& value) { m_publisher = std::move(value); }

    /**
     * <p>The publisher of the component version.</p>
     */
    inline void SetPublisher(const char* value) { m_publisher.assign(value); }

    /**
     * <p>The publisher of the component version.</p>
     */
    inline DescribeComponentResult& WithPublisher(const Aws::String& value) { SetPublisher(value); return *this;}

    /**
     * <p>The publisher of the component version.</p>
     */
    inline DescribeComponentResult& WithPublisher(Aws::String&& value) { SetPublisher(std::move(value)); return *this;}

    /**
     * <p>The publisher of the component version.</p>
     */
    inline DescribeComponentResult& WithPublisher(const char* value) { SetPublisher(value); return *this;}


    /**
     * <p>The description of the component version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the component version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the component version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the component version.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the component version.</p>
     */
    inline DescribeComponentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the component version.</p>
     */
    inline DescribeComponentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the component version.</p>
     */
    inline DescribeComponentResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the component version in IoT Greengrass V2. This status is
     * different from the status of the component on a core device.</p>
     */
    inline const CloudComponentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the component version in IoT Greengrass V2. This status is
     * different from the status of the component on a core device.</p>
     */
    inline void SetStatus(const CloudComponentStatus& value) { m_status = value; }

    /**
     * <p>The status of the component version in IoT Greengrass V2. This status is
     * different from the status of the component on a core device.</p>
     */
    inline void SetStatus(CloudComponentStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the component version in IoT Greengrass V2. This status is
     * different from the status of the component on a core device.</p>
     */
    inline DescribeComponentResult& WithStatus(const CloudComponentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the component version in IoT Greengrass V2. This status is
     * different from the status of the component on a core device.</p>
     */
    inline DescribeComponentResult& WithStatus(CloudComponentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline const Aws::Vector<ComponentPlatform>& GetPlatforms() const{ return m_platforms; }

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline void SetPlatforms(const Aws::Vector<ComponentPlatform>& value) { m_platforms = value; }

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline void SetPlatforms(Aws::Vector<ComponentPlatform>&& value) { m_platforms = std::move(value); }

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline DescribeComponentResult& WithPlatforms(const Aws::Vector<ComponentPlatform>& value) { SetPlatforms(value); return *this;}

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline DescribeComponentResult& WithPlatforms(Aws::Vector<ComponentPlatform>&& value) { SetPlatforms(std::move(value)); return *this;}

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline DescribeComponentResult& AddPlatforms(const ComponentPlatform& value) { m_platforms.push_back(value); return *this; }

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline DescribeComponentResult& AddPlatforms(ComponentPlatform&& value) { m_platforms.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline DescribeComponentResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline DescribeComponentResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline DescribeComponentResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline DescribeComponentResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline DescribeComponentResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline DescribeComponentResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline DescribeComponentResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline DescribeComponentResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline DescribeComponentResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::String m_componentName;

    Aws::String m_componentVersion;

    Aws::Utils::DateTime m_creationTimestamp;

    Aws::String m_publisher;

    Aws::String m_description;

    CloudComponentStatus m_status;

    Aws::Vector<ComponentPlatform> m_platforms;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
