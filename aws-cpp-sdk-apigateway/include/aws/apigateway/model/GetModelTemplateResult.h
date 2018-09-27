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
   * <p>Represents a mapping template used to transform a payload.</p> <div
   * class="seeAlso"> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/models-mappings.html#models-mappings-mappings">Mapping
   * Templates</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Template">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetModelTemplateResult
  {
  public:
    GetModelTemplateResult();
    GetModelTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetModelTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Apache <a
     * href="https://velocity.apache.org/engine/devel/vtl-reference-guide.html"
     * target="_blank">Velocity Template Language (VTL)</a> template content used for
     * the template resource.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The Apache <a
     * href="https://velocity.apache.org/engine/devel/vtl-reference-guide.html"
     * target="_blank">Velocity Template Language (VTL)</a> template content used for
     * the template resource.</p>
     */
    inline void SetValue(const Aws::String& value) { m_value = value; }

    /**
     * <p>The Apache <a
     * href="https://velocity.apache.org/engine/devel/vtl-reference-guide.html"
     * target="_blank">Velocity Template Language (VTL)</a> template content used for
     * the template resource.</p>
     */
    inline void SetValue(Aws::String&& value) { m_value = std::move(value); }

    /**
     * <p>The Apache <a
     * href="https://velocity.apache.org/engine/devel/vtl-reference-guide.html"
     * target="_blank">Velocity Template Language (VTL)</a> template content used for
     * the template resource.</p>
     */
    inline void SetValue(const char* value) { m_value.assign(value); }

    /**
     * <p>The Apache <a
     * href="https://velocity.apache.org/engine/devel/vtl-reference-guide.html"
     * target="_blank">Velocity Template Language (VTL)</a> template content used for
     * the template resource.</p>
     */
    inline GetModelTemplateResult& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The Apache <a
     * href="https://velocity.apache.org/engine/devel/vtl-reference-guide.html"
     * target="_blank">Velocity Template Language (VTL)</a> template content used for
     * the template resource.</p>
     */
    inline GetModelTemplateResult& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The Apache <a
     * href="https://velocity.apache.org/engine/devel/vtl-reference-guide.html"
     * target="_blank">Velocity Template Language (VTL)</a> template content used for
     * the template resource.</p>
     */
    inline GetModelTemplateResult& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_value;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
