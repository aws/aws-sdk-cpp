/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>Specifies the name and path of a customer managed policy. You must have an
   * IAM policy that matches the name and path in each AWS account where you want to
   * deploy your permission set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CustomerManagedPolicyReference">AWS
   * API Reference</a></p>
   */
  class CustomerManagedPolicyReference
  {
  public:
    AWS_SSOADMIN_API CustomerManagedPolicyReference();
    AWS_SSOADMIN_API CustomerManagedPolicyReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API CustomerManagedPolicyReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the IAM policy that you have configured in each account where you
     * want to deploy your permission set.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the IAM policy that you have configured in each account where you
     * want to deploy your permission set.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the IAM policy that you have configured in each account where you
     * want to deploy your permission set.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the IAM policy that you have configured in each account where you
     * want to deploy your permission set.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the IAM policy that you have configured in each account where you
     * want to deploy your permission set.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the IAM policy that you have configured in each account where you
     * want to deploy your permission set.</p>
     */
    inline CustomerManagedPolicyReference& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the IAM policy that you have configured in each account where you
     * want to deploy your permission set.</p>
     */
    inline CustomerManagedPolicyReference& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM policy that you have configured in each account where you
     * want to deploy your permission set.</p>
     */
    inline CustomerManagedPolicyReference& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The path to the IAM policy that you have configured in each account where you
     * want to deploy your permission set. The default is <code>/</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the IAM policy that you have configured in each account where you
     * want to deploy your permission set. The default is <code>/</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to the IAM policy that you have configured in each account where you
     * want to deploy your permission set. The default is <code>/</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the IAM policy that you have configured in each account where you
     * want to deploy your permission set. The default is <code>/</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to the IAM policy that you have configured in each account where you
     * want to deploy your permission set. The default is <code>/</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the IAM policy that you have configured in each account where you
     * want to deploy your permission set. The default is <code>/</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline CustomerManagedPolicyReference& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the IAM policy that you have configured in each account where you
     * want to deploy your permission set. The default is <code>/</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline CustomerManagedPolicyReference& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to the IAM policy that you have configured in each account where you
     * want to deploy your permission set. The default is <code>/</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline CustomerManagedPolicyReference& WithPath(const char* value) { SetPath(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
