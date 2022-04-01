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
  class AWS_COMPREHEND_API ContainsPiiEntitiesRequest : public ComprehendRequest
  {
  public:
    ContainsPiiEntitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ContainsPiiEntities"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Creates a new document classification request to analyze a single document in
     * real-time, returning personally identifiable information (PII) entity
     * labels.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>Creates a new document classification request to analyze a single document in
     * real-time, returning personally identifiable information (PII) entity
     * labels.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>Creates a new document classification request to analyze a single document in
     * real-time, returning personally identifiable information (PII) entity
     * labels.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>Creates a new document classification request to analyze a single document in
     * real-time, returning personally identifiable information (PII) entity
     * labels.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>Creates a new document classification request to analyze a single document in
     * real-time, returning personally identifiable information (PII) entity
     * labels.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>Creates a new document classification request to analyze a single document in
     * real-time, returning personally identifiable information (PII) entity
     * labels.</p>
     */
    inline ContainsPiiEntitiesRequest& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>Creates a new document classification request to analyze a single document in
     * real-time, returning personally identifiable information (PII) entity
     * labels.</p>
     */
    inline ContainsPiiEntitiesRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>Creates a new document classification request to analyze a single document in
     * real-time, returning personally identifiable information (PII) entity
     * labels.</p>
     */
    inline ContainsPiiEntitiesRequest& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The language of the input documents.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language of the input documents.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language of the input documents.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language of the input documents.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language of the input documents.</p>
     */
    inline ContainsPiiEntitiesRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language of the input documents.</p>
     */
    inline ContainsPiiEntitiesRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
