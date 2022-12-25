/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/TerminologyDataFormat.h>
#include <utility>

namespace Aws
{
namespace Translate
{
namespace Model
{

  /**
   */
  class GetTerminologyRequest : public TranslateRequest
  {
  public:
    AWS_TRANSLATE_API GetTerminologyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTerminology"; }

    AWS_TRANSLATE_API Aws::String SerializePayload() const override;

    AWS_TRANSLATE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline GetTerminologyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline GetTerminologyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline GetTerminologyRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data format of the custom terminology being retrieved.</p> <p>If you
     * don't specify this parameter, Amazon Translate returns a file with the same
     * format as the file that was imported to create the terminology. </p> <p>If you
     * specify this parameter when you retrieve a multi-directional terminology
     * resource, you must specify the same format as the input file that was imported
     * to create it. Otherwise, Amazon Translate throws an error.</p>
     */
    inline const TerminologyDataFormat& GetTerminologyDataFormat() const{ return m_terminologyDataFormat; }

    /**
     * <p>The data format of the custom terminology being retrieved.</p> <p>If you
     * don't specify this parameter, Amazon Translate returns a file with the same
     * format as the file that was imported to create the terminology. </p> <p>If you
     * specify this parameter when you retrieve a multi-directional terminology
     * resource, you must specify the same format as the input file that was imported
     * to create it. Otherwise, Amazon Translate throws an error.</p>
     */
    inline bool TerminologyDataFormatHasBeenSet() const { return m_terminologyDataFormatHasBeenSet; }

    /**
     * <p>The data format of the custom terminology being retrieved.</p> <p>If you
     * don't specify this parameter, Amazon Translate returns a file with the same
     * format as the file that was imported to create the terminology. </p> <p>If you
     * specify this parameter when you retrieve a multi-directional terminology
     * resource, you must specify the same format as the input file that was imported
     * to create it. Otherwise, Amazon Translate throws an error.</p>
     */
    inline void SetTerminologyDataFormat(const TerminologyDataFormat& value) { m_terminologyDataFormatHasBeenSet = true; m_terminologyDataFormat = value; }

    /**
     * <p>The data format of the custom terminology being retrieved.</p> <p>If you
     * don't specify this parameter, Amazon Translate returns a file with the same
     * format as the file that was imported to create the terminology. </p> <p>If you
     * specify this parameter when you retrieve a multi-directional terminology
     * resource, you must specify the same format as the input file that was imported
     * to create it. Otherwise, Amazon Translate throws an error.</p>
     */
    inline void SetTerminologyDataFormat(TerminologyDataFormat&& value) { m_terminologyDataFormatHasBeenSet = true; m_terminologyDataFormat = std::move(value); }

    /**
     * <p>The data format of the custom terminology being retrieved.</p> <p>If you
     * don't specify this parameter, Amazon Translate returns a file with the same
     * format as the file that was imported to create the terminology. </p> <p>If you
     * specify this parameter when you retrieve a multi-directional terminology
     * resource, you must specify the same format as the input file that was imported
     * to create it. Otherwise, Amazon Translate throws an error.</p>
     */
    inline GetTerminologyRequest& WithTerminologyDataFormat(const TerminologyDataFormat& value) { SetTerminologyDataFormat(value); return *this;}

    /**
     * <p>The data format of the custom terminology being retrieved.</p> <p>If you
     * don't specify this parameter, Amazon Translate returns a file with the same
     * format as the file that was imported to create the terminology. </p> <p>If you
     * specify this parameter when you retrieve a multi-directional terminology
     * resource, you must specify the same format as the input file that was imported
     * to create it. Otherwise, Amazon Translate throws an error.</p>
     */
    inline GetTerminologyRequest& WithTerminologyDataFormat(TerminologyDataFormat&& value) { SetTerminologyDataFormat(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TerminologyDataFormat m_terminologyDataFormat;
    bool m_terminologyDataFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
