﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ViewDialect.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure that contains the dialect of the view, and the query that defines
   * the view.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ViewRepresentation">AWS
   * API Reference</a></p>
   */
  class ViewRepresentation
  {
  public:
    AWS_GLUE_API ViewRepresentation();
    AWS_GLUE_API ViewRepresentation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ViewRepresentation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dialect of the query engine.</p>
     */
    inline const ViewDialect& GetDialect() const{ return m_dialect; }
    inline bool DialectHasBeenSet() const { return m_dialectHasBeenSet; }
    inline void SetDialect(const ViewDialect& value) { m_dialectHasBeenSet = true; m_dialect = value; }
    inline void SetDialect(ViewDialect&& value) { m_dialectHasBeenSet = true; m_dialect = std::move(value); }
    inline ViewRepresentation& WithDialect(const ViewDialect& value) { SetDialect(value); return *this;}
    inline ViewRepresentation& WithDialect(ViewDialect&& value) { SetDialect(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the dialect of the query engine. For example, 3.0.0.</p>
     */
    inline const Aws::String& GetDialectVersion() const{ return m_dialectVersion; }
    inline bool DialectVersionHasBeenSet() const { return m_dialectVersionHasBeenSet; }
    inline void SetDialectVersion(const Aws::String& value) { m_dialectVersionHasBeenSet = true; m_dialectVersion = value; }
    inline void SetDialectVersion(Aws::String&& value) { m_dialectVersionHasBeenSet = true; m_dialectVersion = std::move(value); }
    inline void SetDialectVersion(const char* value) { m_dialectVersionHasBeenSet = true; m_dialectVersion.assign(value); }
    inline ViewRepresentation& WithDialectVersion(const Aws::String& value) { SetDialectVersion(value); return *this;}
    inline ViewRepresentation& WithDialectVersion(Aws::String&& value) { SetDialectVersion(std::move(value)); return *this;}
    inline ViewRepresentation& WithDialectVersion(const char* value) { SetDialectVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>SELECT</code> query provided by the customer during <code>CREATE
     * VIEW DDL</code>. This SQL is not used during a query on a view
     * (<code>ViewExpandedText</code> is used instead). <code>ViewOriginalText</code>
     * is used for cases like <code>SHOW CREATE VIEW</code> where users want to see the
     * original DDL command that created the view.</p>
     */
    inline const Aws::String& GetViewOriginalText() const{ return m_viewOriginalText; }
    inline bool ViewOriginalTextHasBeenSet() const { return m_viewOriginalTextHasBeenSet; }
    inline void SetViewOriginalText(const Aws::String& value) { m_viewOriginalTextHasBeenSet = true; m_viewOriginalText = value; }
    inline void SetViewOriginalText(Aws::String&& value) { m_viewOriginalTextHasBeenSet = true; m_viewOriginalText = std::move(value); }
    inline void SetViewOriginalText(const char* value) { m_viewOriginalTextHasBeenSet = true; m_viewOriginalText.assign(value); }
    inline ViewRepresentation& WithViewOriginalText(const Aws::String& value) { SetViewOriginalText(value); return *this;}
    inline ViewRepresentation& WithViewOriginalText(Aws::String&& value) { SetViewOriginalText(std::move(value)); return *this;}
    inline ViewRepresentation& WithViewOriginalText(const char* value) { SetViewOriginalText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expanded SQL for the view. This SQL is used by engines while processing a
     * query on a view. Engines may perform operations during view creation to
     * transform <code>ViewOriginalText</code> to <code>ViewExpandedText</code>. For
     * example:</p> <ul> <li> <p>Fully qualified identifiers: <code>SELECT * from
     * table1 -&gt; SELECT * from db1.table1</code> </p> </li> </ul>
     */
    inline const Aws::String& GetViewExpandedText() const{ return m_viewExpandedText; }
    inline bool ViewExpandedTextHasBeenSet() const { return m_viewExpandedTextHasBeenSet; }
    inline void SetViewExpandedText(const Aws::String& value) { m_viewExpandedTextHasBeenSet = true; m_viewExpandedText = value; }
    inline void SetViewExpandedText(Aws::String&& value) { m_viewExpandedTextHasBeenSet = true; m_viewExpandedText = std::move(value); }
    inline void SetViewExpandedText(const char* value) { m_viewExpandedTextHasBeenSet = true; m_viewExpandedText.assign(value); }
    inline ViewRepresentation& WithViewExpandedText(const Aws::String& value) { SetViewExpandedText(value); return *this;}
    inline ViewRepresentation& WithViewExpandedText(Aws::String&& value) { SetViewExpandedText(std::move(value)); return *this;}
    inline ViewRepresentation& WithViewExpandedText(const char* value) { SetViewExpandedText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection to be used to validate the specific representation
     * of the view.</p>
     */
    inline const Aws::String& GetValidationConnection() const{ return m_validationConnection; }
    inline bool ValidationConnectionHasBeenSet() const { return m_validationConnectionHasBeenSet; }
    inline void SetValidationConnection(const Aws::String& value) { m_validationConnectionHasBeenSet = true; m_validationConnection = value; }
    inline void SetValidationConnection(Aws::String&& value) { m_validationConnectionHasBeenSet = true; m_validationConnection = std::move(value); }
    inline void SetValidationConnection(const char* value) { m_validationConnectionHasBeenSet = true; m_validationConnection.assign(value); }
    inline ViewRepresentation& WithValidationConnection(const Aws::String& value) { SetValidationConnection(value); return *this;}
    inline ViewRepresentation& WithValidationConnection(Aws::String&& value) { SetValidationConnection(std::move(value)); return *this;}
    inline ViewRepresentation& WithValidationConnection(const char* value) { SetValidationConnection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dialects marked as stale are no longer valid and must be updated before they
     * can be queried in their respective query engines.</p>
     */
    inline bool GetIsStale() const{ return m_isStale; }
    inline bool IsStaleHasBeenSet() const { return m_isStaleHasBeenSet; }
    inline void SetIsStale(bool value) { m_isStaleHasBeenSet = true; m_isStale = value; }
    inline ViewRepresentation& WithIsStale(bool value) { SetIsStale(value); return *this;}
    ///@}
  private:

    ViewDialect m_dialect;
    bool m_dialectHasBeenSet = false;

    Aws::String m_dialectVersion;
    bool m_dialectVersionHasBeenSet = false;

    Aws::String m_viewOriginalText;
    bool m_viewOriginalTextHasBeenSet = false;

    Aws::String m_viewExpandedText;
    bool m_viewExpandedTextHasBeenSet = false;

    Aws::String m_validationConnection;
    bool m_validationConnectionHasBeenSet = false;

    bool m_isStale;
    bool m_isStaleHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
