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
    AWS_APIGATEWAY_API DocumentationPartLocation() = default;
    AWS_APIGATEWAY_API DocumentationPartLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API DocumentationPartLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline DocumentationPartType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DocumentationPartType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DocumentationPartLocation& WithType(DocumentationPartType value) { SetType(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    DocumentationPartLocation& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetMethod() const { return m_method; }
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
    template<typename MethodT = Aws::String>
    void SetMethod(MethodT&& value) { m_methodHasBeenSet = true; m_method = std::forward<MethodT>(value); }
    template<typename MethodT = Aws::String>
    DocumentationPartLocation& WithMethod(MethodT&& value) { SetMethod(std::forward<MethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status code of a response. It is a valid field for the API entity
     * types of <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>, and
     * <code>RESPONSE_BODY</code>. The default value is <code>*</code> for any status
     * code. When an applicable child entity inherits the content of an entity of the
     * same type with more general specifications of the other <code>location</code>
     * attributes, the child entity's <code>statusCode</code> attribute must match that
     * of the parent entity exactly.</p>
     */
    inline const Aws::String& GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    template<typename StatusCodeT = Aws::String>
    void SetStatusCode(StatusCodeT&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::forward<StatusCodeT>(value); }
    template<typename StatusCodeT = Aws::String>
    DocumentationPartLocation& WithStatusCode(StatusCodeT&& value) { SetStatusCode(std::forward<StatusCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the targeted API entity. It is a valid and required field for the
     * API entity types of <code>AUTHORIZER</code>, <code>MODEL</code>,
     * <code>PATH_PARAMETER</code>, <code>QUERY_PARAMETER</code>,
     * <code>REQUEST_HEADER</code>, <code>REQUEST_BODY</code> and
     * <code>RESPONSE_HEADER</code>. It is an invalid field for any other entity
     * type.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DocumentationPartLocation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    DocumentationPartType m_type{DocumentationPartType::NOT_SET};
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
