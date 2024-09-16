/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/SbomValidationResult.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class ListSbomValidationResultsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListSbomValidationResultsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSbomValidationResults"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the new software package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }
    inline ListSbomValidationResultsRequest& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline ListSbomValidationResultsRequest& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline ListSbomValidationResultsRequest& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new package version.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }
    inline ListSbomValidationResultsRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline ListSbomValidationResultsRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline ListSbomValidationResultsRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end result of the </p>
     */
    inline const SbomValidationResult& GetValidationResult() const{ return m_validationResult; }
    inline bool ValidationResultHasBeenSet() const { return m_validationResultHasBeenSet; }
    inline void SetValidationResult(const SbomValidationResult& value) { m_validationResultHasBeenSet = true; m_validationResult = value; }
    inline void SetValidationResult(SbomValidationResult&& value) { m_validationResultHasBeenSet = true; m_validationResult = std::move(value); }
    inline ListSbomValidationResultsRequest& WithValidationResult(const SbomValidationResult& value) { SetValidationResult(value); return *this;}
    inline ListSbomValidationResultsRequest& WithValidationResult(SbomValidationResult&& value) { SetValidationResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSbomValidationResultsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results, or null if
     * there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListSbomValidationResultsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSbomValidationResultsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSbomValidationResultsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    SbomValidationResult m_validationResult;
    bool m_validationResultHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
