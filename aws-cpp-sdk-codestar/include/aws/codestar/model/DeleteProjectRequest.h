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
  class AWS_CODESTAR_API DeleteProjectRequest : public CodeStarRequest
  {
  public:
    DeleteProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProject"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the project to be deleted in AWS CodeStar.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the project to be deleted in AWS CodeStar.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the project to be deleted in AWS CodeStar.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the project to be deleted in AWS CodeStar.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the project to be deleted in AWS CodeStar.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the project to be deleted in AWS CodeStar.</p>
     */
    inline DeleteProjectRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the project to be deleted in AWS CodeStar.</p>
     */
    inline DeleteProjectRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project to be deleted in AWS CodeStar.</p>
     */
    inline DeleteProjectRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project deletion. This token can be used to repeat the request. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project deletion. This token can be used to repeat the request. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project deletion. This token can be used to repeat the request. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project deletion. This token can be used to repeat the request. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project deletion. This token can be used to repeat the request. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project deletion. This token can be used to repeat the request. </p>
     */
    inline DeleteProjectRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project deletion. This token can be used to repeat the request. </p>
     */
    inline DeleteProjectRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project deletion. This token can be used to repeat the request. </p>
     */
    inline DeleteProjectRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Whether to send a delete request for the primary stack in AWS CloudFormation
     * originally used to generate the project and its resources. This option will
     * delete all AWS resources for the project (except for any buckets in Amazon S3)
     * as well as deleting the project itself. Recommended for most use cases.</p>
     */
    inline bool GetDeleteStack() const{ return m_deleteStack; }

    /**
     * <p>Whether to send a delete request for the primary stack in AWS CloudFormation
     * originally used to generate the project and its resources. This option will
     * delete all AWS resources for the project (except for any buckets in Amazon S3)
     * as well as deleting the project itself. Recommended for most use cases.</p>
     */
    inline bool DeleteStackHasBeenSet() const { return m_deleteStackHasBeenSet; }

    /**
     * <p>Whether to send a delete request for the primary stack in AWS CloudFormation
     * originally used to generate the project and its resources. This option will
     * delete all AWS resources for the project (except for any buckets in Amazon S3)
     * as well as deleting the project itself. Recommended for most use cases.</p>
     */
    inline void SetDeleteStack(bool value) { m_deleteStackHasBeenSet = true; m_deleteStack = value; }

    /**
     * <p>Whether to send a delete request for the primary stack in AWS CloudFormation
     * originally used to generate the project and its resources. This option will
     * delete all AWS resources for the project (except for any buckets in Amazon S3)
     * as well as deleting the project itself. Recommended for most use cases.</p>
     */
    inline DeleteProjectRequest& WithDeleteStack(bool value) { SetDeleteStack(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    bool m_deleteStack;
    bool m_deleteStackHasBeenSet;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
