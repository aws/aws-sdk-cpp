/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/clouddirectory/model/ConsistencyLevel.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class ListObjectChildrenRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API ListObjectChildrenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListObjectChildren"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where the object resides. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }
    inline ListObjectChildrenRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}
    inline ListObjectChildrenRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}
    inline ListObjectChildrenRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference that identifies the object for which child objects are being
     * listed.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::move(value); }
    inline ListObjectChildrenRequest& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}
    inline ListObjectChildrenRequest& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListObjectChildrenRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListObjectChildrenRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListObjectChildrenRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to be retrieved in a single call. This is an
     * approximate number.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListObjectChildrenRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline const ConsistencyLevel& GetConsistencyLevel() const{ return m_consistencyLevel; }
    inline bool ConsistencyLevelHasBeenSet() const { return m_consistencyLevelHasBeenSet; }
    inline void SetConsistencyLevel(const ConsistencyLevel& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = value; }
    inline void SetConsistencyLevel(ConsistencyLevel&& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = std::move(value); }
    inline ListObjectChildrenRequest& WithConsistencyLevel(const ConsistencyLevel& value) { SetConsistencyLevel(value); return *this;}
    inline ListObjectChildrenRequest& WithConsistencyLevel(ConsistencyLevel&& value) { SetConsistencyLevel(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ConsistencyLevel m_consistencyLevel;
    bool m_consistencyLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
