/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/DocumentAttribute.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Identifies a document for which to retrieve status information</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DocumentInfo">AWS
   * API Reference</a></p>
   */
  class DocumentInfo
  {
  public:
    AWS_KENDRA_API DocumentInfo() = default;
    AWS_KENDRA_API DocumentInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DocumentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the document.</p>
     */
    inline const Aws::String& GetDocumentId() const { return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    template<typename DocumentIdT = Aws::String>
    void SetDocumentId(DocumentIdT&& value) { m_documentIdHasBeenSet = true; m_documentId = std::forward<DocumentIdT>(value); }
    template<typename DocumentIdT = Aws::String>
    DocumentInfo& WithDocumentId(DocumentIdT&& value) { SetDocumentId(std::forward<DocumentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes that identify a specific version of a document to check.</p>
     * <p>The only valid attributes are:</p> <ul> <li> <p>version</p> </li> <li>
     * <p>datasourceId</p> </li> <li> <p>jobExecutionId</p> </li> </ul> <p>The
     * attributes follow these rules:</p> <ul> <li> <p> <code>dataSourceId</code> and
     * <code>jobExecutionId</code> must be used together.</p> </li> <li> <p>
     * <code>version</code> is ignored if <code>dataSourceId</code> and
     * <code>jobExecutionId</code> are not provided.</p> </li> <li> <p>If
     * <code>dataSourceId</code> and <code>jobExecutionId</code> are provided, but
     * <code>version</code> is not, the version defaults to "0".</p> </li> </ul>
     */
    inline const Aws::Vector<DocumentAttribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<DocumentAttribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<DocumentAttribute>>
    DocumentInfo& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = DocumentAttribute>
    DocumentInfo& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    Aws::Vector<DocumentAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
