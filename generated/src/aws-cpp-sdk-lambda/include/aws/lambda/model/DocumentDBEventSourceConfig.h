/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/FullDocument.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p> Specific configuration settings for a DocumentDB event source.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DocumentDBEventSourceConfig">AWS
   * API Reference</a></p>
   */
  class DocumentDBEventSourceConfig
  {
  public:
    AWS_LAMBDA_API DocumentDBEventSourceConfig() = default;
    AWS_LAMBDA_API DocumentDBEventSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API DocumentDBEventSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the database to consume within the DocumentDB cluster. </p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    DocumentDBEventSourceConfig& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the collection to consume within the database. If you do not
     * specify a collection, Lambda consumes all collections. </p>
     */
    inline const Aws::String& GetCollectionName() const { return m_collectionName; }
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }
    template<typename CollectionNameT = Aws::String>
    void SetCollectionName(CollectionNameT&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::forward<CollectionNameT>(value); }
    template<typename CollectionNameT = Aws::String>
    DocumentDBEventSourceConfig& WithCollectionName(CollectionNameT&& value) { SetCollectionName(std::forward<CollectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Determines what DocumentDB sends to your event stream during document update
     * operations. If set to UpdateLookup, DocumentDB sends a delta describing the
     * changes, along with a copy of the entire document. Otherwise, DocumentDB sends
     * only a partial document that contains the changes. </p>
     */
    inline FullDocument GetFullDocument() const { return m_fullDocument; }
    inline bool FullDocumentHasBeenSet() const { return m_fullDocumentHasBeenSet; }
    inline void SetFullDocument(FullDocument value) { m_fullDocumentHasBeenSet = true; m_fullDocument = value; }
    inline DocumentDBEventSourceConfig& WithFullDocument(FullDocument value) { SetFullDocument(value); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet = false;

    FullDocument m_fullDocument{FullDocument::NOT_SET};
    bool m_fullDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
