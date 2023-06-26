/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>A document ID doesn't exist but you have specified as a featured document.
   * Amazon Kendra cannot feature the document if it doesn't exist in the index. You
   * can check the status of a document and its ID or check for documents with status
   * errors using the <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchGetDocumentStatus.html">BatchGetDocumentStatus</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/FeaturedDocumentMissing">AWS
   * API Reference</a></p>
   */
  class FeaturedDocumentMissing
  {
  public:
    AWS_KENDRA_API FeaturedDocumentMissing();
    AWS_KENDRA_API FeaturedDocumentMissing(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FeaturedDocumentMissing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the document that doesn't exist but you have specified as a
     * featured document.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the document that doesn't exist but you have specified as a
     * featured document.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the document that doesn't exist but you have specified as a
     * featured document.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the document that doesn't exist but you have specified as a
     * featured document.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the document that doesn't exist but you have specified as a
     * featured document.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the document that doesn't exist but you have specified as a
     * featured document.</p>
     */
    inline FeaturedDocumentMissing& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the document that doesn't exist but you have specified as a
     * featured document.</p>
     */
    inline FeaturedDocumentMissing& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the document that doesn't exist but you have specified as a
     * featured document.</p>
     */
    inline FeaturedDocumentMissing& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
