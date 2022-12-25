/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ResourceType.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes resource being monitored by an alarm.</p> <p>An alarm is a way to
   * monitor your Amazon Lightsail resource metrics. For more information, see <a
   * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms
   * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/MonitoredResourceInfo">AWS
   * API Reference</a></p>
   */
  class MonitoredResourceInfo
  {
  public:
    AWS_LIGHTSAIL_API MonitoredResourceInfo();
    AWS_LIGHTSAIL_API MonitoredResourceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API MonitoredResourceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource being monitored.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource being monitored.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource being monitored.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource being monitored.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource being monitored.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource being monitored.</p>
     */
    inline MonitoredResourceInfo& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource being monitored.</p>
     */
    inline MonitoredResourceInfo& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource being monitored.</p>
     */
    inline MonitoredResourceInfo& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the Lightsail resource being monitored.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Lightsail resource being monitored.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Lightsail resource being monitored.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Lightsail resource being monitored.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Lightsail resource being monitored.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Lightsail resource being monitored.</p>
     */
    inline MonitoredResourceInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Lightsail resource being monitored.</p>
     */
    inline MonitoredResourceInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Lightsail resource being monitored.</p>
     */
    inline MonitoredResourceInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Lightsail resource type of the resource being monitored.</p>
     * <p>Instances, load balancers, and relational databases are the only Lightsail
     * resources that can currently be monitored by alarms.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The Lightsail resource type of the resource being monitored.</p>
     * <p>Instances, load balancers, and relational databases are the only Lightsail
     * resources that can currently be monitored by alarms.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The Lightsail resource type of the resource being monitored.</p>
     * <p>Instances, load balancers, and relational databases are the only Lightsail
     * resources that can currently be monitored by alarms.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The Lightsail resource type of the resource being monitored.</p>
     * <p>Instances, load balancers, and relational databases are the only Lightsail
     * resources that can currently be monitored by alarms.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The Lightsail resource type of the resource being monitored.</p>
     * <p>Instances, load balancers, and relational databases are the only Lightsail
     * resources that can currently be monitored by alarms.</p>
     */
    inline MonitoredResourceInfo& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The Lightsail resource type of the resource being monitored.</p>
     * <p>Instances, load balancers, and relational databases are the only Lightsail
     * resources that can currently be monitored by alarms.</p>
     */
    inline MonitoredResourceInfo& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
