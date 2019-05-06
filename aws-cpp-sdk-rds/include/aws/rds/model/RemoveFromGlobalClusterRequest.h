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
  class AWS_RDS_API RemoveFromGlobalClusterRequest : public RDSRequest
  {
  public:
    RemoveFromGlobalClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveFromGlobalCluster"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p> The cluster identifier to detach from the Aurora global database cluster.
     * </p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p> The cluster identifier to detach from the Aurora global database cluster.
     * </p>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p> The cluster identifier to detach from the Aurora global database cluster.
     * </p>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p> The cluster identifier to detach from the Aurora global database cluster.
     * </p>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p> The cluster identifier to detach from the Aurora global database cluster.
     * </p>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p> The cluster identifier to detach from the Aurora global database cluster.
     * </p>
     */
    inline RemoveFromGlobalClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p> The cluster identifier to detach from the Aurora global database cluster.
     * </p>
     */
    inline RemoveFromGlobalClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p> The cluster identifier to detach from the Aurora global database cluster.
     * </p>
     */
    inline RemoveFromGlobalClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) identifying the cluster that was detached
     * from the Aurora global database cluster. </p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const{ return m_dbClusterIdentifier; }

    /**
     * <p> The Amazon Resource Name (ARN) identifying the cluster that was detached
     * from the Aurora global database cluster. </p>
     */
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) identifying the cluster that was detached
     * from the Aurora global database cluster. </p>
     */
    inline void SetDbClusterIdentifier(const Aws::String& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = value; }

    /**
     * <p> The Amazon Resource Name (ARN) identifying the cluster that was detached
     * from the Aurora global database cluster. </p>
     */
    inline void SetDbClusterIdentifier(Aws::String&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) identifying the cluster that was detached
     * from the Aurora global database cluster. </p>
     */
    inline void SetDbClusterIdentifier(const char* value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) identifying the cluster that was detached
     * from the Aurora global database cluster. </p>
     */
    inline RemoveFromGlobalClusterRequest& WithDbClusterIdentifier(const Aws::String& value) { SetDbClusterIdentifier(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) identifying the cluster that was detached
     * from the Aurora global database cluster. </p>
     */
    inline RemoveFromGlobalClusterRequest& WithDbClusterIdentifier(Aws::String&& value) { SetDbClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) identifying the cluster that was detached
     * from the Aurora global database cluster. </p>
     */
    inline RemoveFromGlobalClusterRequest& WithDbClusterIdentifier(const char* value) { SetDbClusterIdentifier(value); return *this;}

  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet;

    Aws::String m_dbClusterIdentifier;
    bool m_dbClusterIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
