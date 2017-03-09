/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
   * <p>Represents a REST API.</p> <div class="seeAlso"> <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Create
   * an API</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/RestApi">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API ImportRestApiResult
  {
  public:
    ImportRestApiResult();
    ImportRestApiResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ImportRestApiResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * Amazon API Gateway.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * Amazon API Gateway.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * Amazon API Gateway.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = value; }

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * Amazon API Gateway.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * Amazon API Gateway.</p>
     */
    inline ImportRestApiResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * Amazon API Gateway.</p>
     */
    inline ImportRestApiResult& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * Amazon API Gateway.</p>
     */
    inline ImportRestApiResult& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The API's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The API's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The API's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = value; }

    /**
     * <p>The API's name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The API's name.</p>
     */
    inline ImportRestApiResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The API's name.</p>
     */
    inline ImportRestApiResult& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The API's name.</p>
     */
    inline ImportRestApiResult& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The API's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The API's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The API's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    /**
     * <p>The API's description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The API's description.</p>
     */
    inline ImportRestApiResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The API's description.</p>
     */
    inline ImportRestApiResult& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The API's description.</p>
     */
    inline ImportRestApiResult& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = value; }

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline ImportRestApiResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline ImportRestApiResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>A version identifier for the API.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = value; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline ImportRestApiResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>A version identifier for the API.</p>
     */
    inline ImportRestApiResult& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>A version identifier for the API.</p>
     */
    inline ImportRestApiResult& WithVersion(const char* value) { SetVersion(value); return *this;}

    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline void SetWarnings(const Aws::Vector<Aws::String>& value) { m_warnings = value; }

    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline void SetWarnings(Aws::Vector<Aws::String>&& value) { m_warnings = value; }

    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline ImportRestApiResult& WithWarnings(const Aws::Vector<Aws::String>& value) { SetWarnings(value); return *this;}

    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline ImportRestApiResult& WithWarnings(Aws::Vector<Aws::String>&& value) { SetWarnings(value); return *this;}

    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline ImportRestApiResult& AddWarnings(const Aws::String& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline ImportRestApiResult& AddWarnings(Aws::String&& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline ImportRestApiResult& AddWarnings(const char* value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBinaryMediaTypes() const{ return m_binaryMediaTypes; }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline void SetBinaryMediaTypes(const Aws::Vector<Aws::String>& value) { m_binaryMediaTypes = value; }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline void SetBinaryMediaTypes(Aws::Vector<Aws::String>&& value) { m_binaryMediaTypes = value; }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline ImportRestApiResult& WithBinaryMediaTypes(const Aws::Vector<Aws::String>& value) { SetBinaryMediaTypes(value); return *this;}

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline ImportRestApiResult& WithBinaryMediaTypes(Aws::Vector<Aws::String>&& value) { SetBinaryMediaTypes(value); return *this;}

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline ImportRestApiResult& AddBinaryMediaTypes(const Aws::String& value) { m_binaryMediaTypes.push_back(value); return *this; }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline ImportRestApiResult& AddBinaryMediaTypes(Aws::String&& value) { m_binaryMediaTypes.push_back(value); return *this; }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline ImportRestApiResult& AddBinaryMediaTypes(const char* value) { m_binaryMediaTypes.push_back(value); return *this; }

  private:
    Aws::String m_id;
    Aws::String m_name;
    Aws::String m_description;
    Aws::Utils::DateTime m_createdDate;
    Aws::String m_version;
    Aws::Vector<Aws::String> m_warnings;
    Aws::Vector<Aws::String> m_binaryMediaTypes;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
