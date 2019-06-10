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
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{
  class AWS_PERSONALIZE_API CreateDatasetImportJobResult
  {
  public:
    CreateDatasetImportJobResult();
    CreateDatasetImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDatasetImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline const Aws::String& GetDatasetImportJobArn() const{ return m_datasetImportJobArn; }

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline void SetDatasetImportJobArn(const Aws::String& value) { m_datasetImportJobArn = value; }

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline void SetDatasetImportJobArn(Aws::String&& value) { m_datasetImportJobArn = std::move(value); }

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline void SetDatasetImportJobArn(const char* value) { m_datasetImportJobArn.assign(value); }

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline CreateDatasetImportJobResult& WithDatasetImportJobArn(const Aws::String& value) { SetDatasetImportJobArn(value); return *this;}

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline CreateDatasetImportJobResult& WithDatasetImportJobArn(Aws::String&& value) { SetDatasetImportJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline CreateDatasetImportJobResult& WithDatasetImportJobArn(const char* value) { SetDatasetImportJobArn(value); return *this;}

  private:

    Aws::String m_datasetImportJobArn;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
