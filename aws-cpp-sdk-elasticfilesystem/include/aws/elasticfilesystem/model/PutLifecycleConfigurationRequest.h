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
  class AWS_EFS_API PutLifecycleConfigurationRequest : public EFSRequest
  {
  public:
    PutLifecycleConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLifecycleConfiguration"; }

    Aws::String SerializePayload() const override;


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
     * <code>LifecycleConfiguration</code> object tells lifecycle management when to
     * transition files from the Standard storage class to the Infrequent Access
     * storage class.</p>
     */
    inline const Aws::Vector<LifecyclePolicy>& GetLifecyclePolicies() const{ return m_lifecyclePolicies; }

    /**
     * <p>An array of <code>LifecyclePolicy</code> objects that define the file
     * system's <code>LifecycleConfiguration</code> object. A
     * <code>LifecycleConfiguration</code> object tells lifecycle management when to
     * transition files from the Standard storage class to the Infrequent Access
     * storage class.</p>
     */
    inline bool LifecyclePoliciesHasBeenSet() const { return m_lifecyclePoliciesHasBeenSet; }

    /**
     * <p>An array of <code>LifecyclePolicy</code> objects that define the file
     * system's <code>LifecycleConfiguration</code> object. A
     * <code>LifecycleConfiguration</code> object tells lifecycle management when to
     * transition files from the Standard storage class to the Infrequent Access
     * storage class.</p>
     */
    inline void SetLifecyclePolicies(const Aws::Vector<LifecyclePolicy>& value) { m_lifecyclePoliciesHasBeenSet = true; m_lifecyclePolicies = value; }

    /**
     * <p>An array of <code>LifecyclePolicy</code> objects that define the file
     * system's <code>LifecycleConfiguration</code> object. A
     * <code>LifecycleConfiguration</code> object tells lifecycle management when to
     * transition files from the Standard storage class to the Infrequent Access
     * storage class.</p>
     */
    inline void SetLifecyclePolicies(Aws::Vector<LifecyclePolicy>&& value) { m_lifecyclePoliciesHasBeenSet = true; m_lifecyclePolicies = std::move(value); }

    /**
     * <p>An array of <code>LifecyclePolicy</code> objects that define the file
     * system's <code>LifecycleConfiguration</code> object. A
     * <code>LifecycleConfiguration</code> object tells lifecycle management when to
     * transition files from the Standard storage class to the Infrequent Access
     * storage class.</p>
     */
    inline PutLifecycleConfigurationRequest& WithLifecyclePolicies(const Aws::Vector<LifecyclePolicy>& value) { SetLifecyclePolicies(value); return *this;}

    /**
     * <p>An array of <code>LifecyclePolicy</code> objects that define the file
     * system's <code>LifecycleConfiguration</code> object. A
     * <code>LifecycleConfiguration</code> object tells lifecycle management when to
     * transition files from the Standard storage class to the Infrequent Access
     * storage class.</p>
     */
    inline PutLifecycleConfigurationRequest& WithLifecyclePolicies(Aws::Vector<LifecyclePolicy>&& value) { SetLifecyclePolicies(std::move(value)); return *this;}

    /**
     * <p>An array of <code>LifecyclePolicy</code> objects that define the file
     * system's <code>LifecycleConfiguration</code> object. A
     * <code>LifecycleConfiguration</code> object tells lifecycle management when to
     * transition files from the Standard storage class to the Infrequent Access
     * storage class.</p>
     */
    inline PutLifecycleConfigurationRequest& AddLifecyclePolicies(const LifecyclePolicy& value) { m_lifecyclePoliciesHasBeenSet = true; m_lifecyclePolicies.push_back(value); return *this; }

    /**
     * <p>An array of <code>LifecyclePolicy</code> objects that define the file
     * system's <code>LifecycleConfiguration</code> object. A
     * <code>LifecycleConfiguration</code> object tells lifecycle management when to
     * transition files from the Standard storage class to the Infrequent Access
     * storage class.</p>
     */
    inline PutLifecycleConfigurationRequest& AddLifecyclePolicies(LifecyclePolicy&& value) { m_lifecyclePoliciesHasBeenSet = true; m_lifecyclePolicies.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;

    Aws::Vector<LifecyclePolicy> m_lifecyclePolicies;
    bool m_lifecyclePoliciesHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
