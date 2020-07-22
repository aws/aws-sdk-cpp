/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/RowLevelPermissionPolicy.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The row-level security configuration for the dataset.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RowLevelPermissionDataSet">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API RowLevelPermissionDataSet
  {
  public:
    RowLevelPermissionDataSet();
    RowLevelPermissionDataSet(Aws::Utils::Json::JsonView jsonValue);
    RowLevelPermissionDataSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The namespace associated with the row-level permissions dataset.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace associated with the row-level permissions dataset.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace associated with the row-level permissions dataset.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace associated with the row-level permissions dataset.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace associated with the row-level permissions dataset.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace associated with the row-level permissions dataset.</p>
     */
    inline RowLevelPermissionDataSet& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace associated with the row-level permissions dataset.</p>
     */
    inline RowLevelPermissionDataSet& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace associated with the row-level permissions dataset.</p>
     */
    inline RowLevelPermissionDataSet& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the permission dataset.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the permission dataset.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the permission dataset.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the permission dataset.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the permission dataset.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the permission dataset.</p>
     */
    inline RowLevelPermissionDataSet& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the permission dataset.</p>
     */
    inline RowLevelPermissionDataSet& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the permission dataset.</p>
     */
    inline RowLevelPermissionDataSet& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Permission policy.</p>
     */
    inline const RowLevelPermissionPolicy& GetPermissionPolicy() const{ return m_permissionPolicy; }

    /**
     * <p>Permission policy.</p>
     */
    inline bool PermissionPolicyHasBeenSet() const { return m_permissionPolicyHasBeenSet; }

    /**
     * <p>Permission policy.</p>
     */
    inline void SetPermissionPolicy(const RowLevelPermissionPolicy& value) { m_permissionPolicyHasBeenSet = true; m_permissionPolicy = value; }

    /**
     * <p>Permission policy.</p>
     */
    inline void SetPermissionPolicy(RowLevelPermissionPolicy&& value) { m_permissionPolicyHasBeenSet = true; m_permissionPolicy = std::move(value); }

    /**
     * <p>Permission policy.</p>
     */
    inline RowLevelPermissionDataSet& WithPermissionPolicy(const RowLevelPermissionPolicy& value) { SetPermissionPolicy(value); return *this;}

    /**
     * <p>Permission policy.</p>
     */
    inline RowLevelPermissionDataSet& WithPermissionPolicy(RowLevelPermissionPolicy&& value) { SetPermissionPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    RowLevelPermissionPolicy m_permissionPolicy;
    bool m_permissionPolicyHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
