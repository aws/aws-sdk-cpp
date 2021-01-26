/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/AddonStatus.h>
#include <aws/eks/model/AddonHealth.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An Amazon EKS add-on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Addon">AWS API
   * Reference</a></p>
   */
  class AWS_EKS_API Addon
  {
  public:
    Addon();
    Addon(Aws::Utils::Json::JsonView jsonValue);
    Addon& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the add-on.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }

    /**
     * <p>The name of the add-on.</p>
     */
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }

    /**
     * <p>The name of the add-on.</p>
     */
    inline void SetAddonName(const Aws::String& value) { m_addonNameHasBeenSet = true; m_addonName = value; }

    /**
     * <p>The name of the add-on.</p>
     */
    inline void SetAddonName(Aws::String&& value) { m_addonNameHasBeenSet = true; m_addonName = std::move(value); }

    /**
     * <p>The name of the add-on.</p>
     */
    inline void SetAddonName(const char* value) { m_addonNameHasBeenSet = true; m_addonName.assign(value); }

    /**
     * <p>The name of the add-on.</p>
     */
    inline Addon& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}

    /**
     * <p>The name of the add-on.</p>
     */
    inline Addon& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}

    /**
     * <p>The name of the add-on.</p>
     */
    inline Addon& WithAddonName(const char* value) { SetAddonName(value); return *this;}


    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline Addon& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline Addon& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline Addon& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The status of the add-on.</p>
     */
    inline const AddonStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the add-on.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the add-on.</p>
     */
    inline void SetStatus(const AddonStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the add-on.</p>
     */
    inline void SetStatus(AddonStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the add-on.</p>
     */
    inline Addon& WithStatus(const AddonStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the add-on.</p>
     */
    inline Addon& WithStatus(AddonStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The version of the add-on.</p>
     */
    inline const Aws::String& GetAddonVersion() const{ return m_addonVersion; }

    /**
     * <p>The version of the add-on.</p>
     */
    inline bool AddonVersionHasBeenSet() const { return m_addonVersionHasBeenSet; }

    /**
     * <p>The version of the add-on.</p>
     */
    inline void SetAddonVersion(const Aws::String& value) { m_addonVersionHasBeenSet = true; m_addonVersion = value; }

    /**
     * <p>The version of the add-on.</p>
     */
    inline void SetAddonVersion(Aws::String&& value) { m_addonVersionHasBeenSet = true; m_addonVersion = std::move(value); }

    /**
     * <p>The version of the add-on.</p>
     */
    inline void SetAddonVersion(const char* value) { m_addonVersionHasBeenSet = true; m_addonVersion.assign(value); }

    /**
     * <p>The version of the add-on.</p>
     */
    inline Addon& WithAddonVersion(const Aws::String& value) { SetAddonVersion(value); return *this;}

    /**
     * <p>The version of the add-on.</p>
     */
    inline Addon& WithAddonVersion(Aws::String&& value) { SetAddonVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the add-on.</p>
     */
    inline Addon& WithAddonVersion(const char* value) { SetAddonVersion(value); return *this;}


    /**
     * <p>An object that represents the health of the add-on.</p>
     */
    inline const AddonHealth& GetHealth() const{ return m_health; }

    /**
     * <p>An object that represents the health of the add-on.</p>
     */
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }

    /**
     * <p>An object that represents the health of the add-on.</p>
     */
    inline void SetHealth(const AddonHealth& value) { m_healthHasBeenSet = true; m_health = value; }

    /**
     * <p>An object that represents the health of the add-on.</p>
     */
    inline void SetHealth(AddonHealth&& value) { m_healthHasBeenSet = true; m_health = std::move(value); }

    /**
     * <p>An object that represents the health of the add-on.</p>
     */
    inline Addon& WithHealth(const AddonHealth& value) { SetHealth(value); return *this;}

    /**
     * <p>An object that represents the health of the add-on.</p>
     */
    inline Addon& WithHealth(AddonHealth&& value) { SetHealth(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the add-on.</p>
     */
    inline const Aws::String& GetAddonArn() const{ return m_addonArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the add-on.</p>
     */
    inline bool AddonArnHasBeenSet() const { return m_addonArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the add-on.</p>
     */
    inline void SetAddonArn(const Aws::String& value) { m_addonArnHasBeenSet = true; m_addonArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the add-on.</p>
     */
    inline void SetAddonArn(Aws::String&& value) { m_addonArnHasBeenSet = true; m_addonArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the add-on.</p>
     */
    inline void SetAddonArn(const char* value) { m_addonArnHasBeenSet = true; m_addonArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the add-on.</p>
     */
    inline Addon& WithAddonArn(const Aws::String& value) { SetAddonArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the add-on.</p>
     */
    inline Addon& WithAddonArn(Aws::String&& value) { SetAddonArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the add-on.</p>
     */
    inline Addon& WithAddonArn(const char* value) { SetAddonArn(value); return *this;}


    /**
     * <p>The date and time that the add-on was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the add-on was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the add-on was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the add-on was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the add-on was created.</p>
     */
    inline Addon& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the add-on was created.</p>
     */
    inline Addon& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time that the add-on was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The date and time that the add-on was last modified.</p>
     */
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    /**
     * <p>The date and time that the add-on was last modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    /**
     * <p>The date and time that the add-on was last modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    /**
     * <p>The date and time that the add-on was last modified.</p>
     */
    inline Addon& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The date and time that the add-on was last modified.</p>
     */
    inline Addon& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is bound to the
     * Kubernetes service account used by the add-on.</p>
     */
    inline const Aws::String& GetServiceAccountRoleArn() const{ return m_serviceAccountRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is bound to the
     * Kubernetes service account used by the add-on.</p>
     */
    inline bool ServiceAccountRoleArnHasBeenSet() const { return m_serviceAccountRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is bound to the
     * Kubernetes service account used by the add-on.</p>
     */
    inline void SetServiceAccountRoleArn(const Aws::String& value) { m_serviceAccountRoleArnHasBeenSet = true; m_serviceAccountRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is bound to the
     * Kubernetes service account used by the add-on.</p>
     */
    inline void SetServiceAccountRoleArn(Aws::String&& value) { m_serviceAccountRoleArnHasBeenSet = true; m_serviceAccountRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is bound to the
     * Kubernetes service account used by the add-on.</p>
     */
    inline void SetServiceAccountRoleArn(const char* value) { m_serviceAccountRoleArnHasBeenSet = true; m_serviceAccountRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is bound to the
     * Kubernetes service account used by the add-on.</p>
     */
    inline Addon& WithServiceAccountRoleArn(const Aws::String& value) { SetServiceAccountRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is bound to the
     * Kubernetes service account used by the add-on.</p>
     */
    inline Addon& WithServiceAccountRoleArn(Aws::String&& value) { SetServiceAccountRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is bound to the
     * Kubernetes service account used by the add-on.</p>
     */
    inline Addon& WithServiceAccountRoleArn(const char* value) { SetServiceAccountRoleArn(value); return *this;}


    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Cluster tags do not propagate to any other resources associated with
     * the cluster. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Cluster tags do not propagate to any other resources associated with
     * the cluster. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Cluster tags do not propagate to any other resources associated with
     * the cluster. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Cluster tags do not propagate to any other resources associated with
     * the cluster. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Cluster tags do not propagate to any other resources associated with
     * the cluster. </p>
     */
    inline Addon& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Cluster tags do not propagate to any other resources associated with
     * the cluster. </p>
     */
    inline Addon& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Cluster tags do not propagate to any other resources associated with
     * the cluster. </p>
     */
    inline Addon& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Cluster tags do not propagate to any other resources associated with
     * the cluster. </p>
     */
    inline Addon& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Cluster tags do not propagate to any other resources associated with
     * the cluster. </p>
     */
    inline Addon& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Cluster tags do not propagate to any other resources associated with
     * the cluster. </p>
     */
    inline Addon& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Cluster tags do not propagate to any other resources associated with
     * the cluster. </p>
     */
    inline Addon& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Cluster tags do not propagate to any other resources associated with
     * the cluster. </p>
     */
    inline Addon& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Cluster tags do not propagate to any other resources associated with
     * the cluster. </p>
     */
    inline Addon& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;

    AddonStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_addonVersion;
    bool m_addonVersionHasBeenSet;

    AddonHealth m_health;
    bool m_healthHasBeenSet;

    Aws::String m_addonArn;
    bool m_addonArnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet;

    Aws::String m_serviceAccountRoleArn;
    bool m_serviceAccountRoleArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
