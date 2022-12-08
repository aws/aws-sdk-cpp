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
   */
  class FailoverGlobalClusterRequest : public RDSRequest
  {
  public:
    AWS_RDS_API FailoverGlobalClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FailoverGlobalCluster"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Identifier of the Aurora global database (<a>GlobalCluster</a>) that should
     * be failed over. The identifier is the unique key assigned by the user when the
     * Aurora global database was created. In other words, it's the name of the Aurora
     * global database that you want to fail over.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the identifier of an existing <a>GlobalCluster</a> (Aurora global
     * database).</p> </li> </ul>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p>Identifier of the Aurora global database (<a>GlobalCluster</a>) that should
     * be failed over. The identifier is the unique key assigned by the user when the
     * Aurora global database was created. In other words, it's the name of the Aurora
     * global database that you want to fail over.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the identifier of an existing <a>GlobalCluster</a> (Aurora global
     * database).</p> </li> </ul>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p>Identifier of the Aurora global database (<a>GlobalCluster</a>) that should
     * be failed over. The identifier is the unique key assigned by the user when the
     * Aurora global database was created. In other words, it's the name of the Aurora
     * global database that you want to fail over.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the identifier of an existing <a>GlobalCluster</a> (Aurora global
     * database).</p> </li> </ul>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p>Identifier of the Aurora global database (<a>GlobalCluster</a>) that should
     * be failed over. The identifier is the unique key assigned by the user when the
     * Aurora global database was created. In other words, it's the name of the Aurora
     * global database that you want to fail over.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the identifier of an existing <a>GlobalCluster</a> (Aurora global
     * database).</p> </li> </ul>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p>Identifier of the Aurora global database (<a>GlobalCluster</a>) that should
     * be failed over. The identifier is the unique key assigned by the user when the
     * Aurora global database was created. In other words, it's the name of the Aurora
     * global database that you want to fail over.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the identifier of an existing <a>GlobalCluster</a> (Aurora global
     * database).</p> </li> </ul>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p>Identifier of the Aurora global database (<a>GlobalCluster</a>) that should
     * be failed over. The identifier is the unique key assigned by the user when the
     * Aurora global database was created. In other words, it's the name of the Aurora
     * global database that you want to fail over.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the identifier of an existing <a>GlobalCluster</a> (Aurora global
     * database).</p> </li> </ul>
     */
    inline FailoverGlobalClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>Identifier of the Aurora global database (<a>GlobalCluster</a>) that should
     * be failed over. The identifier is the unique key assigned by the user when the
     * Aurora global database was created. In other words, it's the name of the Aurora
     * global database that you want to fail over.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the identifier of an existing <a>GlobalCluster</a> (Aurora global
     * database).</p> </li> </ul>
     */
    inline FailoverGlobalClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>Identifier of the Aurora global database (<a>GlobalCluster</a>) that should
     * be failed over. The identifier is the unique key assigned by the user when the
     * Aurora global database was created. In other words, it's the name of the Aurora
     * global database that you want to fail over.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the identifier of an existing <a>GlobalCluster</a> (Aurora global
     * database).</p> </li> </ul>
     */
    inline FailoverGlobalClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p>Identifier of the secondary Aurora DB cluster that you want to promote to
     * primary for the Aurora global database (<a>GlobalCluster</a>.) Use the Amazon
     * Resource Name (ARN) for the identifier so that Aurora can locate the cluster in
     * its Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetTargetDbClusterIdentifier() const{ return m_targetDbClusterIdentifier; }

    /**
     * <p>Identifier of the secondary Aurora DB cluster that you want to promote to
     * primary for the Aurora global database (<a>GlobalCluster</a>.) Use the Amazon
     * Resource Name (ARN) for the identifier so that Aurora can locate the cluster in
     * its Amazon Web Services Region.</p>
     */
    inline bool TargetDbClusterIdentifierHasBeenSet() const { return m_targetDbClusterIdentifierHasBeenSet; }

    /**
     * <p>Identifier of the secondary Aurora DB cluster that you want to promote to
     * primary for the Aurora global database (<a>GlobalCluster</a>.) Use the Amazon
     * Resource Name (ARN) for the identifier so that Aurora can locate the cluster in
     * its Amazon Web Services Region.</p>
     */
    inline void SetTargetDbClusterIdentifier(const Aws::String& value) { m_targetDbClusterIdentifierHasBeenSet = true; m_targetDbClusterIdentifier = value; }

    /**
     * <p>Identifier of the secondary Aurora DB cluster that you want to promote to
     * primary for the Aurora global database (<a>GlobalCluster</a>.) Use the Amazon
     * Resource Name (ARN) for the identifier so that Aurora can locate the cluster in
     * its Amazon Web Services Region.</p>
     */
    inline void SetTargetDbClusterIdentifier(Aws::String&& value) { m_targetDbClusterIdentifierHasBeenSet = true; m_targetDbClusterIdentifier = std::move(value); }

    /**
     * <p>Identifier of the secondary Aurora DB cluster that you want to promote to
     * primary for the Aurora global database (<a>GlobalCluster</a>.) Use the Amazon
     * Resource Name (ARN) for the identifier so that Aurora can locate the cluster in
     * its Amazon Web Services Region.</p>
     */
    inline void SetTargetDbClusterIdentifier(const char* value) { m_targetDbClusterIdentifierHasBeenSet = true; m_targetDbClusterIdentifier.assign(value); }

    /**
     * <p>Identifier of the secondary Aurora DB cluster that you want to promote to
     * primary for the Aurora global database (<a>GlobalCluster</a>.) Use the Amazon
     * Resource Name (ARN) for the identifier so that Aurora can locate the cluster in
     * its Amazon Web Services Region.</p>
     */
    inline FailoverGlobalClusterRequest& WithTargetDbClusterIdentifier(const Aws::String& value) { SetTargetDbClusterIdentifier(value); return *this;}

    /**
     * <p>Identifier of the secondary Aurora DB cluster that you want to promote to
     * primary for the Aurora global database (<a>GlobalCluster</a>.) Use the Amazon
     * Resource Name (ARN) for the identifier so that Aurora can locate the cluster in
     * its Amazon Web Services Region.</p>
     */
    inline FailoverGlobalClusterRequest& WithTargetDbClusterIdentifier(Aws::String&& value) { SetTargetDbClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>Identifier of the secondary Aurora DB cluster that you want to promote to
     * primary for the Aurora global database (<a>GlobalCluster</a>.) Use the Amazon
     * Resource Name (ARN) for the identifier so that Aurora can locate the cluster in
     * its Amazon Web Services Region.</p>
     */
    inline FailoverGlobalClusterRequest& WithTargetDbClusterIdentifier(const char* value) { SetTargetDbClusterIdentifier(value); return *this;}

  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_targetDbClusterIdentifier;
    bool m_targetDbClusterIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
