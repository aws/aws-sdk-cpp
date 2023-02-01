/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline UntagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
