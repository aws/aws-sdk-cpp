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
   * <p>A structure containing details of a representation to update or create a Lake
   * Formation view.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ViewRepresentationInput">AWS
   * API Reference</a></p>
   */
  class ViewRepresentationInput
  {
  public:
    AWS_GLUE_API ViewRepresentationInput() = default;
    AWS_GLUE_API ViewRepresentationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ViewRepresentationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A parameter that specifies the engine type of a specific representation.</p>
     */
    inline ViewDialect GetDialect() const { return m_dialect; }
    inline bool DialectHasBeenSet() const { return m_dialectHasBeenSet; }
    inline void SetDialect(ViewDialect value) { m_dialectHasBeenSet = true; m_dialect = value; }
    inline ViewRepresentationInput& WithDialect(ViewDialect value) { SetDialect(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter that specifies the version of the engine of a specific
     * representation.</p>
     */
    inline const Aws::String& GetDialectVersion() const { return m_dialectVersion; }
    inline bool DialectVersionHasBeenSet() const { return m_dialectVersionHasBeenSet; }
    template<typename DialectVersionT = Aws::String>
    void SetDialectVersion(DialectVersionT&& value) { m_dialectVersionHasBeenSet = true; m_dialectVersion = std::forward<DialectVersionT>(value); }
    template<typename DialectVersionT = Aws::String>
    ViewRepresentationInput& WithDialectVersion(DialectVersionT&& value) { SetDialectVersion(std::forward<DialectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that represents the original SQL query that describes the view.</p>
     */
    inline const Aws::String& GetViewOriginalText() const { return m_viewOriginalText; }
    inline bool ViewOriginalTextHasBeenSet() const { return m_viewOriginalTextHasBeenSet; }
    template<typename ViewOriginalTextT = Aws::String>
    void SetViewOriginalText(ViewOriginalTextT&& value) { m_viewOriginalTextHasBeenSet = true; m_viewOriginalText = std::forward<ViewOriginalTextT>(value); }
    template<typename ViewOriginalTextT = Aws::String>
    ViewRepresentationInput& WithViewOriginalText(ViewOriginalTextT&& value) { SetViewOriginalText(std::forward<ViewOriginalTextT>(value)); return *this;}
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
    ViewRepresentationInput& WithValidationConnection(ValidationConnectionT&& value) { SetValidationConnection(std::forward<ValidationConnectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that represents the SQL query that describes the view with expanded
     * resource ARNs</p>
     */
    inline const Aws::String& GetViewExpandedText() const { return m_viewExpandedText; }
    inline bool ViewExpandedTextHasBeenSet() const { return m_viewExpandedTextHasBeenSet; }
    template<typename ViewExpandedTextT = Aws::String>
    void SetViewExpandedText(ViewExpandedTextT&& value) { m_viewExpandedTextHasBeenSet = true; m_viewExpandedText = std::forward<ViewExpandedTextT>(value); }
    template<typename ViewExpandedTextT = Aws::String>
    ViewRepresentationInput& WithViewExpandedText(ViewExpandedTextT&& value) { SetViewExpandedText(std::forward<ViewExpandedTextT>(value)); return *this;}
    ///@}
  private:

    ViewDialect m_dialect{ViewDialect::NOT_SET};
    bool m_dialectHasBeenSet = false;

    Aws::String m_dialectVersion;
    bool m_dialectVersionHasBeenSet = false;

    Aws::String m_viewOriginalText;
    bool m_viewOriginalTextHasBeenSet = false;

    Aws::String m_validationConnection;
    bool m_validationConnectionHasBeenSet = false;

    Aws::String m_viewExpandedText;
    bool m_viewExpandedTextHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
