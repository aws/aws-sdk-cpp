/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSubnetGroupMessage">AWS
   * API Reference</a></p>
   */
  class DeleteDBSubnetGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeleteDBSubnetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBSubnetGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the database subnet group to delete.</p>  <p>You can't
     * delete the default subnet group.</p>  <p>Constraints: Must match the name
     * of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The name of the database subnet group to delete.</p>  <p>You can't
     * delete the default subnet group.</p>  <p>Constraints: Must match the name
     * of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the database subnet group to delete.</p>  <p>You can't
     * delete the default subnet group.</p>  <p>Constraints: Must match the name
     * of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The name of the database subnet group to delete.</p>  <p>You can't
     * delete the default subnet group.</p>  <p>Constraints: Must match the name
     * of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>The name of the database subnet group to delete.</p>  <p>You can't
     * delete the default subnet group.</p>  <p>Constraints: Must match the name
     * of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The name of the database subnet group to delete.</p>  <p>You can't
     * delete the default subnet group.</p>  <p>Constraints: Must match the name
     * of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p>
     */
    inline DeleteDBSubnetGroupRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the database subnet group to delete.</p>  <p>You can't
     * delete the default subnet group.</p>  <p>Constraints: Must match the name
     * of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p>
     */
    inline DeleteDBSubnetGroupRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the database subnet group to delete.</p>  <p>You can't
     * delete the default subnet group.</p>  <p>Constraints: Must match the name
     * of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p>
     */
    inline DeleteDBSubnetGroupRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}

  private:

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
