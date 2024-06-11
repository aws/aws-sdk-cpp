/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/amplifybackend/AmplifyBackendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>The request body for ListBackendJobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/ListBackendJobsRequest">AWS
   * API Reference</a></p>
   */
  class ListBackendJobsRequest : public AmplifyBackendRequest
  {
  public:
    AWS_AMPLIFYBACKEND_API ListBackendJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBackendJobs"; }

    AWS_AMPLIFYBACKEND_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline ListBackendJobsRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline ListBackendJobsRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline ListBackendJobsRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the backend environment.</p>
     */
    inline const Aws::String& GetBackendEnvironmentName() const{ return m_backendEnvironmentName; }
    inline bool BackendEnvironmentNameHasBeenSet() const { return m_backendEnvironmentNameHasBeenSet; }
    inline void SetBackendEnvironmentName(const Aws::String& value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName = value; }
    inline void SetBackendEnvironmentName(Aws::String&& value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName = std::move(value); }
    inline void SetBackendEnvironmentName(const char* value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName.assign(value); }
    inline ListBackendJobsRequest& WithBackendEnvironmentName(const Aws::String& value) { SetBackendEnvironmentName(value); return *this;}
    inline ListBackendJobsRequest& WithBackendEnvironmentName(Aws::String&& value) { SetBackendEnvironmentName(std::move(value)); return *this;}
    inline ListBackendJobsRequest& WithBackendEnvironmentName(const char* value) { SetBackendEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline ListBackendJobsRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline ListBackendJobsRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline ListBackendJobsRequest& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results that you want in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBackendJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListBackendJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBackendJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBackendJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of response objects to include only those with the specified
     * operation name.</p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }
    inline ListBackendJobsRequest& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline ListBackendJobsRequest& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline ListBackendJobsRequest& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of response objects to include only those with the specified
     * status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline ListBackendJobsRequest& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ListBackendJobsRequest& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ListBackendJobsRequest& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_backendEnvironmentName;
    bool m_backendEnvironmentNameHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
