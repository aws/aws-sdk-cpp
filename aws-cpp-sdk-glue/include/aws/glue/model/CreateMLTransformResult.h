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
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API CreateMLTransformResult
  {
  public:
    CreateMLTransformResult();
    CreateMLTransformResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateMLTransformResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier that is generated for the transform.</p>
     */
    inline const Aws::String& GetTransformId() const{ return m_transformId; }

    /**
     * <p>A unique identifier that is generated for the transform.</p>
     */
    inline void SetTransformId(const Aws::String& value) { m_transformId = value; }

    /**
     * <p>A unique identifier that is generated for the transform.</p>
     */
    inline void SetTransformId(Aws::String&& value) { m_transformId = std::move(value); }

    /**
     * <p>A unique identifier that is generated for the transform.</p>
     */
    inline void SetTransformId(const char* value) { m_transformId.assign(value); }

    /**
     * <p>A unique identifier that is generated for the transform.</p>
     */
    inline CreateMLTransformResult& WithTransformId(const Aws::String& value) { SetTransformId(value); return *this;}

    /**
     * <p>A unique identifier that is generated for the transform.</p>
     */
    inline CreateMLTransformResult& WithTransformId(Aws::String&& value) { SetTransformId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that is generated for the transform.</p>
     */
    inline CreateMLTransformResult& WithTransformId(const char* value) { SetTransformId(value); return *this;}

  private:

    Aws::String m_transformId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
