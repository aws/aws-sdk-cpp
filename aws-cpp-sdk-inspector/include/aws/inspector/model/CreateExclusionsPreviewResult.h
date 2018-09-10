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
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{
  class AWS_INSPECTOR_API CreateExclusionsPreviewResult
  {
  public:
    CreateExclusionsPreviewResult();
    CreateExclusionsPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateExclusionsPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the unique identifier of the requested exclusions preview. You can
     * use the unique identifier to retrieve the exclusions preview when running the
     * GetExclusionsPreview API.</p>
     */
    inline const Aws::String& GetPreviewToken() const{ return m_previewToken; }

    /**
     * <p>Specifies the unique identifier of the requested exclusions preview. You can
     * use the unique identifier to retrieve the exclusions preview when running the
     * GetExclusionsPreview API.</p>
     */
    inline void SetPreviewToken(const Aws::String& value) { m_previewToken = value; }

    /**
     * <p>Specifies the unique identifier of the requested exclusions preview. You can
     * use the unique identifier to retrieve the exclusions preview when running the
     * GetExclusionsPreview API.</p>
     */
    inline void SetPreviewToken(Aws::String&& value) { m_previewToken = std::move(value); }

    /**
     * <p>Specifies the unique identifier of the requested exclusions preview. You can
     * use the unique identifier to retrieve the exclusions preview when running the
     * GetExclusionsPreview API.</p>
     */
    inline void SetPreviewToken(const char* value) { m_previewToken.assign(value); }

    /**
     * <p>Specifies the unique identifier of the requested exclusions preview. You can
     * use the unique identifier to retrieve the exclusions preview when running the
     * GetExclusionsPreview API.</p>
     */
    inline CreateExclusionsPreviewResult& WithPreviewToken(const Aws::String& value) { SetPreviewToken(value); return *this;}

    /**
     * <p>Specifies the unique identifier of the requested exclusions preview. You can
     * use the unique identifier to retrieve the exclusions preview when running the
     * GetExclusionsPreview API.</p>
     */
    inline CreateExclusionsPreviewResult& WithPreviewToken(Aws::String&& value) { SetPreviewToken(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique identifier of the requested exclusions preview. You can
     * use the unique identifier to retrieve the exclusions preview when running the
     * GetExclusionsPreview API.</p>
     */
    inline CreateExclusionsPreviewResult& WithPreviewToken(const char* value) { SetPreviewToken(value); return *this;}

  private:

    Aws::String m_previewToken;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
