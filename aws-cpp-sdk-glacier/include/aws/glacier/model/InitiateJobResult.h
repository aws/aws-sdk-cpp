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
#include <aws/glacier/Glacier_EXPORTS.h>
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
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/InitiateJobOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GLACIER_API InitiateJobResult
  {
  public:
    InitiateJobResult();
    InitiateJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    InitiateJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The relative URI path of the job.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The relative URI path of the job.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The relative URI path of the job.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The relative URI path of the job.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The relative URI path of the job.</p>
     */
    inline InitiateJobResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The relative URI path of the job.</p>
     */
    inline InitiateJobResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The relative URI path of the job.</p>
     */
    inline InitiateJobResult& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The ID of the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The ID of the job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The ID of the job.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The ID of the job.</p>
     */
    inline InitiateJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job.</p>
     */
    inline InitiateJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job.</p>
     */
    inline InitiateJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The path to the location of where the select results are stored.</p>
     */
    inline const Aws::String& GetJobOutputPath() const{ return m_jobOutputPath; }

    /**
     * <p>The path to the location of where the select results are stored.</p>
     */
    inline void SetJobOutputPath(const Aws::String& value) { m_jobOutputPath = value; }

    /**
     * <p>The path to the location of where the select results are stored.</p>
     */
    inline void SetJobOutputPath(Aws::String&& value) { m_jobOutputPath = std::move(value); }

    /**
     * <p>The path to the location of where the select results are stored.</p>
     */
    inline void SetJobOutputPath(const char* value) { m_jobOutputPath.assign(value); }

    /**
     * <p>The path to the location of where the select results are stored.</p>
     */
    inline InitiateJobResult& WithJobOutputPath(const Aws::String& value) { SetJobOutputPath(value); return *this;}

    /**
     * <p>The path to the location of where the select results are stored.</p>
     */
    inline InitiateJobResult& WithJobOutputPath(Aws::String&& value) { SetJobOutputPath(std::move(value)); return *this;}

    /**
     * <p>The path to the location of where the select results are stored.</p>
     */
    inline InitiateJobResult& WithJobOutputPath(const char* value) { SetJobOutputPath(value); return *this;}

  private:

    Aws::String m_location;

    Aws::String m_jobId;

    Aws::String m_jobOutputPath;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
