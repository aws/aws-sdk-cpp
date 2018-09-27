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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>A collection of the imported <a>DocumentationPart</a> identifiers.</p> <div
   * class="remarks">This is used to return the result when documentation parts in an
   * external (e.g., OpenAPI) file are imported into API Gateway</div> <div
   * class="seeAlso"> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-documenting-api.html">Documenting
   * an API</a>, <a
   * href="https://docs.aws.amazon.com/apigateway/api-reference/link-relation/documentationpart-import/">documentationpart:import</a>,
   * <a>DocumentationPart</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DocumentationPartIds">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API ImportDocumentationPartsResult
  {
  public:
    ImportDocumentationPartsResult();
    ImportDocumentationPartsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ImportDocumentationPartsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the returned documentation part identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }

    /**
     * <p>A list of the returned documentation part identifiers.</p>
     */
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_ids = value; }

    /**
     * <p>A list of the returned documentation part identifiers.</p>
     */
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_ids = std::move(value); }

    /**
     * <p>A list of the returned documentation part identifiers.</p>
     */
    inline ImportDocumentationPartsResult& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}

    /**
     * <p>A list of the returned documentation part identifiers.</p>
     */
    inline ImportDocumentationPartsResult& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}

    /**
     * <p>A list of the returned documentation part identifiers.</p>
     */
    inline ImportDocumentationPartsResult& AddIds(const Aws::String& value) { m_ids.push_back(value); return *this; }

    /**
     * <p>A list of the returned documentation part identifiers.</p>
     */
    inline ImportDocumentationPartsResult& AddIds(Aws::String&& value) { m_ids.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the returned documentation part identifiers.</p>
     */
    inline ImportDocumentationPartsResult& AddIds(const char* value) { m_ids.push_back(value); return *this; }


    /**
     * <p>A list of warning messages reported during import of documentation parts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>A list of warning messages reported during import of documentation parts.</p>
     */
    inline void SetWarnings(const Aws::Vector<Aws::String>& value) { m_warnings = value; }

    /**
     * <p>A list of warning messages reported during import of documentation parts.</p>
     */
    inline void SetWarnings(Aws::Vector<Aws::String>&& value) { m_warnings = std::move(value); }

    /**
     * <p>A list of warning messages reported during import of documentation parts.</p>
     */
    inline ImportDocumentationPartsResult& WithWarnings(const Aws::Vector<Aws::String>& value) { SetWarnings(value); return *this;}

    /**
     * <p>A list of warning messages reported during import of documentation parts.</p>
     */
    inline ImportDocumentationPartsResult& WithWarnings(Aws::Vector<Aws::String>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>A list of warning messages reported during import of documentation parts.</p>
     */
    inline ImportDocumentationPartsResult& AddWarnings(const Aws::String& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>A list of warning messages reported during import of documentation parts.</p>
     */
    inline ImportDocumentationPartsResult& AddWarnings(Aws::String&& value) { m_warnings.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of warning messages reported during import of documentation parts.</p>
     */
    inline ImportDocumentationPartsResult& AddWarnings(const char* value) { m_warnings.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_ids;

    Aws::Vector<Aws::String> m_warnings;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
