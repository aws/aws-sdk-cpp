﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   */
  class SwitchoverGlobalClusterRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API SwitchoverGlobalClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SwitchoverGlobalCluster"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the Amazon DocumentDB global database cluster to switch
     * over. The identifier is the unique key assigned by the user when the cluster is
     * created. In other words, it's the name of the global cluster. This parameter
     * isn’t case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global cluster (Amazon DocumentDB global
     * database).</p> </li> <li> <p>Minimum length of 1. Maximum length of 255.</p>
     * </li> </ul> <p>Pattern: <code>[A-Za-z][0-9A-Za-z-:._]*</code> </p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const { return m_globalClusterIdentifier; }
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
    template<typename GlobalClusterIdentifierT = Aws::String>
    void SetGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::forward<GlobalClusterIdentifierT>(value); }
    template<typename GlobalClusterIdentifierT = Aws::String>
    SwitchoverGlobalClusterRequest& WithGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { SetGlobalClusterIdentifier(std::forward<GlobalClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the secondary Amazon DocumentDB cluster to promote to the
     * new primary for the global database cluster. Use the Amazon Resource Name (ARN)
     * for the identifier so that Amazon DocumentDB can locate the cluster in its
     * Amazon Web Services region.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing secondary cluster.</p> </li> <li> <p>Minimum length of
     * 1. Maximum length of 255.</p> </li> </ul> <p>Pattern:
     * <code>[A-Za-z][0-9A-Za-z-:._]*</code> </p>
     */
    inline const Aws::String& GetTargetDbClusterIdentifier() const { return m_targetDbClusterIdentifier; }
    inline bool TargetDbClusterIdentifierHasBeenSet() const { return m_targetDbClusterIdentifierHasBeenSet; }
    template<typename TargetDbClusterIdentifierT = Aws::String>
    void SetTargetDbClusterIdentifier(TargetDbClusterIdentifierT&& value) { m_targetDbClusterIdentifierHasBeenSet = true; m_targetDbClusterIdentifier = std::forward<TargetDbClusterIdentifierT>(value); }
    template<typename TargetDbClusterIdentifierT = Aws::String>
    SwitchoverGlobalClusterRequest& WithTargetDbClusterIdentifier(TargetDbClusterIdentifierT&& value) { SetTargetDbClusterIdentifier(std::forward<TargetDbClusterIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_targetDbClusterIdentifier;
    bool m_targetDbClusterIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
