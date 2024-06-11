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
    AWS_KENDRA_API DocumentInfo();
    AWS_KENDRA_API DocumentInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DocumentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the document.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }
    inline DocumentInfo& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}
    inline DocumentInfo& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}
    inline DocumentInfo& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}
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
    inline const Aws::Vector<DocumentAttribute>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<DocumentAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<DocumentAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline DocumentInfo& WithAttributes(const Aws::Vector<DocumentAttribute>& value) { SetAttributes(value); return *this;}
    inline DocumentInfo& WithAttributes(Aws::Vector<DocumentAttribute>&& value) { SetAttributes(std::move(value)); return *this;}
    inline DocumentInfo& AddAttributes(const DocumentAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline DocumentInfo& AddAttributes(DocumentAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
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
