/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/HttpNamespaceChange.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class UpdateHttpNamespaceRequest : public ServiceDiscoveryRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API UpdateHttpNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateHttpNamespace"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the namespace that you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the namespace that you want to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the namespace that you want to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the namespace that you want to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the namespace that you want to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the namespace that you want to update.</p>
     */
    inline UpdateHttpNamespaceRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the namespace that you want to update.</p>
     */
    inline UpdateHttpNamespaceRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the namespace that you want to update.</p>
     */
    inline UpdateHttpNamespaceRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>UpdateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>UpdaterRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline const Aws::String& GetUpdaterRequestId() const{ return m_updaterRequestId; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>UpdateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>UpdaterRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline bool UpdaterRequestIdHasBeenSet() const { return m_updaterRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>UpdateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>UpdaterRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline void SetUpdaterRequestId(const Aws::String& value) { m_updaterRequestIdHasBeenSet = true; m_updaterRequestId = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>UpdateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>UpdaterRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline void SetUpdaterRequestId(Aws::String&& value) { m_updaterRequestIdHasBeenSet = true; m_updaterRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>UpdateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>UpdaterRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline void SetUpdaterRequestId(const char* value) { m_updaterRequestIdHasBeenSet = true; m_updaterRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>UpdateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>UpdaterRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline UpdateHttpNamespaceRequest& WithUpdaterRequestId(const Aws::String& value) { SetUpdaterRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>UpdateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>UpdaterRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline UpdateHttpNamespaceRequest& WithUpdaterRequestId(Aws::String&& value) { SetUpdaterRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>UpdateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>UpdaterRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline UpdateHttpNamespaceRequest& WithUpdaterRequestId(const char* value) { SetUpdaterRequestId(value); return *this;}


    /**
     * <p>Updated properties for the the HTTP namespace.</p>
     */
    inline const HttpNamespaceChange& GetNamespace() const{ return m_namespace; }

    /**
     * <p>Updated properties for the the HTTP namespace.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>Updated properties for the the HTTP namespace.</p>
     */
    inline void SetNamespace(const HttpNamespaceChange& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>Updated properties for the the HTTP namespace.</p>
     */
    inline void SetNamespace(HttpNamespaceChange&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>Updated properties for the the HTTP namespace.</p>
     */
    inline UpdateHttpNamespaceRequest& WithNamespace(const HttpNamespaceChange& value) { SetNamespace(value); return *this;}

    /**
     * <p>Updated properties for the the HTTP namespace.</p>
     */
    inline UpdateHttpNamespaceRequest& WithNamespace(HttpNamespaceChange&& value) { SetNamespace(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_updaterRequestId;
    bool m_updaterRequestIdHasBeenSet = false;

    HttpNamespaceChange m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
