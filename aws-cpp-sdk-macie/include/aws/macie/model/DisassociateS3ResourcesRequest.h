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
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/macie/MacieRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie/model/S3Resource.h>
#include <utility>

namespace Aws
{
namespace Macie
{
namespace Model
{

  /**
   */
  class AWS_MACIE_API DisassociateS3ResourcesRequest : public MacieRequest
  {
  public:
    DisassociateS3ResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateS3Resources"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to remove
     * from being monitored by Amazon Macie. </p>
     */
    inline const Aws::String& GetMemberAccountId() const{ return m_memberAccountId; }

    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to remove
     * from being monitored by Amazon Macie. </p>
     */
    inline bool MemberAccountIdHasBeenSet() const { return m_memberAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to remove
     * from being monitored by Amazon Macie. </p>
     */
    inline void SetMemberAccountId(const Aws::String& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = value; }

    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to remove
     * from being monitored by Amazon Macie. </p>
     */
    inline void SetMemberAccountId(Aws::String&& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to remove
     * from being monitored by Amazon Macie. </p>
     */
    inline void SetMemberAccountId(const char* value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to remove
     * from being monitored by Amazon Macie. </p>
     */
    inline DisassociateS3ResourcesRequest& WithMemberAccountId(const Aws::String& value) { SetMemberAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to remove
     * from being monitored by Amazon Macie. </p>
     */
    inline DisassociateS3ResourcesRequest& WithMemberAccountId(Aws::String&& value) { SetMemberAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Macie member account whose resources you want to remove
     * from being monitored by Amazon Macie. </p>
     */
    inline DisassociateS3ResourcesRequest& WithMemberAccountId(const char* value) { SetMemberAccountId(value); return *this;}


    /**
     * <p>The S3 resources (buckets or prefixes) that you want to remove from being
     * monitored and classified by Amazon Macie. </p>
     */
    inline const Aws::Vector<S3Resource>& GetAssociatedS3Resources() const{ return m_associatedS3Resources; }

    /**
     * <p>The S3 resources (buckets or prefixes) that you want to remove from being
     * monitored and classified by Amazon Macie. </p>
     */
    inline bool AssociatedS3ResourcesHasBeenSet() const { return m_associatedS3ResourcesHasBeenSet; }

    /**
     * <p>The S3 resources (buckets or prefixes) that you want to remove from being
     * monitored and classified by Amazon Macie. </p>
     */
    inline void SetAssociatedS3Resources(const Aws::Vector<S3Resource>& value) { m_associatedS3ResourcesHasBeenSet = true; m_associatedS3Resources = value; }

    /**
     * <p>The S3 resources (buckets or prefixes) that you want to remove from being
     * monitored and classified by Amazon Macie. </p>
     */
    inline void SetAssociatedS3Resources(Aws::Vector<S3Resource>&& value) { m_associatedS3ResourcesHasBeenSet = true; m_associatedS3Resources = std::move(value); }

    /**
     * <p>The S3 resources (buckets or prefixes) that you want to remove from being
     * monitored and classified by Amazon Macie. </p>
     */
    inline DisassociateS3ResourcesRequest& WithAssociatedS3Resources(const Aws::Vector<S3Resource>& value) { SetAssociatedS3Resources(value); return *this;}

    /**
     * <p>The S3 resources (buckets or prefixes) that you want to remove from being
     * monitored and classified by Amazon Macie. </p>
     */
    inline DisassociateS3ResourcesRequest& WithAssociatedS3Resources(Aws::Vector<S3Resource>&& value) { SetAssociatedS3Resources(std::move(value)); return *this;}

    /**
     * <p>The S3 resources (buckets or prefixes) that you want to remove from being
     * monitored and classified by Amazon Macie. </p>
     */
    inline DisassociateS3ResourcesRequest& AddAssociatedS3Resources(const S3Resource& value) { m_associatedS3ResourcesHasBeenSet = true; m_associatedS3Resources.push_back(value); return *this; }

    /**
     * <p>The S3 resources (buckets or prefixes) that you want to remove from being
     * monitored and classified by Amazon Macie. </p>
     */
    inline DisassociateS3ResourcesRequest& AddAssociatedS3Resources(S3Resource&& value) { m_associatedS3ResourcesHasBeenSet = true; m_associatedS3Resources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_memberAccountId;
    bool m_memberAccountIdHasBeenSet;

    Aws::Vector<S3Resource> m_associatedS3Resources;
    bool m_associatedS3ResourcesHasBeenSet;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
