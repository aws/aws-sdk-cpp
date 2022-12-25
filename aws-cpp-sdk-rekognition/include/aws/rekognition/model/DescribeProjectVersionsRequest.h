/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class DescribeProjectVersionsRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DescribeProjectVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProjectVersions"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the project that contains the models you
     * want to describe.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project that contains the models you
     * want to describe.</p>
     */
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project that contains the models you
     * want to describe.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project that contains the models you
     * want to describe.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project that contains the models you
     * want to describe.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project that contains the models you
     * want to describe.</p>
     */
    inline DescribeProjectVersionsRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project that contains the models you
     * want to describe.</p>
     */
    inline DescribeProjectVersionsRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project that contains the models you
     * want to describe.</p>
     */
    inline DescribeProjectVersionsRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}


    /**
     * <p>A list of model version names that you want to describe. You can add up to 10
     * model version names to the list. If you don't specify a value, all model
     * descriptions are returned. A version name is part of a model (ProjectVersion)
     * ARN. For example, <code>my-model.2020-01-21T09.10.15</code> is the version name
     * in the following ARN.
     * <code>arn:aws:rekognition:us-east-1:123456789012:project/getting-started/version/<i>my-model.2020-01-21T09.10.15</i>/1234567890123</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionNames() const{ return m_versionNames; }

    /**
     * <p>A list of model version names that you want to describe. You can add up to 10
     * model version names to the list. If you don't specify a value, all model
     * descriptions are returned. A version name is part of a model (ProjectVersion)
     * ARN. For example, <code>my-model.2020-01-21T09.10.15</code> is the version name
     * in the following ARN.
     * <code>arn:aws:rekognition:us-east-1:123456789012:project/getting-started/version/<i>my-model.2020-01-21T09.10.15</i>/1234567890123</code>.</p>
     */
    inline bool VersionNamesHasBeenSet() const { return m_versionNamesHasBeenSet; }

    /**
     * <p>A list of model version names that you want to describe. You can add up to 10
     * model version names to the list. If you don't specify a value, all model
     * descriptions are returned. A version name is part of a model (ProjectVersion)
     * ARN. For example, <code>my-model.2020-01-21T09.10.15</code> is the version name
     * in the following ARN.
     * <code>arn:aws:rekognition:us-east-1:123456789012:project/getting-started/version/<i>my-model.2020-01-21T09.10.15</i>/1234567890123</code>.</p>
     */
    inline void SetVersionNames(const Aws::Vector<Aws::String>& value) { m_versionNamesHasBeenSet = true; m_versionNames = value; }

    /**
     * <p>A list of model version names that you want to describe. You can add up to 10
     * model version names to the list. If you don't specify a value, all model
     * descriptions are returned. A version name is part of a model (ProjectVersion)
     * ARN. For example, <code>my-model.2020-01-21T09.10.15</code> is the version name
     * in the following ARN.
     * <code>arn:aws:rekognition:us-east-1:123456789012:project/getting-started/version/<i>my-model.2020-01-21T09.10.15</i>/1234567890123</code>.</p>
     */
    inline void SetVersionNames(Aws::Vector<Aws::String>&& value) { m_versionNamesHasBeenSet = true; m_versionNames = std::move(value); }

    /**
     * <p>A list of model version names that you want to describe. You can add up to 10
     * model version names to the list. If you don't specify a value, all model
     * descriptions are returned. A version name is part of a model (ProjectVersion)
     * ARN. For example, <code>my-model.2020-01-21T09.10.15</code> is the version name
     * in the following ARN.
     * <code>arn:aws:rekognition:us-east-1:123456789012:project/getting-started/version/<i>my-model.2020-01-21T09.10.15</i>/1234567890123</code>.</p>
     */
    inline DescribeProjectVersionsRequest& WithVersionNames(const Aws::Vector<Aws::String>& value) { SetVersionNames(value); return *this;}

    /**
     * <p>A list of model version names that you want to describe. You can add up to 10
     * model version names to the list. If you don't specify a value, all model
     * descriptions are returned. A version name is part of a model (ProjectVersion)
     * ARN. For example, <code>my-model.2020-01-21T09.10.15</code> is the version name
     * in the following ARN.
     * <code>arn:aws:rekognition:us-east-1:123456789012:project/getting-started/version/<i>my-model.2020-01-21T09.10.15</i>/1234567890123</code>.</p>
     */
    inline DescribeProjectVersionsRequest& WithVersionNames(Aws::Vector<Aws::String>&& value) { SetVersionNames(std::move(value)); return *this;}

    /**
     * <p>A list of model version names that you want to describe. You can add up to 10
     * model version names to the list. If you don't specify a value, all model
     * descriptions are returned. A version name is part of a model (ProjectVersion)
     * ARN. For example, <code>my-model.2020-01-21T09.10.15</code> is the version name
     * in the following ARN.
     * <code>arn:aws:rekognition:us-east-1:123456789012:project/getting-started/version/<i>my-model.2020-01-21T09.10.15</i>/1234567890123</code>.</p>
     */
    inline DescribeProjectVersionsRequest& AddVersionNames(const Aws::String& value) { m_versionNamesHasBeenSet = true; m_versionNames.push_back(value); return *this; }

    /**
     * <p>A list of model version names that you want to describe. You can add up to 10
     * model version names to the list. If you don't specify a value, all model
     * descriptions are returned. A version name is part of a model (ProjectVersion)
     * ARN. For example, <code>my-model.2020-01-21T09.10.15</code> is the version name
     * in the following ARN.
     * <code>arn:aws:rekognition:us-east-1:123456789012:project/getting-started/version/<i>my-model.2020-01-21T09.10.15</i>/1234567890123</code>.</p>
     */
    inline DescribeProjectVersionsRequest& AddVersionNames(Aws::String&& value) { m_versionNamesHasBeenSet = true; m_versionNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of model version names that you want to describe. You can add up to 10
     * model version names to the list. If you don't specify a value, all model
     * descriptions are returned. A version name is part of a model (ProjectVersion)
     * ARN. For example, <code>my-model.2020-01-21T09.10.15</code> is the version name
     * in the following ARN.
     * <code>arn:aws:rekognition:us-east-1:123456789012:project/getting-started/version/<i>my-model.2020-01-21T09.10.15</i>/1234567890123</code>.</p>
     */
    inline DescribeProjectVersionsRequest& AddVersionNames(const char* value) { m_versionNamesHasBeenSet = true; m_versionNames.push_back(value); return *this; }


    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline DescribeProjectVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline DescribeProjectVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline DescribeProjectVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline DescribeProjectVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_versionNames;
    bool m_versionNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
