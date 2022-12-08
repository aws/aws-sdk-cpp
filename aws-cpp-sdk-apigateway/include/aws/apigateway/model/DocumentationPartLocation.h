/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/model/DocumentationPartType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Specifies the target API entity to which the documentation
   * applies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DocumentationPartLocation">AWS
   * API Reference</a></p>
   */
  class DocumentationPartLocation
  {
  public:
    AWS_APIGATEWAY_API DocumentationPartLocation();
    AWS_APIGATEWAY_API DocumentationPartLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API DocumentationPartLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of API entity to which the documentation content applies. Valid
     * values are <code>API</code>, <code>AUTHORIZER</code>, <code>MODEL</code>,
     * <code>RESOURCE</code>, <code>METHOD</code>, <code>PATH_PARAMETER</code>,
     * <code>QUERY_PARAMETER</code>, <code>REQUEST_HEADER</code>,
     * <code>REQUEST_BODY</code>, <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>,
     * and <code>RESPONSE_BODY</code>. Content inheritance does not apply to any entity
     * of the <code>API</code>, <code>AUTHORIZER</code>, <code>METHOD</code>,
     * <code>MODEL</code>, <code>REQUEST_BODY</code>, or <code>RESOURCE</code>
     * type.</p>
     */
    inline const DocumentationPartType& GetType() const{ return m_type; }

    /**
     * <p>The type of API entity to which the documentation content applies. Valid
     * values are <code>API</code>, <code>AUTHORIZER</code>, <code>MODEL</code>,
     * <code>RESOURCE</code>, <code>METHOD</code>, <code>PATH_PARAMETER</code>,
     * <code>QUERY_PARAMETER</code>, <code>REQUEST_HEADER</code>,
     * <code>REQUEST_BODY</code>, <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>,
     * and <code>RESPONSE_BODY</code>. Content inheritance does not apply to any entity
     * of the <code>API</code>, <code>AUTHORIZER</code>, <code>METHOD</code>,
     * <code>MODEL</code>, <code>REQUEST_BODY</code>, or <code>RESOURCE</code>
     * type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of API entity to which the documentation content applies. Valid
     * values are <code>API</code>, <code>AUTHORIZER</code>, <code>MODEL</code>,
     * <code>RESOURCE</code>, <code>METHOD</code>, <code>PATH_PARAMETER</code>,
     * <code>QUERY_PARAMETER</code>, <code>REQUEST_HEADER</code>,
     * <code>REQUEST_BODY</code>, <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>,
     * and <code>RESPONSE_BODY</code>. Content inheritance does not apply to any entity
     * of the <code>API</code>, <code>AUTHORIZER</code>, <code>METHOD</code>,
     * <code>MODEL</code>, <code>REQUEST_BODY</code>, or <code>RESOURCE</code>
     * type.</p>
     */
    inline void SetType(const DocumentationPartType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of API entity to which the documentation content applies. Valid
     * values are <code>API</code>, <code>AUTHORIZER</code>, <code>MODEL</code>,
     * <code>RESOURCE</code>, <code>METHOD</code>, <code>PATH_PARAMETER</code>,
     * <code>QUERY_PARAMETER</code>, <code>REQUEST_HEADER</code>,
     * <code>REQUEST_BODY</code>, <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>,
     * and <code>RESPONSE_BODY</code>. Content inheritance does not apply to any entity
     * of the <code>API</code>, <code>AUTHORIZER</code>, <code>METHOD</code>,
     * <code>MODEL</code>, <code>REQUEST_BODY</code>, or <code>RESOURCE</code>
     * type.</p>
     */
    inline void SetType(DocumentationPartType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of API entity to which the documentation content applies. Valid
     * values are <code>API</code>, <code>AUTHORIZER</code>, <code>MODEL</code>,
     * <code>RESOURCE</code>, <code>METHOD</code>, <code>PATH_PARAMETER</code>,
     * <code>QUERY_PARAMETER</code>, <code>REQUEST_HEADER</code>,
     * <code>REQUEST_BODY</code>, <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>,
     * and <code>RESPONSE_BODY</code>. Content inheritance does not apply to any entity
     * of the <code>API</code>, <code>AUTHORIZER</code>, <code>METHOD</code>,
     * <code>MODEL</code>, <code>REQUEST_BODY</code>, or <code>RESOURCE</code>
     * type.</p>
     */
    inline DocumentationPartLocation& WithType(const DocumentationPartType& value) { SetType(value); return *this;}

    /**
     * <p>The type of API entity to which the documentation content applies. Valid
     * values are <code>API</code>, <code>AUTHORIZER</code>, <code>MODEL</code>,
     * <code>RESOURCE</code>, <code>METHOD</code>, <code>PATH_PARAMETER</code>,
     * <code>QUERY_PARAMETER</code>, <code>REQUEST_HEADER</code>,
     * <code>REQUEST_BODY</code>, <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>,
     * and <code>RESPONSE_BODY</code>. Content inheritance does not apply to any entity
     * of the <code>API</code>, <code>AUTHORIZER</code>, <code>METHOD</code>,
     * <code>MODEL</code>, <code>REQUEST_BODY</code>, or <code>RESOURCE</code>
     * type.</p>
     */
    inline DocumentationPartLocation& WithType(DocumentationPartType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The URL path of the target. It is a valid field for the API entity types of
     * <code>RESOURCE</code>, <code>METHOD</code>, <code>PATH_PARAMETER</code>,
     * <code>QUERY_PARAMETER</code>, <code>REQUEST_HEADER</code>,
     * <code>REQUEST_BODY</code>, <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>,
     * and <code>RESPONSE_BODY</code>. The default value is <code>/</code> for the root
     * resource. When an applicable child entity inherits the content of another entity
     * of the same type with more general specifications of the other
     * <code>location</code> attributes, the child entity's <code>path</code> attribute
     * must match that of the parent entity as a prefix.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The URL path of the target. It is a valid field for the API entity types of
     * <code>RESOURCE</code>, <code>METHOD</code>, <code>PATH_PARAMETER</code>,
     * <code>QUERY_PARAMETER</code>, <code>REQUEST_HEADER</code>,
     * <code>REQUEST_BODY</code>, <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>,
     * and <code>RESPONSE_BODY</code>. The default value is <code>/</code> for the root
     * resource. When an applicable child entity inherits the content of another entity
     * of the same type with more general specifications of the other
     * <code>location</code> attributes, the child entity's <code>path</code> attribute
     * must match that of the parent entity as a prefix.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The URL path of the target. It is a valid field for the API entity types of
     * <code>RESOURCE</code>, <code>METHOD</code>, <code>PATH_PARAMETER</code>,
     * <code>QUERY_PARAMETER</code>, <code>REQUEST_HEADER</code>,
     * <code>REQUEST_BODY</code>, <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>,
     * and <code>RESPONSE_BODY</code>. The default value is <code>/</code> for the root
     * resource. When an applicable child entity inherits the content of another entity
     * of the same type with more general specifications of the other
     * <code>location</code> attributes, the child entity's <code>path</code> attribute
     * must match that of the parent entity as a prefix.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The URL path of the target. It is a valid field for the API entity types of
     * <code>RESOURCE</code>, <code>METHOD</code>, <code>PATH_PARAMETER</code>,
     * <code>QUERY_PARAMETER</code>, <code>REQUEST_HEADER</code>,
     * <code>REQUEST_BODY</code>, <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>,
     * and <code>RESPONSE_BODY</code>. The default value is <code>/</code> for the root
     * resource. When an applicable child entity inherits the content of another entity
     * of the same type with more general specifications of the other
     * <code>location</code> attributes, the child entity's <code>path</code> attribute
     * must match that of the parent entity as a prefix.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The URL path of the target. It is a valid field for the API entity types of
     * <code>RESOURCE</code>, <code>METHOD</code>, <code>PATH_PARAMETER</code>,
     * <code>QUERY_PARAMETER</code>, <code>REQUEST_HEADER</code>,
     * <code>REQUEST_BODY</code>, <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>,
     * and <code>RESPONSE_BODY</code>. The default value is <code>/</code> for the root
     * resource. When an applicable child entity inherits the content of another entity
     * of the same type with more general specifications of the other
     * <code>location</code> attributes, the child entity's <code>path</code> attribute
     * must match that of the parent entity as a prefix.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The URL path of the target. It is a valid field for the API entity types of
     * <code>RESOURCE</code>, <code>METHOD</code>, <code>PATH_PARAMETER</code>,
     * <code>QUERY_PARAMETER</code>, <code>REQUEST_HEADER</code>,
     * <code>REQUEST_BODY</code>, <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>,
     * and <code>RESPONSE_BODY</code>. The default value is <code>/</code> for the root
     * resource. When an applicable child entity inherits the content of another entity
     * of the same type with more general specifications of the other
     * <code>location</code> attributes, the child entity's <code>path</code> attribute
     * must match that of the parent entity as a prefix.</p>
     */
    inline DocumentationPartLocation& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The URL path of the target. It is a valid field for the API entity types of
     * <code>RESOURCE</code>, <code>METHOD</code>, <code>PATH_PARAMETER</code>,
     * <code>QUERY_PARAMETER</code>, <code>REQUEST_HEADER</code>,
     * <code>REQUEST_BODY</code>, <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>,
     * and <code>RESPONSE_BODY</code>. The default value is <code>/</code> for the root
     * resource. When an applicable child entity inherits the content of another entity
     * of the same type with more general specifications of the other
     * <code>location</code> attributes, the child entity's <code>path</code> attribute
     * must match that of the parent entity as a prefix.</p>
     */
    inline DocumentationPartLocation& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The URL path of the target. It is a valid field for the API entity types of
     * <code>RESOURCE</code>, <code>METHOD</code>, <code>PATH_PARAMETER</code>,
     * <code>QUERY_PARAMETER</code>, <code>REQUEST_HEADER</code>,
     * <code>REQUEST_BODY</code>, <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>,
     * and <code>RESPONSE_BODY</code>. The default value is <code>/</code> for the root
     * resource. When an applicable child entity inherits the content of another entity
     * of the same type with more general specifications of the other
     * <code>location</code> attributes, the child entity's <code>path</code> attribute
     * must match that of the parent entity as a prefix.</p>
     */
    inline DocumentationPartLocation& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The HTTP verb of a method. It is a valid field for the API entity types of
     * <code>METHOD</code>, <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code>, <code>RESPONSE</code>,
     * <code>RESPONSE_HEADER</code>, and <code>RESPONSE_BODY</code>. The default value
     * is <code>*</code> for any method. When an applicable child entity inherits the
     * content of an entity of the same type with more general specifications of the
     * other <code>location</code> attributes, the child entity's <code>method</code>
     * attribute must match that of the parent entity exactly.</p>
     */
    inline const Aws::String& GetMethod() const{ return m_method; }

    /**
     * <p>The HTTP verb of a method. It is a valid field for the API entity types of
     * <code>METHOD</code>, <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code>, <code>RESPONSE</code>,
     * <code>RESPONSE_HEADER</code>, and <code>RESPONSE_BODY</code>. The default value
     * is <code>*</code> for any method. When an applicable child entity inherits the
     * content of an entity of the same type with more general specifications of the
     * other <code>location</code> attributes, the child entity's <code>method</code>
     * attribute must match that of the parent entity exactly.</p>
     */
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }

    /**
     * <p>The HTTP verb of a method. It is a valid field for the API entity types of
     * <code>METHOD</code>, <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code>, <code>RESPONSE</code>,
     * <code>RESPONSE_HEADER</code>, and <code>RESPONSE_BODY</code>. The default value
     * is <code>*</code> for any method. When an applicable child entity inherits the
     * content of an entity of the same type with more general specifications of the
     * other <code>location</code> attributes, the child entity's <code>method</code>
     * attribute must match that of the parent entity exactly.</p>
     */
    inline void SetMethod(const Aws::String& value) { m_methodHasBeenSet = true; m_method = value; }

    /**
     * <p>The HTTP verb of a method. It is a valid field for the API entity types of
     * <code>METHOD</code>, <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code>, <code>RESPONSE</code>,
     * <code>RESPONSE_HEADER</code>, and <code>RESPONSE_BODY</code>. The default value
     * is <code>*</code> for any method. When an applicable child entity inherits the
     * content of an entity of the same type with more general specifications of the
     * other <code>location</code> attributes, the child entity's <code>method</code>
     * attribute must match that of the parent entity exactly.</p>
     */
    inline void SetMethod(Aws::String&& value) { m_methodHasBeenSet = true; m_method = std::move(value); }

    /**
     * <p>The HTTP verb of a method. It is a valid field for the API entity types of
     * <code>METHOD</code>, <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code>, <code>RESPONSE</code>,
     * <code>RESPONSE_HEADER</code>, and <code>RESPONSE_BODY</code>. The default value
     * is <code>*</code> for any method. When an applicable child entity inherits the
     * content of an entity of the same type with more general specifications of the
     * other <code>location</code> attributes, the child entity's <code>method</code>
     * attribute must match that of the parent entity exactly.</p>
     */
    inline void SetMethod(const char* value) { m_methodHasBeenSet = true; m_method.assign(value); }

    /**
     * <p>The HTTP verb of a method. It is a valid field for the API entity types of
     * <code>METHOD</code>, <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code>, <code>RESPONSE</code>,
     * <code>RESPONSE_HEADER</code>, and <code>RESPONSE_BODY</code>. The default value
     * is <code>*</code> for any method. When an applicable child entity inherits the
     * content of an entity of the same type with more general specifications of the
     * other <code>location</code> attributes, the child entity's <code>method</code>
     * attribute must match that of the parent entity exactly.</p>
     */
    inline DocumentationPartLocation& WithMethod(const Aws::String& value) { SetMethod(value); return *this;}

    /**
     * <p>The HTTP verb of a method. It is a valid field for the API entity types of
     * <code>METHOD</code>, <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code>, <code>RESPONSE</code>,
     * <code>RESPONSE_HEADER</code>, and <code>RESPONSE_BODY</code>. The default value
     * is <code>*</code> for any method. When an applicable child entity inherits the
     * content of an entity of the same type with more general specifications of the
     * other <code>location</code> attributes, the child entity's <code>method</code>
     * attribute must match that of the parent entity exactly.</p>
     */
    inline DocumentationPartLocation& WithMethod(Aws::String&& value) { SetMethod(std::move(value)); return *this;}

    /**
     * <p>The HTTP verb of a method. It is a valid field for the API entity types of
     * <code>METHOD</code>, <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code>, <code>RESPONSE</code>,
     * <code>RESPONSE_HEADER</code>, and <code>RESPONSE_BODY</code>. The default value
     * is <code>*</code> for any method. When an applicable child entity inherits the
     * content of an entity of the same type with more general specifications of the
     * other <code>location</code> attributes, the child entity's <code>method</code>
     * attribute must match that of the parent entity exactly.</p>
     */
    inline DocumentationPartLocation& WithMethod(const char* value) { SetMethod(value); return *this;}


    /**
     * <p>The HTTP status code of a response. It is a valid field for the API entity
     * types of <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>, and
     * <code>RESPONSE_BODY</code>. The default value is <code>*</code> for any status
     * code. When an applicable child entity inherits the content of an entity of the
     * same type with more general specifications of the other <code>location</code>
     * attributes, the child entity's <code>statusCode</code> attribute must match that
     * of the parent entity exactly.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The HTTP status code of a response. It is a valid field for the API entity
     * types of <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>, and
     * <code>RESPONSE_BODY</code>. The default value is <code>*</code> for any status
     * code. When an applicable child entity inherits the content of an entity of the
     * same type with more general specifications of the other <code>location</code>
     * attributes, the child entity's <code>statusCode</code> attribute must match that
     * of the parent entity exactly.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The HTTP status code of a response. It is a valid field for the API entity
     * types of <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>, and
     * <code>RESPONSE_BODY</code>. The default value is <code>*</code> for any status
     * code. When an applicable child entity inherits the content of an entity of the
     * same type with more general specifications of the other <code>location</code>
     * attributes, the child entity's <code>statusCode</code> attribute must match that
     * of the parent entity exactly.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The HTTP status code of a response. It is a valid field for the API entity
     * types of <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>, and
     * <code>RESPONSE_BODY</code>. The default value is <code>*</code> for any status
     * code. When an applicable child entity inherits the content of an entity of the
     * same type with more general specifications of the other <code>location</code>
     * attributes, the child entity's <code>statusCode</code> attribute must match that
     * of the parent entity exactly.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The HTTP status code of a response. It is a valid field for the API entity
     * types of <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>, and
     * <code>RESPONSE_BODY</code>. The default value is <code>*</code> for any status
     * code. When an applicable child entity inherits the content of an entity of the
     * same type with more general specifications of the other <code>location</code>
     * attributes, the child entity's <code>statusCode</code> attribute must match that
     * of the parent entity exactly.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    /**
     * <p>The HTTP status code of a response. It is a valid field for the API entity
     * types of <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>, and
     * <code>RESPONSE_BODY</code>. The default value is <code>*</code> for any status
     * code. When an applicable child entity inherits the content of an entity of the
     * same type with more general specifications of the other <code>location</code>
     * attributes, the child entity's <code>statusCode</code> attribute must match that
     * of the parent entity exactly.</p>
     */
    inline DocumentationPartLocation& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The HTTP status code of a response. It is a valid field for the API entity
     * types of <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>, and
     * <code>RESPONSE_BODY</code>. The default value is <code>*</code> for any status
     * code. When an applicable child entity inherits the content of an entity of the
     * same type with more general specifications of the other <code>location</code>
     * attributes, the child entity's <code>statusCode</code> attribute must match that
     * of the parent entity exactly.</p>
     */
    inline DocumentationPartLocation& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * <p>The HTTP status code of a response. It is a valid field for the API entity
     * types of <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>, and
     * <code>RESPONSE_BODY</code>. The default value is <code>*</code> for any status
     * code. When an applicable child entity inherits the content of an entity of the
     * same type with more general specifications of the other <code>location</code>
     * attributes, the child entity's <code>statusCode</code> attribute must match that
     * of the parent entity exactly.</p>
     */
    inline DocumentationPartLocation& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}


    /**
     * <p>The name of the targeted API entity. It is a valid and required field for the
     * API entity types of <code>AUTHORIZER</code>, <code>MODEL</code>,
     * <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code> and
     * <code>RESPONSE_HEADER</code>. It is an invalid field for any other entity
     * type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the targeted API entity. It is a valid and required field for the
     * API entity types of <code>AUTHORIZER</code>, <code>MODEL</code>,
     * <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code> and
     * <code>RESPONSE_HEADER</code>. It is an invalid field for any other entity
     * type.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the targeted API entity. It is a valid and required field for the
     * API entity types of <code>AUTHORIZER</code>, <code>MODEL</code>,
     * <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code> and
     * <code>RESPONSE_HEADER</code>. It is an invalid field for any other entity
     * type.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the targeted API entity. It is a valid and required field for the
     * API entity types of <code>AUTHORIZER</code>, <code>MODEL</code>,
     * <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code> and
     * <code>RESPONSE_HEADER</code>. It is an invalid field for any other entity
     * type.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the targeted API entity. It is a valid and required field for the
     * API entity types of <code>AUTHORIZER</code>, <code>MODEL</code>,
     * <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code> and
     * <code>RESPONSE_HEADER</code>. It is an invalid field for any other entity
     * type.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the targeted API entity. It is a valid and required field for the
     * API entity types of <code>AUTHORIZER</code>, <code>MODEL</code>,
     * <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code> and
     * <code>RESPONSE_HEADER</code>. It is an invalid field for any other entity
     * type.</p>
     */
    inline DocumentationPartLocation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the targeted API entity. It is a valid and required field for the
     * API entity types of <code>AUTHORIZER</code>, <code>MODEL</code>,
     * <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code> and
     * <code>RESPONSE_HEADER</code>. It is an invalid field for any other entity
     * type.</p>
     */
    inline DocumentationPartLocation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the targeted API entity. It is a valid and required field for the
     * API entity types of <code>AUTHORIZER</code>, <code>MODEL</code>,
     * <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code> and
     * <code>RESPONSE_HEADER</code>. It is an invalid field for any other entity
     * type.</p>
     */
    inline DocumentationPartLocation& WithName(const char* value) { SetName(value); return *this;}

  private:

    DocumentationPartType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_method;
    bool m_methodHasBeenSet = false;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
