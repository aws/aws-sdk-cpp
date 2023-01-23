/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/TransitionToIARules.h>
#include <aws/elasticfilesystem/model/TransitionToPrimaryStorageClassRules.h>
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
   * <p>Describes a policy used by EFS lifecycle management and EFS
   * Intelligent-Tiering that specifies when to transition files into and out of the
   * file system's Infrequent Access (IA) storage class. For more information, see <a
   * href="https://docs.aws.amazon.com/efs/latest/ug/lifecycle-management-efs.html">EFS
   * Intelligent‐Tiering and EFS Lifecycle Management</a>.</p>  <p>When using
   * the <code>put-lifecycle-configuration</code> CLI command or the
   * <code>PutLifecycleConfiguration</code> API action, Amazon EFS requires that each
   * <code>LifecyclePolicy</code> object have only a single transition. This means
   * that in a request body, <code>LifecyclePolicies</code> must be structured as an
   * array of <code>LifecyclePolicy</code> objects, one object for each transition,
   * <code>TransitionToIA</code>, <code>TransitionToPrimaryStorageClass</code>. For
   * more information, see the request examples in
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


    /**
     * <p> Describes the period of time that a file is not accessed, after which it
     * transitions to IA storage. Metadata operations such as listing the contents of a
     * directory don't count as file access events.</p>
     */
    inline const TransitionToIARules& GetTransitionToIA() const{ return m_transitionToIA; }

    /**
     * <p> Describes the period of time that a file is not accessed, after which it
     * transitions to IA storage. Metadata operations such as listing the contents of a
     * directory don't count as file access events.</p>
     */
    inline bool TransitionToIAHasBeenSet() const { return m_transitionToIAHasBeenSet; }

    /**
     * <p> Describes the period of time that a file is not accessed, after which it
     * transitions to IA storage. Metadata operations such as listing the contents of a
     * directory don't count as file access events.</p>
     */
    inline void SetTransitionToIA(const TransitionToIARules& value) { m_transitionToIAHasBeenSet = true; m_transitionToIA = value; }

    /**
     * <p> Describes the period of time that a file is not accessed, after which it
     * transitions to IA storage. Metadata operations such as listing the contents of a
     * directory don't count as file access events.</p>
     */
    inline void SetTransitionToIA(TransitionToIARules&& value) { m_transitionToIAHasBeenSet = true; m_transitionToIA = std::move(value); }

    /**
     * <p> Describes the period of time that a file is not accessed, after which it
     * transitions to IA storage. Metadata operations such as listing the contents of a
     * directory don't count as file access events.</p>
     */
    inline LifecyclePolicy& WithTransitionToIA(const TransitionToIARules& value) { SetTransitionToIA(value); return *this;}

    /**
     * <p> Describes the period of time that a file is not accessed, after which it
     * transitions to IA storage. Metadata operations such as listing the contents of a
     * directory don't count as file access events.</p>
     */
    inline LifecyclePolicy& WithTransitionToIA(TransitionToIARules&& value) { SetTransitionToIA(std::move(value)); return *this;}


    /**
     * <p>Describes when to transition a file from IA storage to primary storage.
     * Metadata operations such as listing the contents of a directory don't count as
     * file access events.</p>
     */
    inline const TransitionToPrimaryStorageClassRules& GetTransitionToPrimaryStorageClass() const{ return m_transitionToPrimaryStorageClass; }

    /**
     * <p>Describes when to transition a file from IA storage to primary storage.
     * Metadata operations such as listing the contents of a directory don't count as
     * file access events.</p>
     */
    inline bool TransitionToPrimaryStorageClassHasBeenSet() const { return m_transitionToPrimaryStorageClassHasBeenSet; }

    /**
     * <p>Describes when to transition a file from IA storage to primary storage.
     * Metadata operations such as listing the contents of a directory don't count as
     * file access events.</p>
     */
    inline void SetTransitionToPrimaryStorageClass(const TransitionToPrimaryStorageClassRules& value) { m_transitionToPrimaryStorageClassHasBeenSet = true; m_transitionToPrimaryStorageClass = value; }

    /**
     * <p>Describes when to transition a file from IA storage to primary storage.
     * Metadata operations such as listing the contents of a directory don't count as
     * file access events.</p>
     */
    inline void SetTransitionToPrimaryStorageClass(TransitionToPrimaryStorageClassRules&& value) { m_transitionToPrimaryStorageClassHasBeenSet = true; m_transitionToPrimaryStorageClass = std::move(value); }

    /**
     * <p>Describes when to transition a file from IA storage to primary storage.
     * Metadata operations such as listing the contents of a directory don't count as
     * file access events.</p>
     */
    inline LifecyclePolicy& WithTransitionToPrimaryStorageClass(const TransitionToPrimaryStorageClassRules& value) { SetTransitionToPrimaryStorageClass(value); return *this;}

    /**
     * <p>Describes when to transition a file from IA storage to primary storage.
     * Metadata operations such as listing the contents of a directory don't count as
     * file access events.</p>
     */
    inline LifecyclePolicy& WithTransitionToPrimaryStorageClass(TransitionToPrimaryStorageClassRules&& value) { SetTransitionToPrimaryStorageClass(std::move(value)); return *this;}

  private:

    TransitionToIARules m_transitionToIA;
    bool m_transitionToIAHasBeenSet = false;

    TransitionToPrimaryStorageClassRules m_transitionToPrimaryStorageClass;
    bool m_transitionToPrimaryStorageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
