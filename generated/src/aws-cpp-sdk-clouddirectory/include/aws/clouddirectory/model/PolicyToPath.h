/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/PolicyAttachment.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Used when a regular object exists in a <a>Directory</a> and you want to find
   * all of the policies that are associated with that object and the parent to that
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/PolicyToPath">AWS
   * API Reference</a></p>
   */
  class PolicyToPath
  {
  public:
    AWS_CLOUDDIRECTORY_API PolicyToPath();
    AWS_CLOUDDIRECTORY_API PolicyToPath(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API PolicyToPath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path that is referenced from the root.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path that is referenced from the root.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path that is referenced from the root.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path that is referenced from the root.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path that is referenced from the root.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path that is referenced from the root.</p>
     */
    inline PolicyToPath& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path that is referenced from the root.</p>
     */
    inline PolicyToPath& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path that is referenced from the root.</p>
     */
    inline PolicyToPath& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>List of policy objects.</p>
     */
    inline const Aws::Vector<PolicyAttachment>& GetPolicies() const{ return m_policies; }

    /**
     * <p>List of policy objects.</p>
     */
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }

    /**
     * <p>List of policy objects.</p>
     */
    inline void SetPolicies(const Aws::Vector<PolicyAttachment>& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>List of policy objects.</p>
     */
    inline void SetPolicies(Aws::Vector<PolicyAttachment>&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }

    /**
     * <p>List of policy objects.</p>
     */
    inline PolicyToPath& WithPolicies(const Aws::Vector<PolicyAttachment>& value) { SetPolicies(value); return *this;}

    /**
     * <p>List of policy objects.</p>
     */
    inline PolicyToPath& WithPolicies(Aws::Vector<PolicyAttachment>&& value) { SetPolicies(std::move(value)); return *this;}

    /**
     * <p>List of policy objects.</p>
     */
    inline PolicyToPath& AddPolicies(const PolicyAttachment& value) { m_policiesHasBeenSet = true; m_policies.push_back(value); return *this; }

    /**
     * <p>List of policy objects.</p>
     */
    inline PolicyToPath& AddPolicies(PolicyAttachment&& value) { m_policiesHasBeenSet = true; m_policies.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::Vector<PolicyAttachment> m_policies;
    bool m_policiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
