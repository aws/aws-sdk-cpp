﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/ServiceQuotasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ServiceQuotas
{
namespace Model
{

  /**
   */
  class AWS_SERVICEQUOTAS_API UntagResourceRequest : public ServiceQuotasRequest
  {
  public:
    UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) for the applied quota that you want to untag.
     * You can get this information by using the Service Quotas console, or by listing
     * the quotas using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/service-quotas/list-service-quotas.html">list-service-quotas</a>
     * AWS CLI command or the <a
     * href="https://docs.aws.amazon.com/servicequotas/2019-06-24/apireference/API_ListServiceQuotas.html">ListServiceQuotas</a>
     * AWS API operation.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) for the applied quota that you want to untag.
     * You can get this information by using the Service Quotas console, or by listing
     * the quotas using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/service-quotas/list-service-quotas.html">list-service-quotas</a>
     * AWS CLI command or the <a
     * href="https://docs.aws.amazon.com/servicequotas/2019-06-24/apireference/API_ListServiceQuotas.html">ListServiceQuotas</a>
     * AWS API operation.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the applied quota that you want to untag.
     * You can get this information by using the Service Quotas console, or by listing
     * the quotas using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/service-quotas/list-service-quotas.html">list-service-quotas</a>
     * AWS CLI command or the <a
     * href="https://docs.aws.amazon.com/servicequotas/2019-06-24/apireference/API_ListServiceQuotas.html">ListServiceQuotas</a>
     * AWS API operation.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the applied quota that you want to untag.
     * You can get this information by using the Service Quotas console, or by listing
     * the quotas using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/service-quotas/list-service-quotas.html">list-service-quotas</a>
     * AWS CLI command or the <a
     * href="https://docs.aws.amazon.com/servicequotas/2019-06-24/apireference/API_ListServiceQuotas.html">ListServiceQuotas</a>
     * AWS API operation.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the applied quota that you want to untag.
     * You can get this information by using the Service Quotas console, or by listing
     * the quotas using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/service-quotas/list-service-quotas.html">list-service-quotas</a>
     * AWS CLI command or the <a
     * href="https://docs.aws.amazon.com/servicequotas/2019-06-24/apireference/API_ListServiceQuotas.html">ListServiceQuotas</a>
     * AWS API operation.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the applied quota that you want to untag.
     * You can get this information by using the Service Quotas console, or by listing
     * the quotas using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/service-quotas/list-service-quotas.html">list-service-quotas</a>
     * AWS CLI command or the <a
     * href="https://docs.aws.amazon.com/servicequotas/2019-06-24/apireference/API_ListServiceQuotas.html">ListServiceQuotas</a>
     * AWS API operation.</p>
     */
    inline UntagResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the applied quota that you want to untag.
     * You can get this information by using the Service Quotas console, or by listing
     * the quotas using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/service-quotas/list-service-quotas.html">list-service-quotas</a>
     * AWS CLI command or the <a
     * href="https://docs.aws.amazon.com/servicequotas/2019-06-24/apireference/API_ListServiceQuotas.html">ListServiceQuotas</a>
     * AWS API operation.</p>
     */
    inline UntagResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the applied quota that you want to untag.
     * You can get this information by using the Service Quotas console, or by listing
     * the quotas using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/service-quotas/list-service-quotas.html">list-service-quotas</a>
     * AWS CLI command or the <a
     * href="https://docs.aws.amazon.com/servicequotas/2019-06-24/apireference/API_ListServiceQuotas.html">ListServiceQuotas</a>
     * AWS API operation.</p>
     */
    inline UntagResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The keys of the tags that you want to remove from the resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The keys of the tags that you want to remove from the resource.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>The keys of the tags that you want to remove from the resource.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The keys of the tags that you want to remove from the resource.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>The keys of the tags that you want to remove from the resource.</p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The keys of the tags that you want to remove from the resource.</p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>The keys of the tags that you want to remove from the resource.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The keys of the tags that you want to remove from the resource.</p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The keys of the tags that you want to remove from the resource.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
