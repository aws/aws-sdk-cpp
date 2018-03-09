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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class AWS_SAGEMAKER_API CreatePresignedNotebookInstanceUrlResult
  {
  public:
    CreatePresignedNotebookInstanceUrlResult();
    CreatePresignedNotebookInstanceUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePresignedNotebookInstanceUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A JSON object that contains the URL string. </p>
     */
    inline const Aws::String& GetAuthorizedUrl() const{ return m_authorizedUrl; }

    /**
     * <p>A JSON object that contains the URL string. </p>
     */
    inline void SetAuthorizedUrl(const Aws::String& value) { m_authorizedUrl = value; }

    /**
     * <p>A JSON object that contains the URL string. </p>
     */
    inline void SetAuthorizedUrl(Aws::String&& value) { m_authorizedUrl = std::move(value); }

    /**
     * <p>A JSON object that contains the URL string. </p>
     */
    inline void SetAuthorizedUrl(const char* value) { m_authorizedUrl.assign(value); }

    /**
     * <p>A JSON object that contains the URL string. </p>
     */
    inline CreatePresignedNotebookInstanceUrlResult& WithAuthorizedUrl(const Aws::String& value) { SetAuthorizedUrl(value); return *this;}

    /**
     * <p>A JSON object that contains the URL string. </p>
     */
    inline CreatePresignedNotebookInstanceUrlResult& WithAuthorizedUrl(Aws::String&& value) { SetAuthorizedUrl(std::move(value)); return *this;}

    /**
     * <p>A JSON object that contains the URL string. </p>
     */
    inline CreatePresignedNotebookInstanceUrlResult& WithAuthorizedUrl(const char* value) { SetAuthorizedUrl(value); return *this;}

  private:

    Aws::String m_authorizedUrl;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
