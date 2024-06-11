﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/TransitionToIARules.h>
#include <aws/elasticfilesystem/model/TransitionToPrimaryStorageClassRules.h>
#include <aws/elasticfilesystem/model/TransitionToArchiveRules.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>Describes a policy used by Lifecycle management that specifies when to
   * transition files into and out of storage classes. For more information, see <a
   * href="https://docs.aws.amazon.com/efs/latest/ug/lifecycle-management-efs.html">Managing
   * file system storage</a>.</p>  <p>When using the
   * <code>put-lifecycle-configuration</code> CLI command or the
   * <code>PutLifecycleConfiguration</code> API action, Amazon EFS requires that each
   * <code>LifecyclePolicy</code> object have only a single transition. This means
   * that in a request body, <code>LifecyclePolicies</code> must be structured as an
   * array of <code>LifecyclePolicy</code> objects, one object for each transition.
   * For more information, see the request examples in
   * <a>PutLifecycleConfiguration</a>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/LifecyclePolicy">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicy
  {
  public:
    AWS_EFS_API LifecyclePolicy();
    AWS_EFS_API LifecyclePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API LifecyclePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of days after files were last accessed in primary storage (the
     * Standard storage class) at which to move them to Infrequent Access (IA) storage.
     * Metadata operations such as listing the contents of a directory don't count as
     * file access events.</p>
     */
    inline const TransitionToIARules& GetTransitionToIA() const{ return m_transitionToIA; }
    inline bool TransitionToIAHasBeenSet() const { return m_transitionToIAHasBeenSet; }
    inline void SetTransitionToIA(const TransitionToIARules& value) { m_transitionToIAHasBeenSet = true; m_transitionToIA = value; }
    inline void SetTransitionToIA(TransitionToIARules&& value) { m_transitionToIAHasBeenSet = true; m_transitionToIA = std::move(value); }
    inline LifecyclePolicy& WithTransitionToIA(const TransitionToIARules& value) { SetTransitionToIA(value); return *this;}
    inline LifecyclePolicy& WithTransitionToIA(TransitionToIARules&& value) { SetTransitionToIA(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to move files back to primary (Standard) storage after they are
     * accessed in IA or Archive storage. Metadata operations such as listing the
     * contents of a directory don't count as file access events.</p>
     */
    inline const TransitionToPrimaryStorageClassRules& GetTransitionToPrimaryStorageClass() const{ return m_transitionToPrimaryStorageClass; }
    inline bool TransitionToPrimaryStorageClassHasBeenSet() const { return m_transitionToPrimaryStorageClassHasBeenSet; }
    inline void SetTransitionToPrimaryStorageClass(const TransitionToPrimaryStorageClassRules& value) { m_transitionToPrimaryStorageClassHasBeenSet = true; m_transitionToPrimaryStorageClass = value; }
    inline void SetTransitionToPrimaryStorageClass(TransitionToPrimaryStorageClassRules&& value) { m_transitionToPrimaryStorageClassHasBeenSet = true; m_transitionToPrimaryStorageClass = std::move(value); }
    inline LifecyclePolicy& WithTransitionToPrimaryStorageClass(const TransitionToPrimaryStorageClassRules& value) { SetTransitionToPrimaryStorageClass(value); return *this;}
    inline LifecyclePolicy& WithTransitionToPrimaryStorageClass(TransitionToPrimaryStorageClassRules&& value) { SetTransitionToPrimaryStorageClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days after files were last accessed in primary storage (the
     * Standard storage class) files at which to move them to Archive storage. Metadata
     * operations such as listing the contents of a directory don't count as file
     * access events.</p>
     */
    inline const TransitionToArchiveRules& GetTransitionToArchive() const{ return m_transitionToArchive; }
    inline bool TransitionToArchiveHasBeenSet() const { return m_transitionToArchiveHasBeenSet; }
    inline void SetTransitionToArchive(const TransitionToArchiveRules& value) { m_transitionToArchiveHasBeenSet = true; m_transitionToArchive = value; }
    inline void SetTransitionToArchive(TransitionToArchiveRules&& value) { m_transitionToArchiveHasBeenSet = true; m_transitionToArchive = std::move(value); }
    inline LifecyclePolicy& WithTransitionToArchive(const TransitionToArchiveRules& value) { SetTransitionToArchive(value); return *this;}
    inline LifecyclePolicy& WithTransitionToArchive(TransitionToArchiveRules&& value) { SetTransitionToArchive(std::move(value)); return *this;}
    ///@}
  private:

    TransitionToIARules m_transitionToIA;
    bool m_transitionToIAHasBeenSet = false;

    TransitionToPrimaryStorageClassRules m_transitionToPrimaryStorageClass;
    bool m_transitionToPrimaryStorageClassHasBeenSet = false;

    TransitionToArchiveRules m_transitionToArchive;
    bool m_transitionToArchiveHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
