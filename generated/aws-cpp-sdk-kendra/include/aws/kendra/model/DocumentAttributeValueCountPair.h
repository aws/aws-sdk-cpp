/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/DocumentAttributeValue.h>
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
   * <p>Provides the count of documents that match a particular attribute when doing
   * a faceted search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DocumentAttributeValueCountPair">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API DocumentAttributeValueCountPair
  {
  public:
    DocumentAttributeValueCountPair();
    DocumentAttributeValueCountPair(Aws::Utils::Json::JsonView jsonValue);
    DocumentAttributeValueCountPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the attribute. For example, "HR."</p>
     */
    inline const DocumentAttributeValue& GetDocumentAttributeValue() const{ return m_documentAttributeValue; }

    /**
     * <p>The value of the attribute. For example, "HR."</p>
     */
    inline bool DocumentAttributeValueHasBeenSet() const { return m_documentAttributeValueHasBeenSet; }

    /**
     * <p>The value of the attribute. For example, "HR."</p>
     */
    inline void SetDocumentAttributeValue(const DocumentAttributeValue& value) { m_documentAttributeValueHasBeenSet = true; m_documentAttributeValue = value; }

    /**
     * <p>The value of the attribute. For example, "HR."</p>
     */
    inline void SetDocumentAttributeValue(DocumentAttributeValue&& value) { m_documentAttributeValueHasBeenSet = true; m_documentAttributeValue = std::move(value); }

    /**
     * <p>The value of the attribute. For example, "HR."</p>
     */
    inline DocumentAttributeValueCountPair& WithDocumentAttributeValue(const DocumentAttributeValue& value) { SetDocumentAttributeValue(value); return *this;}

    /**
     * <p>The value of the attribute. For example, "HR."</p>
     */
    inline DocumentAttributeValueCountPair& WithDocumentAttributeValue(DocumentAttributeValue&& value) { SetDocumentAttributeValue(std::move(value)); return *this;}


    /**
     * <p>The number of documents in the response that have the attribute value for the
     * key.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of documents in the response that have the attribute value for the
     * key.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of documents in the response that have the attribute value for the
     * key.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of documents in the response that have the attribute value for the
     * key.</p>
     */
    inline DocumentAttributeValueCountPair& WithCount(int value) { SetCount(value); return *this;}

  private:

    DocumentAttributeValue m_documentAttributeValue;
    bool m_documentAttributeValueHasBeenSet;

    int m_count;
    bool m_countHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
