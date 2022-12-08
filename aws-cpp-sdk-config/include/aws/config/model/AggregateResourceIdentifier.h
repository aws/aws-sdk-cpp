/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ResourceType.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The details that identify a resource that is collected by Config aggregator,
   * including the resource type, ID, (if available) the custom resource name, the
   * source account, and source region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AggregateResourceIdentifier">AWS
   * API Reference</a></p>
   */
  class AggregateResourceIdentifier
  {
  public:
    AWS_CONFIGSERVICE_API AggregateResourceIdentifier();
    AWS_CONFIGSERVICE_API AggregateResourceIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregateResourceIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline const Aws::String& GetSourceAccountId() const{ return m_sourceAccountId; }

    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline bool SourceAccountIdHasBeenSet() const { return m_sourceAccountIdHasBeenSet; }

    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline void SetSourceAccountId(const Aws::String& value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId = value; }

    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline void SetSourceAccountId(Aws::String&& value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId = std::move(value); }

    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline void SetSourceAccountId(const char* value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId.assign(value); }

    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline AggregateResourceIdentifier& WithSourceAccountId(const Aws::String& value) { SetSourceAccountId(value); return *this;}

    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline AggregateResourceIdentifier& WithSourceAccountId(Aws::String&& value) { SetSourceAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline AggregateResourceIdentifier& WithSourceAccountId(const char* value) { SetSourceAccountId(value); return *this;}


    /**
     * <p>The source region where data is aggregated.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The source region where data is aggregated.</p>
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * <p>The source region where data is aggregated.</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The source region where data is aggregated.</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * <p>The source region where data is aggregated.</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * <p>The source region where data is aggregated.</p>
     */
    inline AggregateResourceIdentifier& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The source region where data is aggregated.</p>
     */
    inline AggregateResourceIdentifier& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * <p>The source region where data is aggregated.</p>
     */
    inline AggregateResourceIdentifier& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the Amazon Web Services resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the Amazon Web Services resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services resource.</p>
     */
    inline AggregateResourceIdentifier& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services resource.</p>
     */
    inline AggregateResourceIdentifier& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services resource.</p>
     */
    inline AggregateResourceIdentifier& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline AggregateResourceIdentifier& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline AggregateResourceIdentifier& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The name of the Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the Amazon Web Services resource.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Web Services resource.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the Amazon Web Services resource.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the Amazon Web Services resource.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the Amazon Web Services resource.</p>
     */
    inline AggregateResourceIdentifier& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the Amazon Web Services resource.</p>
     */
    inline AggregateResourceIdentifier& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Web Services resource.</p>
     */
    inline AggregateResourceIdentifier& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    Aws::String m_sourceAccountId;
    bool m_sourceAccountIdHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
