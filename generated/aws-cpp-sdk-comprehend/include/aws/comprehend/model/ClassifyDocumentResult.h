/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/DocumentClass.h>
#include <aws/comprehend/model/DocumentLabel.h>
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
namespace Comprehend
{
namespace Model
{
  class AWS_COMPREHEND_API ClassifyDocumentResult
  {
  public:
    ClassifyDocumentResult();
    ClassifyDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ClassifyDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The classes used by the document being analyzed. These are used for
     * multi-class trained models. Individual classes are mutually exclusive and each
     * document is expected to have only a single class assigned to it. For example, an
     * animal can be a dog or a cat, but not both at the same time. </p>
     */
    inline const Aws::Vector<DocumentClass>& GetClasses() const{ return m_classes; }

    /**
     * <p>The classes used by the document being analyzed. These are used for
     * multi-class trained models. Individual classes are mutually exclusive and each
     * document is expected to have only a single class assigned to it. For example, an
     * animal can be a dog or a cat, but not both at the same time. </p>
     */
    inline void SetClasses(const Aws::Vector<DocumentClass>& value) { m_classes = value; }

    /**
     * <p>The classes used by the document being analyzed. These are used for
     * multi-class trained models. Individual classes are mutually exclusive and each
     * document is expected to have only a single class assigned to it. For example, an
     * animal can be a dog or a cat, but not both at the same time. </p>
     */
    inline void SetClasses(Aws::Vector<DocumentClass>&& value) { m_classes = std::move(value); }

    /**
     * <p>The classes used by the document being analyzed. These are used for
     * multi-class trained models. Individual classes are mutually exclusive and each
     * document is expected to have only a single class assigned to it. For example, an
     * animal can be a dog or a cat, but not both at the same time. </p>
     */
    inline ClassifyDocumentResult& WithClasses(const Aws::Vector<DocumentClass>& value) { SetClasses(value); return *this;}

    /**
     * <p>The classes used by the document being analyzed. These are used for
     * multi-class trained models. Individual classes are mutually exclusive and each
     * document is expected to have only a single class assigned to it. For example, an
     * animal can be a dog or a cat, but not both at the same time. </p>
     */
    inline ClassifyDocumentResult& WithClasses(Aws::Vector<DocumentClass>&& value) { SetClasses(std::move(value)); return *this;}

    /**
     * <p>The classes used by the document being analyzed. These are used for
     * multi-class trained models. Individual classes are mutually exclusive and each
     * document is expected to have only a single class assigned to it. For example, an
     * animal can be a dog or a cat, but not both at the same time. </p>
     */
    inline ClassifyDocumentResult& AddClasses(const DocumentClass& value) { m_classes.push_back(value); return *this; }

    /**
     * <p>The classes used by the document being analyzed. These are used for
     * multi-class trained models. Individual classes are mutually exclusive and each
     * document is expected to have only a single class assigned to it. For example, an
     * animal can be a dog or a cat, but not both at the same time. </p>
     */
    inline ClassifyDocumentResult& AddClasses(DocumentClass&& value) { m_classes.push_back(std::move(value)); return *this; }


    /**
     * <p>The labels used the document being analyzed. These are used for multi-label
     * trained models. Individual labels represent different categories that are
     * related in some manner and are not mutually exclusive. For example, a movie can
     * be just an action movie, or it can be an action movie, a science fiction movie,
     * and a comedy, all at the same time. </p>
     */
    inline const Aws::Vector<DocumentLabel>& GetLabels() const{ return m_labels; }

    /**
     * <p>The labels used the document being analyzed. These are used for multi-label
     * trained models. Individual labels represent different categories that are
     * related in some manner and are not mutually exclusive. For example, a movie can
     * be just an action movie, or it can be an action movie, a science fiction movie,
     * and a comedy, all at the same time. </p>
     */
    inline void SetLabels(const Aws::Vector<DocumentLabel>& value) { m_labels = value; }

    /**
     * <p>The labels used the document being analyzed. These are used for multi-label
     * trained models. Individual labels represent different categories that are
     * related in some manner and are not mutually exclusive. For example, a movie can
     * be just an action movie, or it can be an action movie, a science fiction movie,
     * and a comedy, all at the same time. </p>
     */
    inline void SetLabels(Aws::Vector<DocumentLabel>&& value) { m_labels = std::move(value); }

    /**
     * <p>The labels used the document being analyzed. These are used for multi-label
     * trained models. Individual labels represent different categories that are
     * related in some manner and are not mutually exclusive. For example, a movie can
     * be just an action movie, or it can be an action movie, a science fiction movie,
     * and a comedy, all at the same time. </p>
     */
    inline ClassifyDocumentResult& WithLabels(const Aws::Vector<DocumentLabel>& value) { SetLabels(value); return *this;}

    /**
     * <p>The labels used the document being analyzed. These are used for multi-label
     * trained models. Individual labels represent different categories that are
     * related in some manner and are not mutually exclusive. For example, a movie can
     * be just an action movie, or it can be an action movie, a science fiction movie,
     * and a comedy, all at the same time. </p>
     */
    inline ClassifyDocumentResult& WithLabels(Aws::Vector<DocumentLabel>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>The labels used the document being analyzed. These are used for multi-label
     * trained models. Individual labels represent different categories that are
     * related in some manner and are not mutually exclusive. For example, a movie can
     * be just an action movie, or it can be an action movie, a science fiction movie,
     * and a comedy, all at the same time. </p>
     */
    inline ClassifyDocumentResult& AddLabels(const DocumentLabel& value) { m_labels.push_back(value); return *this; }

    /**
     * <p>The labels used the document being analyzed. These are used for multi-label
     * trained models. Individual labels represent different categories that are
     * related in some manner and are not mutually exclusive. For example, a movie can
     * be just an action movie, or it can be an action movie, a science fiction movie,
     * and a comedy, all at the same time. </p>
     */
    inline ClassifyDocumentResult& AddLabels(DocumentLabel&& value) { m_labels.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DocumentClass> m_classes;

    Aws::Vector<DocumentLabel> m_labels;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
