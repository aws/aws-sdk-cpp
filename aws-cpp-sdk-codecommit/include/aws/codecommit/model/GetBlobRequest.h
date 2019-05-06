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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Represents the input of a get blob operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBlobInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API GetBlobRequest : public CodeCommitRequest
  {
  public:
    GetBlobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBlob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository that contains the blob.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that contains the blob.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that contains the blob.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that contains the blob.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that contains the blob.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that contains the blob.</p>
     */
    inline GetBlobRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that contains the blob.</p>
     */
    inline GetBlobRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that contains the blob.</p>
     */
    inline GetBlobRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline const Aws::String& GetBlobId() const{ return m_blobId; }

    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline bool BlobIdHasBeenSet() const { return m_blobIdHasBeenSet; }

    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline void SetBlobId(const Aws::String& value) { m_blobIdHasBeenSet = true; m_blobId = value; }

    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline void SetBlobId(Aws::String&& value) { m_blobIdHasBeenSet = true; m_blobId = std::move(value); }

    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline void SetBlobId(const char* value) { m_blobIdHasBeenSet = true; m_blobId.assign(value); }

    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline GetBlobRequest& WithBlobId(const Aws::String& value) { SetBlobId(value); return *this;}

    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline GetBlobRequest& WithBlobId(Aws::String&& value) { SetBlobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline GetBlobRequest& WithBlobId(const char* value) { SetBlobId(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_blobId;
    bool m_blobIdHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
