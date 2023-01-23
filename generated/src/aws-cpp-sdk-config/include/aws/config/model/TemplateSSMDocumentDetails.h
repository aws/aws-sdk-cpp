/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>This API allows you to create a conformance pack template with an Amazon Web
   * Services Systems Manager document (SSM document). To deploy a conformance pack
   * using an SSM document, first create an SSM document with conformance pack
   * content, and then provide the <code>DocumentName</code> in the <a
   * href="https://docs.aws.amazon.com/config/latest/APIReference/API_PutConformancePack.html">PutConformancePack
   * API</a>. You can also provide the <code>DocumentVersion</code>.</p> <p>The
   * <code>TemplateSSMDocumentDetails</code> object contains the name of the SSM
   * document and the version of the SSM document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/TemplateSSMDocumentDetails">AWS
   * API Reference</a></p>
   */
  class TemplateSSMDocumentDetails
  {
  public:
    AWS_CONFIGSERVICE_API TemplateSSMDocumentDetails();
    AWS_CONFIGSERVICE_API TemplateSSMDocumentDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API TemplateSSMDocumentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name or Amazon Resource Name (ARN) of the SSM document to use to create a
     * conformance pack. If you use the document name, Config checks only your account
     * and Amazon Web Services Region for the SSM document. If you want to use an SSM
     * document from another Region or account, you must provide the ARN.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the SSM document to use to create a
     * conformance pack. If you use the document name, Config checks only your account
     * and Amazon Web Services Region for the SSM document. If you want to use an SSM
     * document from another Region or account, you must provide the ARN.</p>
     */
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the SSM document to use to create a
     * conformance pack. If you use the document name, Config checks only your account
     * and Amazon Web Services Region for the SSM document. If you want to use an SSM
     * document from another Region or account, you must provide the ARN.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the SSM document to use to create a
     * conformance pack. If you use the document name, Config checks only your account
     * and Amazon Web Services Region for the SSM document. If you want to use an SSM
     * document from another Region or account, you must provide the ARN.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the SSM document to use to create a
     * conformance pack. If you use the document name, Config checks only your account
     * and Amazon Web Services Region for the SSM document. If you want to use an SSM
     * document from another Region or account, you must provide the ARN.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the SSM document to use to create a
     * conformance pack. If you use the document name, Config checks only your account
     * and Amazon Web Services Region for the SSM document. If you want to use an SSM
     * document from another Region or account, you must provide the ARN.</p>
     */
    inline TemplateSSMDocumentDetails& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the SSM document to use to create a
     * conformance pack. If you use the document name, Config checks only your account
     * and Amazon Web Services Region for the SSM document. If you want to use an SSM
     * document from another Region or account, you must provide the ARN.</p>
     */
    inline TemplateSSMDocumentDetails& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the SSM document to use to create a
     * conformance pack. If you use the document name, Config checks only your account
     * and Amazon Web Services Region for the SSM document. If you want to use an SSM
     * document from another Region or account, you must provide the ARN.</p>
     */
    inline TemplateSSMDocumentDetails& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}


    /**
     * <p>The version of the SSM document to use to create a conformance pack. By
     * default, Config uses the latest version.</p>  <p>This field is
     * optional.</p> 
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The version of the SSM document to use to create a conformance pack. By
     * default, Config uses the latest version.</p>  <p>This field is
     * optional.</p> 
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The version of the SSM document to use to create a conformance pack. By
     * default, Config uses the latest version.</p>  <p>This field is
     * optional.</p> 
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The version of the SSM document to use to create a conformance pack. By
     * default, Config uses the latest version.</p>  <p>This field is
     * optional.</p> 
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The version of the SSM document to use to create a conformance pack. By
     * default, Config uses the latest version.</p>  <p>This field is
     * optional.</p> 
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The version of the SSM document to use to create a conformance pack. By
     * default, Config uses the latest version.</p>  <p>This field is
     * optional.</p> 
     */
    inline TemplateSSMDocumentDetails& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The version of the SSM document to use to create a conformance pack. By
     * default, Config uses the latest version.</p>  <p>This field is
     * optional.</p> 
     */
    inline TemplateSSMDocumentDetails& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the SSM document to use to create a conformance pack. By
     * default, Config uses the latest version.</p>  <p>This field is
     * optional.</p> 
     */
    inline TemplateSSMDocumentDetails& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}

  private:

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
