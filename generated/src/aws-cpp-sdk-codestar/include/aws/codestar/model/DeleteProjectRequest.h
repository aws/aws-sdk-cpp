/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/codestar/CodeStarRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeStar
{
namespace Model
{

  /**
   */
  class DeleteProjectRequest : public CodeStarRequest
  {
  public:
    AWS_CODESTAR_API DeleteProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProject"; }

    AWS_CODESTAR_API Aws::String SerializePayload() const override;

    AWS_CODESTAR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the project to be deleted in AWS CodeStar.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DeleteProjectRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DeleteProjectRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DeleteProjectRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project deletion. This token can be used to repeat the request. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline DeleteProjectRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline DeleteProjectRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline DeleteProjectRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to send a delete request for the primary stack in AWS CloudFormation
     * originally used to generate the project and its resources. This option will
     * delete all AWS resources for the project (except for any buckets in Amazon S3)
     * as well as deleting the project itself. Recommended for most use cases.</p>
     */
    inline bool GetDeleteStack() const{ return m_deleteStack; }
    inline bool DeleteStackHasBeenSet() const { return m_deleteStackHasBeenSet; }
    inline void SetDeleteStack(bool value) { m_deleteStackHasBeenSet = true; m_deleteStack = value; }
    inline DeleteProjectRequest& WithDeleteStack(bool value) { SetDeleteStack(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    bool m_deleteStack;
    bool m_deleteStackHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
