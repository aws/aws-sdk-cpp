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
  class DetectEntitiesV2Request : public ComprehendMedicalRequest
  {
  public:
    AWS_COMPREHENDMEDICAL_API DetectEntitiesV2Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectEntitiesV2"; }

    AWS_COMPREHENDMEDICAL_API Aws::String SerializePayload() const override;

    AWS_COMPREHENDMEDICAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A UTF-8 string containing the clinical content being examined for entities.
     * Each string must contain fewer than 20,000 bytes of characters.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>A UTF-8 string containing the clinical content being examined for entities.
     * Each string must contain fewer than 20,000 bytes of characters.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>A UTF-8 string containing the clinical content being examined for entities.
     * Each string must contain fewer than 20,000 bytes of characters.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>A UTF-8 string containing the clinical content being examined for entities.
     * Each string must contain fewer than 20,000 bytes of characters.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>A UTF-8 string containing the clinical content being examined for entities.
     * Each string must contain fewer than 20,000 bytes of characters.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>A UTF-8 string containing the clinical content being examined for entities.
     * Each string must contain fewer than 20,000 bytes of characters.</p>
     */
    inline DetectEntitiesV2Request& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>A UTF-8 string containing the clinical content being examined for entities.
     * Each string must contain fewer than 20,000 bytes of characters.</p>
     */
    inline DetectEntitiesV2Request& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>A UTF-8 string containing the clinical content being examined for entities.
     * Each string must contain fewer than 20,000 bytes of characters.</p>
     */
    inline DetectEntitiesV2Request& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
