/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class AWS_COMPREHEND_API DetectEntitiesRequest : public ComprehendRequest
  {
  public:
    DetectEntitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectEntities"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline DetectEntitiesRequest& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline DetectEntitiesRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline DetectEntitiesRequest& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p> <p>If your request includes the endpoint for a custom entity
     * recognition model, Amazon Comprehend uses the language of your custom model, and
     * it ignores any language code that you specify here.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p> <p>If your request includes the endpoint for a custom entity
     * recognition model, Amazon Comprehend uses the language of your custom model, and
     * it ignores any language code that you specify here.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p> <p>If your request includes the endpoint for a custom entity
     * recognition model, Amazon Comprehend uses the language of your custom model, and
     * it ignores any language code that you specify here.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p> <p>If your request includes the endpoint for a custom entity
     * recognition model, Amazon Comprehend uses the language of your custom model, and
     * it ignores any language code that you specify here.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p> <p>If your request includes the endpoint for a custom entity
     * recognition model, Amazon Comprehend uses the language of your custom model, and
     * it ignores any language code that you specify here.</p>
     */
    inline DetectEntitiesRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p> <p>If your request includes the endpoint for a custom entity
     * recognition model, Amazon Comprehend uses the language of your custom model, and
     * it ignores any language code that you specify here.</p>
     */
    inline DetectEntitiesRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p>
     */
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p>
     */
    inline DetectEntitiesRequest& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p>
     */
    inline DetectEntitiesRequest& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of an endpoint that is associated with a custom
     * entity recognition model. Provide an endpoint if you want to detect entities by
     * using your own custom model instead of the default model that is used by Amazon
     * Comprehend.</p> <p>If you specify an endpoint, Amazon Comprehend uses the
     * language of your custom model, and it ignores any language code that you provide
     * in your request.</p>
     */
    inline DetectEntitiesRequest& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
