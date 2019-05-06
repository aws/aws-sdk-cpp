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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API DetachObjectRequest : public CloudDirectoryRequest
  {
  public:
    DetachObjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachObject"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where objects reside. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where objects reside. For more information, see <a>arns</a>.</p>
     */
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where objects reside. For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where objects reside. For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where objects reside. For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where objects reside. For more information, see <a>arns</a>.</p>
     */
    inline DetachObjectRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where objects reside. For more information, see <a>arns</a>.</p>
     */
    inline DetachObjectRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where objects reside. For more information, see <a>arns</a>.</p>
     */
    inline DetachObjectRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}


    /**
     * <p>The parent reference from which the object with the specified link name is
     * detached.</p>
     */
    inline const ObjectReference& GetParentReference() const{ return m_parentReference; }

    /**
     * <p>The parent reference from which the object with the specified link name is
     * detached.</p>
     */
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }

    /**
     * <p>The parent reference from which the object with the specified link name is
     * detached.</p>
     */
    inline void SetParentReference(const ObjectReference& value) { m_parentReferenceHasBeenSet = true; m_parentReference = value; }

    /**
     * <p>The parent reference from which the object with the specified link name is
     * detached.</p>
     */
    inline void SetParentReference(ObjectReference&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::move(value); }

    /**
     * <p>The parent reference from which the object with the specified link name is
     * detached.</p>
     */
    inline DetachObjectRequest& WithParentReference(const ObjectReference& value) { SetParentReference(value); return *this;}

    /**
     * <p>The parent reference from which the object with the specified link name is
     * detached.</p>
     */
    inline DetachObjectRequest& WithParentReference(ObjectReference&& value) { SetParentReference(std::move(value)); return *this;}


    /**
     * <p>The link name associated with the object that needs to be detached.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }

    /**
     * <p>The link name associated with the object that needs to be detached.</p>
     */
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }

    /**
     * <p>The link name associated with the object that needs to be detached.</p>
     */
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }

    /**
     * <p>The link name associated with the object that needs to be detached.</p>
     */
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = std::move(value); }

    /**
     * <p>The link name associated with the object that needs to be detached.</p>
     */
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }

    /**
     * <p>The link name associated with the object that needs to be detached.</p>
     */
    inline DetachObjectRequest& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}

    /**
     * <p>The link name associated with the object that needs to be detached.</p>
     */
    inline DetachObjectRequest& WithLinkName(Aws::String&& value) { SetLinkName(std::move(value)); return *this;}

    /**
     * <p>The link name associated with the object that needs to be detached.</p>
     */
    inline DetachObjectRequest& WithLinkName(const char* value) { SetLinkName(value); return *this;}

  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;

    ObjectReference m_parentReference;
    bool m_parentReferenceHasBeenSet;

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
