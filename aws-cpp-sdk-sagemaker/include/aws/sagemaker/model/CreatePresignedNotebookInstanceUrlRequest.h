﻿/*
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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API CreatePresignedNotebookInstanceUrlRequest : public SageMakerRequest
  {
  public:
    CreatePresignedNotebookInstanceUrlRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePresignedNotebookInstanceUrl"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the notebook instance.</p>
     */
    inline const Aws::String& GetNotebookInstanceName() const{ return m_notebookInstanceName; }

    /**
     * <p>The name of the notebook instance.</p>
     */
    inline void SetNotebookInstanceName(const Aws::String& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = value; }

    /**
     * <p>The name of the notebook instance.</p>
     */
    inline void SetNotebookInstanceName(Aws::String&& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = std::move(value); }

    /**
     * <p>The name of the notebook instance.</p>
     */
    inline void SetNotebookInstanceName(const char* value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName.assign(value); }

    /**
     * <p>The name of the notebook instance.</p>
     */
    inline CreatePresignedNotebookInstanceUrlRequest& WithNotebookInstanceName(const Aws::String& value) { SetNotebookInstanceName(value); return *this;}

    /**
     * <p>The name of the notebook instance.</p>
     */
    inline CreatePresignedNotebookInstanceUrlRequest& WithNotebookInstanceName(Aws::String&& value) { SetNotebookInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the notebook instance.</p>
     */
    inline CreatePresignedNotebookInstanceUrlRequest& WithNotebookInstanceName(const char* value) { SetNotebookInstanceName(value); return *this;}


    /**
     * <p>The duration of the session, in seconds. The default is 12 hours.</p>
     */
    inline int GetSessionExpirationDurationInSeconds() const{ return m_sessionExpirationDurationInSeconds; }

    /**
     * <p>The duration of the session, in seconds. The default is 12 hours.</p>
     */
    inline void SetSessionExpirationDurationInSeconds(int value) { m_sessionExpirationDurationInSecondsHasBeenSet = true; m_sessionExpirationDurationInSeconds = value; }

    /**
     * <p>The duration of the session, in seconds. The default is 12 hours.</p>
     */
    inline CreatePresignedNotebookInstanceUrlRequest& WithSessionExpirationDurationInSeconds(int value) { SetSessionExpirationDurationInSeconds(value); return *this;}

  private:

    Aws::String m_notebookInstanceName;
    bool m_notebookInstanceNameHasBeenSet;

    int m_sessionExpirationDurationInSeconds;
    bool m_sessionExpirationDurationInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
