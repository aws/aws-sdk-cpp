/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrassv2/model/ComponentPlatform.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about the latest version of a component.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ComponentLatestVersion">AWS
   * API Reference</a></p>
   */
  class ComponentLatestVersion
  {
  public:
    AWS_GREENGRASSV2_API ComponentLatestVersion();
    AWS_GREENGRASSV2_API ComponentLatestVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API ComponentLatestVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline ComponentLatestVersion& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline ComponentLatestVersion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline ComponentLatestVersion& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The version of the component.</p>
     */
    inline const Aws::String& GetComponentVersion() const{ return m_componentVersion; }

    /**
     * <p>The version of the component.</p>
     */
    inline bool ComponentVersionHasBeenSet() const { return m_componentVersionHasBeenSet; }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetComponentVersion(const Aws::String& value) { m_componentVersionHasBeenSet = true; m_componentVersion = value; }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetComponentVersion(Aws::String&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::move(value); }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetComponentVersion(const char* value) { m_componentVersionHasBeenSet = true; m_componentVersion.assign(value); }

    /**
     * <p>The version of the component.</p>
     */
    inline ComponentLatestVersion& WithComponentVersion(const Aws::String& value) { SetComponentVersion(value); return *this;}

    /**
     * <p>The version of the component.</p>
     */
    inline ComponentLatestVersion& WithComponentVersion(Aws::String&& value) { SetComponentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the component.</p>
     */
    inline ComponentLatestVersion& WithComponentVersion(const char* value) { SetComponentVersion(value); return *this;}


    /**
     * <p>The time at which the component was created, expressed in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The time at which the component was created, expressed in ISO 8601
     * format.</p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The time at which the component was created, expressed in ISO 8601
     * format.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The time at which the component was created, expressed in ISO 8601
     * format.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The time at which the component was created, expressed in ISO 8601
     * format.</p>
     */
    inline ComponentLatestVersion& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The time at which the component was created, expressed in ISO 8601
     * format.</p>
     */
    inline ComponentLatestVersion& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The description of the component version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the component version.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the component version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the component version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the component version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the component version.</p>
     */
    inline ComponentLatestVersion& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the component version.</p>
     */
    inline ComponentLatestVersion& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the component version.</p>
     */
    inline ComponentLatestVersion& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The publisher of the component version.</p>
     */
    inline const Aws::String& GetPublisher() const{ return m_publisher; }

    /**
     * <p>The publisher of the component version.</p>
     */
    inline bool PublisherHasBeenSet() const { return m_publisherHasBeenSet; }

    /**
     * <p>The publisher of the component version.</p>
     */
    inline void SetPublisher(const Aws::String& value) { m_publisherHasBeenSet = true; m_publisher = value; }

    /**
     * <p>The publisher of the component version.</p>
     */
    inline void SetPublisher(Aws::String&& value) { m_publisherHasBeenSet = true; m_publisher = std::move(value); }

    /**
     * <p>The publisher of the component version.</p>
     */
    inline void SetPublisher(const char* value) { m_publisherHasBeenSet = true; m_publisher.assign(value); }

    /**
     * <p>The publisher of the component version.</p>
     */
    inline ComponentLatestVersion& WithPublisher(const Aws::String& value) { SetPublisher(value); return *this;}

    /**
     * <p>The publisher of the component version.</p>
     */
    inline ComponentLatestVersion& WithPublisher(Aws::String&& value) { SetPublisher(std::move(value)); return *this;}

    /**
     * <p>The publisher of the component version.</p>
     */
    inline ComponentLatestVersion& WithPublisher(const char* value) { SetPublisher(value); return *this;}


    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline const Aws::Vector<ComponentPlatform>& GetPlatforms() const{ return m_platforms; }

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline bool PlatformsHasBeenSet() const { return m_platformsHasBeenSet; }

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline void SetPlatforms(const Aws::Vector<ComponentPlatform>& value) { m_platformsHasBeenSet = true; m_platforms = value; }

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline void SetPlatforms(Aws::Vector<ComponentPlatform>&& value) { m_platformsHasBeenSet = true; m_platforms = std::move(value); }

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline ComponentLatestVersion& WithPlatforms(const Aws::Vector<ComponentPlatform>& value) { SetPlatforms(value); return *this;}

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline ComponentLatestVersion& WithPlatforms(Aws::Vector<ComponentPlatform>&& value) { SetPlatforms(std::move(value)); return *this;}

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline ComponentLatestVersion& AddPlatforms(const ComponentPlatform& value) { m_platformsHasBeenSet = true; m_platforms.push_back(value); return *this; }

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline ComponentLatestVersion& AddPlatforms(ComponentPlatform&& value) { m_platformsHasBeenSet = true; m_platforms.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_componentVersion;
    bool m_componentVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_publisher;
    bool m_publisherHasBeenSet = false;

    Aws::Vector<ComponentPlatform> m_platforms;
    bool m_platformsHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
