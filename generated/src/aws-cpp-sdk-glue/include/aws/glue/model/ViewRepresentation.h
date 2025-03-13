/**
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
    AWS_GLUE_API ViewRepresentation() = default;
    AWS_GLUE_API ViewRepresentation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ViewRepresentation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dialect of the query engine.</p>
     */
    inline ViewDialect GetDialect() const { return m_dialect; }
    inline bool DialectHasBeenSet() const { return m_dialectHasBeenSet; }
    inline void SetDialect(ViewDialect value) { m_dialectHasBeenSet = true; m_dialect = value; }
    inline ViewRepresentation& WithDialect(ViewDialect value) { SetDialect(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the dialect of the query engine. For example, 3.0.0.</p>
     */
    inline const Aws::String& GetDialectVersion() const { return m_dialectVersion; }
    inline bool DialectVersionHasBeenSet() const { return m_dialectVersionHasBeenSet; }
    template<typename DialectVersionT = Aws::String>
    void SetDialectVersion(DialectVersionT&& value) { m_dialectVersionHasBeenSet = true; m_dialectVersion = std::forward<DialectVersionT>(value); }
    template<typename DialectVersionT = Aws::String>
    ViewRepresentation& WithDialectVersion(DialectVersionT&& value) { SetDialectVersion(std::forward<DialectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>SELECT</code> query provided by the customer during <code>CREATE
     * VIEW DDL</code>. This SQL is not used during a query on a view
     * (<code>ViewExpandedText</code> is used instead). <code>ViewOriginalText</code>
     * is used for cases like <code>SHOW CREATE VIEW</code> where users want to see the
     * original DDL command that created the view.</p>
     */
    inline const Aws::String& GetViewOriginalText() const { return m_viewOriginalText; }
    inline bool ViewOriginalTextHasBeenSet() const { return m_viewOriginalTextHasBeenSet; }
    template<typename ViewOriginalTextT = Aws::String>
    void SetViewOriginalText(ViewOriginalTextT&& value) { m_viewOriginalTextHasBeenSet = true; m_viewOriginalText = std::forward<ViewOriginalTextT>(value); }
    template<typename ViewOriginalTextT = Aws::String>
    ViewRepresentation& WithViewOriginalText(ViewOriginalTextT&& value) { SetViewOriginalText(std::forward<ViewOriginalTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expanded SQL for the view. This SQL is used by engines while processing a
     * query on a view. Engines may perform operations during view creation to
     * transform <code>ViewOriginalText</code> to <code>ViewExpandedText</code>. For
     * example:</p> <ul> <li> <p>Fully qualified identifiers: <code>SELECT * from
     * table1 -&gt; SELECT * from db1.table1</code> </p> </li> </ul>
     */
    inline const Aws::String& GetViewExpandedText() const { return m_viewExpandedText; }
    inline bool ViewExpandedTextHasBeenSet() const { return m_viewExpandedTextHasBeenSet; }
    template<typename ViewExpandedTextT = Aws::String>
    void SetViewExpandedText(ViewExpandedTextT&& value) { m_viewExpandedTextHasBeenSet = true; m_viewExpandedText = std::forward<ViewExpandedTextT>(value); }
    template<typename ViewExpandedTextT = Aws::String>
    ViewRepresentation& WithViewExpandedText(ViewExpandedTextT&& value) { SetViewExpandedText(std::forward<ViewExpandedTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection to be used to validate the specific representation
     * of the view.</p>
     */
    inline const Aws::String& GetValidationConnection() const { return m_validationConnection; }
    inline bool ValidationConnectionHasBeenSet() const { return m_validationConnectionHasBeenSet; }
    template<typename ValidationConnectionT = Aws::String>
    void SetValidationConnection(ValidationConnectionT&& value) { m_validationConnectionHasBeenSet = true; m_validationConnection = std::forward<ValidationConnectionT>(value); }
    template<typename ValidationConnectionT = Aws::String>
    ViewRepresentation& WithValidationConnection(ValidationConnectionT&& value) { SetValidationConnection(std::forward<ValidationConnectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dialects marked as stale are no longer valid and must be updated before they
     * can be queried in their respective query engines.</p>
     */
    inline bool GetIsStale() const { return m_isStale; }
    inline bool IsStaleHasBeenSet() const { return m_isStaleHasBeenSet; }
    inline void SetIsStale(bool value) { m_isStaleHasBeenSet = true; m_isStale = value; }
    inline ViewRepresentation& WithIsStale(bool value) { SetIsStale(value); return *this;}
    ///@}
  private:

    ViewDialect m_dialect{ViewDialect::NOT_SET};
    bool m_dialectHasBeenSet = false;

    Aws::String m_dialectVersion;
    bool m_dialectVersionHasBeenSet = false;

    Aws::String m_viewOriginalText;
    bool m_viewOriginalTextHasBeenSet = false;

    Aws::String m_viewExpandedText;
    bool m_viewExpandedTextHasBeenSet = false;

    Aws::String m_validationConnection;
    bool m_validationConnectionHasBeenSet = false;

    bool m_isStale{false};
    bool m_isStaleHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
