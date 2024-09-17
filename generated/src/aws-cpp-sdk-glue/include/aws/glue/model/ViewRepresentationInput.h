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
    AWS_GLUE_API ViewRepresentationInput();
    AWS_GLUE_API ViewRepresentationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ViewRepresentationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A parameter that specifies the engine type of a specific representation.</p>
     */
    inline const ViewDialect& GetDialect() const{ return m_dialect; }
    inline bool DialectHasBeenSet() const { return m_dialectHasBeenSet; }
    inline void SetDialect(const ViewDialect& value) { m_dialectHasBeenSet = true; m_dialect = value; }
    inline void SetDialect(ViewDialect&& value) { m_dialectHasBeenSet = true; m_dialect = std::move(value); }
    inline ViewRepresentationInput& WithDialect(const ViewDialect& value) { SetDialect(value); return *this;}
    inline ViewRepresentationInput& WithDialect(ViewDialect&& value) { SetDialect(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter that specifies the version of the engine of a specific
     * representation.</p>
     */
    inline const Aws::String& GetDialectVersion() const{ return m_dialectVersion; }
    inline bool DialectVersionHasBeenSet() const { return m_dialectVersionHasBeenSet; }
    inline void SetDialectVersion(const Aws::String& value) { m_dialectVersionHasBeenSet = true; m_dialectVersion = value; }
    inline void SetDialectVersion(Aws::String&& value) { m_dialectVersionHasBeenSet = true; m_dialectVersion = std::move(value); }
    inline void SetDialectVersion(const char* value) { m_dialectVersionHasBeenSet = true; m_dialectVersion.assign(value); }
    inline ViewRepresentationInput& WithDialectVersion(const Aws::String& value) { SetDialectVersion(value); return *this;}
    inline ViewRepresentationInput& WithDialectVersion(Aws::String&& value) { SetDialectVersion(std::move(value)); return *this;}
    inline ViewRepresentationInput& WithDialectVersion(const char* value) { SetDialectVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that represents the original SQL query that describes the view.</p>
     */
    inline const Aws::String& GetViewOriginalText() const{ return m_viewOriginalText; }
    inline bool ViewOriginalTextHasBeenSet() const { return m_viewOriginalTextHasBeenSet; }
    inline void SetViewOriginalText(const Aws::String& value) { m_viewOriginalTextHasBeenSet = true; m_viewOriginalText = value; }
    inline void SetViewOriginalText(Aws::String&& value) { m_viewOriginalTextHasBeenSet = true; m_viewOriginalText = std::move(value); }
    inline void SetViewOriginalText(const char* value) { m_viewOriginalTextHasBeenSet = true; m_viewOriginalText.assign(value); }
    inline ViewRepresentationInput& WithViewOriginalText(const Aws::String& value) { SetViewOriginalText(value); return *this;}
    inline ViewRepresentationInput& WithViewOriginalText(Aws::String&& value) { SetViewOriginalText(std::move(value)); return *this;}
    inline ViewRepresentationInput& WithViewOriginalText(const char* value) { SetViewOriginalText(value); return *this;}
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
    inline ViewRepresentationInput& WithValidationConnection(const Aws::String& value) { SetValidationConnection(value); return *this;}
    inline ViewRepresentationInput& WithValidationConnection(Aws::String&& value) { SetValidationConnection(std::move(value)); return *this;}
    inline ViewRepresentationInput& WithValidationConnection(const char* value) { SetValidationConnection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that represents the SQL query that describes the view with expanded
     * resource ARNs</p>
     */
    inline const Aws::String& GetViewExpandedText() const{ return m_viewExpandedText; }
    inline bool ViewExpandedTextHasBeenSet() const { return m_viewExpandedTextHasBeenSet; }
    inline void SetViewExpandedText(const Aws::String& value) { m_viewExpandedTextHasBeenSet = true; m_viewExpandedText = value; }
    inline void SetViewExpandedText(Aws::String&& value) { m_viewExpandedTextHasBeenSet = true; m_viewExpandedText = std::move(value); }
    inline void SetViewExpandedText(const char* value) { m_viewExpandedTextHasBeenSet = true; m_viewExpandedText.assign(value); }
    inline ViewRepresentationInput& WithViewExpandedText(const Aws::String& value) { SetViewExpandedText(value); return *this;}
    inline ViewRepresentationInput& WithViewExpandedText(Aws::String&& value) { SetViewExpandedText(std::move(value)); return *this;}
    inline ViewRepresentationInput& WithViewExpandedText(const char* value) { SetViewExpandedText(value); return *this;}
    ///@}
  private:

    ViewDialect m_dialect;
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
