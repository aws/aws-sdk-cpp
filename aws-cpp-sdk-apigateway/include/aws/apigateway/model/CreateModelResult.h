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
   * <p>Represents the data structure of a method's request or response payload.</p>
   * <div class="remarks"> <p>A request model defines the data structure of the
   * client-supplied request payload. A response model defines the data structure of
   * the response payload returned by the back end. Although not required, models are
   * useful for mapping payloads between the front end and back end.</p> <p>A model
   * is used for generating an API's SDK, validating the input request body, and
   * creating a skeletal mapping template.</p> </div> <div class="seeAlso">
   * <a>Method</a>, <a>MethodResponse</a>, <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/models-mappings.html">Models
   * and Mappings</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Model">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API CreateModelResult
  {
  public:
    CreateModelResult();
    CreateModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the model resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the model resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier for the model resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier for the model resource.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier for the model resource.</p>
     */
    inline CreateModelResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the model resource.</p>
     */
    inline CreateModelResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the model resource.</p>
     */
    inline CreateModelResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the model. Must be an alphanumeric string.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the model. Must be an alphanumeric string.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the model. Must be an alphanumeric string.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the model. Must be an alphanumeric string.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the model. Must be an alphanumeric string.</p>
     */
    inline CreateModelResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the model. Must be an alphanumeric string.</p>
     */
    inline CreateModelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the model. Must be an alphanumeric string.</p>
     */
    inline CreateModelResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the model.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the model.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the model.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the model.</p>
     */
    inline CreateModelResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the model.</p>
     */
    inline CreateModelResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the model.</p>
     */
    inline CreateModelResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="https://tools.ietf.org/html/draft-zyp-json-schema-04"
     * target="_blank">JSON schema draft 4</a> model. Do not include "\* /" characters
     * in the description of any properties because such "\* /" characters may be
     * interpreted as the closing marker for comments in some languages, such as Java
     * or JavaScript, causing the installation of your API's SDK generated by API
     * Gateway to fail.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="https://tools.ietf.org/html/draft-zyp-json-schema-04"
     * target="_blank">JSON schema draft 4</a> model. Do not include "\* /" characters
     * in the description of any properties because such "\* /" characters may be
     * interpreted as the closing marker for comments in some languages, such as Java
     * or JavaScript, causing the installation of your API's SDK generated by API
     * Gateway to fail.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schema = value; }

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="https://tools.ietf.org/html/draft-zyp-json-schema-04"
     * target="_blank">JSON schema draft 4</a> model. Do not include "\* /" characters
     * in the description of any properties because such "\* /" characters may be
     * interpreted as the closing marker for comments in some languages, such as Java
     * or JavaScript, causing the installation of your API's SDK generated by API
     * Gateway to fail.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schema = std::move(value); }

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="https://tools.ietf.org/html/draft-zyp-json-schema-04"
     * target="_blank">JSON schema draft 4</a> model. Do not include "\* /" characters
     * in the description of any properties because such "\* /" characters may be
     * interpreted as the closing marker for comments in some languages, such as Java
     * or JavaScript, causing the installation of your API's SDK generated by API
     * Gateway to fail.</p>
     */
    inline void SetSchema(const char* value) { m_schema.assign(value); }

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="https://tools.ietf.org/html/draft-zyp-json-schema-04"
     * target="_blank">JSON schema draft 4</a> model. Do not include "\* /" characters
     * in the description of any properties because such "\* /" characters may be
     * interpreted as the closing marker for comments in some languages, such as Java
     * or JavaScript, causing the installation of your API's SDK generated by API
     * Gateway to fail.</p>
     */
    inline CreateModelResult& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="https://tools.ietf.org/html/draft-zyp-json-schema-04"
     * target="_blank">JSON schema draft 4</a> model. Do not include "\* /" characters
     * in the description of any properties because such "\* /" characters may be
     * interpreted as the closing marker for comments in some languages, such as Java
     * or JavaScript, causing the installation of your API's SDK generated by API
     * Gateway to fail.</p>
     */
    inline CreateModelResult& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="https://tools.ietf.org/html/draft-zyp-json-schema-04"
     * target="_blank">JSON schema draft 4</a> model. Do not include "\* /" characters
     * in the description of any properties because such "\* /" characters may be
     * interpreted as the closing marker for comments in some languages, such as Java
     * or JavaScript, causing the installation of your API's SDK generated by API
     * Gateway to fail.</p>
     */
    inline CreateModelResult& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>The content-type for the model.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content-type for the model.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The content-type for the model.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The content-type for the model.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The content-type for the model.</p>
     */
    inline CreateModelResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content-type for the model.</p>
     */
    inline CreateModelResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The content-type for the model.</p>
     */
    inline CreateModelResult& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_schema;

    Aws::String m_contentType;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
