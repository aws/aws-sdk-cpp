/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/ComprehendMedicalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{

  /**
   */
  class InferSNOMEDCTRequest : public ComprehendMedicalRequest
  {
  public:
    AWS_COMPREHENDMEDICAL_API InferSNOMEDCTRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InferSNOMEDCT"; }

    AWS_COMPREHENDMEDICAL_API Aws::String SerializePayload() const override;

    AWS_COMPREHENDMEDICAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The input text to be analyzed using InferSNOMEDCT. The text should be a
     * string with 1 to 10000 characters. </p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p> The input text to be analyzed using InferSNOMEDCT. The text should be a
     * string with 1 to 10000 characters. </p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p> The input text to be analyzed using InferSNOMEDCT. The text should be a
     * string with 1 to 10000 characters. </p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p> The input text to be analyzed using InferSNOMEDCT. The text should be a
     * string with 1 to 10000 characters. </p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p> The input text to be analyzed using InferSNOMEDCT. The text should be a
     * string with 1 to 10000 characters. </p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p> The input text to be analyzed using InferSNOMEDCT. The text should be a
     * string with 1 to 10000 characters. </p>
     */
    inline InferSNOMEDCTRequest& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p> The input text to be analyzed using InferSNOMEDCT. The text should be a
     * string with 1 to 10000 characters. </p>
     */
    inline InferSNOMEDCTRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p> The input text to be analyzed using InferSNOMEDCT. The text should be a
     * string with 1 to 10000 characters. </p>
     */
    inline InferSNOMEDCTRequest& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
