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
   * <p>Information about a dataset that contains permissions for row-level security
   * (RLS). The permissions dataset maps fields to users or groups. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/restrict-access-to-a-data-set-using-row-level-security.html">Using
   * Row-Level Security (RLS) to Restrict Access to a Dataset</a> in the <i>Amazon
   * QuickSight User Guide</i>.</p> <p>The option to deny permissions by setting
   * <code>PermissionPolicy</code> to <code>DENY_ACCESS</code> is not supported for
   * new RLS datasets.</p><p><h3>See Also:</h3>   <a
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
     * <p>The namespace associated with the dataset that contains permissions for
     * RLS.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace associated with the dataset that contains permissions for
     * RLS.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace associated with the dataset that contains permissions for
     * RLS.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace associated with the dataset that contains permissions for
     * RLS.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace associated with the dataset that contains permissions for
     * RLS.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace associated with the dataset that contains permissions for
     * RLS.</p>
     */
    inline RowLevelPermissionDataSet& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace associated with the dataset that contains permissions for
     * RLS.</p>
     */
    inline RowLevelPermissionDataSet& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace associated with the dataset that contains permissions for
     * RLS.</p>
     */
    inline RowLevelPermissionDataSet& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains permissions for
     * RLS.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains permissions for
     * RLS.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains permissions for
     * RLS.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains permissions for
     * RLS.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains permissions for
     * RLS.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains permissions for
     * RLS.</p>
     */
    inline RowLevelPermissionDataSet& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains permissions for
     * RLS.</p>
     */
    inline RowLevelPermissionDataSet& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that contains permissions for
     * RLS.</p>
     */
    inline RowLevelPermissionDataSet& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The type of permissions to use when interpretting the permissions for RLS.
     * <code>DENY_ACCESS</code> is included for backward compatibility only.</p>
     */
    inline const RowLevelPermissionPolicy& GetPermissionPolicy() const{ return m_permissionPolicy; }

    /**
     * <p>The type of permissions to use when interpretting the permissions for RLS.
     * <code>DENY_ACCESS</code> is included for backward compatibility only.</p>
     */
    inline bool PermissionPolicyHasBeenSet() const { return m_permissionPolicyHasBeenSet; }

    /**
     * <p>The type of permissions to use when interpretting the permissions for RLS.
     * <code>DENY_ACCESS</code> is included for backward compatibility only.</p>
     */
    inline void SetPermissionPolicy(const RowLevelPermissionPolicy& value) { m_permissionPolicyHasBeenSet = true; m_permissionPolicy = value; }

    /**
     * <p>The type of permissions to use when interpretting the permissions for RLS.
     * <code>DENY_ACCESS</code> is included for backward compatibility only.</p>
     */
    inline void SetPermissionPolicy(RowLevelPermissionPolicy&& value) { m_permissionPolicyHasBeenSet = true; m_permissionPolicy = std::move(value); }

    /**
     * <p>The type of permissions to use when interpretting the permissions for RLS.
     * <code>DENY_ACCESS</code> is included for backward compatibility only.</p>
     */
    inline RowLevelPermissionDataSet& WithPermissionPolicy(const RowLevelPermissionPolicy& value) { SetPermissionPolicy(value); return *this;}

    /**
     * <p>The type of permissions to use when interpretting the permissions for RLS.
     * <code>DENY_ACCESS</code> is included for backward compatibility only.</p>
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
