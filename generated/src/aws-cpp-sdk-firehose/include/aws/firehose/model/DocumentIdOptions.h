/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/DefaultDocumentIdFormat.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Indicates the method for setting up document ID. The supported methods are
   * Firehose generated document ID and OpenSearch Service generated document ID.</p>
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DocumentIdOptions">AWS
   * API Reference</a></p>
   */
  class DocumentIdOptions
  {
  public:
    AWS_FIREHOSE_API DocumentIdOptions();
    AWS_FIREHOSE_API DocumentIdOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DocumentIdOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When the <code>FIREHOSE_DEFAULT</code> option is chosen, Firehose generates a
     * unique document ID for each record based on a unique internal identifier. The
     * generated document ID is stable across multiple delivery attempts, which helps
     * prevent the same record from being indexed multiple times with different
     * document IDs.</p> <p>When the <code>NO_DOCUMENT_ID</code> option is chosen,
     * Firehose does not include any document IDs in the requests it sends to the
     * Amazon OpenSearch Service. This causes the Amazon OpenSearch Service domain to
     * generate document IDs. In case of multiple delivery attempts, this may cause the
     * same record to be indexed more than once with different document IDs. This
     * option enables write-heavy operations, such as the ingestion of logs and
     * observability data, to consume less resources in the Amazon OpenSearch Service
     * domain, resulting in improved performance.</p>
     */
    inline const DefaultDocumentIdFormat& GetDefaultDocumentIdFormat() const{ return m_defaultDocumentIdFormat; }

    /**
     * <p>When the <code>FIREHOSE_DEFAULT</code> option is chosen, Firehose generates a
     * unique document ID for each record based on a unique internal identifier. The
     * generated document ID is stable across multiple delivery attempts, which helps
     * prevent the same record from being indexed multiple times with different
     * document IDs.</p> <p>When the <code>NO_DOCUMENT_ID</code> option is chosen,
     * Firehose does not include any document IDs in the requests it sends to the
     * Amazon OpenSearch Service. This causes the Amazon OpenSearch Service domain to
     * generate document IDs. In case of multiple delivery attempts, this may cause the
     * same record to be indexed more than once with different document IDs. This
     * option enables write-heavy operations, such as the ingestion of logs and
     * observability data, to consume less resources in the Amazon OpenSearch Service
     * domain, resulting in improved performance.</p>
     */
    inline bool DefaultDocumentIdFormatHasBeenSet() const { return m_defaultDocumentIdFormatHasBeenSet; }

    /**
     * <p>When the <code>FIREHOSE_DEFAULT</code> option is chosen, Firehose generates a
     * unique document ID for each record based on a unique internal identifier. The
     * generated document ID is stable across multiple delivery attempts, which helps
     * prevent the same record from being indexed multiple times with different
     * document IDs.</p> <p>When the <code>NO_DOCUMENT_ID</code> option is chosen,
     * Firehose does not include any document IDs in the requests it sends to the
     * Amazon OpenSearch Service. This causes the Amazon OpenSearch Service domain to
     * generate document IDs. In case of multiple delivery attempts, this may cause the
     * same record to be indexed more than once with different document IDs. This
     * option enables write-heavy operations, such as the ingestion of logs and
     * observability data, to consume less resources in the Amazon OpenSearch Service
     * domain, resulting in improved performance.</p>
     */
    inline void SetDefaultDocumentIdFormat(const DefaultDocumentIdFormat& value) { m_defaultDocumentIdFormatHasBeenSet = true; m_defaultDocumentIdFormat = value; }

    /**
     * <p>When the <code>FIREHOSE_DEFAULT</code> option is chosen, Firehose generates a
     * unique document ID for each record based on a unique internal identifier. The
     * generated document ID is stable across multiple delivery attempts, which helps
     * prevent the same record from being indexed multiple times with different
     * document IDs.</p> <p>When the <code>NO_DOCUMENT_ID</code> option is chosen,
     * Firehose does not include any document IDs in the requests it sends to the
     * Amazon OpenSearch Service. This causes the Amazon OpenSearch Service domain to
     * generate document IDs. In case of multiple delivery attempts, this may cause the
     * same record to be indexed more than once with different document IDs. This
     * option enables write-heavy operations, such as the ingestion of logs and
     * observability data, to consume less resources in the Amazon OpenSearch Service
     * domain, resulting in improved performance.</p>
     */
    inline void SetDefaultDocumentIdFormat(DefaultDocumentIdFormat&& value) { m_defaultDocumentIdFormatHasBeenSet = true; m_defaultDocumentIdFormat = std::move(value); }

    /**
     * <p>When the <code>FIREHOSE_DEFAULT</code> option is chosen, Firehose generates a
     * unique document ID for each record based on a unique internal identifier. The
     * generated document ID is stable across multiple delivery attempts, which helps
     * prevent the same record from being indexed multiple times with different
     * document IDs.</p> <p>When the <code>NO_DOCUMENT_ID</code> option is chosen,
     * Firehose does not include any document IDs in the requests it sends to the
     * Amazon OpenSearch Service. This causes the Amazon OpenSearch Service domain to
     * generate document IDs. In case of multiple delivery attempts, this may cause the
     * same record to be indexed more than once with different document IDs. This
     * option enables write-heavy operations, such as the ingestion of logs and
     * observability data, to consume less resources in the Amazon OpenSearch Service
     * domain, resulting in improved performance.</p>
     */
    inline DocumentIdOptions& WithDefaultDocumentIdFormat(const DefaultDocumentIdFormat& value) { SetDefaultDocumentIdFormat(value); return *this;}

    /**
     * <p>When the <code>FIREHOSE_DEFAULT</code> option is chosen, Firehose generates a
     * unique document ID for each record based on a unique internal identifier. The
     * generated document ID is stable across multiple delivery attempts, which helps
     * prevent the same record from being indexed multiple times with different
     * document IDs.</p> <p>When the <code>NO_DOCUMENT_ID</code> option is chosen,
     * Firehose does not include any document IDs in the requests it sends to the
     * Amazon OpenSearch Service. This causes the Amazon OpenSearch Service domain to
     * generate document IDs. In case of multiple delivery attempts, this may cause the
     * same record to be indexed more than once with different document IDs. This
     * option enables write-heavy operations, such as the ingestion of logs and
     * observability data, to consume less resources in the Amazon OpenSearch Service
     * domain, resulting in improved performance.</p>
     */
    inline DocumentIdOptions& WithDefaultDocumentIdFormat(DefaultDocumentIdFormat&& value) { SetDefaultDocumentIdFormat(std::move(value)); return *this;}

  private:

    DefaultDocumentIdFormat m_defaultDocumentIdFormat;
    bool m_defaultDocumentIdFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
