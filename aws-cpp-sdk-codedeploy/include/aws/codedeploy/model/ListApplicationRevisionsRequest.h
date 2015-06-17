/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/codedeploy/codedeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/ApplicationRevisionSortBy.h>
#include <aws/codedeploy/model/SortOrder.h>
#include <aws/codedeploy/model/ListStateFilterAction.h>

namespace Aws
{
namespace codedeploy
{
namespace Model
{

  /*
  */
  class AWS_CODEDEPLOY_API ListApplicationRevisionsRequest : public codedeployRequest
  {
  public:
    ListApplicationRevisionsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    
    inline ListApplicationRevisionsRequest&  WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    
    inline ListApplicationRevisionsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    
    inline const ApplicationRevisionSortBy& GetSortBy() const{ return m_sortBy; }
    
    inline void SetSortBy(const ApplicationRevisionSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    
    inline ListApplicationRevisionsRequest&  WithSortBy(const ApplicationRevisionSortBy& value) { SetSortBy(value); return *this;}

    
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    
    inline ListApplicationRevisionsRequest&  WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }
    
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    
    inline ListApplicationRevisionsRequest&  WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    
    inline ListApplicationRevisionsRequest& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}

    
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }
    
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }

    
    inline ListApplicationRevisionsRequest&  WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    
    inline ListApplicationRevisionsRequest& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}

    
    inline const ListStateFilterAction& GetDeployed() const{ return m_deployed; }
    
    inline void SetDeployed(const ListStateFilterAction& value) { m_deployedHasBeenSet = true; m_deployed = value; }

    
    inline ListApplicationRevisionsRequest&  WithDeployed(const ListStateFilterAction& value) { SetDeployed(value); return *this;}

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListApplicationRevisionsRequest&  WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListApplicationRevisionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    ApplicationRevisionSortBy m_sortBy;
    bool m_sortByHasBeenSet;
    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet;
    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;
    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet;
    ListStateFilterAction m_deployed;
    bool m_deployedHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
