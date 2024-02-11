/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticfilesystem/model/LifecyclePolicy.h>
#include <utility>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class PutLifecycleConfigurationRequest : public EFSRequest
  {
  public:
    AWS_EFS_API PutLifecycleConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLifecycleConfiguration"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the file system for which you are creating the
     * <code>LifecycleConfiguration</code> object (String).</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the file system for which you are creating the
     * <code>LifecycleConfiguration</code> object (String).</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the file system for which you are creating the
     * <code>LifecycleConfiguration</code> object (String).</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of the file system for which you are creating the
     * <code>LifecycleConfiguration</code> object (String).</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the file system for which you are creating the
     * <code>LifecycleConfiguration</code> object (String).</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the file system for which you are creating the
     * <code>LifecycleConfiguration</code> object (String).</p>
     */
    inline PutLifecycleConfigurationRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the file system for which you are creating the
     * <code>LifecycleConfiguration</code> object (String).</p>
     */
    inline PutLifecycleConfigurationRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the file system for which you are creating the
     * <code>LifecycleConfiguration</code> object (String).</p>
     */
    inline PutLifecycleConfigurationRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>An array of <code>LifecyclePolicy</code> objects that define the file
     * system's <code>LifecycleConfiguration</code> object. A
     * <code>LifecycleConfiguration</code> object informs EFS Lifecycle management of
     * the following:</p> <ul> <li> <p> <b> <code>TransitionToIA</code> </b> – When to
     * move files in the file system from primary storage (Standard storage class) into
     * the Infrequent Access (IA) storage.</p> </li> <li> <p> <b>
     * <code>TransitionToArchive</code> </b> – When to move files in the file system
     * from their current storage class (either IA or Standard storage) into the
     * Archive storage.</p> <p>File systems cannot transition into Archive storage
     * before transitioning into IA storage. Therefore, TransitionToArchive must either
     * not be set or must be later than TransitionToIA.</p>  <p> The Archive
     * storage class is available only for file systems that use the Elastic Throughput
     * mode and the General Purpose Performance mode. </p>  </li> <li> <p> <b>
     * <code>TransitionToPrimaryStorageClass</code> </b> – Whether to move files in the
     * file system back to primary storage (Standard storage class) after they are
     * accessed in IA or Archive storage.</p> </li> </ul>  <p>When using the
     * <code>put-lifecycle-configuration</code> CLI command or the
     * <code>PutLifecycleConfiguration</code> API action, Amazon EFS requires that each
     * <code>LifecyclePolicy</code> object have only a single transition. This means
     * that in a request body, <code>LifecyclePolicies</code> must be structured as an
     * array of <code>LifecyclePolicy</code> objects, one object for each storage
     * transition. See the example requests in the following section for more
     * information.</p> 
     */
    inline const Aws::Vector<LifecyclePolicy>& GetLifecyclePolicies() const{ return m_lifecyclePolicies; }

    /**
     * <p>An array of <code>LifecyclePolicy</code> objects that define the file
     * system's <code>LifecycleConfiguration</code> object. A
     * <code>LifecycleConfiguration</code> object informs EFS Lifecycle management of
     * the following:</p> <ul> <li> <p> <b> <code>TransitionToIA</code> </b> – When to
     * move files in the file system from primary storage (Standard storage class) into
     * the Infrequent Access (IA) storage.</p> </li> <li> <p> <b>
     * <code>TransitionToArchive</code> </b> – When to move files in the file system
     * from their current storage class (either IA or Standard storage) into the
     * Archive storage.</p> <p>File systems cannot transition into Archive storage
     * before transitioning into IA storage. Therefore, TransitionToArchive must either
     * not be set or must be later than TransitionToIA.</p>  <p> The Archive
     * storage class is available only for file systems that use the Elastic Throughput
     * mode and the General Purpose Performance mode. </p>  </li> <li> <p> <b>
     * <code>TransitionToPrimaryStorageClass</code> </b> – Whether to move files in the
     * file system back to primary storage (Standard storage class) after they are
     * accessed in IA or Archive storage.</p> </li> </ul>  <p>When using the
     * <code>put-lifecycle-configuration</code> CLI command or the
     * <code>PutLifecycleConfiguration</code> API action, Amazon EFS requires that each
     * <code>LifecyclePolicy</code> object have only a single transition. This means
     * that in a request body, <code>LifecyclePolicies</code> must be structured as an
     * array of <code>LifecyclePolicy</code> objects, one object for each storage
     * transition. See the example requests in the following section for more
     * information.</p> 
     */
    inline bool LifecyclePoliciesHasBeenSet() const { return m_lifecyclePoliciesHasBeenSet; }

    /**
     * <p>An array of <code>LifecyclePolicy</code> objects that define the file
     * system's <code>LifecycleConfiguration</code> object. A
     * <code>LifecycleConfiguration</code> object informs EFS Lifecycle management of
     * the following:</p> <ul> <li> <p> <b> <code>TransitionToIA</code> </b> – When to
     * move files in the file system from primary storage (Standard storage class) into
     * the Infrequent Access (IA) storage.</p> </li> <li> <p> <b>
     * <code>TransitionToArchive</code> </b> – When to move files in the file system
     * from their current storage class (either IA or Standard storage) into the
     * Archive storage.</p> <p>File systems cannot transition into Archive storage
     * before transitioning into IA storage. Therefore, TransitionToArchive must either
     * not be set or must be later than TransitionToIA.</p>  <p> The Archive
     * storage class is available only for file systems that use the Elastic Throughput
     * mode and the General Purpose Performance mode. </p>  </li> <li> <p> <b>
     * <code>TransitionToPrimaryStorageClass</code> </b> – Whether to move files in the
     * file system back to primary storage (Standard storage class) after they are
     * accessed in IA or Archive storage.</p> </li> </ul>  <p>When using the
     * <code>put-lifecycle-configuration</code> CLI command or the
     * <code>PutLifecycleConfiguration</code> API action, Amazon EFS requires that each
     * <code>LifecyclePolicy</code> object have only a single transition. This means
     * that in a request body, <code>LifecyclePolicies</code> must be structured as an
     * array of <code>LifecyclePolicy</code> objects, one object for each storage
     * transition. See the example requests in the following section for more
     * information.</p> 
     */
    inline void SetLifecyclePolicies(const Aws::Vector<LifecyclePolicy>& value) { m_lifecyclePoliciesHasBeenSet = true; m_lifecyclePolicies = value; }

    /**
     * <p>An array of <code>LifecyclePolicy</code> objects that define the file
     * system's <code>LifecycleConfiguration</code> object. A
     * <code>LifecycleConfiguration</code> object informs EFS Lifecycle management of
     * the following:</p> <ul> <li> <p> <b> <code>TransitionToIA</code> </b> – When to
     * move files in the file system from primary storage (Standard storage class) into
     * the Infrequent Access (IA) storage.</p> </li> <li> <p> <b>
     * <code>TransitionToArchive</code> </b> – When to move files in the file system
     * from their current storage class (either IA or Standard storage) into the
     * Archive storage.</p> <p>File systems cannot transition into Archive storage
     * before transitioning into IA storage. Therefore, TransitionToArchive must either
     * not be set or must be later than TransitionToIA.</p>  <p> The Archive
     * storage class is available only for file systems that use the Elastic Throughput
     * mode and the General Purpose Performance mode. </p>  </li> <li> <p> <b>
     * <code>TransitionToPrimaryStorageClass</code> </b> – Whether to move files in the
     * file system back to primary storage (Standard storage class) after they are
     * accessed in IA or Archive storage.</p> </li> </ul>  <p>When using the
     * <code>put-lifecycle-configuration</code> CLI command or the
     * <code>PutLifecycleConfiguration</code> API action, Amazon EFS requires that each
     * <code>LifecyclePolicy</code> object have only a single transition. This means
     * that in a request body, <code>LifecyclePolicies</code> must be structured as an
     * array of <code>LifecyclePolicy</code> objects, one object for each storage
     * transition. See the example requests in the following section for more
     * information.</p> 
     */
    inline void SetLifecyclePolicies(Aws::Vector<LifecyclePolicy>&& value) { m_lifecyclePoliciesHasBeenSet = true; m_lifecyclePolicies = std::move(value); }

    /**
     * <p>An array of <code>LifecyclePolicy</code> objects that define the file
     * system's <code>LifecycleConfiguration</code> object. A
     * <code>LifecycleConfiguration</code> object informs EFS Lifecycle management of
     * the following:</p> <ul> <li> <p> <b> <code>TransitionToIA</code> </b> – When to
     * move files in the file system from primary storage (Standard storage class) into
     * the Infrequent Access (IA) storage.</p> </li> <li> <p> <b>
     * <code>TransitionToArchive</code> </b> – When to move files in the file system
     * from their current storage class (either IA or Standard storage) into the
     * Archive storage.</p> <p>File systems cannot transition into Archive storage
     * before transitioning into IA storage. Therefore, TransitionToArchive must either
     * not be set or must be later than TransitionToIA.</p>  <p> The Archive
     * storage class is available only for file systems that use the Elastic Throughput
     * mode and the General Purpose Performance mode. </p>  </li> <li> <p> <b>
     * <code>TransitionToPrimaryStorageClass</code> </b> – Whether to move files in the
     * file system back to primary storage (Standard storage class) after they are
     * accessed in IA or Archive storage.</p> </li> </ul>  <p>When using the
     * <code>put-lifecycle-configuration</code> CLI command or the
     * <code>PutLifecycleConfiguration</code> API action, Amazon EFS requires that each
     * <code>LifecyclePolicy</code> object have only a single transition. This means
     * that in a request body, <code>LifecyclePolicies</code> must be structured as an
     * array of <code>LifecyclePolicy</code> objects, one object for each storage
     * transition. See the example requests in the following section for more
     * information.</p> 
     */
    inline PutLifecycleConfigurationRequest& WithLifecyclePolicies(const Aws::Vector<LifecyclePolicy>& value) { SetLifecyclePolicies(value); return *this;}

    /**
     * <p>An array of <code>LifecyclePolicy</code> objects that define the file
     * system's <code>LifecycleConfiguration</code> object. A
     * <code>LifecycleConfiguration</code> object informs EFS Lifecycle management of
     * the following:</p> <ul> <li> <p> <b> <code>TransitionToIA</code> </b> – When to
     * move files in the file system from primary storage (Standard storage class) into
     * the Infrequent Access (IA) storage.</p> </li> <li> <p> <b>
     * <code>TransitionToArchive</code> </b> – When to move files in the file system
     * from their current storage class (either IA or Standard storage) into the
     * Archive storage.</p> <p>File systems cannot transition into Archive storage
     * before transitioning into IA storage. Therefore, TransitionToArchive must either
     * not be set or must be later than TransitionToIA.</p>  <p> The Archive
     * storage class is available only for file systems that use the Elastic Throughput
     * mode and the General Purpose Performance mode. </p>  </li> <li> <p> <b>
     * <code>TransitionToPrimaryStorageClass</code> </b> – Whether to move files in the
     * file system back to primary storage (Standard storage class) after they are
     * accessed in IA or Archive storage.</p> </li> </ul>  <p>When using the
     * <code>put-lifecycle-configuration</code> CLI command or the
     * <code>PutLifecycleConfiguration</code> API action, Amazon EFS requires that each
     * <code>LifecyclePolicy</code> object have only a single transition. This means
     * that in a request body, <code>LifecyclePolicies</code> must be structured as an
     * array of <code>LifecyclePolicy</code> objects, one object for each storage
     * transition. See the example requests in the following section for more
     * information.</p> 
     */
    inline PutLifecycleConfigurationRequest& WithLifecyclePolicies(Aws::Vector<LifecyclePolicy>&& value) { SetLifecyclePolicies(std::move(value)); return *this;}

    /**
     * <p>An array of <code>LifecyclePolicy</code> objects that define the file
     * system's <code>LifecycleConfiguration</code> object. A
     * <code>LifecycleConfiguration</code> object informs EFS Lifecycle management of
     * the following:</p> <ul> <li> <p> <b> <code>TransitionToIA</code> </b> – When to
     * move files in the file system from primary storage (Standard storage class) into
     * the Infrequent Access (IA) storage.</p> </li> <li> <p> <b>
     * <code>TransitionToArchive</code> </b> – When to move files in the file system
     * from their current storage class (either IA or Standard storage) into the
     * Archive storage.</p> <p>File systems cannot transition into Archive storage
     * before transitioning into IA storage. Therefore, TransitionToArchive must either
     * not be set or must be later than TransitionToIA.</p>  <p> The Archive
     * storage class is available only for file systems that use the Elastic Throughput
     * mode and the General Purpose Performance mode. </p>  </li> <li> <p> <b>
     * <code>TransitionToPrimaryStorageClass</code> </b> – Whether to move files in the
     * file system back to primary storage (Standard storage class) after they are
     * accessed in IA or Archive storage.</p> </li> </ul>  <p>When using the
     * <code>put-lifecycle-configuration</code> CLI command or the
     * <code>PutLifecycleConfiguration</code> API action, Amazon EFS requires that each
     * <code>LifecyclePolicy</code> object have only a single transition. This means
     * that in a request body, <code>LifecyclePolicies</code> must be structured as an
     * array of <code>LifecyclePolicy</code> objects, one object for each storage
     * transition. See the example requests in the following section for more
     * information.</p> 
     */
    inline PutLifecycleConfigurationRequest& AddLifecyclePolicies(const LifecyclePolicy& value) { m_lifecyclePoliciesHasBeenSet = true; m_lifecyclePolicies.push_back(value); return *this; }

    /**
     * <p>An array of <code>LifecyclePolicy</code> objects that define the file
     * system's <code>LifecycleConfiguration</code> object. A
     * <code>LifecycleConfiguration</code> object informs EFS Lifecycle management of
     * the following:</p> <ul> <li> <p> <b> <code>TransitionToIA</code> </b> – When to
     * move files in the file system from primary storage (Standard storage class) into
     * the Infrequent Access (IA) storage.</p> </li> <li> <p> <b>
     * <code>TransitionToArchive</code> </b> – When to move files in the file system
     * from their current storage class (either IA or Standard storage) into the
     * Archive storage.</p> <p>File systems cannot transition into Archive storage
     * before transitioning into IA storage. Therefore, TransitionToArchive must either
     * not be set or must be later than TransitionToIA.</p>  <p> The Archive
     * storage class is available only for file systems that use the Elastic Throughput
     * mode and the General Purpose Performance mode. </p>  </li> <li> <p> <b>
     * <code>TransitionToPrimaryStorageClass</code> </b> – Whether to move files in the
     * file system back to primary storage (Standard storage class) after they are
     * accessed in IA or Archive storage.</p> </li> </ul>  <p>When using the
     * <code>put-lifecycle-configuration</code> CLI command or the
     * <code>PutLifecycleConfiguration</code> API action, Amazon EFS requires that each
     * <code>LifecyclePolicy</code> object have only a single transition. This means
     * that in a request body, <code>LifecyclePolicies</code> must be structured as an
     * array of <code>LifecyclePolicy</code> objects, one object for each storage
     * transition. See the example requests in the following section for more
     * information.</p> 
     */
    inline PutLifecycleConfigurationRequest& AddLifecyclePolicies(LifecyclePolicy&& value) { m_lifecyclePoliciesHasBeenSet = true; m_lifecyclePolicies.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::Vector<LifecyclePolicy> m_lifecyclePolicies;
    bool m_lifecyclePoliciesHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
