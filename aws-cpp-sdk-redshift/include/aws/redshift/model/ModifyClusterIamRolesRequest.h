/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyClusterIamRolesMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API ModifyClusterIamRolesRequest : public RedshiftRequest
  {
  public:
    ModifyClusterIamRolesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyClusterIamRoles"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique identifier of the cluster for which you want to associate or
     * disassociate IAM roles.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier of the cluster for which you want to associate or
     * disassociate IAM roles.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the cluster for which you want to associate or
     * disassociate IAM roles.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of the cluster for which you want to associate or
     * disassociate IAM roles.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the cluster for which you want to associate or
     * disassociate IAM roles.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the cluster for which you want to associate or
     * disassociate IAM roles.</p>
     */
    inline ModifyClusterIamRolesRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the cluster for which you want to associate or
     * disassociate IAM roles.</p>
     */
    inline ModifyClusterIamRolesRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the cluster for which you want to associate or
     * disassociate IAM roles.</p>
     */
    inline ModifyClusterIamRolesRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>Zero or more IAM roles to associate with the cluster. The roles must be in
     * their Amazon Resource Name (ARN) format. You can associate up to 10 IAM roles
     * with a single cluster in a single request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddIamRoles() const{ return m_addIamRoles; }

    /**
     * <p>Zero or more IAM roles to associate with the cluster. The roles must be in
     * their Amazon Resource Name (ARN) format. You can associate up to 10 IAM roles
     * with a single cluster in a single request.</p>
     */
    inline bool AddIamRolesHasBeenSet() const { return m_addIamRolesHasBeenSet; }

    /**
     * <p>Zero or more IAM roles to associate with the cluster. The roles must be in
     * their Amazon Resource Name (ARN) format. You can associate up to 10 IAM roles
     * with a single cluster in a single request.</p>
     */
    inline void SetAddIamRoles(const Aws::Vector<Aws::String>& value) { m_addIamRolesHasBeenSet = true; m_addIamRoles = value; }

    /**
     * <p>Zero or more IAM roles to associate with the cluster. The roles must be in
     * their Amazon Resource Name (ARN) format. You can associate up to 10 IAM roles
     * with a single cluster in a single request.</p>
     */
    inline void SetAddIamRoles(Aws::Vector<Aws::String>&& value) { m_addIamRolesHasBeenSet = true; m_addIamRoles = std::move(value); }

    /**
     * <p>Zero or more IAM roles to associate with the cluster. The roles must be in
     * their Amazon Resource Name (ARN) format. You can associate up to 10 IAM roles
     * with a single cluster in a single request.</p>
     */
    inline ModifyClusterIamRolesRequest& WithAddIamRoles(const Aws::Vector<Aws::String>& value) { SetAddIamRoles(value); return *this;}

    /**
     * <p>Zero or more IAM roles to associate with the cluster. The roles must be in
     * their Amazon Resource Name (ARN) format. You can associate up to 10 IAM roles
     * with a single cluster in a single request.</p>
     */
    inline ModifyClusterIamRolesRequest& WithAddIamRoles(Aws::Vector<Aws::String>&& value) { SetAddIamRoles(std::move(value)); return *this;}

    /**
     * <p>Zero or more IAM roles to associate with the cluster. The roles must be in
     * their Amazon Resource Name (ARN) format. You can associate up to 10 IAM roles
     * with a single cluster in a single request.</p>
     */
    inline ModifyClusterIamRolesRequest& AddAddIamRoles(const Aws::String& value) { m_addIamRolesHasBeenSet = true; m_addIamRoles.push_back(value); return *this; }

    /**
     * <p>Zero or more IAM roles to associate with the cluster. The roles must be in
     * their Amazon Resource Name (ARN) format. You can associate up to 10 IAM roles
     * with a single cluster in a single request.</p>
     */
    inline ModifyClusterIamRolesRequest& AddAddIamRoles(Aws::String&& value) { m_addIamRolesHasBeenSet = true; m_addIamRoles.push_back(std::move(value)); return *this; }

    /**
     * <p>Zero or more IAM roles to associate with the cluster. The roles must be in
     * their Amazon Resource Name (ARN) format. You can associate up to 10 IAM roles
     * with a single cluster in a single request.</p>
     */
    inline ModifyClusterIamRolesRequest& AddAddIamRoles(const char* value) { m_addIamRolesHasBeenSet = true; m_addIamRoles.push_back(value); return *this; }


    /**
     * <p>Zero or more IAM roles in ARN format to disassociate from the cluster. You
     * can disassociate up to 10 IAM roles from a single cluster in a single
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveIamRoles() const{ return m_removeIamRoles; }

    /**
     * <p>Zero or more IAM roles in ARN format to disassociate from the cluster. You
     * can disassociate up to 10 IAM roles from a single cluster in a single
     * request.</p>
     */
    inline bool RemoveIamRolesHasBeenSet() const { return m_removeIamRolesHasBeenSet; }

    /**
     * <p>Zero or more IAM roles in ARN format to disassociate from the cluster. You
     * can disassociate up to 10 IAM roles from a single cluster in a single
     * request.</p>
     */
    inline void SetRemoveIamRoles(const Aws::Vector<Aws::String>& value) { m_removeIamRolesHasBeenSet = true; m_removeIamRoles = value; }

    /**
     * <p>Zero or more IAM roles in ARN format to disassociate from the cluster. You
     * can disassociate up to 10 IAM roles from a single cluster in a single
     * request.</p>
     */
    inline void SetRemoveIamRoles(Aws::Vector<Aws::String>&& value) { m_removeIamRolesHasBeenSet = true; m_removeIamRoles = std::move(value); }

    /**
     * <p>Zero or more IAM roles in ARN format to disassociate from the cluster. You
     * can disassociate up to 10 IAM roles from a single cluster in a single
     * request.</p>
     */
    inline ModifyClusterIamRolesRequest& WithRemoveIamRoles(const Aws::Vector<Aws::String>& value) { SetRemoveIamRoles(value); return *this;}

    /**
     * <p>Zero or more IAM roles in ARN format to disassociate from the cluster. You
     * can disassociate up to 10 IAM roles from a single cluster in a single
     * request.</p>
     */
    inline ModifyClusterIamRolesRequest& WithRemoveIamRoles(Aws::Vector<Aws::String>&& value) { SetRemoveIamRoles(std::move(value)); return *this;}

    /**
     * <p>Zero or more IAM roles in ARN format to disassociate from the cluster. You
     * can disassociate up to 10 IAM roles from a single cluster in a single
     * request.</p>
     */
    inline ModifyClusterIamRolesRequest& AddRemoveIamRoles(const Aws::String& value) { m_removeIamRolesHasBeenSet = true; m_removeIamRoles.push_back(value); return *this; }

    /**
     * <p>Zero or more IAM roles in ARN format to disassociate from the cluster. You
     * can disassociate up to 10 IAM roles from a single cluster in a single
     * request.</p>
     */
    inline ModifyClusterIamRolesRequest& AddRemoveIamRoles(Aws::String&& value) { m_removeIamRolesHasBeenSet = true; m_removeIamRoles.push_back(std::move(value)); return *this; }

    /**
     * <p>Zero or more IAM roles in ARN format to disassociate from the cluster. You
     * can disassociate up to 10 IAM roles from a single cluster in a single
     * request.</p>
     */
    inline ModifyClusterIamRolesRequest& AddRemoveIamRoles(const char* value) { m_removeIamRolesHasBeenSet = true; m_removeIamRoles.push_back(value); return *this; }

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    Aws::Vector<Aws::String> m_addIamRoles;
    bool m_addIamRolesHasBeenSet;

    Aws::Vector<Aws::String> m_removeIamRoles;
    bool m_removeIamRolesHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
