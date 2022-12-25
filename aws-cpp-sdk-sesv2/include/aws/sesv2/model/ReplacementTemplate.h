/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object which contains <code>ReplacementTemplateData</code> to be used for
   * a specific <code>BulkEmailEntry</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ReplacementTemplate">AWS
   * API Reference</a></p>
   */
  class ReplacementTemplate
  {
  public:
    AWS_SESV2_API ReplacementTemplate();
    AWS_SESV2_API ReplacementTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ReplacementTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline const Aws::String& GetReplacementTemplateData() const{ return m_replacementTemplateData; }

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline bool ReplacementTemplateDataHasBeenSet() const { return m_replacementTemplateDataHasBeenSet; }

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline void SetReplacementTemplateData(const Aws::String& value) { m_replacementTemplateDataHasBeenSet = true; m_replacementTemplateData = value; }

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline void SetReplacementTemplateData(Aws::String&& value) { m_replacementTemplateDataHasBeenSet = true; m_replacementTemplateData = std::move(value); }

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline void SetReplacementTemplateData(const char* value) { m_replacementTemplateDataHasBeenSet = true; m_replacementTemplateData.assign(value); }

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline ReplacementTemplate& WithReplacementTemplateData(const Aws::String& value) { SetReplacementTemplateData(value); return *this;}

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline ReplacementTemplate& WithReplacementTemplateData(Aws::String&& value) { SetReplacementTemplateData(std::move(value)); return *this;}

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline ReplacementTemplate& WithReplacementTemplateData(const char* value) { SetReplacementTemplateData(value); return *this;}

  private:

    Aws::String m_replacementTemplateData;
    bool m_replacementTemplateDataHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
