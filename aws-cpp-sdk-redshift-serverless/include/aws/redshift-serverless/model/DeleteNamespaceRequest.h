/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class DeleteNamespaceRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API DeleteNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteNamespace"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the snapshot to be created before the namespace is deleted.</p>
     */
    inline const Aws::String& GetFinalSnapshotName() const{ return m_finalSnapshotName; }

    /**
     * <p>The name of the snapshot to be created before the namespace is deleted.</p>
     */
    inline bool FinalSnapshotNameHasBeenSet() const { return m_finalSnapshotNameHasBeenSet; }

    /**
     * <p>The name of the snapshot to be created before the namespace is deleted.</p>
     */
    inline void SetFinalSnapshotName(const Aws::String& value) { m_finalSnapshotNameHasBeenSet = true; m_finalSnapshotName = value; }

    /**
     * <p>The name of the snapshot to be created before the namespace is deleted.</p>
     */
    inline void SetFinalSnapshotName(Aws::String&& value) { m_finalSnapshotNameHasBeenSet = true; m_finalSnapshotName = std::move(value); }

    /**
     * <p>The name of the snapshot to be created before the namespace is deleted.</p>
     */
    inline void SetFinalSnapshotName(const char* value) { m_finalSnapshotNameHasBeenSet = true; m_finalSnapshotName.assign(value); }

    /**
     * <p>The name of the snapshot to be created before the namespace is deleted.</p>
     */
    inline DeleteNamespaceRequest& WithFinalSnapshotName(const Aws::String& value) { SetFinalSnapshotName(value); return *this;}

    /**
     * <p>The name of the snapshot to be created before the namespace is deleted.</p>
     */
    inline DeleteNamespaceRequest& WithFinalSnapshotName(Aws::String&& value) { SetFinalSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot to be created before the namespace is deleted.</p>
     */
    inline DeleteNamespaceRequest& WithFinalSnapshotName(const char* value) { SetFinalSnapshotName(value); return *this;}


    /**
     * <p>How long to retain the final snapshot.</p>
     */
    inline int GetFinalSnapshotRetentionPeriod() const{ return m_finalSnapshotRetentionPeriod; }

    /**
     * <p>How long to retain the final snapshot.</p>
     */
    inline bool FinalSnapshotRetentionPeriodHasBeenSet() const { return m_finalSnapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>How long to retain the final snapshot.</p>
     */
    inline void SetFinalSnapshotRetentionPeriod(int value) { m_finalSnapshotRetentionPeriodHasBeenSet = true; m_finalSnapshotRetentionPeriod = value; }

    /**
     * <p>How long to retain the final snapshot.</p>
     */
    inline DeleteNamespaceRequest& WithFinalSnapshotRetentionPeriod(int value) { SetFinalSnapshotRetentionPeriod(value); return *this;}


    /**
     * <p>The name of the namespace to delete.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The name of the namespace to delete.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The name of the namespace to delete.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The name of the namespace to delete.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The name of the namespace to delete.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The name of the namespace to delete.</p>
     */
    inline DeleteNamespaceRequest& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the namespace to delete.</p>
     */
    inline DeleteNamespaceRequest& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace to delete.</p>
     */
    inline DeleteNamespaceRequest& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}

  private:

    Aws::String m_finalSnapshotName;
    bool m_finalSnapshotNameHasBeenSet = false;

    int m_finalSnapshotRetentionPeriod;
    bool m_finalSnapshotRetentionPeriodHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
